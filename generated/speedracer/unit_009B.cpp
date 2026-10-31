#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0036C000;
    case 2u: goto L_0036C02C;
    case 3u: goto L_0036C050;
    case 4u: goto L_0036C074;
    case 5u: goto L_0036C098;
    case 6u: goto L_0036C0BC;
    case 7u: goto L_0036C0E0;
    case 8u: goto L_0036C104;
    case 9u: goto L_0036C128;
    case 10u: goto L_0036C14C;
    case 11u: goto L_0036C170;
    case 12u: goto L_0036C194;
    case 13u: goto L_0036C1B8;
    case 14u: goto L_0036C22C;
    case 15u: goto L_0036C250;
    case 16u: goto L_0036C274;
    case 17u: goto L_0036C298;
    case 18u: goto L_0036C2BC;
    case 19u: goto L_0036C2E0;
    case 20u: goto L_0036C304;
    case 21u: goto L_0036C328;
    case 22u: goto L_0036C34C;
    case 23u: goto L_0036C370;
    case 24u: goto L_0036C394;
    case 25u: goto L_0036C3B8;
    case 26u: goto L_0036C3BC;
    case 27u: goto L_0036C3D0;
    case 28u: goto L_0036C430;
    case 29u: goto L_0036C53C;
    case 30u: goto L_0036C560;
    case 31u: goto L_0036C5C0;
    case 32u: goto L_0036C770;
    case 33u: goto L_0036C794;
    case 34u: goto L_0036C7E4;
    case 35u: goto L_0036C824;
    case 36u: goto L_0036C82C;
    case 37u: goto L_0036C87C;
    case 38u: goto L_0036C8A0;
    case 39u: goto L_0036C9C4;
    case 40u: goto L_0036CABC;
    case 41u: goto L_0036CACC;
    case 42u: goto L_0036CADC;
    case 43u: goto L_0036CB30;
    case 44u: goto L_0036CB7C;
    case 45u: goto L_0036CB8C;
    case 46u: goto L_0036CB98;
    case 47u: goto L_0036CBD8;
    case 48u: goto L_0036CC34;
    case 49u: goto L_0036CC88;
    case 50u: goto L_0036CCF4;
    case 51u: goto L_0036CD60;
    case 52u: goto L_0036CDA0;
    case 53u: goto L_0036CE68;
    case 54u: goto L_0036D098;
    case 55u: goto L_0036D2AC;
    case 56u: goto L_0036D2D4;
    case 57u: goto L_0036D470;
    case 58u: goto L_0036D5F0;
    case 59u: goto L_0036D62C;
    case 60u: goto L_0036D73C;
    case 61u: goto L_0036D760;
    case 62u: goto L_0036D8BC;
    case 63u: goto L_0036D8D0;
    case 64u: goto L_0036D93C;
    case 65u: goto L_0036D944;
    case 66u: goto L_0036D964;
    case 67u: goto L_0036D980;
    case 68u: goto L_0036D988;
    case 69u: goto L_0036D994;
    case 70u: goto L_0036D99C;
    case 71u: goto L_0036DADC;
    case 72u: goto L_0036DB60;
    case 73u: goto L_0036DB88;
    case 74u: goto L_0036DBB8;
    case 75u: goto L_0036DBE0;
    case 76u: goto L_0036DC30;
    case 77u: goto L_0036DC50;
    case 78u: goto L_0036DC90;
    case 79u: goto L_0036DD44;
    case 80u: goto L_0036DE10;
    case 81u: goto L_0036DEC4;
    case 82u: goto L_0036E03C;
    case 83u: goto L_0036E128;
    case 84u: goto L_0036E190;
    case 85u: goto L_0036E244;
    case 86u: goto L_0036E310;
    case 87u: goto L_0036E354;
    case 88u: goto L_0036E4A4;
    case 89u: goto L_0036E514;
    case 90u: goto L_0036E57C;
    case 91u: goto L_0036E630;
    case 92u: goto L_0036E700;
    case 93u: goto L_0036E744;
    case 94u: goto L_0036E894;
    case 95u: goto L_0036E940;
    case 96u: goto L_0036E950;
    case 97u: goto L_0036E9F0;
    case 98u: goto L_0036EA68;
    case 99u: goto L_0036EA98;
    case 100u: goto L_0036EB1C;
    case 101u: goto L_0036EBD0;
    case 102u: goto L_0036EC3C;
    case 103u: goto L_0036EC84;
    case 104u: goto L_0036EC98;
    case 105u: goto L_0036ED40;
    case 106u: goto L_0036EDAC;
    case 107u: goto L_0036EDF4;
    case 108u: goto L_0036EE08;
    case 109u: goto L_0036EEB0;
    case 110u: goto L_0036EF28;
    case 111u: goto L_0036EF58;
    case 112u: goto L_0036EFCC;
    case 113u: goto L_0036F080;
    case 114u: goto L_0036F0D0;
    case 115u: goto L_0036F0E4;
    case 116u: goto L_0036F0EC;
    case 117u: goto L_0036F160;
    case 118u: goto L_0036F17C;
    case 119u: goto L_0036F198;
    case 120u: goto L_0036F1B4;
    case 121u: goto L_0036F1F0;
    case 122u: goto L_0036F240;
    case 123u: goto L_0036F250;
    case 124u: goto L_0036F29C;
    case 125u: goto L_0036F2D0;
    case 126u: goto L_0036F2F4;
    case 127u: goto L_0036F360;
    case 128u: goto L_0036F398;
    case 129u: goto L_0036F3AC;
    case 130u: goto L_0036F408;
    case 131u: goto L_0036F4AC;
    case 132u: goto L_0036F4C0;
    case 133u: goto L_0036F4D4;
    case 134u: goto L_0036F4E8;
    case 135u: goto L_0036F4FC;
    case 136u: goto L_0036F510;
    case 137u: goto L_0036F530;
    case 138u: goto L_0036F620;
    case 139u: goto L_0036F654;
    case 140u: goto L_0036F668;
    case 141u: goto L_0036F68C;
    case 142u: goto L_0036F698;
    case 143u: goto L_0036F6B0;
    case 144u: goto L_0036F6D0;
    case 145u: goto L_0036F704;
    case 146u: goto L_0036F7E8;
    case 147u: goto L_0036F804;
    case 148u: goto L_0036F850;
    case 149u: goto L_0036F858;
    case 150u: goto L_0036F888;
    case 151u: goto L_0036F900;
    case 152u: goto L_0036F910;
    case 153u: goto L_0036F920;
    case 154u: goto L_0036F938;
    case 155u: goto L_0036F960;
    case 156u: goto L_0036F998;
    case 157u: goto L_0036F9A0;
    case 158u: goto L_0036F9C4;
    case 159u: goto L_0036FA00;
    case 160u: goto L_0036FA4C;
    case 161u: goto L_0036FA60;
    case 162u: goto L_0036FA6C;
    case 163u: goto L_0036FAA4;
    case 164u: goto L_0036FADC;
    case 165u: goto L_0036FAF8;
    case 166u: goto L_0036FB28;
    case 167u: goto L_0036FB5C;
    case 168u: goto L_0036FB78;
    case 169u: goto L_0036FBD0;
    case 170u: goto L_0036FBF8;
    case 171u: goto L_0036FC20;
    case 172u: goto L_0036FCB0;
    case 173u: goto L_0036FCF4;
    case 174u: goto L_0036FD50;
    case 175u: goto L_0036FDA0;
    case 176u: goto L_0036FDEC;
    case 177u: goto L_0036FE30;
    case 178u: goto L_0036FE60;
    case 179u: goto L_0036FE88;
    case 180u: goto L_0036FEB0;
    case 181u: goto L_0036FF00;
    case 182u: goto L_0036FF50;
    case 183u: goto L_0036FF84;
    case 184u: goto L_0036FFAC;
    case 185u: goto L_0036FFD4;
    default: bad_entry(c, 0x0036C000u); return;
    }
L_0036C000:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C02Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C02Cu) [[unlikely]] return; }
L_0036C02C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C03C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C03C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 312u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C050u); set32(c.r[8], 0u + 17u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C050u) [[unlikely]] return; }
L_0036C050:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C060:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C074u); set32(c.r[8], 0u + 18u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C074u) [[unlikely]] return; }
L_0036C074:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C084:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C098u); set32(c.r[8], 0u + 19u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C098u) [[unlikely]] return; }
L_0036C098:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C0A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C0A8:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0BCu); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C0BCu) [[unlikely]] return; }
L_0036C0BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C0CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C0CC:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0E0u); set32(c.r[8], 0u + 21u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C0E0u) [[unlikely]] return; }
L_0036C0E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C0F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C0F0:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 296u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C104u); set32(c.r[8], 0u + 22u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C104u) [[unlikely]] return; }
L_0036C104:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C114:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 376u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C128u); set32(c.r[8], 0u + 23u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C128u) [[unlikely]] return; }
L_0036C128:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C138:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 376u);
    set32(c.r[7], c.r[16].w[0] + 392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C14Cu); set32(c.r[8], 0u + 24u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C14Cu) [[unlikely]] return; }
L_0036C14C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C15C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C170u); set32(c.r[8], 0u + 25u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C170u) [[unlikely]] return; }
L_0036C170:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C180:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C194u); set32(c.r[8], 0u + 26u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C194u) [[unlikely]] return; }
L_0036C194:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C1A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C1A4:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 392u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1B8u); set32(c.r[8], 0u + 27u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C1B8u) [[unlikely]] return; }
L_0036C1B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 84u));  goto L_0036C1C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[6], c.r[16].w[0] + 312u);
    set32(c.r[7], c.r[16].w[0] + 296u);
    set32(c.r[8], 0u + 28u);
    c.f[2] = 0u;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C22Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C22Cu) [[unlikely]] return; }
L_0036C22C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C23C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C23C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 312u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C250u); set32(c.r[8], 0u + 29u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C250u) [[unlikely]] return; }
L_0036C250:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C260; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C260:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C274u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C274u) [[unlikely]] return; }
L_0036C274:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C284:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C298u); set32(c.r[8], 0u + 31u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C298u) [[unlikely]] return; }
L_0036C298:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C2A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C2A8:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2BCu); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C2BCu) [[unlikely]] return; }
L_0036C2BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C2CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C2CC:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2E0u); set32(c.r[8], 0u + 33u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C2E0u) [[unlikely]] return; }
L_0036C2E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C2F0:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 296u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C304u); set32(c.r[8], 0u + 34u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C304u) [[unlikely]] return; }
L_0036C304:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C314:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 376u);
    set32(c.r[7], c.r[16].w[0] + 344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C328u); set32(c.r[8], 0u + 35u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C328u) [[unlikely]] return; }
L_0036C328:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C338:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 376u);
    set32(c.r[7], c.r[16].w[0] + 392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C34Cu); set32(c.r[8], 0u + 36u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C34Cu) [[unlikely]] return; }
L_0036C34C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C35C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C35C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[16].w[0] + 392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C370u); set32(c.r[8], 0u + 37u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C370u) [[unlikely]] return; }
L_0036C370:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C380:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 360u);
    set32(c.r[7], c.r[16].w[0] + 376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C394u); set32(c.r[8], 0u + 38u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C394u) [[unlikely]] return; }
L_0036C394:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0036C3A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C3BC; } }
L_0036C3A4:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 392u);
    set32(c.r[7], c.r[16].w[0] + 408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3B8u); set32(c.r[8], 0u + 39u);  if (depth < kMaxDepth) unit_009B(c, 27u, depth + 1u); else { c.pc = 0x0036C3D0u; return; } if (c.pc != 0x0036C3B8u) [[unlikely]] return; }
L_0036C3B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036C3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036C3D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C430u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036C430u) [[unlikely]] return; }
L_0036C430:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[14] = ld32((c.r[19].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[19].w[0] + 64u));
    c.facc = fp::mul(c.f[3], c.f[14]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[12] = ld32((c.r[19].w[0] + 72u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[13]));
    c.f[4] = ld32((c.r[28].w[0] - 32372u));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[5] = c.f[9] & fp::kAbs;
    c.f[16] = ld32((c.r[17].w[0] + 4u));
    c.f[15] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.f[0] = 0u;
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[17] = ld32((c.r[17].w[0]));  if (t) { goto L_0036C47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036C53C; } }
L_0036C47C:
    c.f[11] = ld32((c.r[18].w[0] + 4u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[10] = ld32((c.r[18].w[0] + 8u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[8] = ld32((c.r[18].w[0]));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[6] = fp::sub(c.f[11], c.f[16]);
    c.f[6] = fp::mul(c.f[6], c.f[14]);
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[6] = fp::sub(c.f[8], c.f[17]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[13]));
    c.f[7] = fp::sub(c.f[10], c.f[15]);
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[7], c.f[12]));
    fpu_div(c, 7u, c.f[6], c.f[9]);
    c.facc = fp::add(c.f[0], c.f[17]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 100u));
    c.facc = fp::add(c.f[0], c.f[16]);
    c.f[9] = fp::sub(c.f[8], c.f[6]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[7]));
    c.f[4] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::add(c.f[0], c.f[15]);
    c.f[8] = fp::sub(c.f[11], c.f[5]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[7]));
    c.f[5] = fp::sub(c.f[10], c.f[4]);
    c.f[4] = fp::mul(c.f[8], c.f[12]);
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[13]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[5], c.f[14]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::mul(c.f[9], c.f[14]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[9], c.f[12]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::mul(c.f[6], c.f[1]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[8], c.f[13]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[5], c.f[3]));
    st32((c.r[29].w[0] + 80u), c.f[4]);
    c.f[4] = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[1] = fp::mul(c.f[7], c.f[3]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C53Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_009B(c, 30u, depth + 1u); else { c.pc = 0x0036C560u; return; } if (c.pc != 0x0036C53Cu) [[unlikely]] return; }
L_0036C53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036C560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32372u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0036C5B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036C74C; } }
L_0036C5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C5C0u);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036C5C0u) [[unlikely]] return; }
L_0036C5C0:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[18].w[0] + 68u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[6] = ld32((c.r[18].w[0] + 64u));
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[7] = ld32((c.r[18].w[0] + 72u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[0] = c.r[2].w[0];
    c.f[4] = 0u;
    c.f[6] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[6]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036C608; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_0036C608:
    c.f[7] = fp::sqrt(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[18].w[0] + 84u));
    c.f[5] = c.r[2].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[4] = fp::mul(c.f[6], c.f[4]);
    c.f[10] = 0u;
    c.f[4] = c.f[4] & fp::kAbs;
    c.facc = fp::add(c.f[10], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[5] = ld32((c.r[18].w[0] + 232u));
    c.f[6] = ld32((c.r[18].w[0] + 216u));
    c.f[8] = ld32((c.r[18].w[0] + 248u));
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[8], c.f[1]));
    c.f[4] = ld32((c.r[18].w[0] + 280u));
    c.f[5] = c.f[5] & fp::kAbs;
    c.f[6] = ld32((c.r[18].w[0] + 220u));
    c.f[9] = fp::mul(c.f[4], c.f[5]);
    c.f[5] = ld32((c.r[18].w[0] + 236u));
    c.f[7] = ld32((c.r[18].w[0] + 252u));
    c.f[4] = ld32((c.r[18].w[0] + 284u));
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[5] = c.f[5] & fp::kAbs;
    c.f[9] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[5] = ld32((c.r[18].w[0] + 240u));
    c.f[6] = ld32((c.r[18].w[0] + 224u));
    c.f[8] = ld32((c.r[18].w[0] + 256u));
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[8], c.f[1]));
    c.f[4] = ld32((c.r[18].w[0] + 288u));
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[5] = c.f[5] & fp::kAbs;
    c.f[8] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[5] = ld32((c.r[18].w[0] + 428u));
    c.f[6] = ld32((c.r[18].w[0] + 424u));
    c.f[7] = ld32((c.r[18].w[0] + 432u));
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[4] = fp::add(c.f[0], c.f[8]);
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 53;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = fp::sub(c.f[4], c.f[1]);  goto L_0036C6E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036C74C; } }
L_0036C6E4:
    c.f[1] = ld32((c.r[18].w[0] + 456u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_0036C74C; }
    st32((c.r[18].w[0] + 456u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[10]));
    st32((c.r[18].w[0] + 440u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 444u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 448u), c.f[1]);
    st32((c.r[18].w[0] + 468u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 460u), c.f[8]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 464u), c.f[0]);  if (t) { goto L_0036C748; } }
    c.f[0] = ld32((c.r[18].w[0] + 440u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 444u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 448u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 448u), c.f[0]);
    c.budget -= 9;
L_0036C748:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036C74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036C770:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C794u); set32(c.r[4], ld32((c.r[4].w[0] + 516u)));  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x0036C794u) [[unlikely]] return; }
L_0036C794:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7E4u); set32(c.r[4], ld32((c.r[16].w[0] + 516u)));  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x0036C7E4u) [[unlikely]] return; }
L_0036C7E4:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 80u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 516u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C824u); set32(c.r[6], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_009C(c, 101u, depth + 1u); else { c.pc = 0x003731A0u; return; } if (c.pc != 0x0036C824u) [[unlikely]] return; }
L_0036C824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C82Cu); set32(c.r[4], ld32((c.r[16].w[0] + 512u)));  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x0036C82Cu) [[unlikely]] return; }
L_0036C82C:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C87Cu); set32(c.r[4], ld32((c.r[16].w[0] + 512u)));  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x0036C87Cu) [[unlikely]] return; }
L_0036C87C:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 272u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C8A0u); set32(c.r[5], c.r[16].w[0] + 280u);  if (depth < kMaxDepth) unit_0099(c, 62u, depth + 1u); else { c.pc = 0x00366A20u; return; } if (c.pc != 0x0036C8A0u) [[unlikely]] return; }
L_0036C8A0:
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[5] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    st32((c.r[16].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    st32((c.r[16].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    st32((c.r[16].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 332u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    st32((c.r[16].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    st32((c.r[16].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 380u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 396u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    st32((c.r[16].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 284u));
    st32((c.r[16].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 288u));
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.budget -= 73;
L_0036C9C4:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[8] = ld32((c.r[4].w[0] + 300u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 220u));
    set32(c.r[3], c.r[2].w[0] + 80u);
    c.f[7] = ld32((c.r[4].w[0] + 296u));
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 216u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[6] = ld32((c.r[4].w[0] + 304u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.f[3] = ld32((c.r[16].w[0] + 224u));
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[4] = ld32((c.r[16].w[0] + 240u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 236u));
    c.f[2] = ld32((c.r[16].w[0] + 248u));
    c.f[3] = ld32((c.r[16].w[0] + 256u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.f[1] = ld32((c.r[16].w[0] + 252u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 43;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 304u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C9C4u | kUnwind; return; } goto L_0036C9C4; } }
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 264u));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.f[20] = ld32((c.r[28].w[0] - 31944u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 424u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 268u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 428u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 272u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 432u), c.f[1]);
    st32((c.r[16].w[0] + 456u), c.f[0]);
    st32((c.r[16].w[0] + 440u), c.f[5]);
    st32((c.r[16].w[0] + 444u), c.f[5]);
    st32((c.r[16].w[0] + 448u), c.f[5]);
    c.budget -= 19;
L_0036CABC:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CACCu); set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0036CACCu) [[unlikely]] return; }
L_0036CACC:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CADCu); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0036CADCu) [[unlikely]] return; }
L_0036CADC:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 31940u));
    st32((c.r[17].w[0] + 96u), 0u);
    c.f[1] = 0u;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CABCu | kUnwind; return; } goto L_0036CABC; } }
    st32((c.r[16].w[0] + 460u), c.f[1]);
    st32((c.r[16].w[0] + 464u), c.f[1]);
    st32((c.r[16].w[0] + 468u), 0u);
    st32((c.r[16].w[0] + 532u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0036CB30:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 376u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 380u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB7Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_009C(c, 101u, depth + 1u); else { c.pc = 0x003731A0u; return; } if (c.pc != 0x0036CB7Cu) [[unlikely]] return; }
L_0036CB7C:
    set32(c.r[20], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CB8Cu); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_009C(c, 107u, depth + 1u); else { c.pc = 0x00373380u; return; } if (c.pc != 0x0036CB8Cu) [[unlikely]] return; }
L_0036CB8C:
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036CBB4; } }
L_0036CB98:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CB98u | kUnwind; return; } goto L_0036CB98; } }
L_0036CBB4:
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[3], c.r[29].w[0] + 320u);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    set32(c.r[2], 0u + 16u);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 344u), c.f[0]);  if (t) { goto L_0036CBF4; } }
L_0036CBD8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CBD8u | kUnwind; return; } goto L_0036CBD8; } }
L_0036CBF4:
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[29].w[0] + 364u));
    set32(c.r[2], 0u + 16u);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 324u), c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[3]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 328u), c.f[0]);  if (t) { goto L_0036CC50; } }
L_0036CC34:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CC34u | kUnwind; return; } goto L_0036CC34; } }
L_0036CC50:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[2], 0u + 16u);
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[29].w[0] + 304u), c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 312u), c.f[0]);  if (t) { goto L_0036CCA4; } }
L_0036CC88:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CC88u | kUnwind; return; } goto L_0036CC88; } }
L_0036CCA4:
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[3], c.r[29].w[0] + 272u);
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[2], 0u + 16u);
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 296u), c.f[0]);  if (t) { goto L_0036CD10; } }
L_0036CCF4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CCF4u | kUnwind; return; } goto L_0036CCF4; } }
L_0036CD10:
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[2], 0u + 16u);
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 280u), c.f[0]);  if (t) { goto L_0036CD7C; } }
L_0036CD60:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CD60u | kUnwind; return; } goto L_0036CD60; } }
L_0036CD7C:
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[2], 0u + 16u);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_0036CDBC; } }
L_0036CDA0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CDA0u | kUnwind; return; } goto L_0036CDA0; } }
L_0036CDBC:
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.f[3] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 304u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 344u));
    c.f[5] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 31928u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[8] = 0u;
    c.budget -= 24;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = ld32((c.r[29].w[0] + 380u));  goto L_0036D28C; }
    c.f[7] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.f[0] = fp::mul(c.f[7], c.f[0]);
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[5] = ld32((c.r[29].w[0] + 360u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 364u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[20] = fp::add(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[8]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[6] = ld32((c.r[29].w[0] + 352u));  if (t) { goto L_0036D05C; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE68u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x0036CE68u) [[unlikely]] return; }
L_0036CE68:
    c.f[5] = ld32((c.r[29].w[0] + 232u));
    c.r[4].d[0] = c.r[22].d[0] & 65535ull;
    c.f[7] = ld32((c.r[29].w[0] + 308u));
    c.f[8] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::mul(c.f[7], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 380u));
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.facc = fp::mul(c.f[4], c.f[8]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[7] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[0] = fp::mul(c.f[4], c.f[3]);
    c.budget -= 26;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[29].w[0] + 224u), c.f[7]);  if (t) { goto L_0036CED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036D43C; } }
L_0036CED8:
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 292u));
    c.f[5] = ld32((c.r[29].w[0] + 296u));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    st32((c.r[17].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 228u));
    c.f[3] = c.f[20] & fp::kAbs;
    c.f[4] = fp::add(c.f[6], c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 232u));
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[4]);
    st32((c.r[17].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[17].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[17].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.f[4]);  if (t) { goto L_0036CF3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036D43C; } }
L_0036CF3C:
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 296u));
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    st32((c.r[2].w[0]), c.f[5]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.f[4] = fp::add(c.f[6], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.f[4]);  if (t) { goto L_0036CF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036D43C; } }
L_0036CF98:
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[3], c.r[16].w[0] << 1);
    c.f[4] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[29].w[0] + 292u));
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 296u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 228u));
    c.f[4] = fp::sub(c.f[7], c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 232u));
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    st32((c.r[2].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.f[4]);  if (t) { goto L_0036D004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036D43C; } }
L_0036D004:
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[6] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[2], 0u + 4u);
    c.f[2] = fp::sub(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[6], c.f[1]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 32u), c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.f[0]);  if (t) { goto L_0036D43C; } }
L_0036D05C:
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = fp::mul(c.f[7], c.f[0]);
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[20] = fp::add(c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[8]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0036D43C; }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D098u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x0036D098u) [[unlikely]] return; }
L_0036D098:
    c.f[5] = ld32((c.r[29].w[0] + 216u));
    c.r[4].d[0] = c.r[22].d[0] & 65535ull;
    c.f[7] = ld32((c.r[29].w[0] + 308u));
    c.f[8] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::mul(c.f[7], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 380u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.facc = fp::mul(c.f[4], c.f[8]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[7] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[0] = fp::mul(c.f[4], c.f[3]);
    c.budget -= 26;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[29].w[0] + 208u), c.f[7]);  if (t) { goto L_0036D108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036D43C; } }
L_0036D108:
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    st32((c.r[17].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 212u));
    c.f[3] = c.f[20] & fp::kAbs;
    c.f[4] = fp::add(c.f[6], c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[4]);
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[17].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[17].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.f[4]);  if (t) { goto L_0036D16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036D43C; } }
L_0036D16C:
    c.f[5] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 276u));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 280u));
    c.f[5] = fp::add(c.f[5], c.f[2]);
    c.f[4] = fp::add(c.f[4], c.f[1]);
    st32((c.r[2].w[0]), c.f[5]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.f[4] = fp::add(c.f[6], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.f[4]);  if (t) { goto L_0036D1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036D43C; } }
L_0036D1C8:
    c.f[5] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[16].w[0] << 1);
    c.f[4] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[29].w[0] + 276u));
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 212u));
    c.f[4] = fp::sub(c.f[7], c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    st32((c.r[2].w[0] + 8u), c.f[4]);
    st32((c.r[2].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0] + 16u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 20u), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.f[4]);  if (t) { goto L_0036D234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036D43C; } }
L_0036D234:
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[6] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[2], 0u + 4u);
    c.f[2] = fp::sub(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[6], c.f[1]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 32u), c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.f[0]);  if (t) { goto L_0036D43C; } }
L_0036D28C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2ACu); set32(c.r[10], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_009B(c, 58u, depth + 1u); else { c.pc = 0x0036D5F0u; return; } if (c.pc != 0x0036D2ACu) [[unlikely]] return; }
L_0036D2AC:
    c.f[12] = ld32((c.r[29].w[0] + 380u));
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 160u);
    set32(c.r[9], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D2D4u); set32(c.r[10], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_009B(c, 58u, depth + 1u); else { c.pc = 0x0036D5F0u; return; } if (c.pc != 0x0036D2D4u) [[unlikely]] return; }
L_0036D2D4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0036D380; } }
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036D380; } }
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[3] = ld32((c.r[29].w[0] + 380u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    c.f[1] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 344u));
    c.f[5] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 38;
L_0036D380:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0036D43C; }
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.r[1].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036D438; } }
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[29].w[0] + 380u));
    mmi::mult(c, 0, c.r[21].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[4] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    c.f[1] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    st32((c.r[2].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 344u));
    c.f[5] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.budget -= 40;
L_0036D438:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0036D43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0036D470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 3872u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[11] = ld32((c.r[4].w[0] + 4u));
    c.f[10] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 3868u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[9] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] - 3864u));
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 3860u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] - 3856u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[6] = ld32((c.r[29].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 3852u));
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[7] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] - 3848u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 3844u));
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] - 3840u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.facc = fp::mul(c.f[11], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] - 3836u));
    c.f[1] = ld32((c.r[2].w[0] - 3832u));
    c.f[8] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 3828u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[7]));
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[9], c.f[8]));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[3] = ld32((c.r[29].w[0] + 16u));
    c.f[4] = ld32((c.r[29].w[0] + 24u));
    c.facc = fp::mul(c.f[11], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[4]));
    c.f[1] = ld32((c.r[29].w[0]));
    c.facc = fp::mul(c.f[11], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[1]));
    c.f[5] = c.f[5] & fp::kAbs;
    c.f[1] = c.f[3] & fp::kAbs;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[9], c.f[2]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 63;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[0] & fp::kAbs;  if (t) { goto L_0036D58C; } }
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036D58C; } }
    st32((c.r[5].w[0]), c.f[7]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.f[6]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[8]);  if (t) { goto L_0036D5E0; } }
L_0036D58C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[29].w[0]));  goto L_0036D5C8; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036D5C4; } }
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[0]);  if (t) { goto L_0036D5E0; } }
L_0036D5C4:
    c.f[2] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_0036D5C8:
    set32(c.r[2], 0u + 2u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_0036D5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036D5F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[8], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D62Cu); set32(c.r[9], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036D760u; return; } if (c.pc != 0x0036D62Cu) [[unlikely]] return; }
L_0036D62C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[19].w[0] + 4u));  goto L_0036D640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036D740; } }
L_0036D640:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[5] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[9] = ld32((c.r[29].w[0] + 100u));
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[7] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[8] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[8], c.f[6]));
    c.facc = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[8], c.f[8]));
    fpu_div(c, 2u, c.f[2], c.f[1]);
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 58;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[20], c.f[0]);  goto L_0036D730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036D740; } }
L_0036D730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D73Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036D73Cu) [[unlikely]] return; }
L_0036D73C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036D740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0036D760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31924u));
    c.f[13] = ld32((c.r[7].w[0] + 4u));
    c.f[12] = ld32((c.r[5].w[0] + 4u));
    c.f[9] = ld32((c.r[7].w[0]));
    c.f[8] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[12], c.f[13]);
    c.f[11] = ld32((c.r[7].w[0] + 8u));
    c.f[10] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[9]));
    c.f[0] = 0u;
    c.f[7] = fp::add(c.facc, fp::mul(c.f[10], c.f[11]));
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[1]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0036D7A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036D8C0; } }
L_0036D7A8:
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_div(c, 6u, c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[10], c.f[5]));
    c.f[1] = fp::mul(c.f[13], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[2]));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[11], c.f[3]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[3] = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[9]);
    c.f[4] = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[8]));
    st32((c.r[8].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[8].w[0] + 8u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    st32((c.r[9].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    st32((c.r[9].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8BCu); st32((c.r[9].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036D8BCu) [[unlikely]] return; }
L_0036D8BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036D8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036D8D0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    set32(c.r[5], c.r[29].w[0] + 496u);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D93Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0089(c, 186u, depth + 1u); else { c.pc = 0x00327470u; return; } if (c.pc != 0x0036D93Cu) [[unlikely]] return; }
L_0036D93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D944u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x0036D944u) [[unlikely]] return; }
L_0036D944:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D964u); st32((c.r[29].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x0036D964u) [[unlikely]] return; }
L_0036D964:
    c.f[27] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[28] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 524u);
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D980u); set32(c.r[6], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_009C(c, 101u, depth + 1u); else { c.pc = 0x003731A0u; return; } if (c.pc != 0x0036D980u) [[unlikely]] return; }
L_0036D980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D988u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 17u, depth + 1u); else { c.pc = 0x003706F0u; return; } if (c.pc != 0x0036D988u) [[unlikely]] return; }
L_0036D988:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D994u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x0036D994u) [[unlikely]] return; }
L_0036D994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D99Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x0036D99Cu) [[unlikely]] return; }
L_0036D99C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 500u));
    c.f[25] = ld32((c.r[2].w[0] + 4u));
    c.f[11] = fp::sub(c.f[0], c.f[27]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    c.f[26] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 504u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[12] = fp::sub(c.f[25], c.f[28]);
    c.f[8] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = ld32((c.r[29].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[8]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[13] = fp::sub(c.f[26], c.f[20]);  if (t) { goto L_0036DA20; } }
    c.f[0] = c.f[5] ^ fp::kSign;
    fpu_div(c, 8u, c.f[0], c.f[1]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_div(c, 9u, c.f[0], c.f[1]);
    fpu_div(c, 7u, c.f[4], c.f[1]);
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_div(c, 10u, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DA30; } }
L_0036DA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.f[8];
    c.f[7] = c.r[2].w[0];
    c.f[10] = c.f[8];
    c.budget -= 4;
L_0036DA30:
    c.facc = fp::mul(c.f[13], c.f[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[7]));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[12], c.f[10]));
    c.facc = fp::mul(c.f[11], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[7]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[13], c.f[8]));
    c.facc = fp::mul(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[7]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[11], c.f[9]));
    c.facc = fp::mul(c.f[12], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[8]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.facc = fp::mul(c.f[8], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[10], c.f[4]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[5]));
    c.f[23] = fp::sub(c.facc, fp::mul(c.f[8], c.f[3]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    c.f[1] = c.r[2].w[0];
    c.f[24] = fp::sub(c.facc, fp::mul(c.f[9], c.f[5]));
    c.f[31] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[30] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[30], c.f[24]);
    c.f[29] = fp::sub(c.f[24], c.f[31]);
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[29]) <= fp::key(c.f[6]));
    c.budget -= 37;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_0036E0FC; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E0FC; } }
    set32(c.r[3], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DAF8; } }
L_0036DADC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DADCu | kUnwind; return; } goto L_0036DADC; } }
L_0036DAF8:
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.f[10] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = fp::sub(c.f[24], c.f[24]);
    c.f[3] = fp::sub(c.f[22], c.f[1]);
    c.f[1] = fp::sub(c.f[23], c.f[10]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 524u));
    st32((c.r[29].w[0] + 472u), c.f[24]);
    c.f[1] = fp::add(c.f[2], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 184u), c.f[0]);  if (t) { goto L_0036E8DC; } }
    c.f[0] = c.f[22] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[9] = ld32((c.r[29].w[0] + 504u));  goto L_0036DF90; }
    c.f[0] = c.f[23] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DF8C; } }
    set32(c.r[3], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DB7C; } }
L_0036DB60:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DB60u | kUnwind; return; } goto L_0036DB60; } }
L_0036DB7C:
    set32(c.r[3], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DBA4; } }
L_0036DB88:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DB88u | kUnwind; return; } goto L_0036DB88; } }
L_0036DBA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0036DBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DBB8u);  if (depth < kMaxDepth) unit_008E(c, 192u, depth + 1u); else { c.pc = 0x0033B090u; return; } if (c.pc != 0x0036DBB8u) [[unlikely]] return; }
L_0036DBB8:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 448u), c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    st32((c.r[29].w[0] + 456u), c.f[0]);
    c.budget -= 6;
L_0036DBD0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 432u));  goto L_0036DBFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DBE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 192u, depth + 1u); else { c.pc = 0x0033B090u; return; } if (c.pc != 0x0036DBE0u) [[unlikely]] return; }
L_0036DBE0:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 432u), c.f[2]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.budget -= 7;
L_0036DBFC:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.f[3] = ld32((c.r[29].w[0] + 436u));
    c.f[2] = ld32((c.r[29].w[0] + 452u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 416u), c.f[4]);
    st32((c.r[29].w[0] + 420u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC30u); st32((c.r[29].w[0] + 424u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036DC30u) [[unlikely]] return; }
L_0036DC30:
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DC50u); st32((c.r[29].w[0] + 408u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036DC50u) [[unlikely]] return; }
L_0036DC50:
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.f[4] = ld32((c.r[29].w[0] + 416u));
    c.f[3] = ld32((c.r[29].w[0] + 400u));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[6] = ld32((c.r[29].w[0] + 424u));
    c.f[5] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[29].w[0] + 368u);  goto L_0036DE08; }
    set32(c.r[3], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DCAC; } }
L_0036DC90:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DC90u | kUnwind; return; } goto L_0036DC90; } }
L_0036DCAC:
    c.f[8] = ld32((c.r[29].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    c.f[9] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.facc = fp::mul(c.f[9], c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 508u));
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[4] = ld32((c.r[29].w[0] + 500u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD44u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036DD44u) [[unlikely]] return; }
L_0036DD44:
    c.f[10] = ld32((c.r[29].w[0] + 504u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.f[8] = ld32((c.r[29].w[0] + 496u));
    c.f[9] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::mul(c.f[31], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[8]));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[23], c.f[9]));
    c.facc = fp::mul(c.f[22], c.f[9]);
    c.f[6] = ld32((c.r[29].w[0] + 500u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[8]));
    c.f[0] = fp::sub(c.f[21], c.f[29]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[31], c.f[6]));
    c.facc = fp::mul(c.f[23], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[8]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[22], c.f[10]));
    c.facc = fp::mul(c.f[23], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[31], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[3] = fp::add(c.f[1], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[2] = fp::add(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[7]));
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] <= 0; c.f[1] = fp::add(c.f[1], c.f[20]);  if (t) { goto L_0036DE00; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036DE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036DE08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036DE2C; } }
L_0036DE10:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036DE10u | kUnwind; return; } goto L_0036DE10; } }
L_0036DE2C:
    c.f[8] = ld32((c.r[29].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.f[9] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.facc = fp::mul(c.f[9], c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 508u));
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[4] = ld32((c.r[29].w[0] + 500u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DEC4u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036DEC4u) [[unlikely]] return; }
L_0036DEC4:
    c.f[10] = ld32((c.r[29].w[0] + 504u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.f[8] = ld32((c.r[29].w[0] + 496u));
    c.f[9] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::mul(c.f[30], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[8]));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[23], c.f[9]));
    c.facc = fp::mul(c.f[22], c.f[9]);
    c.f[6] = ld32((c.r[29].w[0] + 500u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[8]));
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[30], c.f[6]));
    c.facc = fp::mul(c.f[23], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[8]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[22], c.f[10]));
    c.facc = fp::mul(c.f[23], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[30], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[3] = fp::add(c.f[1], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[2] = fp::add(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[2].sd[0] <= 0; c.f[1] = fp::add(c.f[1], c.f[20]);  if (t) { goto L_0036DF84; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036DF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036DF8C:
    c.f[9] = ld32((c.r[29].w[0] + 504u));
    c.budget -= 1;
L_0036DF90:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[7] = ld32((c.r[29].w[0] + 496u));
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    c.facc = fp::mul(c.f[24], c.f[9]);
    c.f[8] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 500u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[10], c.f[8]));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[24], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[7]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[0], c.f[9]));
    c.facc = fp::mul(c.f[10], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[24], c.f[8]));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[1] = fp::add(c.f[0], c.f[27]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[6]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[3]));
    c.facc = fp::mul(c.f[8], c.f[2]);
    c.f[2] = fp::add(c.f[0], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    st32((c.r[29].w[0] + 480u), c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[25], c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = fp::sub(c.f[26], c.f[1]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E03Cu); st32((c.r[29].w[0] + 360u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E03Cu) [[unlikely]] return; }
L_0036E03C:
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[29].w[0] + 352u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.f[3] = ld32((c.r[29].w[0] + 356u));
    c.f[5] = fp::sub(c.f[0], c.f[21]);
    c.f[1] = fp::add(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = ld32((c.r[29].w[0] + 360u));
    c.f[6] = c.r[3].w[0];
    c.f[7] = fp::sub(c.f[5], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[4], c.f[7]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[4] = 0u;
    c.f[3] = fp::mul(c.f[3], c.f[7]);
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.f[4], c.f[25]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.facc = fp::add(c.f[4], c.f[26]);
    c.budget -= 24;
    { const bool t = c.r[2].sd[0] <= 0; c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));  if (t) { goto L_0036E0F4; } }
    st32((c.r[17].w[0] + 32u), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[5]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 22;
L_0036E0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036E0FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[29]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E4EC; } }
    fpu_compare(c, fp::key(c.f[29]) < fp::key(c.f[21]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0036E8E0; }
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E144; } }
L_0036E128:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E128u | kUnwind; return; } goto L_0036E128; } }
L_0036E144:
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[3] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = fp::sub(c.f[24], c.f[24]);
    c.f[2] = fp::sub(c.f[23], c.f[2]);
    c.f[3] = fp::sub(c.f[22], c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    st32((c.r[29].w[0] + 344u), c.f[24]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[29].w[0] + 304u);  goto L_0036E308; }
    set32(c.r[3], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E1AC; } }
L_0036E190:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E190u | kUnwind; return; } goto L_0036E190; } }
L_0036E1AC:
    c.f[8] = ld32((c.r[29].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    c.f[9] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::mul(c.f[9], c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 508u));
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[4] = ld32((c.r[29].w[0] + 500u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E244u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E244u) [[unlikely]] return; }
L_0036E244:
    c.f[10] = ld32((c.r[29].w[0] + 504u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.f[8] = ld32((c.r[29].w[0] + 496u));
    c.f[9] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::mul(c.f[31], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[8]));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[23], c.f[9]));
    c.facc = fp::mul(c.f[22], c.f[9]);
    c.f[6] = ld32((c.r[29].w[0] + 500u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[8]));
    c.f[0] = fp::sub(c.f[21], c.f[29]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[31], c.f[6]));
    c.facc = fp::mul(c.f[23], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[8]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[22], c.f[10]));
    c.facc = fp::mul(c.f[23], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[31], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[3] = fp::add(c.f[1], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[2] = fp::add(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[7]));
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] <= 0; c.f[1] = fp::add(c.f[1], c.f[20]);  if (t) { goto L_0036E300; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036E300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036E308:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E32C; } }
L_0036E310:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E310u | kUnwind; return; } goto L_0036E310; } }
L_0036E32C:
    c.f[1] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 296u), 0u);
    st32((c.r[29].w[0] + 312u), c.f[31]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E354u); st32((c.r[29].w[0] + 292u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E354u) [[unlikely]] return; }
L_0036E354:
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[5] = ld32((c.r[29].w[0] + 524u));
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 292u));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[0] = c.f[31];
    c.f[9] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = fp::sub(c.f[9], c.f[23]);
    c.f[10] = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::sub(c.f[7], c.f[22]);
    c.f[0] = fp::sub(c.f[10], c.f[24]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[24] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[21]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E8DC; } }
    c.f[5] = ld32((c.r[29].w[0] + 504u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    c.f[3] = ld32((c.r[29].w[0] + 496u));
    c.f[0] = fp::mul(c.f[10], c.f[5]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    c.f[4] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[8] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[7], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[10], c.f[1]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[8] = fp::mul(c.f[9], c.f[5]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.facc = fp::add(c.f[6], c.f[9]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[7], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[7] = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[5], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[22] = fp::add(c.f[7], c.f[27]);
    c.f[7] = ld32((c.r[29].w[0] + 168u));
    c.f[7] = fp::sub(c.f[22], c.f[7]);
    st32((c.r[29].w[0] + 272u), c.f[7]);
    c.f[7] = fp::mul(c.f[5], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::mul(c.f[4], c.f[8]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[1], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[23] = fp::add(c.f[4], c.f[28]);
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[23], c.f[25]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[26]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4A4u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E4A4u) [[unlikely]] return; }
L_0036E4A4:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.f[0] = fp::sub(c.f[21], c.f[24]);  if (t) { goto L_0036E4E4; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[22]);
    st32((c.r[17].w[0] + 4u), c.f[23]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036E4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036E4EC:
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[30]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E8DC; } }
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E8DC; } }
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E530; } }
L_0036E514:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E514u | kUnwind; return; } goto L_0036E514; } }
L_0036E530:
    c.f[2] = ld32((c.r[29].w[0] + 260u));
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = fp::sub(c.f[24], c.f[24]);
    c.f[2] = fp::sub(c.f[23], c.f[2]);
    c.f[3] = fp::sub(c.f[22], c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    st32((c.r[29].w[0] + 264u), c.f[24]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[29].w[0] + 224u);  goto L_0036E6F8; }
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E598; } }
L_0036E57C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E57Cu | kUnwind; return; } goto L_0036E57C; } }
L_0036E598:
    c.f[8] = ld32((c.r[29].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.f[9] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.facc = fp::mul(c.f[9], c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 508u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[4] = ld32((c.r[29].w[0] + 500u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[7], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E630u); st32((c.r[29].w[0] + 488u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E630u) [[unlikely]] return; }
L_0036E630:
    c.f[10] = ld32((c.r[29].w[0] + 504u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.f[8] = ld32((c.r[29].w[0] + 496u));
    c.f[9] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::mul(c.f[30], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[8]));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[23], c.f[9]));
    c.facc = fp::mul(c.f[22], c.f[9]);
    c.f[6] = ld32((c.r[29].w[0] + 500u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[8]));
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[30], c.f[6]));
    c.facc = fp::mul(c.f[23], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[8]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[22], c.f[10]));
    c.facc = fp::mul(c.f[23], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[30], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[3] = fp::add(c.f[1], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[9], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[2] = fp::add(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[2].sd[0] <= 0; c.f[1] = fp::add(c.f[1], c.f[20]);  if (t) { goto L_0036E6F0; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036E6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036E6F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036E71C; } }
L_0036E700:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036E700u | kUnwind; return; } goto L_0036E700; } }
L_0036E71C:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 232u), c.f[30]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E744u); st32((c.r[29].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E744u) [[unlikely]] return; }
L_0036E744:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[5] = ld32((c.r[29].w[0] + 524u));
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[0] = c.f[30];
    c.f[9] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = fp::sub(c.f[9], c.f[23]);
    c.f[10] = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::sub(c.f[7], c.f[22]);
    c.f[0] = fp::sub(c.f[10], c.f[24]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[24] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[21]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E8DC; } }
    c.f[5] = ld32((c.r[29].w[0] + 504u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    c.f[3] = ld32((c.r[29].w[0] + 496u));
    c.f[0] = fp::mul(c.f[10], c.f[5]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    c.f[4] = ld32((c.r[29].w[0] + 508u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[8] = fp::mul(c.f[9], c.f[1]);
    c.f[0] = fp::mul(c.f[7], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[9], c.f[4]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[10], c.f[1]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[8] = fp::mul(c.f[9], c.f[5]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.facc = fp::add(c.f[6], c.f[9]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[7], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[7] = fp::mul(c.f[1], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[5], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[22] = fp::add(c.f[7], c.f[27]);
    c.f[7] = ld32((c.r[29].w[0] + 168u));
    c.f[7] = fp::sub(c.f[22], c.f[7]);
    st32((c.r[29].w[0] + 192u), c.f[7]);
    c.f[7] = fp::mul(c.f[5], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[7] = fp::mul(c.f[4], c.f[8]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::add(c.f[6], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[1], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[23] = fp::add(c.f[4], c.f[28]);
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[23], c.f[25]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[26]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E894u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x0036E894u) [[unlikely]] return; }
L_0036E894:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.f[0] = fp::sub(c.f[21], c.f[24]);  if (t) { goto L_0036E8D4; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0]), c.f[22]);
    st32((c.r[17].w[0] + 4u), c.f[23]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 13;
L_0036E8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0036E8E0; } }
L_0036E8DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036E8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_0036E940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E950:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[28].w[0] - 30520u));
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 30516u));
    c.f[3] = ld32((c.r[28].w[0] - 30540u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 4u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 30524u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.f[5]);
    st32((c.r[4].w[0] + 72u), c.f[4]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.f[3]);  c.pc = t; return; }
L_0036E9F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[16], c.r[20].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[18], c.r[19].w[0] + 4u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + c.r[16].w[0]);  if (t) { goto L_0036EB84; } }
L_0036EA68:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0036EB30; } }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);  goto L_0036EB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0036EAE4; } }
L_0036EA98:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[20].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0036EAE4; }
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 10u));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 4u));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0036EAF4; }
    c.r[5].d[0] = ld16((c.r[7].w[0] + 10u));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036EAE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EAF4; } }
L_0036EAE0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0036EAE4:
    c.r[4].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EA98u | kUnwind; return; } goto L_0036EA98; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0036EAF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036EB1C; } }
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB1Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 174u, depth + 1u); else { c.pc = 0x0036FD50u; return; } if (c.pc != 0x0036EB1Cu) [[unlikely]] return; }
L_0036EB1C:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0036EB20:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036EB40; } }
L_0036EB30:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036EB40:
    c.r[3].d[0] = ld16((c.r[23].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[23].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 172u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 174u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[19], c.r[19].w[0] + 4u);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 17;
L_0036EB84:
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[18].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EA68u | kUnwind; return; } goto L_0036EA68; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0036EBD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[5].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[20], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[19], c.r[20].w[0] - 4u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);  if (t) { goto L_0036ED00; } }
L_0036EC3C:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[7], ld32((c.r[22].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_0036ECAC; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  goto L_0036EC9C; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC84u); set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 172u, depth + 1u); else { c.pc = 0x0036FCB0u; return; } if (c.pc != 0x0036EC84u) [[unlikely]] return; }
L_0036EC84:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036EC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC98u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 169u, depth + 1u); else { c.pc = 0x0036FBD0u; return; } if (c.pc != 0x0036EC98u) [[unlikely]] return; }
L_0036EC98:
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0036EC9C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036ECBC; } }
L_0036ECAC:
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036ECBC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 140u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 142u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[20], c.r[20].w[0] - 4u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 17;
L_0036ED00:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EC3Cu | kUnwind; return; } goto L_0036EC3C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036ED40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[5].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[20], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[19], c.r[20].w[0] + 4u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);  if (t) { goto L_0036EE70; } }
L_0036EDAC:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[7], ld32((c.r[22].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_0036EE1C; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  goto L_0036EE0C; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EDF4u); set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 172u, depth + 1u); else { c.pc = 0x0036FCB0u; return; } if (c.pc != 0x0036EDF4u) [[unlikely]] return; }
L_0036EDF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036EE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE08u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 169u, depth + 1u); else { c.pc = 0x0036FBD0u; return; } if (c.pc != 0x0036EE08u) [[unlikely]] return; }
L_0036EE08:
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0036EE0C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036EE2C; } }
L_0036EE1C:
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036EE2C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 140u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 142u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[20], c.r[20].w[0] + 4u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 17;
L_0036EE70:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EDACu | kUnwind; return; } goto L_0036EDAC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036EEB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[22], c.r[20].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[18], c.r[19].w[0] - 4u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[17].w[0] + c.r[22].w[0]);  if (t) { goto L_0036F034; } }
L_0036EF28:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0036EFE0; } }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);  goto L_0036EFD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0036EFA4; } }
L_0036EF58:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[20].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0036EFA4; }
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 10u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0036EFB4; }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 10u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036EFA0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EFB4; } }
L_0036EFA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0036EFA4:
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EF58u | kUnwind; return; } goto L_0036EF58; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0036EFB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036EFCC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EFCCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 174u, depth + 1u); else { c.pc = 0x0036FD50u; return; } if (c.pc != 0x0036EFCCu) [[unlikely]] return; }
L_0036EFCC:
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0036EFD0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036EFF0; } }
L_0036EFE0:
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0036EFF0:
    c.r[3].d[0] = ld16((c.r[23].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[23].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 172u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 174u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[19], c.r[19].w[0] - 4u);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] - 4u);
    c.budget -= 17;
L_0036F034:
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[18].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EF28u | kUnwind; return; } goto L_0036EF28; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0036F080:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[29].w[0] + 136u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0D0u); set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_009B(c, 137u, depth + 1u); else { c.pc = 0x0036F530u; return; } if (c.pc != 0x0036F0D0u) [[unlikely]] return; }
L_0036F0D0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0E4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 137u, depth + 1u); else { c.pc = 0x0036F530u; return; } if (c.pc != 0x0036F0E4u) [[unlikely]] return; }
L_0036F0E4:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    c.budget -= 2;
L_0036F0EC:
    set32(c.r[5], c.r[20].w[0] << 1);
    set32(c.r[10], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    c.r[18].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[19].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[5], c.r[3].w[0] + 128u);
    c.r[8].d[0] = ld16((c.r[3].w[0] + 136u));
    set32(c.r[7], ld32((c.r[10].w[0] + 100u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[17], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 100u)));
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 24;
    { const bool t = c.r[17].sd[0] >= 0; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0036F160; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F160u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 109u, depth + 1u); else { c.pc = 0x0036EEB0u; return; } if (c.pc != 0x0036F160u) [[unlikely]] return; }
L_0036F160:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0036F17C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F17Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 97u, depth + 1u); else { c.pc = 0x0036E9F0u; return; } if (c.pc != 0x0036F17Cu) [[unlikely]] return; }
L_0036F17C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0036F198; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F198u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 105u, depth + 1u); else { c.pc = 0x0036ED40u; return; } if (c.pc != 0x0036F198u) [[unlikely]] return; }
L_0036F198:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0036F1B8; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F1B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 101u, depth + 1u); else { c.pc = 0x0036EBD0u; return; } if (c.pc != 0x0036F1B4u) [[unlikely]] return; }
L_0036F1B4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0036F1B8:
    c.r[3].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F0ECu | kUnwind; return; } goto L_0036F0EC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036F1F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[20].d[0] & 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F240u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 182u, depth + 1u); else { c.pc = 0x0036FF50u; return; } if (c.pc != 0x0036F240u) [[unlikely]] return; }
L_0036F240:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    c.budget -= 4;
L_0036F250:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F250u | kUnwind; return; } goto L_0036F250; } }
    set32(c.r[23], c.r[7].w[0] << 2);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 3;
L_0036F29C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[22], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[22].w[0] + 10u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0] + 100u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2D0u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009B(c, 97u, depth + 1u); else { c.pc = 0x0036E9F0u; return; } if (c.pc != 0x0036F2D0u) [[unlikely]] return; }
L_0036F2D0:
    c.r[6].d[0] = ld16((c.r[22].w[0] + 4u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2F4u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009B(c, 105u, depth + 1u); else { c.pc = 0x0036ED40u; return; } if (c.pc != 0x0036F2F4u) [[unlikely]] return; }
L_0036F2F4:
    set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[4].w[0] - 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st16((c.r[4].w[0] - 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F29Cu | kUnwind; return; } goto L_0036F29C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 92u)));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 96u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[21].w[0] + 96u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036F360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F398u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_009B(c, 137u, depth + 1u); else { c.pc = 0x0036F530u; return; } if (c.pc != 0x0036F398u) [[unlikely]] return; }
L_0036F398:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 137u, depth + 1u); else { c.pc = 0x0036F530u; return; } if (c.pc != 0x0036F3ACu) [[unlikely]] return; }
L_0036F3AC:
    c.r[17].d[0] = ld16((c.r[18].w[0] + 96u));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    st16((c.r[18].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[7].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] << 2);
    c.budget -= 23;
L_0036F408:
    set32(c.r[9], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[11], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[13], c.r[11].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[16].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[11].d[0] = ld16((c.r[12].w[0] + 10u));
    c.r[9].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 2u);
    st16((c.r[12].w[0] + 10u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[14], c.r[11].w[0] + c.r[5].w[0]);
    set32(c.r[12], c.r[11].w[0] + c.r[4].w[0]);
    c.r[11].d[0] = ld16((c.r[14].w[0]));
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[14].w[0] + 2u));
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[2].w[0] + 100u)));
    c.r[12].d[0] = ld16((c.r[13].w[0] + 88u));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[11].w[0] - 4u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[11], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[11].w[0] - 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[11], ld32((c.r[2].w[0] + 100u)));
    c.r[12].d[0] = ld16((c.r[13].w[0] + 80u));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[10].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 36;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[10].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F408u | kUnwind; return; } goto L_0036F408; } }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 109u, depth + 1u); else { c.pc = 0x0036EEB0u; return; } if (c.pc != 0x0036F4ACu) [[unlikely]] return; }
L_0036F4AC:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 101u, depth + 1u); else { c.pc = 0x0036EBD0u; return; } if (c.pc != 0x0036F4C0u) [[unlikely]] return; }
L_0036F4C0:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 109u, depth + 1u); else { c.pc = 0x0036EEB0u; return; } if (c.pc != 0x0036F4D4u) [[unlikely]] return; }
L_0036F4D4:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 101u, depth + 1u); else { c.pc = 0x0036EBD0u; return; } if (c.pc != 0x0036F4E8u) [[unlikely]] return; }
L_0036F4E8:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4FCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 109u, depth + 1u); else { c.pc = 0x0036EEB0u; return; } if (c.pc != 0x0036F4FCu) [[unlikely]] return; }
L_0036F4FC:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F510u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_009B(c, 101u, depth + 1u); else { c.pc = 0x0036EBD0u; return; } if (c.pc != 0x0036F510u) [[unlikely]] return; }
L_0036F510:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036F530:
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_0036F54C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0036F54C:
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[4].w[0] + 40u));  goto L_0036F564; }
    c.f[4] = c.f[0];
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 2;
L_0036F564:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[4].w[0] + 48u));  goto L_0036F578; }
    c.f[5] = c.f[0];
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 2;
L_0036F578:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 52u));  goto L_0036F58C; }
    c.f[2] = c.f[0];
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.budget -= 2;
L_0036F58C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 56u));  goto L_0036F5A0; }
    c.f[4] = c.f[0];
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 2;
L_0036F5A0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::sub(c.f[2], c.f[1]);  goto L_0036F5B4; }
    c.f[5] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_0036F5B4:
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[3] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 65532ull;
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] & 65532ull;
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65532ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0036F620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036F6B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 20976u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 5;
L_0036F654:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F668u); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0036F668u) [[unlikely]] return; }
L_0036F668:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F654u | kUnwind; return; } goto L_0036F654; }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F68Cu); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0036F68Cu) [[unlikely]] return; }
L_0036F68C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 3u, depth + 1u); else { c.pc = 0x00370080u; return; } if (c.pc != 0x0036F698u) [[unlikely]] return; }
L_0036F698:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0036F6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F6B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0036F6B0u) [[unlikely]] return; }
L_0036F6B0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0036F6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036F6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F704u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 6u, depth + 1u); else { c.pc = 0x00370100u; return; } if (c.pc != 0x0036F704u) [[unlikely]] return; }
L_0036F704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 20976u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[2], c.r[17].w[0] << 2);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[28].w[0] - 30532u));
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 30528u));
    c.f[3] = ld32((c.r[28].w[0] - 30540u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 4u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 30536u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[5]);
    st32((c.r[16].w[0] + 72u), c.f[4]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F7E8u); st32((c.r[16].w[0] + 76u), c.f[3]);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0036F7E8u) [[unlikely]] return; }
L_0036F7E8:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 84u), 0u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 96u));  if (t) { goto L_0036F820; } }
L_0036F804:
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0036F820:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F804u | kUnwind; return; } goto L_0036F804; }
    set32(c.r[4], c.r[17].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
L_0036F850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0036F858u) [[unlikely]] return; }
L_0036F858:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F850u | kUnwind; return; } goto L_0036F850; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = 0ull | 65535ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0036F888:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F888u | kUnwind; return; } goto L_0036F888; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036F900:
    c.budget -= 2;
    { c.r[5].d[0] = ld16((c.r[5].w[0] + 16u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F080u | kUnwind; return; } goto L_0036F080; }
L_0036F910:
    c.budget -= 2;
    { c.r[5].d[0] = ld16((c.r[5].w[0] + 16u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F1F0u | kUnwind; return; } goto L_0036F1F0; }
L_0036F920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F938u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 127u, depth + 1u); else { c.pc = 0x0036F360u; return; } if (c.pc != 0x0036F938u) [[unlikely]] return; }
L_0036F938:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036F960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F998u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F998u) [[unlikely]] return; }
L_0036F998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0036F9C8; } }
L_0036F9A0:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[25], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F9C4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F9C4u) [[unlikely]] return; }
L_0036F9C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0036F9C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F9A0u | kUnwind; return; } goto L_0036F9A0; }
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036FA00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FA4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FA4Cu) [[unlikely]] return; }
L_0036FA4C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FA60u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FA60u) [[unlikely]] return; }
L_0036FA60:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[17].w[0] << 2);  if (t) { goto L_0036FB90; } }
L_0036FA6C:
    set32(c.r[4], c.r[18].w[0] << 4);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0036FB10; } }
    set32(c.r[3], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[22], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[22].w[0])));  goto L_0036FAAC; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FAA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FAA4u) [[unlikely]] return; }
L_0036FAA4:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_0036FAAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0036FB90; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 4u)));  goto L_0036FAE4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FADCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FADCu) [[unlikely]] return; }
L_0036FADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FB8C; } }
L_0036FAE4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FAF8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FAF8u) [[unlikely]] return; }
L_0036FAF8:
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FB8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.f[0]);  if (t) { goto L_0036FB8C; } }
L_0036FB10:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB28u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FB28u) [[unlikely]] return; }
L_0036FB28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036FB8C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 4u)));  goto L_0036FB64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB5Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FB5Cu) [[unlikely]] return; }
L_0036FB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FB8C; } }
L_0036FB64:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB78u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FB78u) [[unlikely]] return; }
L_0036FB78:
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FB8C; } }
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_0036FB8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0036FB90:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FA6Cu | kUnwind; return; } goto L_0036FA6C; }
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0036FBD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 10;
L_0036FBF8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 8u);  if (t) { goto L_0036FC24; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0036FC24; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FC20u) [[unlikely]] return; }
L_0036FC20:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0036FC24:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FBF8u | kUnwind; return; } goto L_0036FBF8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[17].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0036FC5C; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0036FC5C:
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0036FCB0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[8].d[0] = ld64((c.r[2].w[0] + 64u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 64u));
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_0036FCE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036FD40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0036FCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] - 1u);  if (t) { goto L_0036FD34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_0036FCF4:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0036FD14; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0036FD40; } }
L_0036FD14:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[8], c.r[8].w[0] - 1u);  goto L_0036FD34; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0036FD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036FD40; } }
L_0036FD30:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_0036FD34:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FCF4u | kUnwind; return; } goto L_0036FCF4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 64u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 72u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[7].d[0] = ld64((c.r[7].w[0] + 64u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036FE20; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036FE20; } }
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
L_0036FDA0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FDA0u | kUnwind; return; } goto L_0036FDA0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_0036FDEC:
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FDECu | kUnwind; return; } goto L_0036FDEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0036FE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036FE30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0036FEC8; } }
L_0036FE60:
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0036FE84; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0036FEC8; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FE84:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0036FE88:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + 8u);  if (t) { goto L_0036FEB4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0]), 0u);  goto L_0036FEB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FEB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FEB0u) [[unlikely]] return; }
L_0036FEB0:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_0036FEB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FE88u | kUnwind; return; } goto L_0036FE88; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0036FEC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FE60u | kUnwind; return; } goto L_0036FE60; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036FF00:
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[5].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[5].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_0036FF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { [[clang::musttail]] return unit_009C(c, 2u, depth); } }
L_0036FF84:
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0036FFA8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  [[clang::musttail]] return unit_009C(c, 2u, depth); }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FFA8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0036FFAC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + 8u);  if (t) { goto L_0036FFD8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0]), 0u);  goto L_0036FFD8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FFD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FFD4u) [[unlikely]] return; }
L_0036FFD4:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_0036FFD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036FFACu | kUnwind; return; } goto L_0036FFAC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[16].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.budget -= 6;
    [[clang::musttail]] return unit_009C(c, 1u, depth);
}

}
