#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0,
    16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131,
    0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00334000;
    case 2u: goto L_003340C0;
    case 3u: goto L_0033411C;
    case 4u: goto L_00334124;
    case 5u: goto L_0033412C;
    case 6u: goto L_00334138;
    case 7u: goto L_00334140;
    case 8u: goto L_00334148;
    case 9u: goto L_00334154;
    case 10u: goto L_0033415C;
    case 11u: goto L_00334164;
    case 12u: goto L_00334B60;
    case 13u: goto L_00334E70;
    case 14u: goto L_00334EE8;
    case 15u: goto L_00334EF4;
    case 16u: goto L_00334F00;
    case 17u: goto L_00334F0C;
    case 18u: goto L_00335064;
    case 19u: goto L_0033519C;
    case 20u: goto L_003351A8;
    case 21u: goto L_003351B8;
    case 22u: goto L_003351F8;
    case 23u: goto L_003351FC;
    case 24u: goto L_00335240;
    case 25u: goto L_00335298;
    case 26u: goto L_0033529C;
    case 27u: goto L_003352E0;
    case 28u: goto L_0033532C;
    case 29u: goto L_00335378;
    case 30u: goto L_0033540C;
    case 31u: goto L_00335460;
    case 32u: goto L_003354F4;
    case 33u: goto L_00335544;
    case 34u: goto L_00335580;
    case 35u: goto L_00335588;
    case 36u: goto L_00335594;
    case 37u: goto L_003355A8;
    case 38u: goto L_003355C8;
    case 39u: goto L_00335600;
    case 40u: goto L_003356A4;
    case 41u: goto L_003356B4;
    case 42u: goto L_00335708;
    case 43u: goto L_00335728;
    case 44u: goto L_00335774;
    case 45u: goto L_00335794;
    case 46u: goto L_003357E8;
    case 47u: goto L_0033580C;
    case 48u: goto L_0033582C;
    case 49u: goto L_0033583C;
    case 50u: goto L_003358A0;
    case 51u: goto L_003358A8;
    case 52u: goto L_003358B0;
    case 53u: goto L_003358C4;
    case 54u: goto L_003358E8;
    case 55u: goto L_00335908;
    case 56u: goto L_00335918;
    case 57u: goto L_0033597C;
    case 58u: goto L_00335984;
    case 59u: goto L_0033598C;
    case 60u: goto L_00335AF0;
    case 61u: goto L_00335B84;
    case 62u: goto L_00335B8C;
    case 63u: goto L_00335B94;
    case 64u: goto L_00335C28;
    case 65u: goto L_00335C78;
    case 66u: goto L_00335CFC;
    case 67u: goto L_00335D90;
    case 68u: goto L_00335D98;
    case 69u: goto L_00335DA0;
    case 70u: goto L_00335E34;
    case 71u: goto L_00335E84;
    case 72u: goto L_00335F04;
    case 73u: goto L_00335F90;
    case 74u: goto L_00336050;
    case 75u: goto L_00336110;
    case 76u: goto L_0033619C;
    case 77u: goto L_003361A8;
    case 78u: goto L_003361B4;
    case 79u: goto L_00336230;
    case 80u: goto L_00336250;
    case 81u: goto L_00336260;
    case 82u: goto L_003362BC;
    case 83u: goto L_003362DC;
    case 84u: goto L_003362EC;
    case 85u: goto L_0033634C;
    case 86u: goto L_00336354;
    case 87u: goto L_0033635C;
    case 88u: goto L_003363EC;
    case 89u: goto L_00336474;
    case 90u: goto L_00336500;
    case 91u: goto L_003365C0;
    case 92u: goto L_00336680;
    case 93u: goto L_0033670C;
    case 94u: goto L_00336718;
    case 95u: goto L_00336724;
    case 96u: goto L_003367A0;
    case 97u: goto L_003367C0;
    case 98u: goto L_003367D0;
    case 99u: goto L_0033682C;
    case 100u: goto L_0033684C;
    case 101u: goto L_0033685C;
    case 102u: goto L_003368BC;
    case 103u: goto L_003368C4;
    case 104u: goto L_003368CC;
    case 105u: goto L_0033695C;
    case 106u: goto L_00336A08;
    case 107u: goto L_00336A10;
    case 108u: goto L_00336A1C;
    case 109u: goto L_00336A70;
    case 110u: goto L_00336A78;
    case 111u: goto L_00336A80;
    case 112u: goto L_00336A9C;
    case 113u: goto L_00336AC4;
    case 114u: goto L_00336B18;
    case 115u: goto L_00336B3C;
    case 116u: goto L_00336B5C;
    case 117u: goto L_00336BAC;
    case 118u: goto L_00336BB4;
    case 119u: goto L_00336BC0;
    case 120u: goto L_00336BC8;
    case 121u: goto L_00336BD4;
    case 122u: goto L_00336C28;
    case 123u: goto L_00336C30;
    case 124u: goto L_00336C38;
    case 125u: goto L_00336CF8;
    case 126u: goto L_00336D48;
    case 127u: goto L_00336D54;
    case 128u: goto L_00336D74;
    case 129u: goto L_00336DE0;
    case 130u: goto L_00336DF4;
    case 131u: goto L_00336DFC;
    case 132u: goto L_00336E08;
    case 133u: goto L_00336E10;
    case 134u: goto L_00336E1C;
    case 135u: goto L_00336E70;
    case 136u: goto L_00336E78;
    case 137u: goto L_00336E80;
    case 138u: goto L_00336EFC;
    case 139u: goto L_00336F24;
    case 140u: goto L_00336F2C;
    case 141u: goto L_00336F38;
    case 142u: goto L_00336F5C;
    case 143u: goto L_00336F64;
    case 144u: goto L_00336F70;
    case 145u: goto L_00336FBC;
    case 146u: goto L_00336FC4;
    case 147u: goto L_0033705C;
    case 148u: goto L_00337064;
    case 149u: goto L_0033706C;
    case 150u: goto L_003370CC;
    case 151u: goto L_003370F4;
    case 152u: goto L_0033718C;
    case 153u: goto L_00337194;
    case 154u: goto L_0033719C;
    case 155u: goto L_003371FC;
    case 156u: goto L_00337248;
    case 157u: goto L_003372E4;
    case 158u: goto L_00337350;
    case 159u: goto L_003373F4;
    case 160u: goto L_00337438;
    case 161u: goto L_003374E4;
    case 162u: goto L_00337584;
    case 163u: goto L_00337590;
    case 164u: goto L_0033759C;
    case 165u: goto L_00337620;
    case 166u: goto L_00337634;
    case 167u: goto L_003377C0;
    case 168u: goto L_00337834;
    case 169u: goto L_00337920;
    case 170u: goto L_00337A04;
    case 171u: goto L_00337AAC;
    case 172u: goto L_00337B48;
    case 173u: goto L_00337B94;
    case 174u: goto L_00337BA0;
    case 175u: goto L_00337BE8;
    case 176u: goto L_00337C54;
    case 177u: goto L_00337CBC;
    case 178u: goto L_00337CF8;
    case 179u: goto L_00337DC0;
    case 180u: goto L_00337E00;
    default: bad_entry(c, 0x00334000u); return;
    }
L_00334000:
    c.facc = fp::add(c.f[1], c.f[12]);
    c.f[0] = fp::sub(c.f[15], c.f[17]);
    fpu_div(c, 5u, c.f[15], c.f[0]);
    c.f[0] = fp::sub(c.f[14], c.f[12]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[9].w[0]), c.f[1]);
    c.f[3] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[9].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[9].w[0] + 8u), c.f[1]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[10].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003340C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033411Cu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0033411Cu) [[unlikely]] return; }
L_0033411C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00334124u) [[unlikely]] return; }
L_00334124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033412Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0033412Cu) [[unlikely]] return; }
L_0033412C:
    c.f[12] = ld32((c.r[22].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334138u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00334138u) [[unlikely]] return; }
L_00334138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334140u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00334140u) [[unlikely]] return; }
L_00334140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334148u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00334148u) [[unlikely]] return; }
L_00334148:
    c.f[12] = ld32((c.r[22].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334154u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00334154u) [[unlikely]] return; }
L_00334154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033415Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x0033415Cu) [[unlikely]] return; }
L_0033415C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334164u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00334164u) [[unlikely]] return; }
L_00334164:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334190; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_00334188; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003341AC; } }
L_00334188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003341AC; } }
L_00334190:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_003341A8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003341AC; } }
L_003341A8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003341AC:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.f[19] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.f[18] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[8] = fp::sub(c.f[5], c.f[19]);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[9] = fp::sub(c.f[4], c.f[18]);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[17] = fp::sub(c.f[1], c.f[3]);
    c.f[16] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[9], c.f[17]);
    c.f[10] = fp::sub(c.f[19], c.f[1]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[8], c.f[16]));
    c.f[2] = 0u;
    c.f[7] = fp::sub(c.f[18], c.f[0]);
    c.facc = fp::mul(c.f[16], c.f[10]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::sub(c.facc, fp::mul(c.f[17], c.f[7]));  if (t) { goto L_00334250; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334250; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033427C; } }
L_00334250:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);  goto L_003342D8; }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003342D4; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003342D4; } }
L_0033427C:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.facc = fp::mul(c.f[8], c.f[7]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[10]));  if (t) { goto L_003342B4; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003342D4; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003342D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003342B4:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003342D4; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003342D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003342D4:
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003342D8:
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[15] = fp::sub(c.f[7], c.f[6]);
    c.f[10] = fp::sub(c.f[19], c.f[7]);
    c.f[14] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[9], c.f[15]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[8], c.f[14]));
    c.f[2] = 0u;
    c.f[7] = fp::sub(c.f[18], c.f[3]);
    c.facc = fp::mul(c.f[14], c.f[10]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::sub(c.facc, fp::mul(c.f[15], c.f[7]));  if (t) { goto L_0033433C; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033433C; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334368; } }
L_0033433C:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  goto L_003343C4; }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003343C0; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003343C0; } }
L_00334368:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.facc = fp::mul(c.f[8], c.f[7]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[10]));  if (t) { goto L_003343A0; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003343C0; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003343C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003343A0:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003343C0; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003343C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003343C0:
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003343C4:
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[6] = 0u;
    c.f[13] = fp::sub(c.f[3], c.f[1]);
    c.f[12] = fp::sub(c.f[2], c.f[0]);
    c.facc = fp::mul(c.f[9], c.f[13]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[8], c.f[12]));
    c.f[11] = fp::sub(c.f[19], c.f[3]);
    c.f[10] = fp::sub(c.f[18], c.f[2]);
    c.facc = fp::mul(c.f[12], c.f[11]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[6]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[13], c.f[10]));  if (t) { goto L_00334414; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334414; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334440; } }
L_00334414:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);  goto L_0033449C; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334498; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334498; } }
L_00334440:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.facc = fp::mul(c.f[8], c.f[10]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[11]));  if (t) { goto L_00334478; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334498; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334478:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334498; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334498:
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0033449C:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.f[11] = ld32((c.r[4].w[0]));
    c.f[20] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.f[10] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = fp::sub(c.f[11], c.f[20]);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[21] = fp::sub(c.f[7], c.f[0]);
    c.f[7] = fp::sub(c.f[10], c.f[7]);
    c.f[22] = fp::sub(c.f[20], c.f[1]);
    c.facc = fp::mul(c.f[7], c.f[17]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[6], c.f[16]));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[16], c.f[22]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[17], c.f[21]));  if (t) { goto L_0033450C; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033450C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334538; } }
L_0033450C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);  goto L_00334594; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334590; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334590; } }
L_00334538:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.facc = fp::mul(c.f[6], c.f[21]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[22]));  if (t) { goto L_00334570; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334590; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334570:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334590; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334590:
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00334594:
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[7], c.f[15]);
    c.f[20] = 0u;
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[6], c.f[14]));
    c.f[24] = fp::sub(c.f[5], c.f[1]);
    c.f[23] = fp::sub(c.f[4], c.f[0]);
    c.facc = fp::mul(c.f[14], c.f[24]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[20]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::sub(c.facc, fp::mul(c.f[15], c.f[23]));  if (t) { goto L_003345DC; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003345DC; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334608; } }
L_003345DC:
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[20]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[21] = fp::sub(c.f[4], c.f[2]);  goto L_00334664; }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334660; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334660; } }
L_00334608:
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[20]));
    c.facc = fp::mul(c.f[6], c.f[23]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::sub(c.facc, fp::mul(c.f[7], c.f[24]));  if (t) { goto L_00334640; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334660; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334640:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334660; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334660:
    c.f[21] = fp::sub(c.f[4], c.f[2]);
    c.budget -= 1;
L_00334664:
    c.facc = fp::mul(c.f[7], c.f[13]);
    c.f[22] = fp::sub(c.f[5], c.f[3]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[6], c.f[12]));
    c.f[4] = 0u;
    c.facc = fp::mul(c.f[12], c.f[22]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[4]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = fp::sub(c.facc, fp::mul(c.f[13], c.f[21]));  if (t) { goto L_0033469C; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033469C; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003346C8; } }
L_0033469C:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);  goto L_00334724; }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334720; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334720; } }
L_003346C8:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[4]));
    c.facc = fp::mul(c.f[6], c.f[21]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = fp::sub(c.facc, fp::mul(c.f[7], c.f[22]));  if (t) { goto L_00334700; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334720; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334700:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334720; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334720:
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00334724:
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.f[21] = ld32((c.r[5].w[0]));
    c.f[20] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.f[4] = fp::sub(c.f[19], c.f[21]);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[19] = ld32((c.r[4].w[0]));
    c.f[21] = fp::sub(c.f[21], c.f[5]);
    c.f[5] = fp::sub(c.f[18], c.f[20]);
    c.f[20] = fp::sub(c.f[20], c.f[19]);
    c.facc = fp::mul(c.f[5], c.f[17]);
    c.f[19] = fp::sub(c.facc, fp::mul(c.f[4], c.f[16]));
    c.f[18] = 0u;
    c.facc = fp::mul(c.f[16], c.f[21]);
    fpu_compare(c, fp::key(c.f[19]) <= fp::key(c.f[18]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[17] = fp::sub(c.facc, fp::mul(c.f[17], c.f[20]));  if (t) { goto L_00334784; } }
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[18]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334784; } }
    fpu_compare(c, fp::key(c.f[17]) <= fp::key(c.f[19]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003347B0; } }
L_00334784:
    c.f[16] = 0u;
    fpu_compare(c, fp::key(c.f[19]) < fp::key(c.f[16]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[17] = fp::sub(c.f[10], c.f[0]);  goto L_0033480C; }
    fpu_compare(c, fp::key(c.f[17]) <= fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334808; } }
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[19]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334808; } }
L_003347B0:
    c.f[16] = 0u;
    fpu_compare(c, fp::key(c.f[19]) <= fp::key(c.f[16]));
    c.facc = fp::mul(c.f[4], c.f[20]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[17] = fp::sub(c.facc, fp::mul(c.f[5], c.f[21]));  if (t) { goto L_003347E8; } }
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334808; } }
    fpu_compare(c, fp::key(c.f[17]) <= fp::key(c.f[19]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003347E8:
    fpu_compare(c, fp::key(c.f[17]) <= fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334808; } }
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[19]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334808:
    c.f[17] = fp::sub(c.f[10], c.f[0]);
    c.budget -= 1;
L_0033480C:
    c.facc = fp::mul(c.f[5], c.f[15]);
    c.f[18] = fp::sub(c.f[11], c.f[1]);
    c.f[16] = fp::sub(c.facc, fp::mul(c.f[4], c.f[14]));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[14], c.f[18]);
    fpu_compare(c, fp::key(c.f[16]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[15], c.f[17]));  if (t) { goto L_00334844; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334844; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334870; } }
L_00334844:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[16]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[11] = fp::sub(c.f[11], c.f[3]);  goto L_003348CC; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003348C8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003348C8; } }
L_00334870:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[16]) <= fp::key(c.f[0]));
    c.facc = fp::mul(c.f[4], c.f[17]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[18]));  if (t) { goto L_003348A8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003348C8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003348C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003348A8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003348C8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003348C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_003348C8:
    c.f[11] = fp::sub(c.f[11], c.f[3]);
    c.budget -= 1;
L_003348CC:
    c.f[3] = fp::sub(c.f[10], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[13]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[4], c.f[12]));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[12], c.f[11]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[13], c.f[3]));  if (t) { goto L_00334904; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334904; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334930; } }
L_00334904:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  goto L_0033498C; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334988; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334988; } }
L_00334930:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[11]));  if (t) { goto L_00334968; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334988; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334968:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00334988; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00334988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334988:
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0033498C:
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[19] = ld32((c.r[5].w[0]));
    c.f[17] = 0u;
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.f[18] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[10] = fp::sub(c.f[19], c.f[12]);
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.f[15] = ld32((c.r[4].w[0]));
    c.f[0] = fp::sub(c.f[18], c.f[1]);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = c.f[10] ^ fp::kSign;
    c.f[16] = ld32((c.r[5].w[0]));
    c.f[11] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[1], c.f[11]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[12]));
    c.f[13] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[3], c.f[16]);
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[15]));
    c.f[14] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::sub(c.f[12], c.f[13]);
    c.f[0] = fp::sub(c.f[11], c.f[18]);
    c.f[12] = fp::sub(c.f[13], c.f[19]);
    c.f[10] = c.f[0] ^ fp::kSign;
    c.f[0] = c.f[12] ^ fp::kSign;
    c.facc = fp::mul(c.f[0], c.f[18]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[19]));
    c.facc = fp::mul(c.f[10], c.f[16]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[15]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[14], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[17]));
    c.f[0] = c.f[3] ^ fp::kSign;
    c.facc = fp::mul(c.f[0], c.f[11]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[13]));
    c.facc = fp::mul(c.f[2], c.f[16]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[15]));
    c.budget -= 46;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00334A5C; } }
    c.f[0] = fp::mul(c.f[14], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[17]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);  goto L_00334A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334A5C:
    set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00334A60:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[4].w[0]));
    c.f[3] = c.f[4] ^ fp::kSign;
    c.f[14] = c.f[8] ^ fp::kSign;
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[4] = c.f[9] ^ fp::kSign;
    c.f[8] = c.f[6] ^ fp::kSign;
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.f[11] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[4], c.f[12]);
    c.f[12] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.f[10] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[14], c.f[11]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[9], c.f[10]));
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.f[9] = fp::add(c.f[12], c.f[4]);
    c.f[6] = ld32((c.r[4].w[0]));
    c.f[4] = c.f[7] ^ fp::kSign;
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[8], c.f[6]));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.facc = fp::mul(c.f[8], c.f[11]);
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[10]));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[5] ^ fp::kSign;
    c.f[2] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[3], c.f[11]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[10]));
    c.budget -= 41;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00334B1C; } }
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00334B20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00334B20; } }
L_00334B1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00334B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[18] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[17] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::mul(c.f[18], c.f[2]);
    c.f[23] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[11] = fp::sub(c.facc, fp::mul(c.f[3], c.f[17]));
    c.f[20] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.facc = fp::mul(c.f[0], c.f[23]);
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.f[10] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[12] = ld32((c.r[4].w[0] + 20u));
    c.facc = fp::mul(c.f[13], c.f[2]);
    c.f[15] = ld32((c.r[4].w[0] + 56u));
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[3], c.f[12]));
    c.f[14] = ld32((c.r[4].w[0] + 40u));
    c.facc = fp::mul(c.f[0], c.f[15]);
    c.f[21] = ld32((c.r[4].w[0] + 60u));
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[14], c.f[1]));
    c.facc = fp::mul(c.f[13], c.f[17]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[18], c.f[12]));
    c.f[22] = ld32((c.r[4].w[0] + 44u));
    c.facc = fp::mul(c.f[0], c.f[21]);
    c.f[16] = ld32((c.r[4].w[0]));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[19] = ld32((c.r[4].w[0] + 16u));
    c.facc = fp::mul(c.f[16], c.f[2]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[3], c.f[19]));
    c.facc = fp::mul(c.f[20], c.f[15]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[14], c.f[23]));
    c.facc = fp::mul(c.f[16], c.f[17]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[18], c.f[19]));
    c.facc = fp::mul(c.f[20], c.f[21]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[22], c.f[23]));
    c.facc = fp::mul(c.f[16], c.f[12]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[13], c.f[19]));
    c.facc = fp::mul(c.f[14], c.f[21]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[22], c.f[15]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[9], c.f[8]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[11], c.f[10]));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[12], c.f[14]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[17], c.f[20]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 24u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[1]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[1]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[9] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.facc = fp::mul(c.f[2], c.f[9]);
    c.f[8] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[7] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[9]));
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[5] = ld32((c.r[4].w[0] + 24u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 48u), c.f[1]);
    c.f[9] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.facc = fp::mul(c.f[2], c.f[9]);
    c.f[8] = ld32((c.r[4].w[0] + 8u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[7] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[9]));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[5] = ld32((c.r[4].w[0] + 40u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 52u), c.f[1]);
    c.f[9] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.facc = fp::mul(c.f[2], c.f[9]);
    c.f[8] = ld32((c.r[4].w[0] + 8u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[7] = ld32((c.r[4].w[0] + 24u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[9]));
    c.f[3] = ld32((c.r[4].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[5] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 56u), c.f[0]);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 193;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334E70:
    set32(c.r[29], c.r[29].w[0] - 2224u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[26]);
    st32((c.r[29].w[0] + 780u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[25]);
    st32((c.r[29].w[0] + 32u), c.f[24]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334EE8u); st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x00334EE8u) [[unlikely]] return; }
L_00334EE8:
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334EF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x00334EF4u) [[unlikely]] return; }
L_00334EF4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x00334F00u) [[unlikely]] return; }
L_00334F00:
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334F0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x00334F0Cu) [[unlikely]] return; }
L_00334F0C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27356u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21568u);  if (t) { goto L_00334F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 22696u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22700u), 0u);
    st32((c.r[2].w[0] + 22688u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 22692u), c.r[3].w[0]);
    c.budget -= 10;
L_00334F48:
    set32(c.r[6], ld32((c.r[20].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 22696u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22688u);
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[6], c.r[29].w[0] + 2048u);
    set32(c.r[7], c.r[29].w[0] + 1984u);
    st32((c.r[2].w[0] + 22700u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1984u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    st32((c.r[29].w[0] + 2000u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[29].w[0] + 2016u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 16u));
    st32((c.r[29].w[0] + 1988u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 20u));
    st32((c.r[29].w[0] + 2004u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 24u));
    st32((c.r[29].w[0] + 2020u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    st32((c.r[29].w[0] + 1992u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 36u));
    st32((c.r[29].w[0] + 2008u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    st32((c.r[29].w[0] + 2024u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 2032u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 2036u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 2040u), c.f[0]);
    st32((c.r[29].w[0] + 1996u), 0u);
    st32((c.r[29].w[0] + 2012u), 0u);
    st32((c.r[29].w[0] + 2028u), 0u);
    st32((c.r[29].w[0] + 2044u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 2048u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[29].w[0] + 2064u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 2080u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[29].w[0] + 2052u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[29].w[0] + 2068u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[29].w[0] + 2084u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    st32((c.r[29].w[0] + 2056u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[29].w[0] + 2072u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[29].w[0] + 2088u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 2096u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 2100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 2104u), c.f[0]);
    st32((c.r[29].w[0] + 2108u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 2060u), 0u);
    st32((c.r[29].w[0] + 2076u), 0u);
    c.budget -= 71;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335064u); st32((c.r[29].w[0] + 2092u), 0u);  if (depth < kMaxDepth) unit_0098(c, 32u, depth + 1u); else { c.pc = 0x003607D0u; return; } if (c.pc != 0x00335064u) [[unlikely]] return; }
L_00335064:
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 1920u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[29].w[0] + 1936u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 1952u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 1968u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[29].w[0] + 1924u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[29].w[0] + 1940u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[29].w[0] + 1956u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1972u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    st32((c.r[29].w[0] + 1928u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[29].w[0] + 1944u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[29].w[0] + 1960u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1976u), c.f[0]);
    st32((c.r[29].w[0] + 1932u), 0u);
    st32((c.r[29].w[0] + 1948u), 0u);
    st32((c.r[29].w[0] + 1964u), 0u);
    st32((c.r[29].w[0] + 1980u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    st32((c.r[29].w[0] + 1872u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[29].w[0] + 1888u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 1904u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 16u));
    st32((c.r[29].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 20u));
    st32((c.r[29].w[0] + 1876u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 24u));
    st32((c.r[29].w[0] + 1892u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1908u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    st32((c.r[29].w[0] + 1864u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 36u));
    st32((c.r[29].w[0] + 1880u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    st32((c.r[29].w[0] + 1896u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1912u), c.f[0]);
    st32((c.r[29].w[0] + 1916u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1868u), 0u);
    st32((c.r[29].w[0] + 1884u), 0u);
    c.budget -= 61;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 1900u), 0u);  if (t) { goto L_003375C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003375CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] >> 1);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);  if (t) { goto L_003375C8; } }
    c.f[20] = ld32((c.r[28].w[0] - 31952u));
    set32(c.r[4], c.r[29].w[0] + 1920u);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    st32((c.r[29].w[0] + 2220u), 0u);
    st32((c.r[29].w[0] + 776u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033519Cu); st32((c.r[29].w[0] + 772u), 0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334B60u; return; } if (c.pc != 0x0033519Cu) [[unlikely]] return; }
L_0033519C:
    set32(c.r[4], c.r[29].w[0] + 1856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351A8u); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334B60u; return; } if (c.pc != 0x003351A8u) [[unlikely]] return; }
L_003351A8:
    c.r[2].d[0] = c.r[23].d[0] & 65535ull;
    st32((c.r[29].w[0] + 752u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);  if (t) { goto L_003375AC; } }
L_003351B8:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 752u)));  goto L_003375A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 752u)));
    set32(c.r[5], c.r[29].w[0] + 2136u);
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[4], c.r[2].w[0] << 3);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351F8u); set32(c.r[4], c.r[3].w[0] + 20u);  if (depth < kMaxDepth) unit_008A(c, 177u, depth + 1u); else { c.pc = 0x0032B5F0u; return; } if (c.pc != 0x003351F8u) [[unlikely]] return; }
L_003351F8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003351FC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2136u)));
    set32(c.r[16], c.r[2].w[0] + 1808u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 800u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 800u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 804u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 808u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335240u); st32((c.r[29].w[0] + 812u), 0u);  if (depth < kMaxDepth) unit_008A(c, 176u, depth + 1u); else { c.pc = 0x0032B570u; return; } if (c.pc != 0x00335240u) [[unlikely]] return; }
L_00335240:
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003351FCu | kUnwind; return; } goto L_003351FC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 2120u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335298u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_008A(c, 177u, depth + 1u); else { c.pc = 0x0032B5F0u; return; } if (c.pc != 0x00335298u) [[unlikely]] return; }
L_00335298:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033529C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2120u)));
    set32(c.r[16], c.r[2].w[0] + 1760u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 784u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 784u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 788u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 792u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003352E0u); st32((c.r[29].w[0] + 796u), 0u);  if (depth < kMaxDepth) unit_008A(c, 176u, depth + 1u); else { c.pc = 0x0032B570u; return; } if (c.pc != 0x003352E0u) [[unlikely]] return; }
L_003352E0:
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033529Cu | kUnwind; return; } goto L_0033529C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0033532C:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 1820u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1772u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033532Cu | kUnwind; return; } goto L_0033532C; } }
    st32((c.r[29].w[0] + 2216u), 0u);
    set32(c.r[2], c.r[29].w[0] + 2152u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[29].w[0] + 1808u);
    set32(c.r[5], c.r[29].w[0] + 1824u);
    set32(c.r[6], c.r[29].w[0] + 1840u);
    set32(c.r[7], c.r[29].w[0] + 1760u);
    set32(c.r[8], c.r[29].w[0] + 1776u);
    set32(c.r[9], c.r[29].w[0] + 1792u);
    set32(c.r[10], c.r[29].w[0] + 2216u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335378u); set32(c.r[11], c.r[29].w[0] + 2168u);  if (depth < kMaxDepth) unit_008C(c, 94u, depth + 1u); else { c.pc = 0x00333610u; return; } if (c.pc != 0x00335378u) [[unlikely]] return; }
L_00335378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 776u)));  goto L_00337588; }
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);  goto L_00335414; }
    c.f[3] = ld32((c.r[29].w[0] + 1808u));
    set32(c.r[4], c.r[29].w[0] + 1680u);
    c.f[1] = ld32((c.r[29].w[0] + 1824u));
    c.f[2] = ld32((c.r[29].w[0] + 1840u));
    c.f[7] = ld32((c.r[29].w[0] + 1812u));
    c.f[8] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 1828u));
    c.f[3] = fp::sub(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.f[0], c.f[7]);
    c.f[1] = ld32((c.r[29].w[0] + 1844u));
    c.f[5] = ld32((c.r[29].w[0] + 1816u));
    c.f[4] = ld32((c.r[29].w[0] + 1832u));
    c.f[2] = fp::sub(c.f[1], c.f[7]);
    c.f[0] = ld32((c.r[29].w[0] + 1848u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[1] = fp::sub(c.f[0], c.f[5]);
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[29].w[0] + 1680u), c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[1]));
    c.facc = fp::mul(c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 1684u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 1728u), c.f[8]);
    st32((c.r[29].w[0] + 1732u), c.f[6]);
    st32((c.r[29].w[0] + 1712u), c.f[3]);
    st32((c.r[29].w[0] + 1716u), c.f[2]);
    st32((c.r[29].w[0] + 1736u), c.f[4]);
    st32((c.r[29].w[0] + 1720u), c.f[1]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033540Cu); st32((c.r[29].w[0] + 1688u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0033540Cu) [[unlikely]] return; }
L_0033540C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);  if (t) { goto L_0033546C; } }
L_00335414:
    set32(c.r[7], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 1680u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 1728u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 1728u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1732u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1736u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335460u); st32((c.r[29].w[0] + 1740u), 0u);  if (depth < kMaxDepth) unit_008E(c, 94u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x00335460u) [[unlikely]] return; }
L_00335460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 1692u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.budget -= 3;
L_0033546C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  goto L_003354FC; }
    c.f[3] = ld32((c.r[29].w[0] + 1760u));
    set32(c.r[4], c.r[29].w[0] + 1664u);
    c.f[1] = ld32((c.r[29].w[0] + 1776u));
    c.f[2] = ld32((c.r[29].w[0] + 1792u));
    c.f[7] = ld32((c.r[29].w[0] + 1764u));
    c.f[8] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 1780u));
    c.f[3] = fp::sub(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.f[0], c.f[7]);
    c.f[1] = ld32((c.r[29].w[0] + 1796u));
    c.f[5] = ld32((c.r[29].w[0] + 1768u));
    c.f[4] = ld32((c.r[29].w[0] + 1784u));
    c.f[2] = fp::sub(c.f[1], c.f[7]);
    c.f[0] = ld32((c.r[29].w[0] + 1800u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[1] = fp::sub(c.f[0], c.f[5]);
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[29].w[0] + 1664u), c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[1]));
    c.facc = fp::mul(c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 1668u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 1728u), c.f[8]);
    st32((c.r[29].w[0] + 1732u), c.f[6]);
    st32((c.r[29].w[0] + 1712u), c.f[3]);
    st32((c.r[29].w[0] + 1716u), c.f[2]);
    st32((c.r[29].w[0] + 1736u), c.f[4]);
    st32((c.r[29].w[0] + 1720u), c.f[1]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003354F4u); st32((c.r[29].w[0] + 1672u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x003354F4u) [[unlikely]] return; }
L_003354F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 2216u)));  if (t) { goto L_00335550; } }
L_003354FC:
    set32(c.r[7], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1664u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 1712u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 1712u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 1716u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 1720u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335544u); st32((c.r[29].w[0] + 1724u), 0u);  if (depth < kMaxDepth) unit_008E(c, 94u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x00335544u) [[unlikely]] return; }
L_00335544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 1676u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 2216u)));
    c.budget -= 3;
L_00335550:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_003356AC; }
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    c.f[0] = ld32((c.r[29].w[0] + 1668u));
    c.f[3] = ld32((c.r[29].w[0] + 1680u));
    c.f[2] = ld32((c.r[29].w[0] + 1664u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 1688u));
    c.f[4] = ld32((c.r[29].w[0] + 1672u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335580u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00335580u) [[unlikely]] return; }
L_00335580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335588u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00335588u) [[unlikely]] return; }
L_00335588:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335594u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x00335594u) [[unlikely]] return; }
L_00335594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337584; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
L_003355A8:
    set32(c.r[2], c.r[8].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 1024u);
    set32(c.r[5], c.r[2].w[0] + 1760u);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[4], c.r[2].w[0] + 1808u);
    c.f[3] = ld32((c.r[6].w[0]));
    c.budget -= 8;
L_003355C8:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.f[3] = fp::add(c.f[3], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003355C8u | kUnwind; return; } goto L_003355C8; } }
    st32((c.r[6].w[0]), c.f[3]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
L_00335600:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003355A8u | kUnwind; return; } goto L_003355A8; } }
    c.f[2] = ld32((c.r[29].w[0] + 1832u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 1784u));
    st32((c.r[29].w[0] + 1036u), c.r[2].w[0]);
    c.f[7] = ld32((c.r[29].w[0] + 1668u));
    c.f[8] = ld32((c.r[29].w[0] + 1664u));
    c.f[5] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 1828u));
    c.f[1] = ld32((c.r[29].w[0] + 1780u));
    c.f[4] = ld32((c.r[29].w[0] + 1824u));
    c.f[3] = ld32((c.r[29].w[0] + 1776u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 1672u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.f[0] = 0u;
    c.f[12] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 1648u), c.f[8]);
    st32((c.r[29].w[0] + 1652u), c.f[7]);
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 1656u), c.f[6]);  if (t) { goto L_00335680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 4;
L_00335680:
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 1024u);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003356A4u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003356A4u) [[unlikely]] return; }
L_003356A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00337584; } }
L_003356AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_003356B4:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[3].w[0] + 2168u));
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 2152u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1744u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003356B4u | kUnwind; return; } goto L_003356B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    st32((c.r[29].w[0] + 1756u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    set32(c.r[6], c.r[29].w[0] + 1744u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335708u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00335708u) [[unlikely]] return; }
L_00335708:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335728u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00335728u) [[unlikely]] return; }
L_00335728:
    c.f[1] = ld32((c.r[29].w[0] + 1744u));
    set32(c.r[7], 0u + 4u);
    c.f[0] = ld32((c.r[29].w[0] + 1600u));
    set32(c.r[4], c.r[29].w[0] + 1616u);
    c.f[3] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[5], c.r[29].w[0] + 1040u);
    c.f[2] = ld32((c.r[29].w[0] + 1604u));
    set32(c.r[6], c.r[29].w[0] + 1744u);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 1752u));
    c.f[0] = ld32((c.r[29].w[0] + 1608u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1568u), c.f[4]);
    st32((c.r[29].w[0] + 1572u), c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335774u); st32((c.r[29].w[0] + 1576u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00335774u) [[unlikely]] return; }
L_00335774:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1584u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335794u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00335794u) [[unlikely]] return; }
L_00335794:
    c.f[2] = ld32((c.r[29].w[0] + 1744u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1584u));
    c.f[5] = ld32((c.r[29].w[0] + 1748u));
    c.f[0] = ld32((c.r[29].w[0] + 1588u));
    c.f[6] = fp::sub(c.f[2], c.f[1]);
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1568u));
    c.f[1] = ld32((c.r[29].w[0] + 1572u));
    c.f[26] = 0u;
    c.f[4] = ld32((c.r[29].w[0] + 1752u));
    c.f[3] = ld32((c.r[29].w[0] + 1592u));
    c.f[0] = ld32((c.r[29].w[0] + 1576u));
    c.f[24] = fp::sub(c.f[2], c.f[6]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[23] = fp::sub(c.f[1], c.f[5]);
    c.f[22] = fp::sub(c.f[0], c.f[3]);
    c.f[25] = c.f[26];
    st32((c.r[29].w[0] + 1552u), c.f[6]);
    st32((c.r[29].w[0] + 1556u), c.f[5]);
    st32((c.r[29].w[0] + 1560u), c.f[3]);
    c.budget -= 21;
L_003357E8:
    set32(c.r[17], c.r[16].w[0] << 4);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    set32(c.r[6], c.r[2].w[0] + 1808u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033580Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x0033580Cu) [[unlikely]] return; }
L_0033580C:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033582Cu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x0033582Cu) [[unlikely]] return; }
L_0033582C:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + 1808u);
    set32(c.r[7], c.r[2].w[0] + 1504u);
    c.budget -= 4;
L_0033583C:
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 1600u));
    c.f[0] = ld32((c.r[2].w[0] + 1552u));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033583Cu | kUnwind; return; } goto L_0033583C; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1504u);
    c.f[0] = ld32((c.r[29].w[0] + 1668u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 1664u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 1672u));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003358A0u) [[unlikely]] return; }
L_003358A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003358A8u) [[unlikely]] return; }
L_003358A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x003358B0u) [[unlikely]] return; }
L_003358B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[26] = fp::add(c.f[26], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003357E8u | kUnwind; return; } goto L_003357E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003358C4:
    set32(c.r[17], c.r[16].w[0] << 4);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1040u);
    set32(c.r[6], c.r[2].w[0] + 1760u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358E8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x003358E8u) [[unlikely]] return; }
L_003358E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1584u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335908u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00335908u) [[unlikely]] return; }
L_00335908:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + 1760u);
    set32(c.r[7], c.r[2].w[0] + 1456u);
    c.budget -= 4;
L_00335918:
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 1584u));
    c.f[0] = ld32((c.r[2].w[0] + 1568u));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335918u | kUnwind; return; } goto L_00335918; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1456u);
    c.f[0] = ld32((c.r[29].w[0] + 1684u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 1688u));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033597Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0033597Cu) [[unlikely]] return; }
L_0033597C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335984u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00335984u) [[unlikely]] return; }
L_00335984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033598Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0033598Cu) [[unlikely]] return; }
L_0033598C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[25] = fp::add(c.f[25], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003358C4u | kUnwind; return; } goto L_003358C4; } }
    c.f[3] = ld32((c.r[29].w[0] + 1664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[18], 0u + 1u);
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 1672u));
    c.f[0] = ld32((c.r[28].w[0] - 32240u));
    c.f[8] = fp::mul(c.f[3], c.f[4]);
    c.f[7] = fp::mul(c.f[2], c.f[4]);
    c.f[6] = fp::mul(c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 1664u), c.f[8]);
    st32((c.r[29].w[0] + 1668u), c.f[7]);
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 1672u), c.f[6]);  if (t) { goto L_003359E8; } }
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 1556u));  goto L_00335A48; }
L_003359E8:
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[26]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_00335A20; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1808u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00335AE8; } }
L_00335A20:
    set32(c.r[2], c.r[29].w[0] + 1504u);
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[17], c.r[29].w[0] + 1808u);
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00335AE8; } }
L_00335A48:
    c.f[4] = ld32((c.r[29].w[0] + 1552u));
    c.f[5] = ld32((c.r[29].w[0] + 1560u));
    c.f[3] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1572u));
    c.facc = fp::add(c.f[21], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[21], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[1] = ld32((c.r[29].w[0] + 1568u));
    c.facc = fp::add(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1576u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.facc = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::sqrt(c.f[3]);
    c.f[0] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 23;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[29].w[0] + 1504u);  goto L_00335AD0; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1808u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00335AE8; } }
L_00335AD0:
    set32(c.r[17], c.r[29].w[0] + 1808u);
    st32((c.r[29].w[0] + 1648u), c.f[8]);
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1652u), c.f[7]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1656u), c.f[6]);
    c.budget -= 6;
L_00335AE8:
    st32((c.r[29].w[0] + 720u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.budget -= 2;
L_00335AF0:
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    set32(c.r[3], ld32((c.r[29].w[0] + 736u)));
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[7] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[25] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[6]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 592u), c.r[2].w[0]);  if (t) { goto L_00335C40; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335B84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00335B84u) [[unlikely]] return; }
L_00335B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00335B8Cu) [[unlikely]] return; }
L_00335B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335B94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00335B94u) [[unlikely]] return; }
L_00335B94:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[25]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[28].w[0] - 31952u));  goto L_00335BC4; }
    c.f[25] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[25] = c.f[0];  goto L_00335BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335BC0; } }
L_00335BC0:
    c.f[1] = ld32((c.r[28].w[0] - 31952u));
    c.budget -= 1;
L_00335BC4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335BE4; } }
    c.f[1] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335BE4; } }
    c.f[25] = c.f[0];
    c.budget -= 1;
L_00335BE4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00335C44; }
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335C40; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[5], c.r[29].w[0] + 1648u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[8], c.r[16].w[0] + 32u);
    set32(c.r[9], c.r[29].w[0] + 2200u);
    set32(c.r[10], c.r[29].w[0] + 2196u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C28u); set32(c.r[11], c.r[29].w[0] + 2192u);  if (depth < kMaxDepth) unit_008C(c, 81u, depth + 1u); else { c.pc = 0x00332E40u; return; } if (c.pc != 0x00335C28u) [[unlikely]] return; }
L_00335C28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335C40; } }
    c.f[21] = c.f[25];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00335C44; } }
L_00335C40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335C44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 720u)));  goto L_00335C80; }
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.f[12] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335C78u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00335C78u) [[unlikely]] return; }
L_00335C78:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.budget -= 2;
L_00335C80:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 720u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00335AF0u | kUnwind; return; } goto L_00335AF0; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00335EA0; } }
    set32(c.r[16], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_00335CD0; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00335CF4; } }
L_00335CD0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[2], c.r[29].w[0] + 1504u);
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 9;
L_00335CF4:
    st32((c.r[29].w[0] + 704u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 704u)));
    c.budget -= 2;
L_00335CFC:
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    set32(c.r[3], ld32((c.r[29].w[0] + 736u)));
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[7] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[25] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[6]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00335E4C; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335D90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00335D90u) [[unlikely]] return; }
L_00335D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335D98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00335D98u) [[unlikely]] return; }
L_00335D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335DA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00335DA0u) [[unlikely]] return; }
L_00335DA0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[25]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[28].w[0] - 31952u));  goto L_00335DD0; }
    c.f[25] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[25] = c.f[0];  goto L_00335DCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335DCC; } }
L_00335DCC:
    c.f[1] = ld32((c.r[28].w[0] - 31952u));
    c.budget -= 1;
L_00335DD0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335DF0; } }
    c.f[1] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335DF0; } }
    c.f[25] = c.f[0];
    c.budget -= 1;
L_00335DF0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00335E50; }
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335E4C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[5], c.r[29].w[0] + 1648u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[8], c.r[16].w[0] + 32u);
    set32(c.r[9], c.r[29].w[0] + 2188u);
    set32(c.r[10], c.r[29].w[0] + 2184u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335E34u); set32(c.r[11], c.r[29].w[0] + 2180u);  if (depth < kMaxDepth) unit_008C(c, 81u, depth + 1u); else { c.pc = 0x00332E40u; return; } if (c.pc != 0x00335E34u) [[unlikely]] return; }
L_00335E34:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335E4C; } }
    c.f[21] = c.f[25];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00335E50; } }
L_00335E4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335E50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 704u)));  goto L_00335E8C; }
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.f[12] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335E84u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00335E84u) [[unlikely]] return; }
L_00335E84:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 704u)));
    c.budget -= 2;
L_00335E8C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 704u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 704u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00335CFCu | kUnwind; return; } goto L_00335CFC; }
L_00335EA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00336410; } }
    set32(c.r[16], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_00335EDC; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00335F00; } }
L_00335EDC:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[2], c.r[29].w[0] + 1504u);
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 9;
L_00335F00:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335F04:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 1728u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 1712u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1696u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335F04u | kUnwind; return; } goto L_00335F04; } }
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.f[3] = ld32((c.r[29].w[0] + 1732u));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1736u));
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 1648u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 1728u));
    st32((c.r[29].w[0] + 960u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 964u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335F90u); st32((c.r[29].w[0] + 968u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00335F90u) [[unlikely]] return; }
L_00335F90:
    c.f[2] = ld32((c.r[29].w[0] + 960u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 964u));
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.f[7] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[7], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = fp::mul(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 968u));
    st32((c.r[29].w[0] + 976u), c.f[13]);
    st32((c.r[29].w[0] + 980u), c.f[12]);
    c.f[11] = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 984u), c.f[11]);
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[10] = ld32((c.r[16].w[0]));
    c.f[9] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[8] = c.r[2].w[0];
    c.f[9] = fp::add(c.f[10], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::mul(c.f[0], c.f[12]);
    c.f[7] = fp::mul(c.f[9], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[13]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.f[3] = ld32((c.r[29].w[0] + 1716u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1720u));
    c.f[1] = ld32((c.r[29].w[0] + 1648u));
    c.f[2] = ld32((c.r[29].w[0] + 1712u));
    st32((c.r[29].w[0] + 988u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[29].w[0] + 960u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 964u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336050u); st32((c.r[29].w[0] + 968u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336050u) [[unlikely]] return; }
L_00336050:
    c.f[2] = ld32((c.r[29].w[0] + 960u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 964u));
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.f[7] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[7], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = fp::mul(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 968u));
    st32((c.r[29].w[0] + 992u), c.f[13]);
    st32((c.r[29].w[0] + 996u), c.f[12]);
    c.f[11] = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 1000u), c.f[11]);
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[10] = ld32((c.r[16].w[0]));
    c.f[9] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[8] = c.r[2].w[0];
    c.f[9] = fp::add(c.f[10], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::mul(c.f[0], c.f[12]);
    c.f[7] = fp::mul(c.f[9], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[13]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.f[3] = ld32((c.r[29].w[0] + 1700u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1704u));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.f[1] = ld32((c.r[29].w[0] + 1696u));
    st32((c.r[29].w[0] + 1004u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[29].w[0] + 960u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 964u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336110u); st32((c.r[29].w[0] + 968u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336110u) [[unlikely]] return; }
L_00336110:
    c.f[2] = ld32((c.r[29].w[0] + 960u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 964u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 976u);
    c.f[0] = ld32((c.r[29].w[0] + 968u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[7] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[29].w[0] + 1312u);
    c.f[6] = fp::mul(c.f[3], c.f[1]);
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 1008u), c.f[7]);
    st32((c.r[29].w[0] + 1012u), c.f[6]);
    st32((c.r[29].w[0] + 1016u), c.f[5]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033619Cu); st32((c.r[29].w[0] + 1020u), c.f[0]);  if (depth < kMaxDepth) unit_008C(c, 90u, depth + 1u); else { c.pc = 0x00333560u; return; } if (c.pc != 0x0033619Cu) [[unlikely]] return; }
L_0033619C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003361A8u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 19u, depth + 1u); else { c.pc = 0x00100270u; return; } if (c.pc != 0x003361A8u) [[unlikely]] return; }
L_003361A8:
    st32((c.r[29].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 688u), 0u);  if (t) { goto L_003363FC; } }
L_003361B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1312u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 1808u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[7] = fp::sub(c.f[0], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.budget -= 24;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.f[21] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));  if (t) { goto L_003362A0; } }
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336230u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00336230u) [[unlikely]] return; }
L_00336230:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336250u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x00336250u) [[unlikely]] return; }
L_00336250:
    set32(c.r[3], ld32((c.r[29].w[0] + 776u)));
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00336260:
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 1600u));
    c.f[0] = ld32((c.r[3].w[0] + 1552u));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336260u | kUnwind; return; } goto L_00336260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_00336328; } }
L_003362A0:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1040u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003362BCu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x003362BCu) [[unlikely]] return; }
L_003362BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1584u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003362DCu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x003362DCu) [[unlikely]] return; }
L_003362DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 776u)));
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003362EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 1584u));
    c.f[0] = ld32((c.r[3].w[0] + 1568u));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003362ECu | kUnwind; return; } goto L_003362EC; } }
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00336328:
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033634Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0033634Cu) [[unlikely]] return; }
L_0033634C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336354u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336354u) [[unlikely]] return; }
L_00336354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033635Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0033635Cu) [[unlikely]] return; }
L_0033635C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_003363F0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 31952u));  goto L_00336398; }
    c.f[21] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[21] = c.f[0];  goto L_00336394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336394; } }
L_00336394:
    c.f[0] = ld32((c.r[28].w[0] - 31952u));
    c.budget -= 1;
L_00336398:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003363B8; } }
    c.f[0] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003363B8; } }
    c.f[21] = c.f[20];
    c.budget -= 1;
L_003363B8:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[29].w[0] + 688u)));  goto L_003363F4; }
    set32(c.r[9], ld32((c.r[29].w[0] + 544u)));
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363ECu); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003363ECu) [[unlikely]] return; }
L_003363EC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003363F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.budget -= 1;
L_003363F4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 688u), c.r[2].w[0]);
    c.budget -= 2;
L_003363FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 1440u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 688u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003361B4u | kUnwind; return; } goto L_003361B4; }
L_00336410:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00336980; } }
    set32(c.r[16], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_0033644C; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00336470; } }
L_0033644C:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[2], c.r[29].w[0] + 1504u);
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 9;
L_00336470:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336474:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 1728u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 1712u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1696u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336474u | kUnwind; return; } goto L_00336474; } }
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.f[3] = ld32((c.r[29].w[0] + 1732u));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1736u));
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 1648u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 1728u));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336500u); st32((c.r[29].w[0] + 904u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336500u) [[unlikely]] return; }
L_00336500:
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.f[7] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[7], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = fp::mul(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    st32((c.r[29].w[0] + 912u), c.f[13]);
    st32((c.r[29].w[0] + 916u), c.f[12]);
    c.f[11] = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 920u), c.f[11]);
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[10] = ld32((c.r[16].w[0]));
    c.f[9] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[8] = c.r[2].w[0];
    c.f[9] = fp::add(c.f[10], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::mul(c.f[0], c.f[12]);
    c.f[7] = fp::mul(c.f[9], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[13]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.f[3] = ld32((c.r[29].w[0] + 1716u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1720u));
    c.f[1] = ld32((c.r[29].w[0] + 1648u));
    c.f[2] = ld32((c.r[29].w[0] + 1712u));
    st32((c.r[29].w[0] + 924u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003365C0u); st32((c.r[29].w[0] + 904u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x003365C0u) [[unlikely]] return; }
L_003365C0:
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.f[7] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[7], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = fp::mul(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    st32((c.r[29].w[0] + 928u), c.f[13]);
    st32((c.r[29].w[0] + 932u), c.f[12]);
    c.f[11] = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 936u), c.f[11]);
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[10] = ld32((c.r[16].w[0]));
    c.f[9] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[8] = c.r[2].w[0];
    c.f[9] = fp::add(c.f[10], c.f[9]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::mul(c.f[0], c.f[12]);
    c.f[7] = fp::mul(c.f[9], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[13]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.f[3] = ld32((c.r[29].w[0] + 1700u));
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.f[6] = ld32((c.r[29].w[0] + 1652u));
    c.f[5] = ld32((c.r[29].w[0] + 1704u));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.f[1] = ld32((c.r[29].w[0] + 1696u));
    st32((c.r[29].w[0] + 940u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336680u); st32((c.r[29].w[0] + 904u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336680u) [[unlikely]] return; }
L_00336680:
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[7] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[29].w[0] + 1168u);
    c.f[6] = fp::mul(c.f[3], c.f[1]);
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 944u), c.f[7]);
    st32((c.r[29].w[0] + 948u), c.f[6]);
    st32((c.r[29].w[0] + 952u), c.f[5]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033670Cu); st32((c.r[29].w[0] + 956u), c.f[0]);  if (depth < kMaxDepth) unit_008C(c, 90u, depth + 1u); else { c.pc = 0x00333560u; return; } if (c.pc != 0x0033670Cu) [[unlikely]] return; }
L_0033670C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336718u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 19u, depth + 1u); else { c.pc = 0x00100270u; return; } if (c.pc != 0x00336718u) [[unlikely]] return; }
L_00336718:
    st32((c.r[29].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 672u), 0u);  if (t) { goto L_0033696C; } }
L_00336724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 1808u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[7] = fp::sub(c.f[0], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.budget -= 24;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.f[21] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));  if (t) { goto L_00336810; } }
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1104u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003367A0u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x003367A0u) [[unlikely]] return; }
L_003367A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1600u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003367C0u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x003367C0u) [[unlikely]] return; }
L_003367C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 772u)));
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003367D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 1600u));
    c.f[0] = ld32((c.r[3].w[0] + 1552u));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003367D0u | kUnwind; return; } goto L_003367D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_00336898; } }
L_00336810:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1040u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033682Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x0033682Cu) [[unlikely]] return; }
L_0033682C:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 1584u);
    set32(c.r[6], c.r[29].w[0] + 1616u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033684Cu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 90u, depth + 1u); else { c.pc = 0x00339E10u; return; } if (c.pc != 0x0033684Cu) [[unlikely]] return; }
L_0033684C:
    set32(c.r[3], ld32((c.r[29].w[0] + 772u)));
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0033685C:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 1584u));
    c.f[0] = ld32((c.r[3].w[0] + 1568u));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033685Cu | kUnwind; return; } goto L_0033685C; } }
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00336898:
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003368BCu) [[unlikely]] return; }
L_003368BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003368C4u) [[unlikely]] return; }
L_003368C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x003368CCu) [[unlikely]] return; }
L_003368CC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_00336960; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 31952u));  goto L_00336908; }
    c.f[21] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[21] = c.f[0];  goto L_00336904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336904; } }
L_00336904:
    c.f[0] = ld32((c.r[28].w[0] - 31952u));
    c.budget -= 1;
L_00336908:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336928; } }
    c.f[0] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336928; } }
    c.f[21] = c.f[20];
    c.budget -= 1;
L_00336928:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[29].w[0] + 672u)));  goto L_00336964; }
    set32(c.r[9], ld32((c.r[29].w[0] + 528u)));
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033695Cu); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x0033695Cu) [[unlikely]] return; }
L_0033695C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336960:
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.budget -= 1;
L_00336964:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    c.budget -= 2;
L_0033696C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 672u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336724u | kUnwind; return; } goto L_00336724; }
L_00336980:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00336CFC; } }
    set32(c.r[16], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_003369BC; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1456u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    set32(c.r[17], c.r[29].w[0] + 1760u);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_003369E0; } }
L_003369BC:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    set32(c.r[2], c.r[29].w[0] + 1504u);
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 1760u);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 9;
L_003369E0:
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    c.f[0] = ld32((c.r[29].w[0] + 1668u));
    c.f[3] = ld32((c.r[29].w[0] + 1680u));
    c.f[2] = ld32((c.r[29].w[0] + 1664u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 1688u));
    c.f[4] = ld32((c.r[29].w[0] + 1672u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A08u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336A08u) [[unlikely]] return; }
L_00336A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336A10u) [[unlikely]] return; }
L_00336A10:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00336A1Cu) [[unlikely]] return; }
L_00336A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336CFC; } }
    c.facc = fp::mul(c.f[23], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[7] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32240u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 1672u));  goto L_00336ACC; }
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[1] = ld32((c.r[29].w[0] + 1648u));
    c.f[2] = ld32((c.r[29].w[0] + 1656u));
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[24]));
    c.facc = fp::add(c.f[7], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A70u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[22]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336A70u) [[unlikely]] return; }
L_00336A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336A78u) [[unlikely]] return; }
L_00336A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00336A80u) [[unlikely]] return; }
L_00336A80:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[28].w[0] - 31948u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[18].d[0] = 0ull + 0ull;  goto L_00336CFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A9Cu); set32(c.r[4], c.r[29].w[0] + 1648u);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336A9Cu) [[unlikely]] return; }
L_00336A9C:
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 1744u);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AC4u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00336AC4u) [[unlikely]] return; }
L_00336AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00336CFC; } }
L_00336ACC:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.f[4] = ld32((c.r[29].w[0] + 1684u));
    c.f[6] = ld32((c.r[29].w[0] + 1668u));
    c.f[5] = ld32((c.r[29].w[0] + 1688u));
    c.f[0] = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 1664u));
    st32((c.r[29].w[0] + 880u), c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 1680u));
    c.f[0] = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[29].w[0] + 884u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336B18u); st32((c.r[29].w[0] + 888u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336B18u) [[unlikely]] return; }
L_00336B18:
    c.f[2] = ld32((c.r[29].w[0] + 880u));
    st32((c.r[29].w[0] + 656u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 884u));
    c.f[0] = ld32((c.r[29].w[0] + 888u));
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 9;
L_00336B3C:
    st32((c.r[29].w[0] + 640u), 0u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 8;
L_00336B5C:
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[7] = fp::sub(c.f[8], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[25] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BACu); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336BACu) [[unlikely]] return; }
L_00336BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336BB4u) [[unlikely]] return; }
L_00336BB4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BC0u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336BC0u) [[unlikely]] return; }
L_00336BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336BC8u) [[unlikely]] return; }
L_00336BC8:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00336BD4u) [[unlikely]] return; }
L_00336BD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 640u)));  goto L_00336C40; }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.f[4] = ld32((c.r[29].w[0] + 1656u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[21] = c.f[25];
    st32((c.r[29].w[0] + 864u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 868u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 872u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C28u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336C28u) [[unlikely]] return; }
L_00336C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336C30u) [[unlikely]] return; }
L_00336C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00336C38u) [[unlikely]] return; }
L_00336C38:
    c.f[20] = c.f[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 2;
L_00336C40:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336B5Cu | kUnwind; return; } goto L_00336B5C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 656u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336B3Cu | kUnwind; return; } goto L_00336B3C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336CB0; } }
    c.f[2] = ld32((c.r[29].w[0] + 1648u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 1652u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 1656u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[21] = fp::mul(c.f[21], c.f[3]);
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 12;
L_00336CB0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00336CFC; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336CFC; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 864u);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CF8u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00336CF8u) [[unlikely]] return; }
L_00336CF8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336CFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00336F00; } }
    set32(c.r[2], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 848u), c.f[24]);  goto L_00336D38; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[24]);
    st32((c.r[29].w[0] + 848u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[23]);
    st32((c.r[29].w[0] + 852u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[22]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 856u), c.f[0]);  if (t) { goto L_00336D40; } }
L_00336D38:
    st32((c.r[29].w[0] + 852u), c.f[23]);
    st32((c.r[29].w[0] + 856u), c.f[22]);
    c.budget -= 2;
L_00336D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D48u); set32(c.r[4], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336D48u) [[unlikely]] return; }
L_00336D48:
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[29].w[0] + 624u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 3;
L_00336D54:
    st32((c.r[29].w[0] + 608u), 0u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 8;
L_00336D74:
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    c.f[3] = ld32((c.r[29].w[0] + 848u));
    set32(c.r[5], c.r[29].w[0] + 848u);
    c.f[6] = ld32((c.r[29].w[0] + 856u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[16].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[9], c.r[29].w[0] + 2212u);
    c.f[5] = ld32((c.r[3].w[0]));
    set32(c.r[10], c.r[29].w[0] + 2208u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[11], c.r[29].w[0] + 2204u);
    c.f[7] = fp::sub(c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DE0u); c.f[25] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));  if (depth < kMaxDepth) unit_008C(c, 81u, depth + 1u); else { c.pc = 0x00332E40u; return; } if (c.pc != 0x00336DE0u) [[unlikely]] return; }
L_00336DE0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  goto L_00336E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DF4u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336DF4u) [[unlikely]] return; }
L_00336DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336DFCu) [[unlikely]] return; }
L_00336DFC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E08u); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336E08u) [[unlikely]] return; }
L_00336E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336E10u) [[unlikely]] return; }
L_00336E10:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00336E1Cu) [[unlikely]] return; }
L_00336E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336E84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    c.f[2] = ld32((c.r[29].w[0] + 848u));
    c.f[4] = ld32((c.r[29].w[0] + 856u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[21] = c.f[25];
    st32((c.r[29].w[0] + 832u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 836u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E70u); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336E70u) [[unlikely]] return; }
L_00336E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336E78u) [[unlikely]] return; }
L_00336E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00336E80u) [[unlikely]] return; }
L_00336E80:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00336E84:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_00336E88:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336D74u | kUnwind; return; } goto L_00336D74; }
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 624u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336D54u | kUnwind; return; } goto L_00336D54; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00336F00; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00336F00; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 832u);
    set32(c.r[10], c.r[29].w[0] + 848u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336EFCu); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00336EFCu) [[unlikely]] return; }
L_00336EFC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336F00:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337214; } }
    c.f[0] = ld32((c.r[29].w[0] + 1684u));
    c.f[1] = ld32((c.r[29].w[0] + 1680u));
    c.f[2] = ld32((c.r[29].w[0] + 1688u));
    c.facc = fp::mul(c.f[0], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[24]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F24u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[22]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336F24u) [[unlikely]] return; }
L_00336F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336F2Cu) [[unlikely]] return; }
L_00336F2C:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00336F38u) [[unlikely]] return; }
L_00336F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337214; } }
    c.f[0] = ld32((c.r[29].w[0] + 1668u));
    c.f[1] = ld32((c.r[29].w[0] + 1664u));
    c.f[2] = ld32((c.r[29].w[0] + 1672u));
    c.facc = fp::mul(c.f[0], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[24]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F5Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[22]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00336F5Cu) [[unlikely]] return; }
L_00336F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00336F64u) [[unlikely]] return; }
L_00336F64:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00336F70u) [[unlikely]] return; }
L_00336F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00337214; } }
    set32(c.r[2], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 816u), c.f[24]);  goto L_00336FAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[24]);
    st32((c.r[29].w[0] + 816u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[23]);
    st32((c.r[29].w[0] + 820u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[22]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 824u), c.f[0]);  if (t) { goto L_00336FB4; } }
L_00336FAC:
    st32((c.r[29].w[0] + 820u), c.f[23]);
    st32((c.r[29].w[0] + 824u), c.f[22]);
    c.budget -= 2;
L_00336FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336FBCu); set32(c.r[4], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x00336FBCu) [[unlikely]] return; }
L_00336FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003370D4; } }
L_00336FC4:
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1312u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 1752u));
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 820u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[3] = ld32((c.r[29].w[0] + 816u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[7] = fp::sub(c.f[7], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 824u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[6]));
    c.budget -= 23;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003370D4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 776u)));
    c.f[0] = ld32((c.r[29].w[0] + 820u));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 816u));
    c.f[4] = ld32((c.r[29].w[0] + 824u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033705Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0033705Cu) [[unlikely]] return; }
L_0033705C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00337064u) [[unlikely]] return; }
L_00337064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033706Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0033706Cu) [[unlikely]] return; }
L_0033706C:
    c.f[1] = ld32((c.r[28].w[0] - 31952u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_00337090; } }
    c.f[1] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337090; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00337090:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003370D0; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 1312u);
    set32(c.r[10], c.r[29].w[0] + 816u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370CCu); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003370CCu) [[unlikely]] return; }
L_003370CC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003370D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003370D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00336FC4u | kUnwind; return; } goto L_00336FC4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00337204; } }
L_003370F4:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 1752u));
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 820u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[3] = ld32((c.r[29].w[0] + 816u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[7] = fp::sub(c.f[7], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 824u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[6]));
    c.budget -= 23;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00337204; }
    set32(c.r[3], ld32((c.r[29].w[0] + 772u)));
    c.f[0] = ld32((c.r[29].w[0] + 820u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 816u));
    c.f[4] = ld32((c.r[29].w[0] + 824u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033718Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0033718Cu) [[unlikely]] return; }
L_0033718C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x00337194u) [[unlikely]] return; }
L_00337194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033719Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0033719Cu) [[unlikely]] return; }
L_0033719C:
    c.f[1] = ld32((c.r[28].w[0] - 31952u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_003371C0; } }
    c.f[1] = ld32((c.r[28].w[0] - 32132u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003371C0; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_003371C0:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337200; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 1168u);
    set32(c.r[10], c.r[29].w[0] + 816u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371FCu); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003371FCu) [[unlikely]] return; }
L_003371FC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337200:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00337204:
    set32(c.r[2], ld32((c.r[29].w[0] + 1296u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003370F4u | kUnwind; return; } goto L_003370F4; }
L_00337214:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337408; } }
    c.facc = fp::mul(c.f[23], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32372u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337408; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 2;
L_00337248:
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    c.f[7] = fp::sub(c.f[0], c.f[7]);
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.f[0] = 0u;
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033729C; } }
    c.f[12] = ld32((c.r[28].w[0] - 32264u));
    c.budget -= 1;
L_0033729C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003372EC; }
    c.f[0] = ld32((c.r[28].w[0] - 31952u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003372E8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    set32(c.r[9], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372E4u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003372E4u) [[unlikely]] return; }
L_003372E4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003372E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003372EC:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337248u | kUnwind; return; } goto L_00337248; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337408; } }
    set32(c.r[2], c.r[29].w[0] + 1808u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_00337330; } }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    set32(c.r[2], c.r[29].w[0] + 1760u);
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1656u), c.f[0]);  if (t) { goto L_00337348; } }
L_00337330:
    c.f[2] = ld32((c.r[29].w[0] + 1664u));
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 1648u), c.f[2]);
    st32((c.r[29].w[0] + 1652u), c.f[1]);
    st32((c.r[29].w[0] + 1656u), c.f[0]);
    c.budget -= 6;
L_00337348:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 2;
L_00337350:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.f[0] = ld32((c.r[29].w[0] + 1752u));
    c.f[1] = ld32((c.r[29].w[0] + 1748u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[29].w[0] + 1744u));
    c.f[7] = fp::sub(c.f[0], c.f[7]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 1652u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 1648u));
    c.f[6] = ld32((c.r[29].w[0] + 1656u));
    c.f[0] = 0u;
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003373A8; } }
    c.f[12] = ld32((c.r[28].w[0] - 32264u));
    c.budget -= 1;
L_003373A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003373FC; }
    c.f[0] = ld32((c.r[28].w[0] - 31952u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003373F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[29].w[0] + 1648u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003373F4u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003373F4u) [[unlikely]] return; }
L_003373F4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003373F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003373FC:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337350u | kUnwind; return; } goto L_00337350; }
L_00337408:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003374E8; } }
    c.f[7] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[3], ld32((c.r[29].w[0] + 2220u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = ld32((c.r[29].w[0] + 1744u));
    c.f[5] = ld32((c.r[29].w[0] + 1748u));
    c.f[4] = ld32((c.r[29].w[0] + 1752u));
    c.f[12] = 0u;
    c.f[1] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003374A0; } }
L_00337438:
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[7]));
    c.budget -= 14;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_003374A0; }
    c.f[7] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1632u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1636u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1640u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 12;
L_003374A0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 780u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337438u | kUnwind; return; } goto L_00337438; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003374E8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 1744u);
    set32(c.r[10], c.r[29].w[0] + 1632u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003374E4u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x003374E4u) [[unlikely]] return; }
L_003374E4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003374E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00337584; } }
    c.f[0] = ld32((c.r[29].w[0] + 1684u));
    c.f[3] = ld32((c.r[29].w[0] + 1680u));
    c.f[4] = ld32((c.r[29].w[0] + 1688u));
    c.facc = fp::mul(c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1668u));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[3]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[22], c.f[4]));
    c.f[1] = ld32((c.r[29].w[0] + 1664u));
    c.facc = fp::mul(c.f[23], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1672u));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[2]));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[29].w[0] + 1664u));  goto L_00337548; }
    c.f[2] = ld32((c.r[29].w[0] + 1680u));
    c.f[1] = ld32((c.r[29].w[0] + 1684u));
    c.f[0] = ld32((c.r[29].w[0] + 1688u));
    st32((c.r[29].w[0] + 1632u), c.f[2]);
    st32((c.r[29].w[0] + 1636u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1640u), c.f[0]);  if (t) { goto L_0033755C; } }
L_00337548:
    c.f[1] = ld32((c.r[29].w[0] + 1668u));
    c.f[0] = ld32((c.r[29].w[0] + 1672u));
    st32((c.r[29].w[0] + 1632u), c.f[2]);
    st32((c.r[29].w[0] + 1636u), c.f[1]);
    st32((c.r[29].w[0] + 1640u), c.f[0]);
    c.budget -= 5;
L_0033755C:
    set32(c.r[6], ld32((c.r[29].w[0] + 780u)));
    c.f[12] = ld32((c.r[28].w[0] - 32264u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 1744u);
    set32(c.r[10], c.r[29].w[0] + 1632u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337584u); set32(c.r[11], c.r[29].w[0] + 2220u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x00332C20u; return; } if (c.pc != 0x00337584u) [[unlikely]] return; }
L_00337584:
    set32(c.r[4], ld32((c.r[29].w[0] + 776u)));
    c.budget -= 1;
L_00337588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337590u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00337590u) [[unlikely]] return; }
L_00337590:
    set32(c.r[4], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033759Cu); st32((c.r[29].w[0] + 776u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0033759Cu) [[unlikely]] return; }
L_0033759C:
    st32((c.r[29].w[0] + 772u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 752u)));
    c.budget -= 2;
L_003375A4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 752u), c.r[2].w[0]);
    c.budget -= 2;
L_003375AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 752u)));
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 2220u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003351B8u | kUnwind; return; } goto L_003351B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 2220u)));  if (t) { goto L_003375CC; } }
L_003375C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003375CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[26] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2224u);  c.pc = t; return; }
L_00337620:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[9], c.r[5].w[0] - 1u);
    c.f[7] = 0u;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003377A4; } }
L_00337634:
    set32(c.r[3], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[9] = ld32((c.r[8].w[0] + 4u));
    set32(c.r[15], c.r[9].w[0] + 4u);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[14], c.r[9].w[0] + 8u);
    c.f[8] = ld32((c.r[9].w[0]));
    set32(c.r[13], c.r[3].w[0] + 4u);
    c.f[6] = ld32((c.r[8].w[0]));
    set32(c.r[12], c.r[3].w[0] + 8u);
    c.facc = fp::mul(c.f[9], c.f[0]);
    c.f[5] = ld32((c.r[8].w[0] + 8u));
    c.f[3] = ld32((c.r[9].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[8]));
    c.f[4] = ld32((c.r[8].w[0] + 12u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[10] = fp::add(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[7]));
    c.facc = fp::mul(c.f[9], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::add(c.f[4], c.f[0]);  if (t) { goto L_003376E4; } }
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), c.f[8]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0] + 4u), c.f[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    c.f[0] = ld32((c.r[14].w[0]));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0] + 8u), c.f[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    c.budget -= 17;
L_003376E4:
    fpu_compare(c, fp::key(c.f[10]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003376FC; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[7]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = fp::sub(c.f[10], c.f[1]);  goto L_00337718; }
L_003376FC:
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[7]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[9].d[0] = c.r[10].d[0] + 0ull;  goto L_003377A0; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033779C; } }
    c.f[5] = fp::sub(c.f[10], c.f[1]);
    c.budget -= 1;
L_00337718:
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[11], c.r[11].w[0] << 4);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[4] = ld32((c.r[13].w[0]));
    c.f[6] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[10], c.f[0]);
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.f[4] = fp::mul(c.f[10], c.f[4]);
    fpu_div(c, 4u, c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[12].w[0]));
    c.f[3] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[10], c.f[2]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    st32((c.r[11].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 33;
L_0033779C:
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_003377A0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_003377A4:
    c.r[3].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], c.r[9].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337634u | kUnwind; return; } goto L_00337634; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003377C0:
    c.f[8] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[7] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[9] = fp::add(c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::add(c.f[5], c.f[0]);  if (t) { goto L_00337828; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00337918; } }
L_00337828:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 3;
L_00337834:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00337850; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00337850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337918; } }
L_00337850:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00337870; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = fp::sub(c.f[9], c.f[1]);  goto L_00337894; }
L_00337870:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_00337918; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00337914; } }
    c.f[5] = fp::sub(c.f[9], c.f[1]);
    c.budget -= 1;
L_00337894:
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[9], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[4] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_00337900; } }
    st32((c.r[4].w[0]), c.f[4]);
    st32((c.r[4].w[0] + 4u), c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0033790C; } }
L_00337900:
    st32((c.r[5].w[0]), c.f[4]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0033790C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337918; } }
L_00337914:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00337918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[12].d[0] = 0ull + 0ull;
    c.f[15] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[14] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::sub(c.f[15], c.f[1]);
    c.f[1] = fp::sub(c.f[14], c.f[0]);
    c.f[12] = ld32((c.r[7].w[0] + 16u));
    c.f[13] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[11] = ld32((c.r[7].w[0]));
    c.facc = fp::mul(c.f[12], c.f[1]);
    c.f[2] = fp::sub(c.f[13], c.f[0]);
    c.f[10] = ld32((c.r[7].w[0] + 32u));
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[3]));
    c.f[9] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[2]));
    c.f[8] = ld32((c.r[7].w[0] + 4u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[7] = ld32((c.r[7].w[0] + 36u));
    c.f[6] = ld32((c.r[7].w[0] + 24u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[5] = ld32((c.r[7].w[0] + 8u));
    c.f[4] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[2] = fp::sub(c.f[0], c.f[14]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[12], c.f[2]);
    c.f[3] = fp::sub(c.f[1], c.f[15]);
    c.f[1] = fp::sub(c.f[0], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[1]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = 0u;
    set32(c.r[3], c.r[12].w[0] << 2);
    c.budget -= 57;
L_00337A04:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[3].w[0] + 16u), c.r[5].w[0]);  goto L_00337A34; }
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[3].w[0] + 32u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 7;
L_00337A34:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337A04u | kUnwind; return; } goto L_00337A04; }
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[29].w[0] + 32u));
    c.r[14].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[11], 0u + 1u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[12], 0u - 1u);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[4] = fp::mul(c.f[4], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 31968u));
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[13], c.r[14].w[0] << 2);
    c.budget -= 26;
L_00337AAC:
    set32(c.r[3], c.r[13].w[0] + c.r[29].w[0]);
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[3].w[0] + 96u), 0u);  goto L_00337B28; }
    c.f[2] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337AF4; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 96u), c.r[12].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 80u), c.f[0]);  if (t) { goto L_00337B2C; } }
L_00337AF4:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00337B04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337B04:
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[13].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 96u), c.r[8].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 80u), c.f[0]);  if (t) { goto L_00337B2C; } }
L_00337B28:
    st32((c.r[3].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 1;
L_00337B2C:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[13], c.r[14].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337AACu | kUnwind; return; } goto L_00337AAC; }
    c.f[7] = 0u;
    c.r[11].d[0] = 0ull + 0ull;
    c.f[2] = c.f[7];
    c.budget -= 3;
L_00337B48:
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[1] = c.f[7];  goto L_00337B60; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_00337B60:
    set32(c.r[3], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.facc = fp::add(c.f[7], c.f[2]);
    c.r[3].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[1]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337B48u | kUnwind; return; } goto L_00337B48; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[7]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[11].d[0] = 0ull + 0ull;  goto L_00337CB8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[3] = 0u;
    c.budget -= 3;
L_00337B94:
    c.f[6] = c.f[4];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 3;
L_00337BA0:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00337BD4; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337BD0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337BD0; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_00337BD0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00337BD4:
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337BA0u | kUnwind; return; } goto L_00337BA0; }
    c.f[5] = c.f[3];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00337BE8:
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[1] = c.f[3];  goto L_00337C00; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_00337C00:
    set32(c.r[3], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.facc = fp::add(c.f[3], c.f[5]);
    c.f[0] = fp::sub(c.f[6], c.f[0]);
    c.r[3].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[5] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337BE8u | kUnwind; return; } goto L_00337BE8; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[11].d[0] = 0ull + 0ull;  goto L_00337C50; }
    c.f[1] = fp::sub(c.f[5], c.f[2]);
    c.f[0] = fp::sub(c.f[6], c.f[7]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[7] = fp::sub(c.f[7], c.f[0]);  if (t) { goto L_00337CB4; } }
L_00337C50:
    set32(c.r[3], c.r[11].w[0] << 2);
    c.budget -= 1;
L_00337C54:
    set32(c.r[8], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[8].w[0] + 80u);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_00337C94; }
    c.f[2] = ld32((c.r[8].w[0] + 112u));
    set32(c.r[3], ld32((c.r[8].w[0] + 96u)));
    c.f[1] = ld32((c.r[8].w[0] + 48u));
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 96u), c.r[3].w[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 10;
L_00337C94:
    c.r[3].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337C54u | kUnwind; return; } goto L_00337C54; }
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[4]));
    c.f[2] = c.f[5];
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[7] = c.f[6];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337B94u | kUnwind; return; } goto L_00337B94; } }
    c.f[7] = c.f[4];
    c.budget -= 1;
L_00337CB4:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337CB8:
    c.f[0] = 0u;
    c.budget -= 1;
L_00337CBC:
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.f[2] = ld32((c.r[5].w[0] + 64u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[5], c.r[9].w[0] + c.r[8].w[0]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337CBCu | kUnwind; return; } goto L_00337CBC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.f[3] = 0u;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 3;
L_00337CF8:
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] + 64u);
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00337D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_00337D4C; } }
L_00337D3C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00337D50; }
    st32((c.r[3].w[0]), c.f[2]);
    c.budget -= 1;
L_00337D4C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00337D50:
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00337CF8u | kUnwind; return; } goto L_00337CF8; }
    c.f[7] = ld32((c.r[29].w[0] + 68u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[6] = ld32((c.r[29].w[0] + 72u));
    c.f[3] = ld32((c.r[7].w[0] + 16u));
    c.f[4] = ld32((c.r[7].w[0] + 24u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    c.f[2] = ld32((c.r[7].w[0] + 40u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 36u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 25;
L_00337DC0:
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[10].w[0] + c.r[5].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337DC0u | kUnwind; return; } goto L_00337DC0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00337E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
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
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.f[25] = ld32((c.r[5].w[0] + 4u));
    c.f[18] = ld32((c.r[6].w[0] + 4u));
    c.f[28] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[19] = ld32((c.r[6].w[0]));
    c.f[17] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[26] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[27] = ld32((c.r[7].w[0] + 8u));
    c.f[15] = fp::sub(c.f[25], c.f[5]);
    c.f[9] = fp::sub(c.f[18], c.f[5]);
    c.f[14] = fp::sub(c.f[0], c.f[1]);
    c.f[8] = fp::sub(c.f[19], c.f[1]);
    c.facc = fp::mul(c.f[15], c.f[9]);
    c.f[16] = fp::sub(c.f[26], c.f[3]);
    c.f[10] = fp::sub(c.f[4], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[8]));
    c.f[12] = fp::sub(c.f[28], c.f[18]);
    c.f[23] = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[2] = 0u;
    c.f[11] = fp::sub(c.f[17], c.f[19]);
    c.facc = fp::mul(c.f[12], c.f[9]);
    c.f[13] = fp::sub(c.f[27], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[8]));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[2]));
    c.budget -= 43;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[22] = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));  if (t) { goto L_00337EE8; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = fp::sub(c.f[28], c.f[5]);  goto L_00337EEC; }
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 3u, depth); } }
L_00337EE8:
    c.f[6] = fp::sub(c.f[28], c.f[5]);
    c.budget -= 1;
L_00337EEC:
    c.f[5] = fp::sub(c.f[17], c.f[1]);
    c.facc = fp::mul(c.f[15], c.f[6]);
    c.f[7] = fp::sub(c.f[27], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[5]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[16], c.f[7]));
    c.f[2] = 0u;
    c.facc = fp::mul(c.f[12], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[5]));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::add(c.facc, fp::mul(c.f[13], c.f[7]));  if (t) { goto L_00337F54; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = fp::sub(c.f[18], c.f[25]);  goto L_00337F58; }
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 3u, depth); } }
L_00337F54:
    c.f[3] = fp::sub(c.f[18], c.f[25]);
    c.budget -= 1;
L_00337F58:
    c.f[2] = fp::sub(c.f[19], c.f[0]);
    c.facc = fp::mul(c.f[15], c.f[3]);
    c.f[4] = fp::sub(c.f[4], c.f[26]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[2]));
    c.f[24] = fp::add(c.facc, fp::mul(c.f[16], c.f[4]));
    c.f[18] = 0u;
    c.facc = fp::mul(c.f[12], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[2]));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[18]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[19] = fp::add(c.facc, fp::mul(c.f[13], c.f[4]));  if (t) { goto L_00337FC0; } }
    fpu_compare(c, fp::key(c.f[19]) < fp::key(c.f[18]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[18] = fp::sub(c.f[27], c.f[26]);  goto L_00337FC4; }
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 3u, depth); } }
L_00337FC0:
    c.f[18] = fp::sub(c.f[27], c.f[26]);
    c.budget -= 1;
L_00337FC4:
    c.f[25] = fp::sub(c.f[28], c.f[25]);
    c.f[26] = fp::sub(c.f[17], c.f[0]);
    c.facc = fp::mul(c.f[15], c.f[25]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[26]));
    c.f[30] = fp::add(c.facc, fp::mul(c.f[16], c.f[18]));
    c.f[17] = 0u;
    c.facc = fp::mul(c.f[12], c.f[25]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[26]));
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[17]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[18] = fp::add(c.facc, fp::mul(c.f[13], c.f[18]));  if (t) { [[clang::musttail]] return unit_008E(c, 2u, depth); } }
    fpu_compare(c, fp::key(c.f[18]) <= fp::key(c.f[17]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_008E(c, 2u, depth); } }
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_008E(c, 1u, depth);
}

}
