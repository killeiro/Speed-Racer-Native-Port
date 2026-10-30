#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0065[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0065(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00294000;
    case 2u: goto L_00294004;
    case 3u: goto L_00294014;
    case 4u: goto L_00294030;
    case 5u: goto L_00294040;
    case 6u: goto L_00294050;
    case 7u: goto L_0029406C;
    case 8u: goto L_0029407C;
    case 9u: goto L_0029408C;
    case 10u: goto L_002940A8;
    case 11u: goto L_002940B8;
    case 12u: goto L_002940C8;
    case 13u: goto L_002940E4;
    case 14u: goto L_002940F4;
    case 15u: goto L_00294104;
    case 16u: goto L_00294120;
    case 17u: goto L_00294130;
    case 18u: goto L_00294140;
    case 19u: goto L_0029415C;
    case 20u: goto L_0029416C;
    case 21u: goto L_0029417C;
    case 22u: goto L_00294198;
    case 23u: goto L_002941A8;
    case 24u: goto L_002941B8;
    case 25u: goto L_002942B8;
    case 26u: goto L_00294408;
    case 27u: goto L_00294484;
    case 28u: goto L_0029448C;
    case 29u: goto L_00294504;
    case 30u: goto L_0029454C;
    case 31u: goto L_00294564;
    case 32u: goto L_00294584;
    case 33u: goto L_00294594;
    case 34u: goto L_002945B0;
    case 35u: goto L_002945C4;
    case 36u: goto L_002945D4;
    case 37u: goto L_002945E4;
    case 38u: goto L_0029469C;
    case 39u: goto L_002947E4;
    case 40u: goto L_00294860;
    case 41u: goto L_00294868;
    case 42u: goto L_002948E0;
    case 43u: goto L_0029491C;
    case 44u: goto L_00294940;
    case 45u: goto L_00294960;
    case 46u: goto L_00294970;
    case 47u: goto L_0029498C;
    case 48u: goto L_002949A0;
    case 49u: goto L_002949B0;
    case 50u: goto L_00294A4C;
    case 51u: goto L_00294BB0;
    case 52u: goto L_00294C2C;
    case 53u: goto L_00294C34;
    case 54u: goto L_00294CAC;
    case 55u: goto L_00294CF4;
    case 56u: goto L_00294D0C;
    case 57u: goto L_00294D2C;
    case 58u: goto L_00294D3C;
    case 59u: goto L_00294D58;
    case 60u: goto L_00294D6C;
    case 61u: goto L_00294D7C;
    case 62u: goto L_00294D8C;
    case 63u: goto L_00294E44;
    case 64u: goto L_00294FA0;
    case 65u: goto L_0029501C;
    case 66u: goto L_00295024;
    case 67u: goto L_0029509C;
    case 68u: goto L_002950D8;
    case 69u: goto L_002950FC;
    case 70u: goto L_0029511C;
    case 71u: goto L_0029512C;
    case 72u: goto L_00295148;
    case 73u: goto L_0029515C;
    case 74u: goto L_0029516C;
    case 75u: goto L_00295208;
    case 76u: goto L_0029532C;
    case 77u: goto L_00295474;
    case 78u: goto L_0029557C;
    case 79u: goto L_00295684;
    case 80u: goto L_00295784;
    case 81u: goto L_0029588C;
    case 82u: goto L_00295994;
    case 83u: goto L_00295AC8;
    case 84u: goto L_00295BD4;
    case 85u: goto L_00295D24;
    case 86u: goto L_00295E78;
    case 87u: goto L_00295F80;
    case 88u: goto L_002960D4;
    case 89u: goto L_002961DC;
    case 90u: goto L_0029630C;
    case 91u: goto L_00296420;
    case 92u: goto L_00296520;
    case 93u: goto L_0029664C;
    case 94u: goto L_002967B4;
    case 95u: goto L_002968B4;
    case 96u: goto L_002968BC;
    case 97u: goto L_00296944;
    case 98u: goto L_0029696C;
    case 99u: goto L_002969A0;
    case 100u: goto L_002969EC;
    case 101u: goto L_002969FC;
    case 102u: goto L_00296A10;
    case 103u: goto L_00296A20;
    case 104u: goto L_00296A34;
    case 105u: goto L_00296AE8;
    case 106u: goto L_00296BF0;
    case 107u: goto L_00296C6C;
    case 108u: goto L_00296D24;
    case 109u: goto L_00296DA8;
    case 110u: goto L_00296E20;
    case 111u: goto L_00296E30;
    case 112u: goto L_00296E4C;
    case 113u: goto L_00296E60;
    case 114u: goto L_00296E70;
    case 115u: goto L_00296E8C;
    case 116u: goto L_00296EB8;
    case 117u: goto L_00296ED4;
    case 118u: goto L_00296EE4;
    case 119u: goto L_00296F00;
    case 120u: goto L_00296F14;
    case 121u: goto L_00296F24;
    case 122u: goto L_00296F40;
    case 123u: goto L_00296F58;
    case 124u: goto L_00296F70;
    case 125u: goto L_00296F90;
    case 126u: goto L_00296FA0;
    case 127u: goto L_00296FBC;
    case 128u: goto L_00296FD0;
    case 129u: goto L_00296FE0;
    case 130u: goto L_00296FEC;
    case 131u: goto L_00297008;
    case 132u: goto L_00297018;
    case 133u: goto L_00297034;
    case 134u: goto L_00297048;
    case 135u: goto L_00297058;
    case 136u: goto L_00297074;
    case 137u: goto L_002970C4;
    case 138u: goto L_002970E4;
    case 139u: goto L_002970F4;
    case 140u: goto L_00297110;
    case 141u: goto L_00297124;
    case 142u: goto L_00297134;
    case 143u: goto L_0029714C;
    case 144u: goto L_0029715C;
    case 145u: goto L_00297218;
    case 146u: goto L_00297238;
    case 147u: goto L_00297248;
    case 148u: goto L_00297264;
    case 149u: goto L_00297278;
    case 150u: goto L_00297288;
    case 151u: goto L_00297328;
    case 152u: goto L_002973D0;
    case 153u: goto L_002973E0;
    case 154u: goto L_002973FC;
    case 155u: goto L_00297410;
    case 156u: goto L_00297420;
    case 157u: goto L_0029743C;
    case 158u: goto L_00297450;
    case 159u: goto L_00297460;
    case 160u: goto L_0029747C;
    case 161u: goto L_002974A0;
    case 162u: goto L_002974BC;
    case 163u: goto L_002974CC;
    case 164u: goto L_002974E8;
    case 165u: goto L_002974FC;
    case 166u: goto L_0029750C;
    case 167u: goto L_00297528;
    case 168u: goto L_0029753C;
    case 169u: goto L_0029754C;
    case 170u: goto L_00297568;
    case 171u: goto L_00297588;
    case 172u: goto L_00297598;
    case 173u: goto L_002975D8;
    case 174u: goto L_002975F8;
    case 175u: goto L_00297608;
    case 176u: goto L_00297624;
    case 177u: goto L_00297638;
    case 178u: goto L_00297648;
    case 179u: goto L_00297664;
    case 180u: goto L_00297694;
    case 181u: goto L_002976B4;
    case 182u: goto L_002976D0;
    case 183u: goto L_002976E0;
    case 184u: goto L_002976FC;
    case 185u: goto L_00297710;
    case 186u: goto L_00297720;
    case 187u: goto L_0029773C;
    case 188u: goto L_00297750;
    case 189u: goto L_00297760;
    case 190u: goto L_0029777C;
    case 191u: goto L_00297790;
    case 192u: goto L_002977A0;
    case 193u: goto L_002977BC;
    case 194u: goto L_002977E4;
    case 195u: goto L_002977F8;
    case 196u: goto L_00297808;
    case 197u: goto L_00297824;
    case 198u: goto L_00297838;
    case 199u: goto L_00297848;
    case 200u: goto L_00297864;
    case 201u: goto L_00297878;
    case 202u: goto L_00297888;
    case 203u: goto L_002978A4;
    case 204u: goto L_002978B8;
    case 205u: goto L_002978C8;
    case 206u: goto L_002978E4;
    case 207u: goto L_00297910;
    case 208u: goto L_00297954;
    case 209u: goto L_00297964;
    case 210u: goto L_00297970;
    case 211u: goto L_0029797C;
    case 212u: goto L_0029798C;
    case 213u: goto L_00297998;
    case 214u: goto L_002979A4;
    case 215u: goto L_002979B4;
    case 216u: goto L_002979C0;
    case 217u: goto L_002979CC;
    case 218u: goto L_002979DC;
    case 219u: goto L_002979E8;
    case 220u: goto L_00297A68;
    case 221u: goto L_00297B0C;
    case 222u: goto L_00297C0C;
    case 223u: goto L_00297D10;
    case 224u: goto L_00297E38;
    case 225u: goto L_00297F3C;
    default: bad_entry(c, 0x00294000u); return;
    }
L_00294000:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00294004:
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00294014u) [[unlikely]] return; }
L_00294014:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294030u); st8((c.r[29].w[0] + 244u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x00294030u) [[unlikely]] return; }
L_00294030:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294040u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x00294040u) [[unlikely]] return; }
L_00294040:
    st8((c.r[29].w[0] + 241u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294050u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00294050u) [[unlikely]] return; }
L_00294050:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029406Cu); st8((c.r[29].w[0] + 245u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x0029406Cu) [[unlikely]] return; }
L_0029406C:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029407Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x0029407Cu) [[unlikely]] return; }
L_0029407C:
    st8((c.r[29].w[0] + 242u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029408Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x0029408Cu) [[unlikely]] return; }
L_0029408C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002940A8u); st8((c.r[29].w[0] + 246u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x002940A8u) [[unlikely]] return; }
L_002940A8:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002940B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x002940B8u) [[unlikely]] return; }
L_002940B8:
    st8((c.r[29].w[0] + 243u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002940C8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x002940C8u) [[unlikely]] return; }
L_002940C8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002940E4u); st8((c.r[29].w[0] + 247u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x002940E4u) [[unlikely]] return; }
L_002940E4:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002940F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x002940F4u) [[unlikely]] return; }
L_002940F4:
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00294104u) [[unlikely]] return; }
L_00294104:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294120u); st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x00294120u) [[unlikely]] return; }
L_00294120:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294130u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x00294130u) [[unlikely]] return; }
L_00294130:
    st8((c.r[29].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294140u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00294140u) [[unlikely]] return; }
L_00294140:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029415Cu); st8((c.r[29].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x0029415Cu) [[unlikely]] return; }
L_0029415C:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029416Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x0029416Cu) [[unlikely]] return; }
L_0029416C:
    st8((c.r[29].w[0] + 210u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029417Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x0029417Cu) [[unlikely]] return; }
L_0029417C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294198u); st8((c.r[29].w[0] + 214u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x00294198u) [[unlikely]] return; }
L_00294198:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002941A8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x002941A8u) [[unlikely]] return; }
L_002941A8:
    st8((c.r[29].w[0] + 211u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002941B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x002941B8u) [[unlikely]] return; }
L_002941B8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[29].w[0] + 215u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002941DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_002941DC:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00294220; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.r[2].d[0] = 0ull | 65280ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00294220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00294220; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_00294220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24708u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294324; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24704u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294270; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24712u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294270; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24705u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0029427C; }
L_00294270:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294324; } }
L_0029427C:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24716u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002942A8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002942A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002942A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00294324; } }
L_002942A8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 24704u);  if (t) { goto L_00294314; } }
L_002942B8:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294324; }
    set32(c.r[5], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294308; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294308; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00294314; }
L_00294308:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294324; } }
L_00294314:
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002942B8u | kUnwind; return; } goto L_002942B8; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294324:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0029460C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00294340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_00294340:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294374; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00294360; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1728u);  if (t) { goto L_002968A8; } }
L_00294360:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 2160u);  if (t) { goto L_002968A8; } }
L_00294374:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24788u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294474; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24784u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002943C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24792u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002943C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24785u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002943CC; }
L_002943C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294474; } }
L_002943CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24796u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002943F8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002943F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002943F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00294474; } }
L_002943F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24784u);  if (t) { goto L_00294464; } }
L_00294408:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294474; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294458; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294458; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00294464; }
L_00294458:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294474; } }
L_00294464:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294408u | kUnwind; return; } goto L_00294408; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294474:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00294518; } }
L_00294484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00294508; } }
L_0029448C:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    mmi::mult(c, 1, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_00294504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294504u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00294504u) [[unlikely]] return; }
L_00294504:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00294508:
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029448Cu | kUnwind; return; } goto L_0029448C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00294518:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00294484u | kUnwind; return; } goto L_00294484; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002945DC; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029454Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0029454Cu) [[unlikely]] return; }
L_0029454C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 80u)));  goto L_0029456C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 355u, depth + 1u); else { c.pc = 0x002C2FF0u; return; } if (c.pc != 0x00294564u) [[unlikely]] return; }
L_00294564:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 2;
L_0029456C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 80u)));  goto L_002945E8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 80u), c.r[16].w[0]);  goto L_002945B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294584u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00294584u) [[unlikely]] return; }
L_00294584:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294594u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00294594u) [[unlikely]] return; }
L_00294594:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002945B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002945B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002945B0u) [[unlikely]] return; }
L_002945B0:
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_002945B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002945E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002945C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002945C4u) [[unlikely]] return; }
L_002945C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002945D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002945D4u) [[unlikely]] return; }
L_002945D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002945E4; } }
L_002945DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002945E4u);  if (depth < kMaxDepth) unit_0070(c, 326u, depth + 1u); else { c.pc = 0x002C2BC0u; return; } if (c.pc != 0x002945E4u) [[unlikely]] return; }
L_002945E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 1;
L_002945E8:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029696C; }
    set32(c.r[2], 0u + 255u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_0029460C:
    set32(c.r[3], ld32((c.r[3].w[0] + 24788u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294708; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24784u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294654; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24792u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294654; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24785u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294660; }
L_00294654:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294708; } }
L_00294660:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24796u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0029468C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029468C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029468C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00294708; } }
L_0029468C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 24784u);  if (t) { goto L_002946F8; } }
L_0029469C:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294708; }
    set32(c.r[5], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002946EC; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002946EC; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002946F8; }
L_002946EC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294708; } }
L_002946F8:
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029469Cu | kUnwind; return; } goto L_0029469C; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294708:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002949BC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00294724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_00294724:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00294758; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00294744; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 2624u);  if (t) { goto L_002968A8; } }
L_00294744:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 3072u);  if (t) { goto L_002968A8; } }
L_00294758:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294850; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24704u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029479C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24712u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029479C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24705u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002947A8; }
L_0029479C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294850; } }
L_002947A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24716u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002947D4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002947D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002947D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00294850; } }
L_002947D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24704u);  if (t) { goto L_00294840; } }
L_002947E4:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294850; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294834; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294834; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00294840; }
L_00294834:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294850; } }
L_00294840:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002947E4u | kUnwind; return; } goto L_002947E4; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294850:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002948F4; } }
L_00294860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002948E4; } }
L_00294868:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    mmi::mult(c, 1, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_002948E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002948E0u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002948E0u) [[unlikely]] return; }
L_002948E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002948E4:
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294868u | kUnwind; return; } goto L_00294868; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002948F4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00294860u | kUnwind; return; } goto L_00294860; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029491Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0029491Cu) [[unlikely]] return; }
L_0029491C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 80u)));  goto L_00294948; }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294940u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x00294940u) [[unlikely]] return; }
L_00294940:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 2;
L_00294948:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0029696C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 80u), c.r[16].w[0]);  goto L_00294990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294960u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00294960u) [[unlikely]] return; }
L_00294960:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294970u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00294970u) [[unlikely]] return; }
L_00294970:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029498C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029498Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029498Cu) [[unlikely]] return; }
L_0029498C:
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_00294990:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002949B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002949A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002949A0u) [[unlikely]] return; }
L_002949A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002949B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002949B0u) [[unlikely]] return; }
L_002949B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_002949BC:
    set32(c.r[2], ld32((c.r[2].w[0] + 24868u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294AB8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24864u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294A04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24872u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294A04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24865u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294A10; }
L_00294A04:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294AB8; } }
L_00294A10:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24876u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00294A3C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00294A3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00294A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00294AB8; } }
L_00294A3C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 24864u);  if (t) { goto L_00294AA8; } }
L_00294A4C:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294AB8; }
    set32(c.r[5], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294A9C; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294A9C; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00294AA8; }
L_00294A9C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294AB8; } }
L_00294AA8:
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294A4Cu | kUnwind; return; } goto L_00294A4C; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294AB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294DB4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00294AD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_00294AD4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294B1C; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_00294AF4; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 3376u);  if (t) { goto L_002968A8; } }
L_00294AF4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00294B08; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 3664u);  if (t) { goto L_002968A8; } }
L_00294B08:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 3968u);  if (t) { goto L_002968A8; } }
L_00294B1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24948u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294C1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24944u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00294B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24952u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00294B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24945u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294B74; }
L_00294B68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294C1C; } }
L_00294B74:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24956u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00294BA0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00294BA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00294BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00294C1C; } }
L_00294BA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24944u);  if (t) { goto L_00294C0C; } }
L_00294BB0:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00294C1C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294C00; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294C00; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00294C0C; }
L_00294C00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294C1C; } }
L_00294C0C:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294BB0u | kUnwind; return; } goto L_00294BB0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00294CC0; } }
L_00294C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00294CB0; } }
L_00294C34:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    mmi::mult(c, 1, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_00294CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294CACu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00294CACu) [[unlikely]] return; }
L_00294CAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00294CB0:
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294C34u | kUnwind; return; } goto L_00294C34; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00294CC0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00294C2Cu | kUnwind; return; } goto L_00294C2C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00294D84; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00294CF4u) [[unlikely]] return; }
L_00294CF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 80u)));  goto L_00294D14; }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 355u, depth + 1u); else { c.pc = 0x002C2FF0u; return; } if (c.pc != 0x00294D0Cu) [[unlikely]] return; }
L_00294D0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 2;
L_00294D14:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 80u)));  goto L_00294D90; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 80u), c.r[16].w[0]);  goto L_00294D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00294D2Cu) [[unlikely]] return; }
L_00294D2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D3Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00294D3Cu) [[unlikely]] return; }
L_00294D3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00294D58; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00294D58u) [[unlikely]] return; }
L_00294D58:
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_00294D5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00294D8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00294D6Cu) [[unlikely]] return; }
L_00294D6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00294D7Cu) [[unlikely]] return; }
L_00294D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294D8C; } }
L_00294D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00294D8Cu);  if (depth < kMaxDepth) unit_0070(c, 326u, depth + 1u); else { c.pc = 0x002C2BC0u; return; } if (c.pc != 0x00294D8Cu) [[unlikely]] return; }
L_00294D8C:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 1;
L_00294D90:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0029696C; }
    set32(c.r[2], 0u + 255u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_00294DB4:
    set32(c.r[3], ld32((c.r[3].w[0] + 24948u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294EB0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24944u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294DFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24952u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00294DFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24945u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294E08; }
L_00294DFC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294EB0; } }
L_00294E08:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24956u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00294E34; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00294E34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00294E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00294EB0; } }
L_00294E34:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 24944u);  if (t) { goto L_00294EA0; } }
L_00294E44:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00294EB0; }
    set32(c.r[5], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294E94; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00294E94; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00294EA0; }
L_00294E94:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00294EB0; } }
L_00294EA0:
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294E44u | kUnwind; return; } goto L_00294E44; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00294EB0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295178; }
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00294ECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_00294ECC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00294F14; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_00294EEC; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 4288u);  if (t) { goto L_002968A8; } }
L_00294EEC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00294F00; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 4576u);  if (t) { goto L_002968A8; } }
L_00294F00:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 4896u);  if (t) { goto L_002968A8; } }
L_00294F14:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029500C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24864u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00294F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00294F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24865u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00294F64; }
L_00294F58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029500C; } }
L_00294F64:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24876u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00294F90; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00294F90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00294F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029500C; } }
L_00294F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24864u);  if (t) { goto L_00294FFC; } }
L_00294FA0:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029500C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294FF0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00294FF0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00294FFC; }
L_00294FF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029500C; } }
L_00294FFC:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00294FA0u | kUnwind; return; } goto L_00294FA0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0029500C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002950B0; } }
L_0029501C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002950A0; } }
L_00295024:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    mmi::mult(c, 1, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_0029509C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029509Cu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0029509Cu) [[unlikely]] return; }
L_0029509C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002950A0:
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295024u | kUnwind; return; } goto L_00295024; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002950B0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029501Cu | kUnwind; return; } goto L_0029501C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002950D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002950D8u) [[unlikely]] return; }
L_002950D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 80u)));  goto L_00295104; }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002950FCu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x002950FCu) [[unlikely]] return; }
L_002950FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 2;
L_00295104:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0029696C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 80u), c.r[16].w[0]);  goto L_0029514C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029511Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0029511Cu) [[unlikely]] return; }
L_0029511C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029512Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0029512Cu) [[unlikely]] return; }
L_0029512C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00295148; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00295148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00295148u) [[unlikely]] return; }
L_00295148:
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_0029514C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0029516C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029515Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0029515Cu) [[unlikely]] return; }
L_0029515C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029516Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0029516Cu) [[unlikely]] return; }
L_0029516C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_00295178:
    set32(c.r[5], ld32((c.r[2].w[0] + 25108u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295274; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002951C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25112u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002951C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25105u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002951CC; }
L_002951C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295274; } }
L_002951CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002951F8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002951F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002951F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295274; } }
L_002951F8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25104u);  if (t) { goto L_00295264; } }
L_00295208:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295274; }
    set32(c.r[4], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00295258; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00295258; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00295264; }
L_00295258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295274; } }
L_00295264:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295208u | kUnwind; return; } goto L_00295208; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002953E0; }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_002953B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27188u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295398; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27184u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002952E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002952E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27185u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002952F0; }
L_002952E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295398; } }
L_002952F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 27196u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0029531C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0029531C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029531C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295398; } }
L_0029531C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 27184u);  if (t) { goto L_00295388; } }
L_0029532C:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295398; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029537C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029537C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00295388; }
L_0029537C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295398; } }
L_00295388:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029532Cu | kUnwind; return; } goto L_0029532C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295398:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);  goto L_002953AC; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 5232u);  if (t) { goto L_002953B0; } }
L_002953AC:
    set32(c.r[17], c.r[17].w[0] - 5088u);
    c.budget -= 1;
L_002953B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002968AC; } }
L_002953B8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_002953CC; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 5424u);  if (t) { goto L_002968A8; } }
L_002953CC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 5632u);  if (t) { goto L_002968A8; } }
L_002953E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 28548u)));
    c.budget -= 4;
    if (c.r[9].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002954E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28544u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029542C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28552u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029542C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28545u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295438; }
L_0029542C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002954E0; } }
L_00295438:
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00295464; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00295464; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00295464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002954E0; } }
L_00295464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28544u);  if (t) { goto L_002954D0; } }
L_00295474:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[10].d[0] != c.r[8].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002954E0; }
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_002954C4; } }
    c.r[10].d[0] = ld8((c.r[11].w[0] + 32u));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_002954C4; } }
    c.r[8].d[0] = ld8((c.r[11].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002954D0; }
L_002954C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002954E0; } }
L_002954D0:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295474u | kUnwind; return; } goto L_00295474; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002954E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002956F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28628u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002955E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28624u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00295534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00295534; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28625u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295540; }
L_00295534:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002955E8; } }
L_00295540:
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28636u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0029556C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0029556C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029556C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002955E8; } }
L_0029556C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28624u);  if (t) { goto L_002955D8; } }
L_0029557C:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[10].d[0] != c.r[8].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002955E8; }
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_002955CC; } }
    c.r[10].d[0] = ld8((c.r[11].w[0] + 32u));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[8].d[0];  if (t) { goto L_002955CC; } }
    c.r[8].d[0] = ld8((c.r[11].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002955D8; }
L_002955CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002955E8; } }
L_002955D8:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029557Cu | kUnwind; return; } goto L_0029557C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002955E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002956F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 25028u)));
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002956F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029563C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25032u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029563C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25025u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295648; }
L_0029563C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002956F0; } }
L_00295648:
    set32(c.r[8], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25036u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00295674; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295674; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00295674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002956F0; } }
L_00295674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25024u);  if (t) { goto L_002956E0; } }
L_00295684:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002956F0; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_002956D4; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_002956D4; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002956E0; }
L_002956D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002956F0; } }
L_002956E0:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295684u | kUnwind; return; } goto L_00295684; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002956F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));  goto L_00295A18; }
L_002956F8:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002957F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28544u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029573C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28552u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029573C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28545u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295748; }
L_0029573C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002957F0; } }
L_00295748:
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00295774; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00295774; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00295774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002957F0; } }
L_00295774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28544u);  if (t) { goto L_002957E0; } }
L_00295784:
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[8].d[0] != c.r[7].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002957F0; }
    set32(c.r[8], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002957D4; } }
    c.r[8].d[0] = ld8((c.r[9].w[0] + 32u));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002957D4; } }
    c.r[8].d[0] = ld8((c.r[9].w[0] + 33u));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[7].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002957E0; }
L_002957D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002957F0; } }
L_002957E0:
    c.r[7].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295784u | kUnwind; return; } goto L_00295784; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002957F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00295A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28628u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002958F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28624u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00295844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00295844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28625u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295850; }
L_00295844:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002958F8; } }
L_00295850:
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28636u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0029587C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0029587C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029587C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002958F8; } }
L_0029587C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 28624u);  if (t) { goto L_002958E8; } }
L_0029588C:
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[8].d[0] != c.r[7].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002958F8; }
    set32(c.r[8], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002958DC; } }
    c.r[8].d[0] = ld8((c.r[9].w[0] + 32u));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002958DC; } }
    c.r[8].d[0] = ld8((c.r[9].w[0] + 33u));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[7].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002958E8; }
L_002958DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002958F8; } }
L_002958E8:
    c.r[7].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029588Cu | kUnwind; return; } goto L_0029588C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002958F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00295A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 25028u)));
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295A00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029594C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25032u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029594C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25025u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295958; }
L_0029594C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295A00; } }
L_00295958:
    set32(c.r[8], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25036u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00295984; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295984; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00295984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295A00; } }
L_00295984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 25024u);  if (t) { goto L_002959F0; } }
L_00295994:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[10].d[0] != c.r[9].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295A00; }
    set32(c.r[10], ld32((c.r[11].w[0] + 28u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_002959E4; } }
    c.r[10].d[0] = ld8((c.r[11].w[0] + 32u));
    c.r[9].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_002959E4; } }
    c.r[9].d[0] = ld8((c.r[11].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 33u));
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002959F0; }
L_002959E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295A00; } }
L_002959F0:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295994u | kUnwind; return; } goto L_00295994; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00295A14; } }
L_00295A08:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6336u);  if (t) { goto L_002968A8; } }
L_00295A14:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.budget -= 1;
L_00295A18:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00295B48; } }
    set32(c.r[8], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00295B48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27348u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295B34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27344u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27345u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[8].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295A8C; }
L_00295A80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295B34; } }
L_00295A8C:
    set32(c.r[9], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 27356u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00295AB8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00295AB8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295B34; } }
L_00295AB8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 27344u);  if (t) { goto L_00295B24; } }
L_00295AC8:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295B34; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295B18; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295B18; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00295B24; }
L_00295B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295B34; } }
L_00295B24:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295AC8u | kUnwind; return; } goto L_00295AC8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00295B48; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1248u);  if (t) { goto L_002968A8; } }
L_00295B48:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295C40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25032u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25025u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[8].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295B98; }
L_00295B8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295C40; } }
L_00295B98:
    set32(c.r[9], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 25036u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00295BC4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00295BC4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295C40; } }
L_00295BC4:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25024u);  if (t) { goto L_00295C30; } }
L_00295BD4:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295C40; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295C24; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295C24; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00295C30; }
L_00295C24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295C40; } }
L_00295C30:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295BD4u | kUnwind; return; } goto L_00295BD4; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295C40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295C94; }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_00295C6C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 5824u);  if (t) { goto L_002968A8; } }
L_00295C6C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00295C80; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6032u);  if (t) { goto L_002968A8; } }
L_00295C80:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6336u);  if (t) { goto L_002968A8; } }
L_00295C94:
    set32(c.r[2], ld32((c.r[2].w[0] + 25428u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295D90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25424u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25432u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25425u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[8].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295CE8; }
L_00295CDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295D90; } }
L_00295CE8:
    set32(c.r[9], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 25436u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00295D14; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00295D14; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295D90; } }
L_00295D14:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25424u);  if (t) { goto L_00295D80; } }
L_00295D24:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295D90; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295D74; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295D74; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00295D80; }
L_00295D74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295D90; } }
L_00295D80:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295D24u | kUnwind; return; } goto L_00295D24; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295D90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295DE8; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_00295DC0; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00295DBC; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
L_00295DBC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00295DC0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00295DD4; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 8496u);  if (t) { goto L_002968A8; } }
L_00295DD4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 8320u);  if (t) { goto L_002968A8; } }
L_00295DE8:
    set32(c.r[2], ld32((c.r[2].w[0] + 25508u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295EE4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25504u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25512u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25505u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[8].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295E3C; }
L_00295E30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295EE4; } }
L_00295E3C:
    set32(c.r[9], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 25516u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00295E68; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00295E68; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295EE4; } }
L_00295E68:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25504u);  if (t) { goto L_00295ED4; } }
L_00295E78:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295EE4; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295EC8; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295EC8; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00295ED4; }
L_00295EC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295EE4; } }
L_00295ED4:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295E78u | kUnwind; return; } goto L_00295E78; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295EE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_00295FF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 25588u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295FEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25584u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295F38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00295F38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25585u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[8].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00295F44; }
L_00295F38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295FEC; } }
L_00295F44:
    set32(c.r[9], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 25596u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_00295F70; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_00295F70; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_00295F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00295FEC; } }
L_00295F70:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25584u);  if (t) { goto L_00295FDC; } }
L_00295F80:
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 24u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[12].d[0] != c.r[11].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00295FEC; }
    set32(c.r[12], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295FD0; } }
    c.r[12].d[0] = ld8((c.r[2].w[0] + 32u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_00295FD0; } }
    c.r[11].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00295FDC; }
L_00295FD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00295FEC; } }
L_00295FDC:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00295F80u | kUnwind; return; } goto L_00295F80; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00295FEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296044; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_00295FF8:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_0029601C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00296018; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
L_00296018:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_0029601C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00296030; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 8144u);  if (t) { goto L_002968A8; } }
L_00296030:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7984u);  if (t) { goto L_002968A8; } }
L_00296044:
    set32(c.r[2], ld32((c.r[2].w[0] + 25188u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296140; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[19].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25184u));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_0029608C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 25192u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_0029608C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25185u));
    c.budget -= 5;
    if (c.r[8].d[0] == c.r[9].d[0]) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296098; }
L_0029608C:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296140; } }
L_00296098:
    set32(c.r[10], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 25196u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_002960C4; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_002960C4; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_002960C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00296140; } }
L_002960C4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 25184u);  if (t) { goto L_00296130; } }
L_002960D4:
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[19].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[12], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[13].d[0] != c.r[12].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296140; }
    set32(c.r[13], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[12], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_00296124; } }
    c.r[13].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[12].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_00296124; } }
    c.r[12].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[12].d[0] == c.r[8].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_00296130; }
L_00296124:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296140; } }
L_00296130:
    c.r[8].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[11].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002960D4u | kUnwind; return; } goto L_002960D4; }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296140:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], 0u + 16u);  goto L_00296260; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[8].w[0] + 25268u)));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[4].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296248; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[18].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25264u));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_00296194; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 25272u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_00296194; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25265u));
    c.budget -= 5;
    if (c.r[8].d[0] == c.r[9].d[0]) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002961A0; }
L_00296194:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296248; } }
L_002961A0:
    set32(c.r[10], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 25276u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_002961CC; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_002961CC; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_002961CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00296248; } }
L_002961CC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 25264u);  if (t) { goto L_00296238; } }
L_002961DC:
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[12], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[13].d[0] != c.r[12].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296248; }
    set32(c.r[13], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[12], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_0029622C; } }
    c.r[13].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[12].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_0029622C; } }
    c.r[12].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[12].d[0] == c.r[8].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_00296238; }
L_0029622C:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296248; } }
L_00296238:
    c.r[8].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[11].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002961DCu | kUnwind; return; } goto L_002961DC; }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296248:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0029625C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 448u);  if (t) { goto L_002968A8; } }
L_0029625C:
    set32(c.r[8], 0u + 16u);
    c.budget -= 1;
L_00296260:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0029638C; } }
    set32(c.r[9], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_0029638C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[8].w[0] + 27348u)));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[4].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296378; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[18].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 27344u));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_002962C4; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 27352u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_002962C4; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 27345u));
    c.budget -= 5;
    if (c.r[8].d[0] == c.r[9].d[0]) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002962D0; }
L_002962C4:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296378; } }
L_002962D0:
    set32(c.r[10], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 27356u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[10].d[0];  if (t) { goto L_002962FC; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_002962FC; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_002962FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00296378; } }
L_002962FC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 27344u);  if (t) { goto L_00296368; } }
L_0029630C:
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[12], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[13].d[0] != c.r[12].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_00296378; }
    set32(c.r[13], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[12], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_0029635C; } }
    c.r[13].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[12].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[12].d[0];  if (t) { goto L_0029635C; } }
    c.r[12].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[12].d[0] == c.r[8].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_00296368; }
L_0029635C:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296378; } }
L_00296368:
    c.r[8].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[11].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029630Cu | kUnwind; return; } goto L_0029630C; }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296378:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0029638C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1056u);  if (t) { goto L_002968A8; } }
L_0029638C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[8].w[0] + 25268u)));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029648C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld8((c.r[19].w[0]));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 25264u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002963D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 25272u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002963D8; } }
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 25265u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[6].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002963E4; }
L_002963D8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029648C; } }
L_002963E4:
    set32(c.r[8], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 25276u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_00296410; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00296410; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00296410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0029648C; } }
L_00296410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25264u);  if (t) { goto L_0029647C; } }
L_00296420:
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[19].w[0] + c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0029648C; }
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00296470; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 32u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00296470; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 33u));
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0029647C; }
L_00296470:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029648C; } }
L_0029647C:
    c.r[8].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296420u | kUnwind; return; } goto L_00296420; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0029648C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_002965A4; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029658C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25184u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002964D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002964D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25185u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002964E4; }
L_002964D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029658C; } }
L_002964E4:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25196u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00296510; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00296510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00296510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029658C; } }
L_00296510:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 25184u);  if (t) { goto L_0029657C; } }
L_00296520:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029658C; }
    set32(c.r[6], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00296570; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00296570; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0029657C; }
L_00296570:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029658C; } }
L_0029657C:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296520u | kUnwind; return; } goto L_00296520; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0029658C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002965A0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1264u);  if (t) { goto L_002968A8; } }
L_002965A0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002965A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002965C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002965C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0029696C; } }
L_002965C0:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002966B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00296604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25032u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00296604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25025u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296610; }
L_00296604:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002966B8; } }
L_00296610:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25036u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0029663C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0029663C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0029663C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002966B8; } }
L_0029663C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 25024u);  if (t) { goto L_002966A8; } }
L_0029664C:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002966B8; }
    set32(c.r[6], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0029669C; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0029669C; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002966A8; }
L_0029669C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002966B8; } }
L_002966A8:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029664Cu | kUnwind; return; } goto L_0029664C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002966B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00296728; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_002966EC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);  goto L_002966E4; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6688u);  if (t) { goto L_002968A8; } }
L_002966E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6864u);  if (t) { goto L_002968A8; } }
L_002966EC:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00296700; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7280u);  if (t) { goto L_002968A8; } }
L_00296700:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);  goto L_00296720; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7632u);  if (t) { goto L_002968A8; } }
L_00296720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7808u);  if (t) { goto L_002968A8; } }
L_00296728:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00296820; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029676C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25112u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0029676C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25105u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296778; }
L_0029676C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296820; } }
L_00296778:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002967A4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002967A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002967A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00296820; } }
L_002967A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 25104u);  if (t) { goto L_00296810; } }
L_002967B4:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00296820; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00296804; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00296804; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00296810; }
L_00296804:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296820; } }
L_00296810:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002967B4u | kUnwind; return; } goto L_002967B4; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 16u);  goto L_00296868; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_00296840; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 6496u);  if (t) { goto L_002968A8; } }
L_00296840:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  goto L_00296854; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7056u);  if (t) { goto L_002968A8; } }
L_00296854:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 7440u);  if (t) { goto L_002968A8; } }
L_00296868:
    c.budget -= 2;
    if (c.r[30].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0029696C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029689C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0029689C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029689C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 688u);  if (t) { goto L_002968A8; } }
L_0029689C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0029696C; } }
L_002968A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002968AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_0029695C; } }
L_002968B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00296948; } }
L_002968BC:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[9], c.r[29].w[0] + 224u);
    set32(c.r[8], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[11], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[12], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[14], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[13], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[15], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], c.r[14].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[15].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    mmi::mult(c, 1, c.r[16].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[7], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[7].w[0] + c.r[12].w[0]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296944u); set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296944u) [[unlikely]] return; }
L_00296944:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00296948:
    c.r[1].d[0] = c.r[23].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[10], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002968BCu | kUnwind; return; } goto L_002968BC; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_0029695C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002968B4u | kUnwind; return; } goto L_002968B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0029696C:
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
L_002969A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 140u), 0u);  if (t) { goto L_002969FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002969ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002969ECu) [[unlikely]] return; }
L_002969EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002969FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002969FCu) [[unlikely]] return; }
L_002969FC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 136u), 0u);  if (t) { goto L_00296A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296A10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296A10u) [[unlikely]] return; }
L_00296A10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296A20u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296A20u) [[unlikely]] return; }
L_00296A20:
    set32(c.r[21], c.r[19].w[0] + 8u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296A34u); c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 148u, depth + 1u); else { c.pc = 0x0028DB30u; return; } if (c.pc != 0x00296A34u) [[unlikely]] return; }
L_00296A34:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[8].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 25108u)));
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[7].d[0] = c.r[8].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[7].d[0] ^ c.r[5].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00296AA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 25104u));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[8].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00296B54; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 25112u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00296AA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 25105u));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[6].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296AAC; }
L_00296AA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296B54; } }
L_00296AAC:
    set32(c.r[7], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 25116u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_00296AD8; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00296AD8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00296AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00296B54; } }
L_00296AD8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 25104u);  if (t) { goto L_00296B44; } }
L_00296AE8:
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[7].d[0] != c.r[6].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00296B54; }
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00296B38; } }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00296B38; } }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00296B44; }
L_00296B38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296B54; } }
L_00296B44:
    c.r[6].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296AE8u | kUnwind; return; } goto L_00296AE8; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296B54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[6].d[0] = ld8((c.r[21].w[0] + 1u));  goto L_00296C68; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 27188u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[6].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00296C5C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 27184u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00296BA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 27192u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00296BA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 27185u));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[6].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296BB4; }
L_00296BA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296C5C; } }
L_00296BB4:
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 27196u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_00296BE0; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00296BE0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00296BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00296C5C; } }
L_00296BE0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 27184u);  if (t) { goto L_00296C4C; } }
L_00296BF0:
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[18].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[7].d[0] != c.r[6].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00296C5C; }
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00296C40; } }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 32u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00296C40; } }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 33u));
    c.r[6].d[0] = ld8((c.r[10].w[0] + 33u));
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00296C4C; }
L_00296C40:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296C5C; } }
L_00296C4C:
    c.r[6].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296BF0u | kUnwind; return; } goto L_00296BF0; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296C5C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_00296D9C; }
    c.r[6].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 1;
L_00296C68:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00296C6C:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 4u)));  goto L_00296C84; }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00296DFC; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00296C84:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00296DFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 27348u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[6].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00296D90; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 27344u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00296CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00296CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27345u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00296CE8; }
L_00296CDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296D90; } }
L_00296CE8:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 27356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00296D14; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00296D14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00296D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00296D90; } }
L_00296D14:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 27344u);  if (t) { goto L_00296D80; } }
L_00296D24:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[6].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00296D90; }
    set32(c.r[6], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00296D74; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00296D74; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 33u));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00296D80; }
L_00296D74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00296D90; } }
L_00296D80:
    c.r[4].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296D24u | kUnwind; return; } goto L_00296D24; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00296D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00296DFC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00296D9C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_00296DE8; } }
L_00296DA8:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 32u));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00296DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00296DF8; } }
L_00296DD4:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00296DE8; }
    set32(c.r[2], c.r[6].w[0] - 8u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00296DE8:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00296DA8u | kUnwind; return; } goto L_00296DA8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00296DF8:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00296DFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00296E98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00296E98; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_00296E50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296E20u) [[unlikely]] return; }
L_00296E20:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E30u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296E30u) [[unlikely]] return; }
L_00296E30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00296E4C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296E4Cu) [[unlikely]] return; }
L_00296E4C:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00296E50:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296E60u) [[unlikely]] return; }
L_00296E60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296E70u) [[unlikely]] return; }
L_00296E70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00296E8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296E8Cu) [[unlikely]] return; }
L_00296E8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_00296E98:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_00297084; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_00296F50; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[17].d[0];  if (t) { goto L_00296F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 151u, depth + 1u); else { c.pc = 0x002C5460u; return; } if (c.pc != 0x00296EB8u) [[unlikely]] return; }
L_00296EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297080; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_00296F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296ED4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296ED4u) [[unlikely]] return; }
L_00296ED4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296EE4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296EE4u) [[unlikely]] return; }
L_00296EE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00296F00; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296F00u) [[unlikely]] return; }
L_00296F00:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00296F04:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296F14u) [[unlikely]] return; }
L_00296F14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F24u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296F24u) [[unlikely]] return; }
L_00296F24:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00296F40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296F40u) [[unlikely]] return; }
L_00296F40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_00296F4C:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_00296F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00296F58u) [[unlikely]] return; }
L_00296F58:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_00296F78; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 257u, depth + 1u); else { c.pc = 0x002C6530u; return; } if (c.pc != 0x00296F70u) [[unlikely]] return; }
L_00296F70:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 2;
L_00296F78:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  goto L_00296FE4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 136u), c.r[21].w[0]);  goto L_00296FC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296F90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296F90u) [[unlikely]] return; }
L_00296F90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296FA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296FA0u) [[unlikely]] return; }
L_00296FA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00296FBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00296FBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00296FBCu) [[unlikely]] return; }
L_00296FBC:
    st32((c.r[29].w[0] + 136u), c.r[21].w[0]);
    c.budget -= 1;
L_00296FC0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00296FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296FD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00296FD0u) [[unlikely]] return; }
L_00296FD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296FE0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00296FE0u) [[unlikely]] return; }
L_00296FE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00296FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00296FECu);  if (depth < kMaxDepth) unit_0071(c, 151u, depth + 1u); else { c.pc = 0x002C5460u; return; } if (c.pc != 0x00296FECu) [[unlikely]] return; }
L_00296FEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_00297080; }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_00297038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297008u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297008u) [[unlikely]] return; }
L_00297008:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297018u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297018u) [[unlikely]] return; }
L_00297018:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297034; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297034u) [[unlikely]] return; }
L_00297034:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00297038:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297048u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297048u) [[unlikely]] return; }
L_00297048:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297058u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297058u) [[unlikely]] return; }
L_00297058:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297074; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297074u) [[unlikely]] return; }
L_00297074:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_00297080:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_00297084:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002970A0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002970A0; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002970A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0029713C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00297138; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002970C4u); set32(c.r[4], c.r[20].w[0] + 28u);  if (depth < kMaxDepth) unit_0085(c, 77u, depth + 1u); else { c.pc = 0x00314E70u; return; } if (c.pc != 0x002970C4u) [[unlikely]] return; }
L_002970C4:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[19].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_00297138; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 140u), c.r[19].w[0]);  goto L_00297114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002970E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002970E4u) [[unlikely]] return; }
L_002970E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002970F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002970F4u) [[unlikely]] return; }
L_002970F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297110; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297110u) [[unlikely]] return; }
L_00297110:
    st32((c.r[29].w[0] + 140u), c.r[19].w[0]);
    c.budget -= 1;
L_00297114:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00297134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297124u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297124u) [[unlikely]] return; }
L_00297124:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297134u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297134u) [[unlikely]] return; }
L_00297134:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00297138:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0029713C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 132u), 0u);  if (t) { goto L_0029715C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029714Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0029714Cu) [[unlikely]] return; }
L_0029714C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029715Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0029715Cu) [[unlikely]] return; }
L_0029715C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[19].d[0] = c.r[16].d[0] + 0ull;  goto L_002972A0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0029729C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00297198; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00297198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029729C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002971C4; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002971C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0029729C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0029720C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00297208; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00297208; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00297208; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0029729C; } }
L_00297208:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0029720C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297218u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 100u, depth + 1u); else { c.pc = 0x00292BE0u; return; } if (c.pc != 0x00297218u) [[unlikely]] return; }
L_00297218:
    set32(c.r[19], ld32((c.r[29].w[0] + 132u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[21].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 132u)));  goto L_0029728C; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 132u), c.r[21].w[0]);  goto L_00297268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297238u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297238u) [[unlikely]] return; }
L_00297238:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297248u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297248u) [[unlikely]] return; }
L_00297248:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297264; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297264u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297264u) [[unlikely]] return; }
L_00297264:
    st32((c.r[29].w[0] + 132u), c.r[21].w[0]);
    c.budget -= 1;
L_00297268:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00297288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297278u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297278u) [[unlikely]] return; }
L_00297278:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297288u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297288u) [[unlikely]] return; }
L_00297288:
    set32(c.r[19], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_0029728C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = c.r[16].d[0] + 0ull;  goto L_002972A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002972A0; } }
L_0029729C:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002972A0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00297578; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[17].w[0] + 8u);  if (t) { goto L_002972E8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00297394; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002972E8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_002972F4; }
L_002972E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297394; } }
L_002972F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00297384; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0029731C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0029731C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00297394; } }
L_0029731C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297384; } }
L_00297328:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00297394; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00297378; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00297378; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00297384; }
L_00297378:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297394; } }
L_00297384:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297328u | kUnwind; return; } goto L_00297328; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00297394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00297574; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002973B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00297574; } }
L_002973B4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[19].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00297488; }
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_00297400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002973D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002973D0u) [[unlikely]] return; }
L_002973D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002973E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002973E0u) [[unlikely]] return; }
L_002973E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002973FC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002973FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002973FCu) [[unlikely]] return; }
L_002973FC:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00297400:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_00297440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297410u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297410u) [[unlikely]] return; }
L_00297410:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297420u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297420u) [[unlikely]] return; }
L_00297420:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029743C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029743Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029743Cu) [[unlikely]] return; }
L_0029743C:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00297440:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297450u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297450u) [[unlikely]] return; }
L_00297450:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297460u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297460u) [[unlikely]] return; }
L_00297460:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029747C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029747Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029747Cu) [[unlikely]] return; }
L_0029747C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_00297488:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002974A0u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002974A0u) [[unlikely]] return; }
L_002974A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00297574; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_002974EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002974BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002974BCu) [[unlikely]] return; }
L_002974BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002974CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002974CCu) [[unlikely]] return; }
L_002974CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002974E8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002974E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002974E8u) [[unlikely]] return; }
L_002974E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_002974EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_0029752C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002974FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002974FCu) [[unlikely]] return; }
L_002974FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029750Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0029750Cu) [[unlikely]] return; }
L_0029750C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297528; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297528u) [[unlikely]] return; }
L_00297528:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_0029752C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029753Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0029753Cu) [[unlikely]] return; }
L_0029753C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029754Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0029754Cu) [[unlikely]] return; }
L_0029754C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297568; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297568u) [[unlikely]] return; }
L_00297568:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_00297574:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00297578:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_00297598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297588u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297588u) [[unlikely]] return; }
L_00297588:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297598u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297598u) [[unlikely]] return; }
L_00297598:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002975C4; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002975C0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_0029765C; }
L_002975C0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002975C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002975D8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002975D8u) [[unlikely]] return; }
L_002975D8:
    set32(c.r[16], ld32((c.r[29].w[0] + 128u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_0029764C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 128u), c.r[17].w[0]);  goto L_00297628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002975F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002975F8u) [[unlikely]] return; }
L_002975F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297608u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297608u) [[unlikely]] return; }
L_00297608:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297624; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297624u) [[unlikely]] return; }
L_00297624:
    st32((c.r[29].w[0] + 128u), c.r[17].w[0]);
    c.budget -= 1;
L_00297628:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00297648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297638u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297638u) [[unlikely]] return; }
L_00297638:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297648u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297648u) [[unlikely]] return; }
L_00297648:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_0029764C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00297658; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00297658:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_0029765C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00297664u) [[unlikely]] return; }
L_00297664:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_0029769C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[9], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297694u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x00297694u) [[unlikely]] return; }
L_00297694:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_0029769C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002976B4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002976B4u) [[unlikely]] return; }
L_002976B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002977C8; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 132u)));  goto L_00297700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002976D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002976D0u) [[unlikely]] return; }
L_002976D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002976E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002976E0u) [[unlikely]] return; }
L_002976E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002976FC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002976FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002976FCu) [[unlikely]] return; }
L_002976FC:
    set32(c.r[17], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00297700:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 136u)));  goto L_00297740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297710u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297710u) [[unlikely]] return; }
L_00297710:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297720u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297720u) [[unlikely]] return; }
L_00297720:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029773C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029773Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029773Cu) [[unlikely]] return; }
L_0029773C:
    set32(c.r[17], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00297740:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 140u)));  goto L_00297780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297750u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297750u) [[unlikely]] return; }
L_00297750:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297760u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297760u) [[unlikely]] return; }
L_00297760:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0029777C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029777Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029777Cu) [[unlikely]] return; }
L_0029777C:
    set32(c.r[17], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00297780:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297790u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297790u) [[unlikely]] return; }
L_00297790:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002977A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002977A0u) [[unlikely]] return; }
L_002977A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002977BC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002977BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002977BCu) [[unlikely]] return; }
L_002977BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002978E8; } }
L_002977C8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 128u)));  goto L_002977E8; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002977E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002977E4u) [[unlikely]] return; }
L_002977E4:
    set32(c.r[16], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_002977E8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  goto L_00297828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002977F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002977F8u) [[unlikely]] return; }
L_002977F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297808u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297808u) [[unlikely]] return; }
L_00297808:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297824; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297824u) [[unlikely]] return; }
L_00297824:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00297828:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_00297868; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297838u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297838u) [[unlikely]] return; }
L_00297838:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297848u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297848u) [[unlikely]] return; }
L_00297848:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00297864; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00297864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00297864u) [[unlikely]] return; }
L_00297864:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00297868:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_002978A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297878u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00297878u) [[unlikely]] return; }
L_00297878:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297888u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00297888u) [[unlikely]] return; }
L_00297888:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002978A4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002978A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002978A4u) [[unlikely]] return; }
L_002978A4:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_002978A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002978E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002978B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002978B8u) [[unlikely]] return; }
L_002978B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002978C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002978C8u) [[unlikely]] return; }
L_002978C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002978E4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002978E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002978E4u) [[unlikely]] return; }
L_002978E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002978E8:
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
L_00297910:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[6].w[0] + 4u)));
    c.r[18].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x00297954u) [[unlikely]] return; }
L_00297954:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x00297964u) [[unlikely]] return; }
L_00297964:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00297970u) [[unlikely]] return; }
L_00297970:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029797Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x0029797Cu) [[unlikely]] return; }
L_0029797C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029798Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x0029798Cu) [[unlikely]] return; }
L_0029798C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297998u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x00297998u) [[unlikely]] return; }
L_00297998:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x002979A4u) [[unlikely]] return; }
L_002979A4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x002979B4u) [[unlikely]] return; }
L_002979B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979C0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x002979C0u) [[unlikely]] return; }
L_002979C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979CCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 321u, depth + 1u); else { c.pc = 0x0028B400u; return; } if (c.pc != 0x002979CCu) [[unlikely]] return; }
L_002979CC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979DCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 319u, depth + 1u); else { c.pc = 0x0028B340u; return; } if (c.pc != 0x002979DCu) [[unlikely]] return; }
L_002979DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002979E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 317u, depth + 1u); else { c.pc = 0x0028B300u; return; } if (c.pc != 0x002979E8u) [[unlikely]] return; }
L_002979E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00297AD4; }
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00297A28; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00297A28; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 12u)));  goto L_00297A34; }
L_00297A28:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297AD4; } }
L_00297A34:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00297AC4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00297A5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00297A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00297AD4; } }
L_00297A5C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297AC4; } }
L_00297A68:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00297AD4; }
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00297AB8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00297AB8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00297AC4; }
L_00297AB8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297AD4; } }
L_00297AC4:
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297A68u | kUnwind; return; } goto L_00297A68; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00297AD4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;  goto L_00297AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297AE4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00297AF4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 1;
L_00297AF4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00297B04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00297B0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 148u, depth + 1u); else { c.pc = 0x0028DB30u; return; } if (c.pc != 0x00297B0Cu) [[unlikely]] return; }
L_00297B0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[20].w[0]));  goto L_00297B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297B1C:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 24u);  goto L_00297B40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297B40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00297B78; } }
    c.r[2].d[0] = 0ull | 65280ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0066(c, 22u, depth); }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00297B78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00297B78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297B78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 24708u)));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00297C78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24704u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00297BC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 24712u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_00297BC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24705u));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[7].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00297BD0; }
L_00297BC4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297C78; } }
L_00297BD0:
    set32(c.r[8], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 24716u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_00297BFC; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_00297BFC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_00297BFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00297C78; } }
L_00297BFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24704u);  if (t) { goto L_00297C68; } }
L_00297C0C:
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[21].w[0] + c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00297C78; }
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00297C5C; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 32u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00297C5C; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 33u));
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00297C68; }
L_00297C5C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297C78; } }
L_00297C68:
    c.r[8].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297C0Cu | kUnwind; return; } goto L_00297C0C; }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00297C78:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00297D88; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 24788u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00297D7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24784u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00297CC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 24792u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_00297CC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24785u));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[7].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00297CD4; }
L_00297CC8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297D7C; } }
L_00297CD4:
    set32(c.r[8], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 24796u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_00297D00; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_00297D00; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_00297D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00297D7C; } }
L_00297D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24784u);  if (t) { goto L_00297D6C; } }
L_00297D10:
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[21].w[0] + c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00297D7C; }
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00297D60; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 32u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00297D60; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 33u));
    c.budget -= 4;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00297D6C; }
L_00297D60:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297D7C; } }
L_00297D6C:
    c.r[8].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297D10u | kUnwind; return; } goto L_00297D10; }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00297D7C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00297FB8; }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00297D88:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_00297DB0; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_0066(c, 22u, depth); }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0066(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297DB0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00297EA4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24704u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00297DF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24712u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00297DF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24705u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00297DFC; }
L_00297DF0:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297EA4; } }
L_00297DFC:
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24716u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00297E28; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00297E28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00297E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00297EA4; } }
L_00297E28:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 24704u);  if (t) { goto L_00297E94; } }
L_00297E38:
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00297EA4; }
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00297E88; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00297E88; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00297E94; }
L_00297E88:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297EA4; } }
L_00297E94:
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297E38u | kUnwind; return; } goto L_00297E38; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00297EA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 21u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24788u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00297FA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00297EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24792u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00297EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24785u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00297F00; }
L_00297EF4:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297FA8; } }
L_00297F00:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24796u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00297F2C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00297F2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00297F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00297FA8; } }
L_00297F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24784u);  if (t) { goto L_00297F98; } }
L_00297F3C:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00297FA8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00297F8C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00297F8C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00297F98; }
L_00297F8C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00297FA8; } }
L_00297F98:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00297F3Cu | kUnwind; return; } goto L_00297F3C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00297FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 21u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0066(c, 22u, depth); } }
L_00297FB8:
    set32(c.r[6], ld32((c.r[5].w[0] + 24868u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0066(c, 4u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24864u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00297FFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 24872u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_00297FFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 24865u));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[7].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  [[clang::musttail]] return unit_0066(c, 2u, depth); }
L_00297FFC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0066(c, 1u, depth);
}

}
