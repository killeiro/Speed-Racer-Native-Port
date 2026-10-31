#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0113[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0113(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0054C000;
    case 2u: goto L_0054C010;
    case 3u: goto L_0054C020;
    case 4u: goto L_0054C030;
    case 5u: goto L_0054C040;
    case 6u: goto L_0054C050;
    case 7u: goto L_0054C0AC;
    case 8u: goto L_0054C118;
    case 9u: goto L_0054C184;
    case 10u: goto L_0054C200;
    case 11u: goto L_0054C250;
    case 12u: goto L_0054C278;
    case 13u: goto L_0054C294;
    case 14u: goto L_0054C2B8;
    case 15u: goto L_0054C620;
    case 16u: goto L_0054C660;
    case 17u: goto L_0054C670;
    case 18u: goto L_0054C690;
    case 19u: goto L_0054C6F0;
    case 20u: goto L_0054C714;
    case 21u: goto L_0054C794;
    case 22u: goto L_0054C810;
    case 23u: goto L_0054C850;
    case 24u: goto L_0054C864;
    case 25u: goto L_0054C880;
    case 26u: goto L_0054C890;
    case 27u: goto L_0054C8A8;
    case 28u: goto L_0054C930;
    case 29u: goto L_0054C988;
    case 30u: goto L_0054C9AC;
    case 31u: goto L_0054CA10;
    case 32u: goto L_0054CA3C;
    case 33u: goto L_0054CA48;
    case 34u: goto L_0054CA78;
    case 35u: goto L_0054CAE0;
    case 36u: goto L_0054CB04;
    case 37u: goto L_0054CB10;
    case 38u: goto L_0054CB74;
    case 39u: goto L_0054CB80;
    case 40u: goto L_0054CB98;
    case 41u: goto L_0054CC30;
    case 42u: goto L_0054CC84;
    case 43u: goto L_0054CCE4;
    case 44u: goto L_0054CCF4;
    case 45u: goto L_0054CD08;
    case 46u: goto L_0054CD18;
    case 47u: goto L_0054CD7C;
    case 48u: goto L_0054CDA0;
    case 49u: goto L_0054CDB8;
    case 50u: goto L_0054CDC8;
    case 51u: goto L_0054CDE0;
    case 52u: goto L_0054CEEC;
    case 53u: goto L_0054CF00;
    case 54u: goto L_0054CF64;
    case 55u: goto L_0054CF78;
    case 56u: goto L_0054CF90;
    case 57u: goto L_0054CFB8;
    case 58u: goto L_0054CFFC;
    case 59u: goto L_0054D090;
    case 60u: goto L_0054D0B8;
    case 61u: goto L_0054D0E0;
    case 62u: goto L_0054D0F8;
    case 63u: goto L_0054D120;
    case 64u: goto L_0054D22C;
    case 65u: goto L_0054D244;
    case 66u: goto L_0054D288;
    case 67u: goto L_0054D2A0;
    case 68u: goto L_0054D2B8;
    case 69u: goto L_0054D2F0;
    case 70u: goto L_0054D39C;
    case 71u: goto L_0054D3B0;
    case 72u: goto L_0054D41C;
    case 73u: goto L_0054D440;
    case 74u: goto L_0054D468;
    case 75u: goto L_0054D484;
    case 76u: goto L_0054D4D4;
    case 77u: goto L_0054D5FC;
    case 78u: goto L_0054D668;
    case 79u: goto L_0054D688;
    case 80u: goto L_0054D710;
    case 81u: goto L_0054D7E0;
    case 82u: goto L_0054D900;
    case 83u: goto L_0054D944;
    case 84u: goto L_0054D990;
    case 85u: goto L_0054D9E8;
    case 86u: goto L_0054DA04;
    case 87u: goto L_0054DA2C;
    case 88u: goto L_0054DA78;
    case 89u: goto L_0054DABC;
    case 90u: goto L_0054DB00;
    case 91u: goto L_0054DB44;
    case 92u: goto L_0054DB90;
    case 93u: goto L_0054DBE8;
    case 94u: goto L_0054DC14;
    case 95u: goto L_0054DC70;
    case 96u: goto L_0054DD18;
    case 97u: goto L_0054DDFC;
    case 98u: goto L_0054DE84;
    case 99u: goto L_0054DED0;
    case 100u: goto L_0054DF30;
    case 101u: goto L_0054DF70;
    case 102u: goto L_0054DFD0;
    case 103u: goto L_0054E010;
    case 104u: goto L_0054E068;
    case 105u: goto L_0054E0AC;
    case 106u: goto L_0054E108;
    case 107u: goto L_0054E118;
    case 108u: goto L_0054E128;
    case 109u: goto L_0054E144;
    case 110u: goto L_0054E150;
    case 111u: goto L_0054E18C;
    case 112u: goto L_0054E210;
    case 113u: goto L_0054E268;
    case 114u: goto L_0054E2AC;
    case 115u: goto L_0054E308;
    case 116u: goto L_0054E318;
    case 117u: goto L_0054E328;
    case 118u: goto L_0054E344;
    case 119u: goto L_0054E350;
    case 120u: goto L_0054E388;
    case 121u: goto L_0054E410;
    case 122u: goto L_0054E460;
    case 123u: goto L_0054E488;
    case 124u: goto L_0054E4CC;
    case 125u: goto L_0054E4D8;
    case 126u: goto L_0054E4E8;
    case 127u: goto L_0054E4FC;
    case 128u: goto L_0054E580;
    case 129u: goto L_0054E5E8;
    case 130u: goto L_0054E618;
    case 131u: goto L_0054E664;
    case 132u: goto L_0054E670;
    case 133u: goto L_0054E680;
    case 134u: goto L_0054E69C;
    case 135u: goto L_0054E720;
    case 136u: goto L_0054E794;
    case 137u: goto L_0054E7C0;
    case 138u: goto L_0054E830;
    case 139u: goto L_0054E890;
    case 140u: goto L_0054E8A0;
    case 141u: goto L_0054E8B0;
    case 142u: goto L_0054E8C8;
    case 143u: goto L_0054E940;
    case 144u: goto L_0054E9C0;
    case 145u: goto L_0054EA2C;
    case 146u: goto L_0054EA98;
    case 147u: goto L_0054EB10;
    case 148u: goto L_0054EB38;
    case 149u: goto L_0054EB98;
    case 150u: goto L_0054EC04;
    case 151u: goto L_0054EC70;
    case 152u: goto L_0054ED00;
    case 153u: goto L_0054ED50;
    case 154u: goto L_0054ED78;
    case 155u: goto L_0054EDBC;
    case 156u: goto L_0054EDC8;
    case 157u: goto L_0054EDD8;
    case 158u: goto L_0054EDEC;
    case 159u: goto L_0054EE60;
    case 160u: goto L_0054EEC4;
    case 161u: goto L_0054EEEC;
    case 162u: goto L_0054EF60;
    case 163u: goto L_0054EFA8;
    case 164u: goto L_0054EFD0;
    case 165u: goto L_0054F020;
    case 166u: goto L_0054F068;
    case 167u: goto L_0054F090;
    case 168u: goto L_0054F0E0;
    case 169u: goto L_0054F1A8;
    case 170u: goto L_0054F1D4;
    case 171u: goto L_0054F220;
    case 172u: goto L_0054F270;
    case 173u: goto L_0054F290;
    case 174u: goto L_0054F2C8;
    case 175u: goto L_0054F310;
    case 176u: goto L_0054F33C;
    case 177u: goto L_0054F414;
    case 178u: goto L_0054F420;
    case 179u: goto L_0054F440;
    case 180u: goto L_0054F474;
    case 181u: goto L_0054F47C;
    case 182u: goto L_0054F4AC;
    case 183u: goto L_0054F4E0;
    case 184u: goto L_0054F524;
    case 185u: goto L_0054F53C;
    case 186u: goto L_0054F558;
    case 187u: goto L_0054F578;
    case 188u: goto L_0054F5C0;
    case 189u: goto L_0054F5EC;
    case 190u: goto L_0054F6C4;
    case 191u: goto L_0054F6D0;
    case 192u: goto L_0054F6F0;
    case 193u: goto L_0054F6F8;
    case 194u: goto L_0054F750;
    case 195u: goto L_0054F76C;
    case 196u: goto L_0054F7A0;
    case 197u: goto L_0054F7EC;
    case 198u: goto L_0054F82C;
    case 199u: goto L_0054F86C;
    case 200u: goto L_0054F890;
    case 201u: goto L_0054F8DC;
    case 202u: goto L_0054F8F0;
    case 203u: goto L_0054F904;
    case 204u: goto L_0054F950;
    case 205u: goto L_0054F980;
    case 206u: goto L_0054F99C;
    case 207u: goto L_0054F9E4;
    case 208u: goto L_0054F9EC;
    case 209u: goto L_0054FA10;
    case 210u: goto L_0054FA40;
    case 211u: goto L_0054FAAC;
    case 212u: goto L_0054FB64;
    case 213u: goto L_0054FB9C;
    case 214u: goto L_0054FC54;
    case 215u: goto L_0054FCA0;
    case 216u: goto L_0054FCB0;
    case 217u: goto L_0054FD54;
    case 218u: goto L_0054FD74;
    case 219u: goto L_0054FD98;
    case 220u: goto L_0054FDC4;
    case 221u: goto L_0054FE60;
    case 222u: goto L_0054FE88;
    case 223u: goto L_0054FED8;
    case 224u: goto L_0054FF14;
    case 225u: goto L_0054FFC0;
    default: bad_entry(c, 0x0054C000u); return;
    }
L_0054C000:
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    st32((c.r[7].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_0054C010:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054BFF0u | kUnwind; return; } [[clang::musttail]] return unit_0112(c, 374u, depth); } }
    c.budget -= 1;
L_0054C020:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054BFD0u | kUnwind; return; } [[clang::musttail]] return unit_0112(c, 373u, depth); } }
    c.budget -= 1;
L_0054C030:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[6].d[0]) { set32(c.r[8], ld32((c.r[9].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054BFC4u | kUnwind; return; } [[clang::musttail]] return unit_0112(c, 372u, depth); }
    c.budget -= 1;
L_0054C040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0054C050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0054C1F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] >> 1);  goto L_0054C08C; }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054C0A4; } }
L_0054C08C:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0054C0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C0ACu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054C0ACu) [[unlikely]] return; }
L_0054C0AC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054C0E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054C100; } }
L_0054C0E4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054C100:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C118u); st32((c.r[16].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054C118u) [[unlikely]] return; }
L_0054C118:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054C150; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054C16C; } }
L_0054C150:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054C16C:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C184u); st32((c.r[16].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054C184u) [[unlikely]] return; }
L_0054C184:
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0054C1BC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054C1D8; } }
L_0054C1BC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054C1D8:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
L_0054C1F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0054C200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != 0ull; c.f[20] = c.f[21];  if (t) { goto L_0054C240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054C5F0; } }
L_0054C240:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C250u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_010E(c, 57u, depth + 1u); else { c.pc = 0x005386C0u; return; } if (c.pc != 0x0054C250u) [[unlikely]] return; }
L_0054C250:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x4E6E0000u);  goto L_0054C260; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054C5F4; } }
L_0054C260:
    c.r[3].d[0] = c.r[2].d[0] | 27432ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.f[22] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0054C5D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_0054C278:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[7], c.r[29].w[0] + 88u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C294u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 51u, depth + 1u); else { c.pc = 0x005385C0u; return; } if (c.pc != 0x0054C294u) [[unlikely]] return; }
L_0054C294:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0054C2A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C5F0; } }
L_0054C2A4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 120u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C2B8u); set32(c.r[7], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_010E(c, 63u, depth + 1u); else { c.pc = 0x00538740u; return; } if (c.pc != 0x0054C2B8u) [[unlikely]] return; }
L_0054C2B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 172u)));  goto L_0054C2C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C5F0; } }
L_0054C2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C2E8; } }
    c.f[5] = ld32((c.r[18].w[0] + 112u));
    c.f[10] = ld32((c.r[18].w[0] + 116u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[18].w[0] + 108u));  if (t) { goto L_0054C310; } }
L_0054C2E8:
    c.f[4] = ld32((c.r[29].w[0] + 104u));
    c.f[5] = ld32((c.r[18].w[0] + 108u));
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[3] = ld32((c.r[18].w[0] + 112u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[10] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
L_0054C310:
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[10]));
    c.f[6] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[22]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C5B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = c.f[6];  if (t) { goto L_0054C358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C438; } }
L_0054C358:
    c.f[3] = ld32((c.r[18].w[0] + 180u));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054C370; } }
    c.f[6] = c.f[3];
    c.budget -= 2;
L_0054C370:
    c.f[2] = ld32((c.r[18].w[0] + 176u));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C388; } }
    c.f[6] = c.f[2];
    c.budget -= 2;
L_0054C388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C3D8; } }
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C438; } }
L_0054C3C0:
    c.f[6] = fp::sub(c.f[3], c.f[6]);
    fpu_div(c, 21u, c.f[6], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C438; } }
L_0054C3D8:
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054C410; } }
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054C410; } }
    c.f[0] = fp::sub(c.f[6], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[6] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
L_0054C410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x35860000u);
    c.r[2].d[0] = c.r[2].d[0] | 14269ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C430; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_0054C430:
    fpu_div(c, 21u, c.f[2], c.f[6]);
    c.budget -= 2;
L_0054C438:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C450; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0054C450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054C470; } }
    c.f[21] = c.f[0];
    c.budget -= 2;
L_0054C470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[9] = ld32((c.r[18].w[0] + 188u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054C4A0; } }
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C5B8; } }
    c.budget -= 1;
L_0054C4A0:
    c.f[8] = 0u;
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[8]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C550; } }
    c.budget -= 1;
L_0054C4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[7], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.f[4] = fp::mul(c.f[10], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    c.f[2] = ld32((c.r[18].w[0] + 160u));
    c.f[3] = ld32((c.r[18].w[0] + 168u));
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0054C534; } }
L_0054C520:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[7] = c.f[0];  goto L_0054C52C; }
L_0054C52C:
    c.f[1] = c.f[7];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0054C534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[8] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
L_0054C550:
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C5B8; } }
L_0054C570:
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054C5B0; } }
    c.f[1] = fp::sub(c.f[8], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[9], c.f[0]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[18].w[0] + 192u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));  if (t) { goto L_0054C5B8; } }
    c.budget -= 1;
L_0054C5B0:
    c.f[20] = ld32((c.r[18].w[0] + 192u));
    c.budget -= 2;
L_0054C5B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C278u | kUnwind; return; } goto L_0054C278; }
    c.budget -= 1;
L_0054C5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 244u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[21], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 8;
L_0054C5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054C5F4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0054C620:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0054C654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054C7E0; } }
L_0054C654:
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 324u)));  if (t) { goto L_0054C758; } }
L_0054C660:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_0054C6C8; } }
    c.budget -= 1;
L_0054C670:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0054C6A0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C690u); set32(c.r[5], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0118(c, 148u, depth + 1u); else { c.pc = 0x00561E60u; return; } if (c.pc != 0x0054C690u) [[unlikely]] return; }
L_0054C690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054C7E4; } }
L_0054C6A0:
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0054C6A8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C6C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 20u));  if (t) { goto L_0054C6E8; } }
L_0054C6C0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0054C6C8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054C6E8; } }
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C670u | kUnwind; return; } goto L_0054C670; } }
    c.budget -= 1;
L_0054C6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_0054C730; } }
L_0054C6F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C728; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C714u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x0054C714u) [[unlikely]] return; }
L_0054C714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 104u));  goto L_0054C724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C7E0; } }
L_0054C724:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 1;
L_0054C728:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0054C730:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054C750; } }
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C6F0u | kUnwind; return; } goto L_0054C6F0; } }
    c.budget -= 1;
L_0054C750:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.f[21] = fp::add(c.f[21], c.f[20]);
    c.budget -= 2;
L_0054C758:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054C778; } }
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C660u | kUnwind; return; } goto L_0054C660; } }
    c.budget -= 1;
L_0054C778:
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_0054C7AC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C794u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0113(c, 10u, depth + 1u); else { c.pc = 0x0054C200u; return; } if (c.pc != 0x0054C794u) [[unlikely]] return; }
L_0054C794:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 100u));  goto L_0054C7A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C7E0; } }
L_0054C7A4:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    c.budget -= 2;
L_0054C7AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[19].w[0] + 84u));  goto L_0054C7CC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C7C8; } }
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 2;
L_0054C7C8:
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.budget -= 1;
L_0054C7CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 5;
L_0054C7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054C7E4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054C810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0054C844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054C900; } }
L_0054C844:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 324u)));  if (t) { goto L_0054C8D8; } }
L_0054C850:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0054C8D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C864u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0106(c, 213u, depth + 1u); else { c.pc = 0x0051B560u; return; } if (c.pc != 0x0054C864u) [[unlikely]] return; }
L_0054C864:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_0054C874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054C904; } }
L_0054C874:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0054C8D0; } }
    c.budget -= 1;
L_0054C880:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C890u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0106(c, 210u, depth + 1u); else { c.pc = 0x0051B510u; return; } if (c.pc != 0x0054C890u) [[unlikely]] return; }
L_0054C890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  goto L_0054C8A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C900; } }
L_0054C8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C8A8u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0105(c, 198u, depth + 1u); else { c.pc = 0x005161A0u; return; } if (c.pc != 0x0054C8A8u) [[unlikely]] return; }
L_0054C8A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 116u));  goto L_0054C8B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054C900; } }
L_0054C8B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C880u | kUnwind; return; } goto L_0054C880; } }
    c.budget -= 1;
L_0054C8D0:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_0054C8D8:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054C8F8; } }
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C850u | kUnwind; return; } goto L_0054C850; }
    c.budget -= 1;
L_0054C8F8:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.f[20]);
    c.budget -= 2;
L_0054C900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054C904:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0054C930:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054C960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0054C968; } }
L_0054C960:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054C968:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { st32((c.r[20].w[0]), 0u);  goto L_0054C978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054C9F0; } }
L_0054C978:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0054C9E8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054C988:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054C9D0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054C9ACu); set32(c.r[5], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054C9ACu) [[unlikely]] return; }
L_0054C9AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_0054C9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054C9F4; } }
L_0054C9BC:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054C9D0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0054C9D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054C988u | kUnwind; return; } goto L_0054C988; } }
    c.budget -= 1;
L_0054C9E8:
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054C9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054C9F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054CA10:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0054CA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054CAD0; } }
L_0054CA20:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[7], c.r[4].w[0] + 324u);
    set32(c.r[10], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_0054CAC8; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[9], ld32((c.r[10].w[0] + 84u)));
    c.budget -= 2;
L_0054CA3C:
    set32(c.r[6], c.r[10].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_0054CAB8; } }
L_0054CA48:
    set32(c.r[2], ld32((c.r[9].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054CA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054CA68; } }
    c.budget -= 1;
L_0054CA60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054CA68:
    set32(c.r[8], ld32((c.r[9].w[0] + 120u)));
    set32(c.r[3], c.r[9].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0054CAA8; } }
L_0054CA78:
    set32(c.r[2], ld32((c.r[8].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054CA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054CA98; } }
    c.budget -= 1;
L_0054CA90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054CA98:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CA78u | kUnwind; return; } goto L_0054CA78; } }
    c.budget -= 1;
L_0054CAA8:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CA48u | kUnwind; return; } goto L_0054CA48; } }
    c.budget -= 1;
L_0054CAB8:
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 3;
    if (c.r[10].d[0] != c.r[7].d[0]) { set32(c.r[9], ld32((c.r[10].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CA3Cu | kUnwind; return; } goto L_0054CA3C; }
    c.budget -= 1;
L_0054CAC8:
    st32((c.r[5].w[0]), c.r[11].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054CAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054CAE0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0054CAF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054CC1C; } }
L_0054CAF0:
    set32(c.r[7], c.r[4].w[0] + 324u);
    set32(c.r[9], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_0054CB58; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 84u)));
    c.budget -= 1;
L_0054CB04:
    set32(c.r[6], c.r[9].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0054CB48; } }
L_0054CB10:
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054CB30; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], ld32((c.r[8].w[0])));  goto L_0054CB40; }
    c.budget -= 1;
L_0054CB30:
    set32(c.r[2], 0u - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054CC1C; } }
L_0054CB40:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CB10u | kUnwind; return; } goto L_0054CB10; } }
L_0054CB48:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[8], ld32((c.r[9].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CB04u | kUnwind; return; } goto L_0054CB04; }
    c.budget -= 1;
L_0054CB58:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[9], ld32((c.r[4].w[0] + 324u)));
    set32(c.r[8], c.r[4].w[0] + 324u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0054CC18; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[12], ld32((c.r[9].w[0] + 84u)));
    c.budget -= 2;
L_0054CB74:
    set32(c.r[7], c.r[9].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[7].d[0];  if (t) { goto L_0054CC08; } }
L_0054CB80:
    set32(c.r[2], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] <= 0; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0054CBF8; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054CB98:
    set32(c.r[2], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054CBD0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_0054CBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_0054CBE8; } }
L_0054CBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054CBE8; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0054CC1C; } }
L_0054CBE8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0054CBEC:
    c.r[2].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CB98u | kUnwind; return; } goto L_0054CB98; } }
L_0054CBF8:
    set32(c.r[12], ld32((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CB80u | kUnwind; return; } goto L_0054CB80; } }
    c.budget -= 1;
L_0054CC08:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[8].d[0]) { set32(c.r[12], ld32((c.r[9].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CB74u | kUnwind; return; } goto L_0054CB74; }
    c.budget -= 1;
L_0054CC18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054CC1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054CC30:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 332u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 304u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[2].w[0] + 76u);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[30].w[0] + 208u), 0u);  if (t) { goto L_0054CCA0; } }
L_0054CC84:
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[30].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CC84u | kUnwind; return; } goto L_0054CC84; } }
L_0054CCA0:
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    st32((c.r[30].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    st32((c.r[30].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CCE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054CCE4u) [[unlikely]] return; }
L_0054CCE4:
    set32(c.r[4], ld32((c.r[30].w[0] + 288u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CCF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054CCF4u) [[unlikely]] return; }
L_0054CCF4:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 324u)));
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0054CD48; } }
L_0054CD08:
    set32(c.r[4], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[2], c.r[6].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054CD38; } }
L_0054CD18:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CD18u | kUnwind; return; } goto L_0054CD18; } }
    c.budget -= 1;
L_0054CD38:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CD08u | kUnwind; return; } goto L_0054CD08; } }
    c.budget -= 1;
L_0054CD48:
    set32(c.r[17], c.r[16].w[0] << 2);
    c.r[18].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] + 15u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    st32((c.r[30].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CD7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054CD7Cu) [[unlikely]] return; }
L_0054CD7C:
    set32(c.r[3], c.r[18].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CDA0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054CDA0u) [[unlikely]] return; }
L_0054CDA0:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 324u)));
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0054CEC8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 1;
L_0054CDB8:
    set32(c.r[2], c.r[4].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0054CEB8; } }
    c.budget -= 1;
L_0054CDC8:
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0054CEA8; } }
    set32(c.r[8], ld32((c.r[30].w[0] + 256u)));
    c.budget -= 2;
L_0054CDE0:
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0054CE38; } }
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[23].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] & 2ull;
    c.r[9].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_0054CE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0054CE20; } }
L_0054CE18:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0054CE20:
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[6].d[0] = c.r[9].d[0] & 65535ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[6].w[0]);  if (t) { goto L_0054CEA8; } }
    c.budget -= 1;
L_0054CE38:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0054CE98; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 256u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0054CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_0054CE78; } }
    c.budget -= 1;
L_0054CE70:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_0054CE78:
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[7].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[6], c.r[23].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[7].w[0]);  if (t) { goto L_0054CEA8; } }
    c.budget -= 1;
L_0054CE98:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CDE0u | kUnwind; return; } goto L_0054CDE0; } }
L_0054CEA8:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CDC8u | kUnwind; return; } goto L_0054CDC8; } }
    c.budget -= 1;
L_0054CEB8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CDB8u | kUnwind; return; } goto L_0054CDB8; }
    c.budget -= 1;
L_0054CEC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0054D0D4; }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0054CF30; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 256u)));
    c.budget -= 1;
L_0054CEEC:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0054CF20; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_0054CF00:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054CF10; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0054CF10:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CF00u | kUnwind; return; } goto L_0054CF00; } }
L_0054CF20:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CEECu | kUnwind; return; } goto L_0054CEEC; } }
L_0054CF30:
    set32(c.r[6], c.r[21].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15u);
    st32((c.r[30].w[0] + 240u), 0u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    st32((c.r[30].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CF64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054CF64u) [[unlikely]] return; }
L_0054CF64:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[30].w[0] + 176u), 0u);  if (t) { goto L_0054D058; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 256u)));
    st32((c.r[30].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 192u)));
    c.budget -= 3;
L_0054CF78:
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0054D030; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054CF90:
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st128((c.r[30].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054D018; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0054D018; } }
    set32(c.r[17], ld32((c.r[30].w[0] + 224u)));
    c.budget -= 2;
L_0054CFB8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0054CFF0; } }
    ld128((c.r[30].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 224u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_0054D018; } }
    c.budget -= 1;
L_0054CFF0:
    ld128((c.r[30].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054CFFCu); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x0054CFFCu) [[unlikely]] return; }
L_0054CFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054D018; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CFB8u | kUnwind; return; } goto L_0054CFB8; } }
    c.budget -= 1;
L_0054D018:
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CF90u | kUnwind; return; } goto L_0054CF90; } }
    c.budget -= 1;
L_0054D030:
    set32(c.r[2], ld32((c.r[30].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[30].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[30].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054CF78u | kUnwind; return; } goto L_0054CF78; }
    c.budget -= 1;
L_0054D058:
    set32(c.r[3], ld32((c.r[30].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 9156u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 400u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D090u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0054D090u) [[unlikely]] return; }
L_0054D090:
    set32(c.r[3], ld32((c.r[30].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 404u), c.r[2].w[0]);  if (t) { goto L_0054D0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0054D6DC; } }
L_0054D0A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[30].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D0B8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054D0B8u) [[unlikely]] return; }
L_0054D0B8:
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 404u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_0054D0D4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0054D1F8; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 256u)));
    c.budget -= 1;
L_0054D0E0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0054D1E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054D0F8:
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[8], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0054D1C8; } }
    set32(c.r[7], ld32((c.r[30].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0054D1C8; } }
    set32(c.r[10], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[30].w[0] + 288u)));
    c.budget -= 2;
L_0054D120:
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[10].d[0];  if (t) { goto L_0054D178; } }
    set32(c.r[7], ld32((c.r[30].w[0] + 272u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[9], ld32((c.r[23].w[0])));
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0])));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.r[7].d[0] = c.r[9].d[0] & 65535ull;
    c.r[9].d[0] = c.r[8].d[0] & 65535ull;
    c.r[8].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[10].d[0] & 65535ull;
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 16);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0]), c.r[7].w[0]);  if (t) { goto L_0054D1C8; } }
    c.budget -= 1;
L_0054D178:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0054D1B0; } }
    set32(c.r[7], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[30].w[0] + 304u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 288u)));
    set32(c.r[8], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 272u)));
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[23].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[8].w[0]);  if (t) { goto L_0054D1C8; } }
L_0054D1B0:
    set32(c.r[7], ld32((c.r[30].w[0] + 208u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[7].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D120u | kUnwind; return; } goto L_0054D120; } }
    c.budget -= 1;
L_0054D1C8:
    set32(c.r[7], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[7].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D0F8u | kUnwind; return; } goto L_0054D0F8; } }
    c.budget -= 1;
L_0054D1E0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D0E0u | kUnwind; return; } goto L_0054D0E0; } }
    c.budget -= 1;
L_0054D1F8:
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[23].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[29].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D22Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054D22Cu) [[unlikely]] return; }
L_0054D22C:
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0054D370; } }
    set32(c.r[22], ld32((c.r[30].w[0] + 272u)));
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[30].w[0] + 288u)));
    c.budget -= 3;
L_0054D244:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u - 16u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D288u); st32((c.r[21].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054D288u) [[unlikely]] return; }
L_0054D288:
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054D350; } }
    set32(c.r[8], ld32((c.r[30].w[0] + 256u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
L_0054D2A0:
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054D340; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054D2B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[11], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0054D328; } }
    set32(c.r[10], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_0054D328; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0054D328; } }
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_0054D2F0:
    set32(c.r[11], ld32((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_0054D328; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_0054D318; } }
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.r[3].w[0]);  if (t) { goto L_0054D328; } }
    c.budget -= 1;
L_0054D318:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[11].d[0] = c.r[10].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D2F0u | kUnwind; return; } goto L_0054D2F0; } }
L_0054D328:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D2B8u | kUnwind; return; } goto L_0054D2B8; } }
    c.budget -= 1;
L_0054D340:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D2A0u | kUnwind; return; } goto L_0054D2A0; } }
L_0054D350:
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D244u | kUnwind; return; } goto L_0054D244; } }
    c.budget -= 1;
L_0054D370:
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054D3F0; } }
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0054D39C:
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0054D3D0; } }
    c.budget -= 1;
L_0054D3B0:
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D3B0u | kUnwind; return; } goto L_0054D3B0; } }
    c.budget -= 1;
L_0054D3D0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D39Cu | kUnwind; return; } goto L_0054D39C; } }
L_0054D3F0:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0054D420; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 9273u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D41Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0054D41Cu) [[unlikely]] return; }
L_0054D41C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0054D420:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 9276u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D440u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0054D440u) [[unlikely]] return; }
L_0054D440:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 332u)));  goto L_0054D454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0054D6DC; } }
L_0054D454:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[30].w[0] + 288u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D468u); st32((c.r[2].w[0] + 380u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054D468u) [[unlikely]] return; }
L_0054D468:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[18], c.r[18].w[0] + c.r[23].w[0]);
    set32(c.r[5], ld32((c.r[30].w[0] + 272u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D484u); st32((c.r[2].w[0] + 388u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054D484u) [[unlikely]] return; }
L_0054D484:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[4], c.r[18].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0] + 384u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054D630; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] - 8u);  if (t) { goto L_0054D5E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054D4C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0054D4C8; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0054D4C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0054D5E8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054D4D4:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[8], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0]), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 380u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 384u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 68;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 28u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D4D4u | kUnwind; return; } goto L_0054D4D4; } }
    c.budget -= 1;
L_0054D5E8:
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0054D630; } }
    set32(c.r[7], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0054D5FC:
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 380u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D5FCu | kUnwind; return; } goto L_0054D5FC; } }
L_0054D630:
    set32(c.r[3], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[30].w[0] + 332u)));
    st32((c.r[3].w[0] + 392u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[30].w[0] + 304u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054D6C8; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0054D668:
    set32(c.r[3], ld32((c.r[30].w[0] + 332u)));
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0054D6A8; } }
L_0054D688:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D688u | kUnwind; return; } goto L_0054D688; } }
    c.budget -= 1;
L_0054D6A8:
    set32(c.r[3], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D668u | kUnwind; return; } goto L_0054D668; } }
L_0054D6C8:
    set32(c.r[3], ld32((c.r[30].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 332u)));
    st32((c.r[2].w[0] + 376u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 396u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0054D6DC:
    set32(c.r[29], c.r[30].w[0] + 0u);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0054D710:
    c.r[2].d[0] = c.r[5].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 37u);  goto L_0054D8F8; }
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0054D734; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054D8F8; } }
L_0054D734:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0054D88C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0054D750; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0054D750:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 318u)));  goto L_0054D780; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 318u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 7u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0054D7B8; } }
L_0054D780:
    set32(c.r[2], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[6], 0u - 7u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[7].d[0] | 1ull;
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0054D7B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0054D8F4; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[11], 0u - 7u);
    set32(c.r[2], 0u - 2u);
    c.budget -= 7;
L_0054D7E0:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0054D870; } }
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0054D870; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0054D830; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 318u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    st16((c.r[10].w[0] + 318u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 318u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[10].w[0] + 318u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_0054D870; } }
    c.budget -= 1;
L_0054D830:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 318u)));
    c.r[8].d[0] = c.r[8].d[0] | 1ull;
    st16((c.r[10].w[0] + 318u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 318u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[11].d[0];
    st16((c.r[10].w[0] + 318u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 318u)));
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[10].w[0] + 318u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 16;
L_0054D870:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D7E0u | kUnwind; return; } goto L_0054D7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054D8F8; } }
L_0054D88C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 1);  goto L_0054D8BC; }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 318u)));
    set32(c.r[3], 0u - 7u);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0054D8F4; } }
L_0054D8BC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 318u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - 7u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[4].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0054D8F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054D8F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054D900:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054D918; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054D918:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 296u), c.f[12]);  goto L_0054D97C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 296u), c.f[12]);  goto L_0054D934; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 296u), c.f[12]);
    c.budget -= 2;
L_0054D934:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054D97C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054D944:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054D968; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054D968; } }
    st32((c.r[2].w[0] + 296u), c.f[12]);
    c.budget -= 2;
L_0054D968:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D944u | kUnwind; return; } goto L_0054D944; } }
L_0054D97C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0054D990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054D9C0; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0054D9C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[18].w[0] + 292u), c.f[20]);  goto L_0054DA58; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0054D9DC; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0054D9DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D9E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0113(c, 84u, depth + 1u); else { c.pc = 0x0054D990u; return; } if (c.pc != 0x0054D9E8u) [[unlikely]] return; }
L_0054D9E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054D9F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054DAE0; } }
L_0054D9F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054DAD8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DA04:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054DA40; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054DA3C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DA2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 84u, depth + 1u); else { c.pc = 0x0054D990u; return; } if (c.pc != 0x0054DA2Cu) [[unlikely]] return; }
L_0054DA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DA3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054DADC; } }
L_0054DA3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054DA40:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DA04u | kUnwind; return; } goto L_0054DA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054DADC; } }
L_0054DA58:
    c.f[1] = ld32((c.r[18].w[0] + 296u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054DAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DA78u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054DA78u) [[unlikely]] return; }
L_0054DA78:
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
    c.f[0] = ld32((c.r[18].w[0] + 296u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DABCu); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054DABCu) [[unlikely]] return; }
L_0054DABC:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 1;
L_0054DAC0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_0054DAD4; }
L_0054DAD4:
    st32((c.r[18].w[0] + 300u), c.f[20]);
    c.budget -= 1;
L_0054DAD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054DAE0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054DB00:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054DB18; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054DB18:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 288u), c.f[12]);  goto L_0054DB7C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 288u), c.f[12]);  goto L_0054DB34; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 288u), c.f[12]);
    c.budget -= 2;
L_0054DB34:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054DB7C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DB44:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DB68; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DB68; } }
    st32((c.r[2].w[0] + 288u), c.f[12]);
    c.budget -= 2;
L_0054DB68:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DB44u | kUnwind; return; } goto L_0054DB44; } }
L_0054DB7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0054DB90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0054DC40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st16((c.r[18].w[0] + 312u), static_cast<std::uint16_t>(c.r[20].w[0]));  goto L_0054DBD0; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[18].w[0] + 312u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 2;
L_0054DBD0:
    st16((c.r[18].w[0] + 314u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[18].w[0] + 316u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054DC4C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DBE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054DC28; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054DC24; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DC14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 92u, depth + 1u); else { c.pc = 0x0054DB90u; return; } if (c.pc != 0x0054DC14u) [[unlikely]] return; }
L_0054DC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054DC54; } }
L_0054DC24:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054DC28:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DBE8u | kUnwind; return; } goto L_0054DBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054DC50; } }
L_0054DC40:
    st16((c.r[4].w[0] + 312u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[4].w[0] + 314u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[4].w[0] + 316u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0054DC4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054DC54:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054DC70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[27] = c.f[12];
    c.f[26] = c.f[13];
    c.f[25] = c.f[14];
    c.f[24] = c.f[15];
    c.f[23] = c.f[16];
    c.f[22] = c.f[17];
    c.f[21] = c.f[18];
    c.budget -= 23;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[19];  if (t) { goto L_0054DE28; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 200u), c.f[27]);  goto L_0054DCE0; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 200u), c.f[27]);
    c.budget -= 2;
L_0054DCE0:
    st32((c.r[18].w[0] + 204u), c.f[26]);
    st32((c.r[18].w[0] + 208u), c.f[25]);
    st32((c.r[18].w[0] + 212u), c.f[24]);
    st32((c.r[18].w[0] + 216u), c.f[23]);
    st32((c.r[18].w[0] + 220u), c.f[22]);
    st32((c.r[18].w[0] + 224u), c.f[21]);
    st32((c.r[18].w[0] + 228u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[18].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054DE94; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DD18:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054DE10; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DE0C; } }
    st32((c.r[2].w[0] + 200u), c.f[27]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 204u), c.f[26]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 208u), c.f[25]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 212u), c.f[24]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 216u), c.f[23]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 220u), c.f[22]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 224u), c.f[21]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 228u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 372u)));
    c.budget -= 41;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054DE0C; } }
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DDFCu); c.f[12] = ld32((c.r[2].w[0] + 200u));  if (depth < kMaxDepth) unit_0106(c, 231u, depth + 1u); else { c.pc = 0x0051B700u; return; } if (c.pc != 0x0054DDFCu) [[unlikely]] return; }
L_0054DDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DE0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054DE9C; } }
L_0054DE0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054DE10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DD18u | kUnwind; return; } goto L_0054DD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054DE98; } }
L_0054DE28:
    st32((c.r[18].w[0] + 200u), c.f[27]);
    st32((c.r[18].w[0] + 204u), c.f[26]);
    st32((c.r[18].w[0] + 208u), c.f[25]);
    st32((c.r[18].w[0] + 212u), c.f[24]);
    st32((c.r[18].w[0] + 216u), c.f[23]);
    st32((c.r[18].w[0] + 220u), c.f[22]);
    st32((c.r[18].w[0] + 224u), c.f[21]);
    st32((c.r[18].w[0] + 228u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[18].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 372u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054DE94; } }
    c.f[13] = ld32((c.r[18].w[0] + 204u));
    c.f[14] = ld32((c.r[18].w[0] + 208u));
    c.f[15] = ld32((c.r[18].w[0] + 212u));
    c.f[16] = ld32((c.r[18].w[0] + 216u));
    c.f[17] = ld32((c.r[18].w[0] + 220u));
    c.f[18] = ld32((c.r[18].w[0] + 224u));
    c.f[19] = ld32((c.r[18].w[0] + 228u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DE84u); c.f[12] = ld32((c.r[18].w[0] + 200u));  if (depth < kMaxDepth) unit_0106(c, 231u, depth + 1u); else { c.pc = 0x0051B700u; return; } if (c.pc != 0x0054DE84u) [[unlikely]] return; }
L_0054DE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054DE98; } }
L_0054DE94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054DE9C:
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054DED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054DEEC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054DEEC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054DF04; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054DF04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 284u), c.f[12]);  goto L_0054DF64; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 284u), c.f[12]);  goto L_0054DF20; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 284u), c.f[12]);
    c.budget -= 2;
L_0054DF20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054DF64; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DF30:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DF50; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DF50; } }
    st32((c.r[2].w[0] + 284u), c.f[12]);
    c.budget -= 1;
L_0054DF50:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DF30u | kUnwind; return; } goto L_0054DF30; } }
L_0054DF64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0054DF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054DF8C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054DF8C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054DFA4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054DFA4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 280u), c.f[12]);  goto L_0054E004; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 280u), c.f[12]);  goto L_0054DFC0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[4].w[0] + 280u), c.f[12]);
    c.budget -= 2;
L_0054DFC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054E004; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054DFD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DFF0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054DFF0; } }
    st32((c.r[2].w[0] + 280u), c.f[12]);
    c.budget -= 1;
L_0054DFF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054DFD0u | kUnwind; return; } goto L_0054DFD0; } }
L_0054E004:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0054E010:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0054E0D8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[22].w[0] + 232u), c.f[20]);  goto L_0054E058; }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[22].w[0] + 232u), c.f[20]);
    c.budget -= 2;
L_0054E058:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054E1E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E068:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 12u)));  goto L_0054E0C0; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E0BC; } }
    st32((c.r[2].w[0] + 232u), c.f[20]);
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E0BC; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E0ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 103u, depth + 1u); else { c.pc = 0x0054E010u; return; } if (c.pc != 0x0054E0ACu) [[unlikely]] return; }
L_0054E0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E0BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0054E1E8; } }
L_0054E0BC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 1;
L_0054E0C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E068u | kUnwind; return; } goto L_0054E068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E1E0; } }
L_0054E0D8:
    st32((c.r[22].w[0] + 232u), c.f[20]);
    set32(c.r[2], c.r[22].w[0] + 324u);
    set32(c.r[21], ld32((c.r[22].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0054E1E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    set32(c.r[20], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 7;
L_0054E108:
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0054E1D0; } }
    c.budget -= 1;
L_0054E118:
    set32(c.r[18], ld32((c.r[20].w[0] + 120u)));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[20].w[0] + 120u);
    c.budget -= 4;
L_0054E128:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[18].d[0] + 0ull;  goto L_0054E1B8; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E144u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054E144u) [[unlikely]] return; }
L_0054E144:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E150u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0105(c, 231u, depth + 1u); else { c.pc = 0x005164E0u; return; } if (c.pc != 0x0054E150u) [[unlikely]] return; }
L_0054E150:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 152u)));  goto L_0054E170; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E1E4; } }
L_0054E16C:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0054E170:
    st32((c.r[29].w[0] + 144u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E18Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x0054E18Cu) [[unlikely]] return; }
L_0054E18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E1B4; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E1B4; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E1E4; } }
L_0054E1B4:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0054E1B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0]; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E128u | kUnwind; return; } goto L_0054E128; } }
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E118u | kUnwind; return; } goto L_0054E118; } }
L_0054E1D0:
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[22].w[0] + 324u);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[21].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E108u | kUnwind; return; } goto L_0054E108; }
L_0054E1E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0054E1E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0054E210:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0054E2D8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[22].w[0] + 236u), c.f[20]);  goto L_0054E258; }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[22].w[0] + 236u), c.f[20]);
    c.budget -= 2;
L_0054E258:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054E3E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E268:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 12u)));  goto L_0054E2C0; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E2BC; } }
    st32((c.r[2].w[0] + 236u), c.f[20]);
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E2BC; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E2ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 112u, depth + 1u); else { c.pc = 0x0054E210u; return; } if (c.pc != 0x0054E2ACu) [[unlikely]] return; }
L_0054E2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0054E3E8; } }
L_0054E2BC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 1;
L_0054E2C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E268u | kUnwind; return; } goto L_0054E268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E3E0; } }
L_0054E2D8:
    st32((c.r[22].w[0] + 236u), c.f[20]);
    set32(c.r[2], c.r[22].w[0] + 324u);
    set32(c.r[21], ld32((c.r[22].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0054E3E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    set32(c.r[20], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 7;
L_0054E308:
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0054E3D0; } }
    c.budget -= 1;
L_0054E318:
    set32(c.r[18], ld32((c.r[20].w[0] + 120u)));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[20].w[0] + 120u);
    c.budget -= 4;
L_0054E328:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[18].d[0] + 0ull;  goto L_0054E3B4; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E344u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0054E344u) [[unlikely]] return; }
L_0054E344:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E350u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0105(c, 231u, depth + 1u); else { c.pc = 0x005164E0u; return; } if (c.pc != 0x0054E350u) [[unlikely]] return; }
L_0054E350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 152u), c.r[17].w[0]);  goto L_0054E370; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E3E4; } }
L_0054E36C:
    st32((c.r[29].w[0] + 152u), c.r[17].w[0]);
    c.budget -= 1;
L_0054E370:
    st32((c.r[19].w[0] + 112u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E388u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x0054E388u) [[unlikely]] return; }
L_0054E388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E3B0; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E3B0; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E3E4; } }
L_0054E3B0:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0054E3B4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0]; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E328u | kUnwind; return; } goto L_0054E328; } }
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E318u | kUnwind; return; } goto L_0054E318; } }
    c.budget -= 1;
L_0054E3D0:
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[22].w[0] + 324u);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[21].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E308u | kUnwind; return; } goto L_0054E308; }
L_0054E3E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0054E3E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0054E410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0054E4B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 196u), c.f[20]);  goto L_0054E450; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 196u), c.f[20]);
    c.budget -= 2;
L_0054E450:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0054E550; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E460:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0054E49C; }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054E498; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 121u, depth + 1u); else { c.pc = 0x0054E410u; return; } if (c.pc != 0x0054E488u) [[unlikely]] return; }
L_0054E488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054E558; } }
L_0054E498:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0054E49C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E460u | kUnwind; return; } goto L_0054E460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E550; } }
L_0054E4B4:
    st32((c.r[16].w[0] + 196u), c.f[20]);
    set32(c.r[2], c.r[16].w[0] + 324u);
    set32(c.r[20], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0054E550; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_0054E4CC:
    set32(c.r[2], c.r[20].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0054E540; } }
L_0054E4D8:
    set32(c.r[18], ld32((c.r[19].w[0] + 120u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[19].w[0] + 120u);
    c.budget -= 4;
L_0054E4E8:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0054E528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E4FCu); c.f[12] = ld32((c.r[16].w[0] + 196u));  if (depth < kMaxDepth) unit_0105(c, 204u, depth + 1u); else { c.pc = 0x00516240u; return; } if (c.pc != 0x0054E4FCu) [[unlikely]] return; }
L_0054E4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E524; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E524; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E554; } }
L_0054E524:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0054E528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E4E8u | kUnwind; return; } goto L_0054E4E8; } }
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[20].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E4D8u | kUnwind; return; } goto L_0054E4D8; } }
L_0054E540:
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] + 324u);
    c.budget -= 4;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[20].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E4CCu | kUnwind; return; } goto L_0054E4CC; }
L_0054E550:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054E558:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054E580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[14];  if (t) { goto L_0054E644; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 184u), c.f[22]);  goto L_0054E5D0; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 184u), c.f[22]);
    c.budget -= 2;
L_0054E5D0:
    st32((c.r[18].w[0] + 188u), c.f[21]);
    st32((c.r[18].w[0] + 192u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054E6E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E5E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054E62C; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054E628; } }
    c.f[12] = c.f[22];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E618u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0113(c, 128u, depth + 1u); else { c.pc = 0x0054E580u; return; } if (c.pc != 0x0054E618u) [[unlikely]] return; }
L_0054E618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054E6F0; } }
L_0054E628:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054E62C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E5E8u | kUnwind; return; } goto L_0054E5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E6E8; } }
L_0054E644:
    st32((c.r[18].w[0] + 184u), c.f[22]);
    set32(c.r[2], c.r[18].w[0] + 324u);
    st32((c.r[18].w[0] + 188u), c.f[21]);
    st32((c.r[18].w[0] + 192u), c.f[20]);
    set32(c.r[17], ld32((c.r[18].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0054E6E8; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0054E664:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054E6D8; } }
L_0054E670:
    set32(c.r[20], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[16].w[0] + 120u);
    c.budget -= 4;
L_0054E680:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0054E6BC; }
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E69Cu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0105(c, 216u, depth + 1u); else { c.pc = 0x00516340u; return; } if (c.pc != 0x0054E69Cu) [[unlikely]] return; }
L_0054E69C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E6B8; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E6EC; } }
L_0054E6B8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0054E6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; set32(c.r[20], ld32((c.r[20].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E680u | kUnwind; return; } goto L_0054E680; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E670u | kUnwind; return; } goto L_0054E670; } }
    c.budget -= 1;
L_0054E6D8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + 324u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E664u | kUnwind; return; } goto L_0054E664; }
L_0054E6E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054E6F0:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054E720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[13];  if (t) { goto L_0054E7EC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 172u)));  goto L_0054E76C; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 2;
L_0054E76C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054E788; }
    st32((c.r[18].w[0] + 176u), c.f[21]);
    st32((c.r[18].w[0] + 180u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
L_0054E788:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054E910; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E794:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054E7D4; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054E7D0; } }
    c.f[12] = c.f[21];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E7C0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0113(c, 135u, depth + 1u); else { c.pc = 0x0054E720u; return; } if (c.pc != 0x0054E7C0u) [[unlikely]] return; }
L_0054E7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054E918; } }
L_0054E7D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054E7D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E794u | kUnwind; return; } goto L_0054E794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E910; } }
L_0054E7EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 176u), c.f[21]);  goto L_0054E878; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E874; } }
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[19].w[0] + 180u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] + 336u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[19].w[0] + 336u)));  if (t) { goto L_0054E87C; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0054E830:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0054E858; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 5;
L_0054E858:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 336u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E830u | kUnwind; return; } goto L_0054E830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 324u)));  if (t) { goto L_0054E880; } }
L_0054E874:
    st32((c.r[19].w[0] + 176u), c.f[21]);
    c.budget -= 1;
L_0054E878:
    st32((c.r[19].w[0] + 180u), c.f[20]);
    c.budget -= 1;
L_0054E87C:
    set32(c.r[17], ld32((c.r[19].w[0] + 324u)));
    c.budget -= 1;
L_0054E880:
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0054E910; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0054E890:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054E900; } }
    c.budget -= 1;
L_0054E8A0:
    set32(c.r[20], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 120u);
    c.budget -= 4;
L_0054E8B0:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0054E8E8; }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E8C8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0105(c, 219u, depth + 1u); else { c.pc = 0x005163A0u; return; } if (c.pc != 0x0054E8C8u) [[unlikely]] return; }
L_0054E8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054E8E4; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054E8E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054E914; } }
L_0054E8E4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0054E8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[20], ld32((c.r[20].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E8B0u | kUnwind; return; } goto L_0054E8B0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E8A0u | kUnwind; return; } goto L_0054E8A0; } }
L_0054E900:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E890u | kUnwind; return; } goto L_0054E890; }
L_0054E910:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054E914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054E918:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054E940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0054EB54; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 144u), c.r[18].w[0]);  goto L_0054E97C; }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 144u), c.r[18].w[0]);
    c.budget -= 2;
L_0054E97C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_0054EB04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    if (c.r[18].sd[0] < 0) { set32(c.r[3], c.r[18].w[0] >> 1);  goto L_0054E9A0; }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054E9B8; } }
L_0054E9A0:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0054E9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E9C0u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054E9C0u) [[unlikely]] return; }
L_0054E9C0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054E9F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EA14; } }
L_0054E9F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054EA14:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EA2Cu); st32((c.r[19].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054EA2Cu) [[unlikely]] return; }
L_0054EA2C:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054EA64; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EA80; } }
L_0054EA64:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054EA80:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EA98u); st32((c.r[19].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054EA98u) [[unlikely]] return; }
L_0054EA98:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054EAD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EAEC; } }
L_0054EAD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054EAEC:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[19].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 6;
L_0054EB04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054ECD8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054EB10:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054EB38; } }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054EB38; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EB38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 143u, depth + 1u); else { c.pc = 0x0054E940u; return; } if (c.pc != 0x0054EB38u) [[unlikely]] return; }
L_0054EB38:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EB10u | kUnwind; return; } goto L_0054EB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054ECDC; } }
L_0054EB54:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 144u), c.r[18].w[0]);  if (t) { goto L_0054ECD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    if (c.r[18].sd[0] < 0) { set32(c.r[3], c.r[18].w[0] >> 1);  goto L_0054EB78; }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EB90; } }
L_0054EB78:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0054EB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EB98u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054EB98u) [[unlikely]] return; }
L_0054EB98:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054EBD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EBEC; } }
L_0054EBD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054EBEC:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EC04u); st32((c.r[19].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054EC04u) [[unlikely]] return; }
L_0054EC04:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054EC3C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054EC58; } }
L_0054EC3C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054EC58:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EC70u); st32((c.r[19].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054EC70u) [[unlikely]] return; }
L_0054EC70:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0054ECA8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0054ECC4; } }
L_0054ECA8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0054ECC4:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[19].w[0] + 140u), c.f[0]);
    c.budget -= 5;
L_0054ECD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054ECDC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054ED00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054EDA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 172u), c.r[16].w[0]);  goto L_0054ED40; }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 172u), c.r[16].w[0]);
    c.budget -= 2;
L_0054ED40:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0054EE38; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054ED50:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0054ED8C; }
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054ED88; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054ED78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 152u, depth + 1u); else { c.pc = 0x0054ED00u; return; } if (c.pc != 0x0054ED78u) [[unlikely]] return; }
L_0054ED78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054ED88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054EE40; } }
L_0054ED88:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0054ED8C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054ED50u | kUnwind; return; } goto L_0054ED50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054EE38; } }
L_0054EDA4:
    st32((c.r[17].w[0] + 172u), c.r[16].w[0]);
    set32(c.r[2], c.r[17].w[0] + 324u);
    set32(c.r[21], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0054EE38; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_0054EDBC:
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0054EE28; } }
L_0054EDC8:
    set32(c.r[19], ld32((c.r[20].w[0] + 120u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] + 120u);
    c.budget -= 4;
L_0054EDD8:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0054EE0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EDECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0105(c, 192u, depth + 1u); else { c.pc = 0x00516110u; return; } if (c.pc != 0x0054EDECu) [[unlikely]] return; }
L_0054EDEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054EE08; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054EE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054EE3C; } }
L_0054EE08:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0054EE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[19], ld32((c.r[19].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EDD8u | kUnwind; return; } goto L_0054EDD8; } }
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EDC8u | kUnwind; return; } goto L_0054EDC8; } }
    c.budget -= 1;
L_0054EE28:
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[21].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EDBCu | kUnwind; return; } goto L_0054EDBC; }
L_0054EE38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054EE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054EE40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054EE60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0054EF18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFCB0000u);  goto L_0054EE94; }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFCB0000u);
    c.budget -= 2;
L_0054EE94:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[4].d[0] = c.r[2].d[0] | 36863ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[16].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0054EF3C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054EEC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_0054EF00; }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054EEFC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EEECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 159u, depth + 1u); else { c.pc = 0x0054EE60u; return; } if (c.pc != 0x0054EEECu) [[unlikely]] return; }
L_0054EEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054EEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054EF44; } }
L_0054EEFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0054EF00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EEC4u | kUnwind; return; } goto L_0054EEC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054EF40; } }
L_0054EF18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00340000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 304u)));
    c.r[3].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFCB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36863ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 9;
L_0054EF3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054EF40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054EF44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054EF60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0054EFFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 104u), c.r[19].w[0]);  goto L_0054EF98; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 104u), c.r[19].w[0]);
    c.budget -= 2;
L_0054EF98:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054F000; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054EFA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054EFE4; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054EFE0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EFD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 162u, depth + 1u); else { c.pc = 0x0054EF60u; return; } if (c.pc != 0x0054EFD0u) [[unlikely]] return; }
L_0054EFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054EFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054F008; } }
L_0054EFE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054EFE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054EFA8u | kUnwind; return; } goto L_0054EFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054F004; } }
L_0054EFFC:
    st32((c.r[4].w[0] + 104u), c.r[19].w[0]);
    c.budget -= 1;
L_0054F000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054F008:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054F020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0054F0BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 100u), c.f[20]);  goto L_0054F058; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 100u), c.f[20]);
    c.budget -= 2;
L_0054F058:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054F0C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F068:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054F0A4; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054F0A0; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F090u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 165u, depth + 1u); else { c.pc = 0x0054F020u; return; } if (c.pc != 0x0054F090u) [[unlikely]] return; }
L_0054F090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054F0C8; } }
L_0054F0A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054F0A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F068u | kUnwind; return; } goto L_0054F068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054F0C4; } }
L_0054F0BC:
    st32((c.r[4].w[0] + 100u), c.f[20]);
    c.budget -= 1;
L_0054F0C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054F0C8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054F0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0054F16C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);  goto L_0054F150; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_0054F134; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0054F17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F17C; } }
L_0054F134:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F17C; } }
L_0054F150:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F17C; } }
L_0054F16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 4;
L_0054F17C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 96u), c.f[20]);  goto L_0054F1F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 96u), c.f[20]);  goto L_0054F198; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 96u), c.f[20]);
    c.budget -= 2;
L_0054F198:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054F1F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F1A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054F1E8; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054F1E4; } }
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F1D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 168u, depth + 1u); else { c.pc = 0x0054F0E0u; return; } if (c.pc != 0x0054F1D4u) [[unlikely]] return; }
L_0054F1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054F200; } }
L_0054F1E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054F1E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F1A8u | kUnwind; return; } goto L_0054F1A8; } }
L_0054F1F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0054F200:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054F220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0054F244; }
L_0054F244:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 84u));  goto L_0054F2A4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0054F280; }
    set32(c.r[5], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F270u); set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0054F270u) [[unlikely]] return; }
L_0054F270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0054F42C; } }
L_0054F280:
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F290u); set32(c.r[5], ld32((c.r[16].w[0] + 372u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0054F290u) [[unlikely]] return; }
L_0054F290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F428; } }
L_0054F2A0:
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 1;
L_0054F2A4:
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[20] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::mul(c.f[2], c.f[1]);  if (t) { goto L_0054F304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F2C8u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054F2C8u) [[unlikely]] return; }
L_0054F2C8:
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
    c.budget -= 15;
L_0054F304:
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F310u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054F310u) [[unlikely]] return; }
L_0054F310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[16].w[0] + 96u));  goto L_0054F320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F428; } }
L_0054F320:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[16].w[0] + 92u));  if (t) { goto L_0054F3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F33Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054F33Cu) [[unlikely]] return; }
L_0054F33C:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.f[3] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0054F3F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054F3D0; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054F39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[3], c.f[20]);  if (t) { goto L_0054F3F8; } }
L_0054F39C:
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
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F3F4; } }
L_0054F3D0:
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
L_0054F3F4:
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.budget -= 1;
L_0054F3F8:
    c.f[1] = fp::add(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F414u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054F414u) [[unlikely]] return; }
L_0054F414:
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F420u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x0054F420u) [[unlikely]] return; }
L_0054F420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054F428; }
L_0054F428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0054F42C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0054F440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054F464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054F4C0; } }
L_0054F464:
    set32(c.r[16], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054F498; } }
L_0054F474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 28u, depth + 1u); else { c.pc = 0x00554270u; return; } if (c.pc != 0x0054F47Cu) [[unlikely]] return; }
L_0054F47C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0054F48C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0054F4C4; } }
L_0054F48C:
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F474u | kUnwind; return; } goto L_0054F474; } }
L_0054F498:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054F4C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F4ACu);  if (depth < kMaxDepth) unit_0106(c, 255u, depth + 1u); else { c.pc = 0x0051B9A0u; return; } if (c.pc != 0x0054F4ACu) [[unlikely]] return; }
L_0054F4AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 372u), 0u);  goto L_0054F4BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F4C0; } }
L_0054F4BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0054F4C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0054F4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054F510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054F734; } }
L_0054F510:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F524u); set32(c.r[6], c.r[17].w[0] + 372u);  if (depth < kMaxDepth) unit_010E(c, 33u, depth + 1u); else { c.pc = 0x00538390u; return; } if (c.pc != 0x0054F524u) [[unlikely]] return; }
L_0054F524:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 372u)));  goto L_0054F534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0054F738; } }
L_0054F534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F53Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0106(c, 219u, depth + 1u); else { c.pc = 0x0051B5F0u; return; } if (c.pc != 0x0054F53Cu) [[unlikely]] return; }
L_0054F53C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[20] = ld32((c.r[17].w[0] + 100u));  goto L_0054F55C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054F558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 11u, depth + 1u); else { c.pc = 0x00528130u; return; } if (c.pc != 0x0054F558u) [[unlikely]] return; }
L_0054F558:
    c.f[20] = ld32((c.r[17].w[0] + 100u));
    c.budget -= 1;
L_0054F55C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[17].w[0] + 84u));  if (t) { goto L_0054F5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F578u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054F578u) [[unlikely]] return; }
L_0054F578:
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
    c.budget -= 15;
L_0054F5B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F5C0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054F5C0u) [[unlikely]] return; }
L_0054F5C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[17].w[0] + 96u));  goto L_0054F5D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F734; } }
L_0054F5D0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_0054F6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F5ECu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054F5ECu) [[unlikely]] return; }
L_0054F5EC:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.f[3] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0054F6A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054F680; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054F64C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[3], c.f[20]);  if (t) { goto L_0054F6A8; } }
L_0054F64C:
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
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F6A4; } }
L_0054F680:
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
L_0054F6A4:
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.budget -= 1;
L_0054F6A8:
    c.f[1] = fp::add(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F6C4u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054F6C4u) [[unlikely]] return; }
L_0054F6C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F6D0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x0054F6D0u) [[unlikely]] return; }
L_0054F6D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 324u)));  goto L_0054F6E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F734; } }
L_0054F6E0:
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054F730; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 1;
L_0054F6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F6F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 32u, depth + 1u); else { c.pc = 0x00554330u; return; } if (c.pc != 0x0054F6F8u) [[unlikely]] return; }
L_0054F6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0054F708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F734; } }
L_0054F708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F720; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[17].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 4;
L_0054F720:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 372u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F6F0u | kUnwind; return; } goto L_0054F6F0; }
L_0054F730:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0054F738:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054F750:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 336u)));  goto L_0054F760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054F790; } }
L_0054F760:
    set32(c.r[2], c.r[4].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054F788; } }
L_0054F76C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F76Cu | kUnwind; return; } goto L_0054F76C; } }
L_0054F788:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054F790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054F7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054F7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054F874; } }
L_0054F7C0:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u - 1u);  goto L_0054F810; }
    set32(c.r[6], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[2], c.r[4].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0054F7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054F808; } }
L_0054F7E0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0054F808; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_0054F7EC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_0054F7FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0054F808; } }
L_0054F7FC:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[6], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F7ECu | kUnwind; return; } goto L_0054F7EC; }
    c.budget -= 1;
L_0054F808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054F858; } }
L_0054F810:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0054F858; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[3], c.r[4].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0054F858; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 1;
L_0054F82C:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_0054F84C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054F858; } }
L_0054F84C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F82Cu | kUnwind; return; } goto L_0054F82C; }
    c.budget -= 1;
L_0054F858:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0054F874; }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F86Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 186u, depth + 1u); else { c.pc = 0x00559FF0u; return; } if (c.pc != 0x0054F86Cu) [[unlikely]] return; }
L_0054F86C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0054F874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0054F890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0054F8C0; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0054F8C8; }
L_0054F8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054F934; } }
L_0054F8C8:
    set32(c.r[2], c.r[19].w[0] + 336u);
    set32(c.r[16], ld32((c.r[19].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054F930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0054F8DC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0054F924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F8F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0054F8F0u) [[unlikely]] return; }
L_0054F8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054F920; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F904u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 186u, depth + 1u); else { c.pc = 0x00559FF0u; return; } if (c.pc != 0x0054F904u) [[unlikely]] return; }
L_0054F904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0054F914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054F918; } }
L_0054F914:
    set32(c.r[2], 0u + 36u);
    c.budget -= 1;
L_0054F918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054F938; } }
L_0054F920:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0054F924:
    set32(c.r[2], c.r[19].w[0] + 336u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F8DCu | kUnwind; return; } goto L_0054F8DC; }
L_0054F930:
    set32(c.r[2], 0u + 87u);
    c.budget -= 1;
L_0054F934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054F938:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054F950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054F9C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054F980:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_0054F9B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F99Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 204u, depth + 1u); else { c.pc = 0x0054F950u; return; } if (c.pc != 0x0054F99Cu) [[unlikely]] return; }
L_0054F99C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054F9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054FA28; } }
L_0054F9AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0054F9B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F980u | kUnwind; return; } goto L_0054F980; } }
L_0054F9C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054FA24; }
    set32(c.r[16], ld32((c.r[19].w[0] + 336u)));
    set32(c.r[2], c.r[19].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054FA08; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0054F9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F9ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 158u, depth + 1u); else { c.pc = 0x00562180u; return; } if (c.pc != 0x0054F9ECu) [[unlikely]] return; }
L_0054F9EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0054F9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054FA24; } }
L_0054F9FC:
    set32(c.r[2], c.r[19].w[0] + 336u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054F9E4u | kUnwind; return; } goto L_0054F9E4; }
L_0054FA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FA10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 210u, depth + 1u); else { c.pc = 0x0054FA40u; return; } if (c.pc != 0x0054FA10u) [[unlikely]] return; }
L_0054FA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054FA24; } }
L_0054FA20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054FA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054FA28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054FA40:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 33u);
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = c.r[3].d[0] & 16ull;  if (t) { goto L_0054FAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FAACu); set32(c.r[4], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0054FAACu) [[unlikely]] return; }
L_0054FAAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 308u)));  goto L_0054FABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0114(c, 43u, depth); } }
L_0054FABC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 276u)));  goto L_0054FAD0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[20].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
L_0054FAD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 308u)));
    set32(c.r[21], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[21].sd[0] >= 0) { st32((c.r[20].w[0] + 308u), c.r[3].w[0]);  goto L_0054FAE8; }
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 2;
L_0054FAE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 324u)));  goto L_0054FD44; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 316u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0054FC68; }
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[20].w[0] + 316u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[20].w[0] + 372u)));  goto L_0054FBA4; }
    st16((c.r[20].w[0] + 316u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[20].w[0] + 372u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 304u)));  goto L_0054FB78; }
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 84u));  goto L_0054FB54; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054FB5C; } }
L_0054FB54:
    c.f[0] = ld32((c.r[20].w[0] + 88u));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 2;
L_0054FB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FB64u);  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054FB64u) [[unlikely]] return; }
L_0054FB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FB74:
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.budget -= 1;
L_0054FB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FC64; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 420u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FB9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054FB9Cu) [[unlikely]] return; }
L_0054FB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FBA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054FC64; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0054FBC0; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 304u)));  if (t) { goto L_0054FBD0; } }
L_0054FBC0:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.budget -= 4;
L_0054FBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  goto L_0054FC04; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 314u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054FC40; } }
L_0054FC04:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0054FC3C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0054FC40; } }
L_0054FC3C:
    c.f[2] = c.r[2].w[0];
    c.budget -= 1;
L_0054FC40:
    c.f[1] = ld32((c.r[20].w[0] + 84u));
    c.f[0] = ld32((c.r[20].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FC54u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054FC54u) [[unlikely]] return; }
L_0054FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FC64:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0054FC68:
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 264u), c.r[2].w[0]);  if (t) { goto L_0054FD10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FCA0u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054FCA0u) [[unlikely]] return; }
L_0054FCA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FCB0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0054FCB0u) [[unlikely]] return; }
L_0054FCB0:
    c.r[6].d[0] = ld64((c.r[20].w[0] + 264u));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 272u));
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
    { const bool t = 0ull == 0ull; st64((c.r[20].w[0] + 272u), c.r[2].d[0]);  if (t) { goto L_0054FD28; } }
L_0054FD10:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 264u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[2].d[0] = ld64((c.r[20].w[0] + 272u));
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    st64((c.r[20].w[0] + 272u), c.r[2].d[0]);
    c.budget -= 6;
L_0054FD28:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[20].w[0] + 264u), c.r[2].d[0]);  if (t) { goto L_0054FD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FD40:
    set32(c.r[19], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 1;
L_0054FD44:
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0114(c, 35u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0054FD54:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 34u, depth); } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 84u)));  goto L_0054FD88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FD74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 76u, depth + 1u); else { c.pc = 0x00554A40u; return; } if (c.pc != 0x0054FD74u) [[unlikely]] return; }
L_0054FD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FD84:
    set32(c.r[16], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 1;
L_0054FD88:
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054FE48; } }
    c.budget -= 1;
L_0054FD98:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = c.r[3].d[0] & 24ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0054FE28; } }
    st8((c.r[29].w[0] + 286u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 286u));  goto L_0054FDF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FDC4u); set32(c.r[5], c.r[29].w[0] + 286u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x0054FDC4u) [[unlikely]] return; }
L_0054FDC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FDEC; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054FDEC; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054FDEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FDEC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 286u));
    c.budget -= 1;
L_0054FDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FE08; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0054FE28; } }
    c.budget -= 1;
L_0054FE08:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
L_0054FE28:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FE38; } }
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0054FE38:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054FD98u | kUnwind; return; } goto L_0054FD98; } }
L_0054FE48:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[30], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 6;
    { const bool t = c.r[30].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0114(c, 24u, depth); } }
L_0054FE60:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0054FF88; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FE88u); set32(c.r[5], c.r[29].w[0] + 285u);  if (depth < kMaxDepth) unit_0118(c, 148u, depth + 1u); else { c.pc = 0x00561E60u; return; } if (c.pc != 0x0054FE88u) [[unlikely]] return; }
L_0054FE88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 285u));  goto L_0054FE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FEB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0054FF24; } }
    c.budget -= 1;
L_0054FEB0:
    set32(c.r[3], ld32((c.r[30].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 16ull;  goto L_0054FEE8; }
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FED8u); set32(c.r[5], c.r[29].w[0] + 287u);  if (depth < kMaxDepth) unit_0118(c, 147u, depth + 1u); else { c.pc = 0x00561DB0u; return; } if (c.pc != 0x0054FED8u) [[unlikely]] return; }
L_0054FED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 287u));  goto L_0054FF28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FF24; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054FF24; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054FF14u); set32(c.r[5], c.r[29].w[0] + 287u);  if (depth < kMaxDepth) unit_0118(c, 147u, depth + 1u); else { c.pc = 0x00561DB0u; return; } if (c.pc != 0x0054FF14u) [[unlikely]] return; }
L_0054FF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FF24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 42u, depth); } }
L_0054FF24:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 287u));
    c.budget -= 1;
L_0054FF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054FF90; } }
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054FF68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0054FF90; } }
    c.budget -= 1;
L_0054FF68:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u - 129u);
    set32(c.r[2], 0u - 257u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0054FF90; } }
L_0054FF88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0054FF90:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 287u));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0054FFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0054FFE0; } }
L_0054FFB0:
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0054FFE0; } }
    c.budget -= 1;
L_0054FFC0:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054FFC0u | kUnwind; return; } goto L_0054FFC0; } }
    c.budget -= 1;
L_0054FFE0:
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0114(c, 8u, depth); } }
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0114(c, 7u, depth); } }
    [[clang::musttail]] return unit_0114(c, 2u, depth);
}

}
