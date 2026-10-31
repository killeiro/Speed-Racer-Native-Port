#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005F[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0,
    36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0,
    164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0,
    225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0,
    250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0,
    0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
};

void unit_005F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0027C000;
    case 2u: goto L_0027C010;
    case 3u: goto L_0027C020;
    case 4u: goto L_0027C030;
    case 5u: goto L_0027C040;
    case 6u: goto L_0027C050;
    case 7u: goto L_0027C084;
    case 8u: goto L_0027C094;
    case 9u: goto L_0027C0B0;
    case 10u: goto L_0027C0CC;
    case 11u: goto L_0027C0F0;
    case 12u: goto L_0027C110;
    case 13u: goto L_0027C13C;
    case 14u: goto L_0027C158;
    case 15u: goto L_0027C170;
    case 16u: goto L_0027C178;
    case 17u: goto L_0027C200;
    case 18u: goto L_0027C2C0;
    case 19u: goto L_0027C2E8;
    case 20u: goto L_0027C310;
    case 21u: goto L_0027C39C;
    case 22u: goto L_0027C3F4;
    case 23u: goto L_0027C400;
    case 24u: goto L_0027C440;
    case 25u: goto L_0027C650;
    case 26u: goto L_0027C6A4;
    case 27u: goto L_0027C764;
    case 28u: goto L_0027C830;
    case 29u: goto L_0027C870;
    case 30u: goto L_0027C8B0;
    case 31u: goto L_0027C8D0;
    case 32u: goto L_0027C920;
    case 33u: goto L_0027C95C;
    case 34u: goto L_0027C968;
    case 35u: goto L_0027C974;
    case 36u: goto L_0027C980;
    case 37u: goto L_0027C98C;
    case 38u: goto L_0027C998;
    case 39u: goto L_0027C9A4;
    case 40u: goto L_0027C9B0;
    case 41u: goto L_0027C9BC;
    case 42u: goto L_0027C9C8;
    case 43u: goto L_0027C9D4;
    case 44u: goto L_0027CA10;
    case 45u: goto L_0027CA50;
    case 46u: goto L_0027CA7C;
    case 47u: goto L_0027CA88;
    case 48u: goto L_0027CAA0;
    case 49u: goto L_0027CAE0;
    case 50u: goto L_0027CB04;
    case 51u: goto L_0027CB14;
    case 52u: goto L_0027CB90;
    case 53u: goto L_0027CBE0;
    case 54u: goto L_0027CBEC;
    case 55u: goto L_0027CC2C;
    case 56u: goto L_0027CC38;
    case 57u: goto L_0027CC78;
    case 58u: goto L_0027CC84;
    case 59u: goto L_0027CCCC;
    case 60u: goto L_0027CCDC;
    case 61u: goto L_0027CCE4;
    case 62u: goto L_0027CD20;
    case 63u: goto L_0027CD40;
    case 64u: goto L_0027CD70;
    case 65u: goto L_0027CD7C;
    case 66u: goto L_0027CE60;
    case 67u: goto L_0027CEC0;
    case 68u: goto L_0027CFD0;
    case 69u: goto L_0027D020;
    case 70u: goto L_0027D048;
    case 71u: goto L_0027D100;
    case 72u: goto L_0027D190;
    case 73u: goto L_0027D200;
    case 74u: goto L_0027D20C;
    case 75u: goto L_0027D2D0;
    case 76u: goto L_0027D2DC;
    case 77u: goto L_0027D3C0;
    case 78u: goto L_0027D560;
    case 79u: goto L_0027D700;
    case 80u: goto L_0027D8C0;
    case 81u: goto L_0027D8F4;
    case 82u: goto L_0027D900;
    case 83u: goto L_0027D9D0;
    case 84u: goto L_0027D9EC;
    case 85u: goto L_0027D9F8;
    case 86u: goto L_0027DA50;
    case 87u: goto L_0027DA6C;
    case 88u: goto L_0027DA78;
    case 89u: goto L_0027DAD0;
    case 90u: goto L_0027DAEC;
    case 91u: goto L_0027DAF8;
    case 92u: goto L_0027DB50;
    case 93u: goto L_0027DBA0;
    case 94u: goto L_0027DC00;
    case 95u: goto L_0027DC24;
    case 96u: goto L_0027DC50;
    case 97u: goto L_0027DC9C;
    case 98u: goto L_0027DCE0;
    case 99u: goto L_0027DD00;
    case 100u: goto L_0027DD54;
    case 101u: goto L_0027DDC0;
    case 102u: goto L_0027DDD4;
    case 103u: goto L_0027DDF0;
    case 104u: goto L_0027DE00;
    case 105u: goto L_0027DE10;
    case 106u: goto L_0027DE1C;
    case 107u: goto L_0027DE70;
    case 108u: goto L_0027DFD0;
    case 109u: goto L_0027E000;
    case 110u: goto L_0027E0D0;
    case 111u: goto L_0027E1B0;
    case 112u: goto L_0027E1F8;
    case 113u: goto L_0027E204;
    case 114u: goto L_0027E25C;
    case 115u: goto L_0027E2A0;
    case 116u: goto L_0027E2D0;
    case 117u: goto L_0027E2F0;
    case 118u: goto L_0027E310;
    case 119u: goto L_0027E368;
    case 120u: goto L_0027E3A4;
    case 121u: goto L_0027E3AC;
    case 122u: goto L_0027E3DC;
    case 123u: goto L_0027E3E0;
    case 124u: goto L_0027E498;
    case 125u: goto L_0027E4B4;
    case 126u: goto L_0027E4D0;
    case 127u: goto L_0027E4E0;
    case 128u: goto L_0027E4E8;
    case 129u: goto L_0027E518;
    case 130u: goto L_0027E51C;
    case 131u: goto L_0027E600;
    case 132u: goto L_0027E624;
    case 133u: goto L_0027E660;
    case 134u: goto L_0027E710;
    case 135u: goto L_0027E730;
    case 136u: goto L_0027E760;
    case 137u: goto L_0027E7D8;
    case 138u: goto L_0027E7EC;
    case 139u: goto L_0027E870;
    case 140u: goto L_0027E8A0;
    case 141u: goto L_0027E8AC;
    case 142u: goto L_0027E8CC;
    case 143u: goto L_0027E8DC;
    case 144u: goto L_0027E8F8;
    case 145u: goto L_0027E918;
    case 146u: goto L_0027E928;
    case 147u: goto L_0027E944;
    case 148u: goto L_0027E950;
    case 149u: goto L_0027E96C;
    case 150u: goto L_0027E990;
    case 151u: goto L_0027E9C0;
    case 152u: goto L_0027E9F4;
    case 153u: goto L_0027EA10;
    case 154u: goto L_0027EA24;
    case 155u: goto L_0027EA30;
    case 156u: goto L_0027EB30;
    case 157u: goto L_0027EB58;
    case 158u: goto L_0027EB90;
    case 159u: goto L_0027EBA4;
    case 160u: goto L_0027EBB8;
    case 161u: goto L_0027EBD0;
    case 162u: goto L_0027EBE0;
    case 163u: goto L_0027EBF4;
    case 164u: goto L_0027EC00;
    case 165u: goto L_0027EC14;
    case 166u: goto L_0027EC30;
    case 167u: goto L_0027EC40;
    case 168u: goto L_0027EC50;
    case 169u: goto L_0027EC60;
    case 170u: goto L_0027EC70;
    case 171u: goto L_0027EC80;
    case 172u: goto L_0027ECE0;
    case 173u: goto L_0027ECF0;
    case 174u: goto L_0027ED50;
    case 175u: goto L_0027ED60;
    case 176u: goto L_0027ED70;
    case 177u: goto L_0027EDB8;
    case 178u: goto L_0027EDC8;
    case 179u: goto L_0027EDE4;
    case 180u: goto L_0027EDF0;
    case 181u: goto L_0027EE0C;
    case 182u: goto L_0027EE30;
    case 183u: goto L_0027EE48;
    case 184u: goto L_0027EE70;
    case 185u: goto L_0027EE80;
    case 186u: goto L_0027EEA0;
    case 187u: goto L_0027EEF0;
    case 188u: goto L_0027EF00;
    case 189u: goto L_0027EF28;
    case 190u: goto L_0027EF38;
    case 191u: goto L_0027EF5C;
    case 192u: goto L_0027EF6C;
    case 193u: goto L_0027EF88;
    case 194u: goto L_0027EF9C;
    case 195u: goto L_0027EFAC;
    case 196u: goto L_0027EFC8;
    case 197u: goto L_0027EFD8;
    case 198u: goto L_0027EFF4;
    case 199u: goto L_0027F008;
    case 200u: goto L_0027F018;
    case 201u: goto L_0027F040;
    case 202u: goto L_0027F06C;
    case 203u: goto L_0027F07C;
    case 204u: goto L_0027F0A4;
    case 205u: goto L_0027F0B4;
    case 206u: goto L_0027F0E0;
    case 207u: goto L_0027F0F0;
    case 208u: goto L_0027F120;
    case 209u: goto L_0027F13C;
    case 210u: goto L_0027F160;
    case 211u: goto L_0027F170;
    case 212u: goto L_0027F180;
    case 213u: goto L_0027F190;
    case 214u: goto L_0027F1A0;
    case 215u: goto L_0027F1B0;
    case 216u: goto L_0027F1C0;
    case 217u: goto L_0027F1D0;
    case 218u: goto L_0027F1E0;
    case 219u: goto L_0027F1F4;
    case 220u: goto L_0027F220;
    case 221u: goto L_0027F230;
    case 222u: goto L_0027F250;
    case 223u: goto L_0027F25C;
    case 224u: goto L_0027F270;
    case 225u: goto L_0027F280;
    case 226u: goto L_0027F294;
    case 227u: goto L_0027F2A4;
    case 228u: goto L_0027F2B8;
    case 229u: goto L_0027F2C0;
    case 230u: goto L_0027F2CC;
    case 231u: goto L_0027F2E0;
    case 232u: goto L_0027F2FC;
    case 233u: goto L_0027F320;
    case 234u: goto L_0027F334;
    case 235u: goto L_0027F33C;
    case 236u: goto L_0027F348;
    case 237u: goto L_0027F35C;
    case 238u: goto L_0027F37C;
    case 239u: goto L_0027F390;
    case 240u: goto L_0027F3A4;
    case 241u: goto L_0027F3B8;
    case 242u: goto L_0027F3CC;
    case 243u: goto L_0027F400;
    case 244u: goto L_0027F420;
    case 245u: goto L_0027F460;
    case 246u: goto L_0027F510;
    case 247u: goto L_0027F57C;
    case 248u: goto L_0027F5D0;
    case 249u: goto L_0027F5F4;
    case 250u: goto L_0027F600;
    case 251u: goto L_0027F60C;
    case 252u: goto L_0027F614;
    case 253u: goto L_0027F630;
    case 254u: goto L_0027F63C;
    case 255u: goto L_0027F648;
    case 256u: goto L_0027F654;
    case 257u: goto L_0027F660;
    case 258u: goto L_0027F66C;
    case 259u: goto L_0027F678;
    case 260u: goto L_0027F6A0;
    case 261u: goto L_0027F6A8;
    case 262u: goto L_0027F6C8;
    case 263u: goto L_0027F6F0;
    case 264u: goto L_0027F720;
    case 265u: goto L_0027F730;
    case 266u: goto L_0027F740;
    case 267u: goto L_0027F76C;
    case 268u: goto L_0027F778;
    case 269u: goto L_0027F784;
    case 270u: goto L_0027F7A8;
    case 271u: goto L_0027F7C4;
    case 272u: goto L_0027F7D0;
    case 273u: goto L_0027F7EC;
    case 274u: goto L_0027F7F8;
    case 275u: goto L_0027F804;
    case 276u: goto L_0027F810;
    case 277u: goto L_0027F81C;
    case 278u: goto L_0027F828;
    case 279u: goto L_0027F834;
    case 280u: goto L_0027F858;
    case 281u: goto L_0027F880;
    case 282u: goto L_0027F8DC;
    case 283u: goto L_0027F8E4;
    case 284u: goto L_0027F8E8;
    case 285u: goto L_0027F924;
    case 286u: goto L_0027F968;
    case 287u: goto L_0027F974;
    case 288u: goto L_0027F97C;
    case 289u: goto L_0027F994;
    case 290u: goto L_0027F9B8;
    case 291u: goto L_0027F9C4;
    case 292u: goto L_0027F9D4;
    case 293u: goto L_0027F9E4;
    case 294u: goto L_0027F9F0;
    case 295u: goto L_0027F9F8;
    case 296u: goto L_0027FA08;
    case 297u: goto L_0027FA30;
    case 298u: goto L_0027FB60;
    case 299u: goto L_0027FB70;
    case 300u: goto L_0027FB80;
    case 301u: goto L_0027FBC0;
    case 302u: goto L_0027FBDC;
    case 303u: goto L_0027FBEC;
    case 304u: goto L_0027FC30;
    case 305u: goto L_0027FC60;
    case 306u: goto L_0027FCB0;
    case 307u: goto L_0027FCF4;
    case 308u: goto L_0027FD10;
    case 309u: goto L_0027FD30;
    case 310u: goto L_0027FD64;
    case 311u: goto L_0027FD80;
    case 312u: goto L_0027FDA0;
    case 313u: goto L_0027FDFC;
    case 314u: goto L_0027FE08;
    case 315u: goto L_0027FE60;
    case 316u: goto L_0027FEE0;
    case 317u: goto L_0027FF14;
    case 318u: goto L_0027FF20;
    case 319u: goto L_0027FF54;
    case 320u: goto L_0027FF88;
    case 321u: goto L_0027FF94;
    case 322u: goto L_0027FFB0;
    case 323u: goto L_0027FFD0;
    case 324u: goto L_0027FFF8;
    default: bad_entry(c, 0x0027C000u); return;
    }
L_0027C000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0027C020:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6F50u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 369u, depth); }
L_0027C030:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223280u | kUnwind; return; } [[clang::musttail]] return unit_0048(c, 315u, depth); }
L_0027C040:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F72D0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 398u, depth); }
L_0027C050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027C0CC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_0027C0B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C084u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027C084u) [[unlikely]] return; }
L_0027C084:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C094u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027C094u) [[unlikely]] return; }
L_0027C094:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C0B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027C0B0u) [[unlikely]] return; }
L_0027C0B0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_0027C0B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0027C0D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0CCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027C0CCu) [[unlikely]] return; }
L_0027C0CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027C0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027C0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C110u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0069(c, 457u, depth + 1u); else { c.pc = 0x002A7C70u; return; } if (c.pc != 0x0027C110u) [[unlikely]] return; }
L_0027C110:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[1].d[0] = c.r[16].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 104u)));  if (t) { goto L_0027C12C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 512ull;  if (t) { goto L_0027C15C; } }
L_0027C12C:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C13Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0027C13Cu) [[unlikely]] return; }
L_0027C13C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32272u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C158u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0027C158u) [[unlikely]] return; }
L_0027C158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027C15C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C170u); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0027C170u) [[unlikely]] return; }
L_0027C170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0027C2A0; } }
L_0027C178:
    set32(c.r[4], c.r[10].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[9], c.r[16].w[0] + c.r[4].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    ldr(c.r[4], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 7u));
    c.r[5].d[0] = ld32((c.r[6].w[0] + 8u));
    mmi::pcpyld(c.r[4], c.r[5], c.r[4]);
    c.vu0.vf[1] = c.r[4];
    c.r[6].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[8], c.r[16].w[0] + c.r[4].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    ldr(c.r[4], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 7u));
    c.r[5].d[0] = ld32((c.r[6].w[0] + 8u));
    mmi::pcpyld(c.r[4], c.r[5], c.r[4]);
    c.vu0.vf[11] = c.r[4];
    vu::sub(c.vu0, 14u, 10u, 11u, 1u);
    vu::subbc(c.vu0, 2u, 9u, 0u, c.vu0.vf[0].w[3]);
    set32(c.r[13], c.r[17].w[0] + 4u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 34;
L_0027C200:
    c.r[6].d[0] = ld16((c.r[13].w[0]));
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[16].w[0] + c.r[4].w[0]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    ldr(c.r[4], (c.r[6].w[0]));
    ldl(c.r[4], (c.r[6].w[0] + 7u));
    c.r[5].d[0] = ld32((c.r[6].w[0] + 8u));
    mmi::pcpyld(c.r[4], c.r[5], c.r[4]);
    c.vu0.vf[12] = c.r[4];
    vu::sub(c.vu0, 14u, 13u, 12u, 11u);
    vu::opmula(c.vu0, 10u, 13u);
    vu::opmsub(c.vu0, 14u, 13u, 10u);
    vu::mul(c.vu0, 14u, 7u, 14u, 14u);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[1]);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[7].w[0]);
    vu::mulbc(c.vu0, 14u, 14u, 14u, c.vu0.q);
    vu::move(c.vu0, 14u, 11u, 12u);
    vu::mulbc(c.vu0, 14u, 10u, 13u, c.vu0.vf[9].w[2]);
    vu::sub(c.vu0, 2u, 9u, 0u, 9u);
    vu::add(c.vu0, 14u, 3u, 4u, 14u);
    vu::add(c.vu0, 14u, 4u, 5u, 14u);
    vu::add(c.vu0, 14u, 5u, 6u, 14u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[9], c.r[8].w[0] + 0u);
    set32(c.r[8], c.r[7].w[0] + 0u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 35;
    { const bool t = c.r[12].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C200u | kUnwind; return; } goto L_0027C200; } }
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_0027C2A0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[10].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C178u | kUnwind; return; } goto L_0027C178; }
    c.r[5].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 105u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x0027C2C0u) [[unlikely]] return; }
L_0027C2C0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_0027C2EC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2E8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0027C2E8u) [[unlikely]] return; }
L_0027C2E8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 1;
L_0027C2EC:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027C310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[4].w[0] + 48u);  goto L_0027C394; }
    ld128((c.r[3].w[0] + 160u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 96u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 144u) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 80u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 14u, 3u, c.vu0.vf[12].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 7u, 3u, c.vu0.vf[4].w[2]);
    vu::mulbc(c.vu0, 14u, 14u, 14u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 8u, 3u, c.vu0.vf[5].w[2]);
    vu::add(c.vu0, 14u, 13u, 14u, 11u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 9u, 3u, c.vu0.vf[6].w[2]);
    st128((c.r[4].w[0] + 160u) & ~15u, c.vu0.vf[13]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.vu0.vf[7]);
    st128((c.r[4].w[0] + 128u) & ~15u, c.vu0.vf[8]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 144u) & ~15u, c.vu0.vf[9]);  if (t) { goto L_0027C3D8; } }
L_0027C394:
    set32(c.r[6], c.r[4].w[0] + 112u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0027C39C:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C39Cu | kUnwind; return; } goto L_0027C39C; } }
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[4].w[0] + 160u), c.f[2]);
    st32((c.r[4].w[0] + 164u), c.f[1]);
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 172u), c.f[0]);
    c.budget -= 8;
L_0027C3D8:
    set32(c.r[4], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027C3F8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C3F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027C3F4u) [[unlikely]] return; }
L_0027C3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027C3F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C400:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[10]);
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[3].w[0]);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 14u, 12u, 6u, c.vu0.vf[3].w[2]);
    vu::mulbc(c.vu0, 14u, 12u, 12u, c.vu0.vf[10].w[3]);
    vu::add(c.vu0, 14u, 12u, 12u, 10u);
    vu::mulbc(c.vu0, 1u, 12u, 3u, c.vu0.vf[10].w[3]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);  c.pc = t; return; }
L_0027C440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[10] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::sub(c.f[0], c.f[4]);
    c.f[5] = fp::sub(c.f[1], c.f[10]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[11] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[7] = ld32((c.r[5].w[0] + 12u));
    c.f[6] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = 0u;
    c.f[9] = fp::sub(c.f[7], c.f[6]);
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[6] = fp::mul(c.f[9], c.f[9]);  if (t) { goto L_0027C57C; } }
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[11]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 12u), c.f[11]);  goto L_0027C4BC; }
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0027C648; } }
L_0027C4BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 12u)));
    c.f[6] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[7].d[0] = c.r[3].d[0] | 23007ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.f[6] = fp::mul(c.f[6], c.f[11]);
    c.f[8] = ld32((c.r[29].w[0] + 8u));
    c.f[7] = fp::mul(c.f[6], c.f[8]);
    c.f[6] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[6] = fp::mul(c.f[8], c.f[6]);
    c.f[8] = fp::mul(c.f[11], c.f[6]);
    st32((c.r[29].w[0] + 12u), c.f[6]);
    c.f[6] = ld32((c.r[28].w[0] - 30672u));
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[6]));
    c.budget -= 23;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[5].w[0] + 12u));  goto L_0027C558; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::mul(c.f[6], c.f[8]);
    c.f[7] = fp::sub(c.f[8], c.f[9]);
    fpu_div(c, 6u, c.f[7], c.f[6]);
    c.facc = fp::add(c.f[0], c.f[10]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[3]);
    st32((c.r[4].w[0] + 8u), c.f[5]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 16;
L_0027C558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0027C648; } }
L_0027C57C:
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027C648; } }
    st32((c.r[29].w[0] + 4u), c.f[11]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.f[6] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[7].d[0] = c.r[3].d[0] | 23007ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    c.f[6] = fp::mul(c.f[6], c.f[11]);
    c.f[8] = ld32((c.r[29].w[0]));
    c.f[7] = fp::mul(c.f[6], c.f[8]);
    c.f[6] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[6] = fp::mul(c.f[8], c.f[6]);
    c.f[8] = fp::mul(c.f[11], c.f[6]);
    st32((c.r[29].w[0] + 4u), c.f[6]);
    c.f[6] = ld32((c.r[28].w[0] - 30672u));
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[6]));
    c.budget -= 24;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[5].w[0] + 12u));  goto L_0027C628; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::mul(c.f[6], c.f[8]);
    c.f[7] = fp::sub(c.f[8], c.f[9]);
    fpu_div(c, 6u, c.f[7], c.f[6]);
    c.facc = fp::add(c.f[0], c.f[10]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[3]);
    st32((c.r[4].w[0] + 8u), c.f[5]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 16;
L_0027C628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_0027C648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C650:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_0027C684; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[5].w[0] + 31028u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { goto L_0027C81C; } }
L_0027C684:
    c.f[6] = ld32((c.r[6].w[0]));
    set32(c.r[7], 0u + 1u);
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    c.f[8] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = c.f[6];
    c.f[4] = c.f[7];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[8];  if (t) { goto L_0027C720; } }
L_0027C6A4:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[3].w[0] + 4u));  goto L_0027C6C8; }
    c.f[6] = c.f[2];
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 2;
L_0027C6C8:
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[3].w[0] + 8u));  goto L_0027C6DC; }
    c.f[7] = c.f[1];
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 2;
L_0027C6DC:
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027C6EC; } }
    c.f[8] = c.f[0];
    c.budget -= 1;
L_0027C6EC:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027C6FC; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_0027C6FC:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027C70C; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_0027C70C:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0027C720; }
    c.f[5] = c.f[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0027C720:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C6A4u | kUnwind; return; } goto L_0027C6A4; }
    c.f[2] = fp::add(c.f[6], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[8], c.f[5]);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[7], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[5] = 0u;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0027C7B4; } }
L_0027C764:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 18;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0027C7B4; }
    c.f[5] = c.f[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0027C7B4:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C764u | kUnwind; return; } goto L_0027C764; }
    st32((c.r[29].w[0] + 12u), c.f[5]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.f[0] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[6].d[0] = c.r[3].d[0] | 23007ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 23;
L_0027C81C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C830:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 3u, 2u, 1u);
    set32(c.r[8], cfc2(c, 17u));
    c.r[10].d[0] = c.r[8].d[0] ^ 15ull;
    c.budget -= 8;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0027C85C; } }
    c.budget -= 3;
    { set32(c.r[2], 0u + 1u);  goto L_0027C860; }
L_0027C85C:
    set32(c.r[2], 0u);
    c.budget -= 1;
L_0027C860:
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0027C870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27724u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30676u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 27724u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[3].d[0] = c.r[3].d[0] >> 41;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C8B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 27724u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 27724u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 1);  c.pc = t; return; }
L_0027C8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[28].w[0] - 27724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30676u)));
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 27724u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 41;
    c.r[2].d[0] = c.r[2].d[0] >> 41;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C920:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C95Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0027C95Cu) [[unlikely]] return; }
L_0027C95C:
    set32(c.r[4], c.r[2].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0027C968u) [[unlikely]] return; }
L_0027C968:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C974u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C974u) [[unlikely]] return; }
L_0027C974:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C980u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C980u) [[unlikely]] return; }
L_0027C980:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C98Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C98Cu) [[unlikely]] return; }
L_0027C98C:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C998u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C998u) [[unlikely]] return; }
L_0027C998:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9A4u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C9A4u) [[unlikely]] return; }
L_0027C9A4:
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9B0u); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C9B0u) [[unlikely]] return; }
L_0027C9B0:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9BCu); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C9BCu) [[unlikely]] return; }
L_0027C9BC:
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9C8u); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C9C8u) [[unlikely]] return; }
L_0027C9C8:
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9D4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0027C9D4u) [[unlikely]] return; }
L_0027C9D4:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA10u); set32(c.r[5], c.r[5].w[0] + 15232u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0027CA10u) [[unlikely]] return; }
L_0027CA10:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0027CA50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 11;
L_0027CA7C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 3;
L_0027CA88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CAA0u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0027CAA0u) [[unlikely]] return; }
L_0027CAA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CA88u | kUnwind; return; } goto L_0027CA88; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CA7Cu | kUnwind; return; } goto L_0027CA7C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0027CAE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 9;
L_0027CB04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB14u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0027CB14u) [[unlikely]] return; }
L_0027CB14:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CB04u | kUnwind; return; } goto L_0027CB04; }
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[2]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0027CB90:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0] + 252u), 0u);
    c.f[21] = c.f[14];
    st32((c.r[29].w[0] + 268u), 0u);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 284u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBE0u); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027CBE0u) [[unlikely]] return; }
L_0027CBE0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBECu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027CBECu) [[unlikely]] return; }
L_0027CBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 244u), 0u);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 248u), 0u);
    c.f[12] = c.f[22];
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 260u), c.f[20]);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 280u), c.f[20]);
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC2Cu); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027CC2Cu) [[unlikely]] return; }
L_0027CC2C:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC38u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027CC38u) [[unlikely]] return; }
L_0027CC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 232u), c.f[20]);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC78u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027CC78u) [[unlikely]] return; }
L_0027CC78:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CC84u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027CC84u) [[unlikely]] return; }
L_0027CC84:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), c.f[20]);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 164u), c.f[20]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCCCu); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x0027CCCCu) [[unlikely]] return; }
L_0027CCCC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CCDCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x0027CCDCu) [[unlikely]] return; }
L_0027CCDC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0027CCE4:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CCE4u | kUnwind; return; } goto L_0027CCE4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0027CD20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 8;
L_0027CD40:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CD40u | kUnwind; return; } goto L_0027CD40; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CD70u); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_005F(c, 66u, depth + 1u); else { c.pc = 0x0027CE60u; return; } if (c.pc != 0x0027CD70u) [[unlikely]] return; }
L_0027CD70:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_0027CD7C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CD7Cu | kUnwind; return; } goto L_0027CD7C; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 7u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 8u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 9u, 3u, c.vu0.vf[6].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[17].w[0] + 12u), c.f[2]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 24u), c.f[2]);
    st32((c.r[17].w[0] + 28u), c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027CE60:
    c.f[8] = ld32((c.r[5].w[0]));
    c.f[7] = ld32((c.r[5].w[0] + 16u));
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 20u));
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0]), c.f[8]);
    st32((c.r[4].w[0] + 4u), c.f[7]);
    st32((c.r[4].w[0] + 8u), c.f[6]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.f[5]);
    st32((c.r[4].w[0] + 20u), c.f[4]);
    st32((c.r[4].w[0] + 24u), c.f[3]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_0027CEC0:
    c.f[5] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[4] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[5].w[0]), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[6] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[5] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[6] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[5].w[0] + 36u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[0]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[2] = c.f[1] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 62;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027CFC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027D018; } }
L_0027CFC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.budget -= 4;
L_0027CFD0:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CFD0u | kUnwind; return; } goto L_0027CFD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027D018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D048u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_005F(c, 67u, depth + 1u); else { c.pc = 0x0027CEC0u; return; } if (c.pc != 0x0027D048u) [[unlikely]] return; }
L_0027D048:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[3] = ld32((c.r[29].w[0] + 32u));  goto L_0027D088; }
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 13;
L_0027D088:
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027D100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[29].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::move(c.vu0, 15u, 4u, 1u);
    vu::move(c.vu0, 15u, 5u, 2u);
    vu::move(c.vu0, 15u, 6u, 3u);
    vu::addbc(c.vu0, 2u, 1u, 0u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 4u, 1u, 0u, c.vu0.vf[5].w[0]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[4].w[1]);
    vu::addbc(c.vu0, 2u, 2u, 0u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[4].w[2]);
    vu::addbc(c.vu0, 4u, 3u, 0u, c.vu0.vf[5].w[2]);
    ldr(c.r[8], (c.r[5].w[0]));
    ldl(c.r[8], (c.r[5].w[0] + 7u));
    set32(c.r[9], ld32((c.r[5].w[0] + 8u)));
    mmi::pcpyld(c.r[10], c.r[9], c.r[8]);
    c.vu0.vf[8] = c.r[10];
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[8].w[1]);
    vu::maddbc(c.vu0, 14u, 12u, 3u, c.vu0.vf[8].w[2]);
    c.r[10] = c.vu0.vf[12];
    st32((c.r[3].w[0]), c.r[10].w[0]);
    mmi::prot3w(c.r[9], c.r[10]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    mmi::prot3w(c.r[10], c.r[9]);
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027D190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[29].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ldr(c.r[8], (c.r[6].w[0]));
    ldl(c.r[8], (c.r[6].w[0] + 7u));
    set32(c.r[9], ld32((c.r[6].w[0] + 8u)));
    mmi::pcpyld(c.r[10], c.r[9], c.r[8]);
    c.vu0.vf[8] = c.r[10];
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 14u, 5u, c.vu0.vf[8].w[1]);
    vu::maddbc(c.vu0, 14u, 12u, 6u, c.vu0.vf[8].w[2]);
    c.r[10] = c.vu0.vf[12];
    st32((c.r[3].w[0]), c.r[10].w[0]);
    mmi::prot3w(c.r[9], c.r[10]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    mmi::prot3w(c.r[10], c.r[9]);
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027D200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
L_0027D20C:
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D20Cu | kUnwind; return; } goto L_0027D20C; } }
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[29].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[6], c.f[12]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.vu0.vf[4] = c.r[6];
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.vf[4].w[0]);
    vu::mulbc(c.vu0, 14u, 2u, 2u, c.vu0.vf[4].w[0]);
    vu::mulbc(c.vu0, 14u, 3u, 3u, c.vu0.vf[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[4].w[0] + 12u), c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], c.r[29].w[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 3;
L_0027D2DC:
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D2DCu | kUnwind; return; } goto L_0027D2DC; } }
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[29].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 7u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 8u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 9u, 3u, c.vu0.vf[6].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[4].w[0] + 12u), c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D3C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    ld128((c.r[6].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[7]);
    c.f[9] = ld32((c.r[5].w[0]));
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[3]);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[8]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[7] = ld32((c.r[29].w[0] + 32u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[7]);
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 108u), 0u);
    c.f[7] = fp::sub(c.f[9], c.f[7]);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    c.f[18] = fp::sub(c.f[5], c.f[3]);
    c.f[17] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[7]);
    c.f[16] = ld32((c.r[5].w[0] + 12u));
    c.f[15] = ld32((c.r[29].w[0] + 44u));
    c.f[14] = ld32((c.r[5].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = fp::sub(c.f[16], c.f[15]);
    c.f[13] = fp::sub(c.f[14], c.f[13]);
    c.f[12] = ld32((c.r[5].w[0] + 20u));
    c.f[11] = ld32((c.r[29].w[0] + 20u));
    c.f[10] = ld32((c.r[5].w[0] + 24u));
    c.f[9] = ld32((c.r[29].w[0] + 24u));
    c.f[11] = fp::sub(c.f[12], c.f[11]);
    c.f[9] = fp::sub(c.f[10], c.f[9]);
    c.f[8] = ld32((c.r[5].w[0] + 28u));
    c.f[7] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0]));
    c.f[7] = fp::sub(c.f[8], c.f[7]);
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[29].w[0] + 84u), c.f[18]);
    st32((c.r[29].w[0] + 88u), c.f[17]);
    st32((c.r[29].w[0] + 92u), c.f[15]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 64u), c.f[13]);
    st32((c.r[29].w[0] + 68u), c.f[11]);
    st32((c.r[29].w[0] + 72u), c.f[9]);
    st32((c.r[29].w[0] + 76u), c.f[7]);
    c.f[8] = ld32((c.r[29].w[0] + 64u));
    c.f[7] = ld32((c.r[29].w[0] + 68u));
    c.f[6] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 112u), c.f[8]);
    st32((c.r[29].w[0] + 116u), c.f[7]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 120u), c.f[6]);
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[4].w[0] + 12u), c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 102;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027D560:
    set32(c.r[29], c.r[29].w[0] - 144u);
    ld128((c.r[6].w[0]) & ~15u, c.r[8]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[7]);
    c.f[9] = ld32((c.r[5].w[0]));
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[3]);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[8]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[7] = ld32((c.r[29].w[0] + 32u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[7]);
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 108u), 0u);
    c.f[7] = fp::add(c.f[9], c.f[7]);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    c.f[18] = fp::add(c.f[5], c.f[3]);
    c.f[17] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[7]);
    c.f[16] = ld32((c.r[5].w[0] + 12u));
    c.f[15] = ld32((c.r[29].w[0] + 44u));
    c.f[14] = ld32((c.r[5].w[0] + 16u));
    c.f[13] = ld32((c.r[29].w[0] + 16u));
    c.f[15] = fp::add(c.f[16], c.f[15]);
    c.f[13] = fp::add(c.f[14], c.f[13]);
    c.f[12] = ld32((c.r[5].w[0] + 20u));
    c.f[11] = ld32((c.r[29].w[0] + 20u));
    c.f[10] = ld32((c.r[5].w[0] + 24u));
    c.f[9] = ld32((c.r[29].w[0] + 24u));
    c.f[11] = fp::add(c.f[12], c.f[11]);
    c.f[9] = fp::add(c.f[10], c.f[9]);
    c.f[8] = ld32((c.r[5].w[0] + 28u));
    c.f[7] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0]));
    c.f[7] = fp::add(c.f[8], c.f[7]);
    c.f[5] = fp::add(c.f[6], c.f[5]);
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[29].w[0] + 84u), c.f[18]);
    st32((c.r[29].w[0] + 88u), c.f[17]);
    st32((c.r[29].w[0] + 92u), c.f[15]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 64u), c.f[13]);
    st32((c.r[29].w[0] + 68u), c.f[11]);
    st32((c.r[29].w[0] + 72u), c.f[9]);
    st32((c.r[29].w[0] + 76u), c.f[7]);
    c.f[8] = ld32((c.r[29].w[0] + 64u));
    c.f[7] = ld32((c.r[29].w[0] + 68u));
    c.f[6] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 112u), c.f[8]);
    st32((c.r[29].w[0] + 116u), c.f[7]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 120u), c.f[6]);
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[4].w[0] + 12u), c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 102;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027D700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D72C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D72C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D74C; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D74C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D74C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D76C; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D76C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D76C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D78C; } }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D78C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D78C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D820; } }
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D7B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D7B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D7D4; } }
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D7D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D7D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D7F4; } }
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D7F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D7F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D814; } }
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D814; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D814:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D820; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0027D820:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0027D8B4; } }
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    st128((c.r[29].w[0]) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D848; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D868; } }
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D868; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D868:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D888; } }
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D888; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D888:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D8A8; } }
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027D8A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D8A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D8B4; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0027D8B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D8F4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027D8F4u) [[unlikely]] return; }
L_0027D8F4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D900u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027D900u) [[unlikely]] return; }
L_0027D900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[11] = fp::sub(c.f[1], c.f[20]);
    c.f[1] = fp::mul(c.f[23], c.f[22]);
    c.f[10] = fp::mul(c.f[11], c.f[1]);
    c.f[1] = fp::mul(c.f[23], c.f[21]);
    c.f[9] = fp::mul(c.f[11], c.f[1]);
    c.f[1] = fp::mul(c.f[22], c.f[21]);
    c.f[8] = fp::mul(c.f[11], c.f[1]);
    c.f[3] = fp::mul(c.f[23], c.f[23]);
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[20]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[11]));
    c.f[1] = fp::mul(c.f[22], c.f[22]);
    c.facc = fp::add(c.f[2], c.f[20]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[11]));
    c.f[5] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::sub(c.f[10], c.f[5]);
    st32((c.r[16].w[0]), c.f[3]);
    c.f[7] = fp::mul(c.f[23], c.f[0]);
    c.f[6] = fp::mul(c.f[22], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = fp::add(c.f[9], c.f[6]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.facc = fp::add(c.f[2], c.f[20]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.f[5] = fp::add(c.f[10], c.f[5]);
    c.f[0] = fp::mul(c.f[21], c.f[21]);
    st32((c.r[16].w[0] + 16u), c.f[5]);
    c.f[3] = fp::sub(c.f[8], c.f[7]);
    st32((c.r[16].w[0] + 20u), c.f[4]);
    st32((c.r[16].w[0] + 24u), c.f[3]);
    c.f[2] = fp::sub(c.f[9], c.f[6]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.f[1] = fp::add(c.f[8], c.f[7]);
    st32((c.r[16].w[0] + 32u), c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9ECu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027D9ECu) [[unlikely]] return; }
L_0027D9EC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9F8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027D9F8u) [[unlikely]] return; }
L_0027D9F8:
    st32((c.r[16].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA6Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027DA6Cu) [[unlikely]] return; }
L_0027DA6C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA78u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027DA78u) [[unlikely]] return; }
L_0027DA78:
    st32((c.r[16].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), c.f[1]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAECu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027DAECu) [[unlikely]] return; }
L_0027DAEC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAF8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027DAF8u) [[unlikely]] return; }
L_0027DAF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[1] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.f[20]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DB50:
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  c.pc = t; return; }
L_0027DBA0:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[2]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_0027DC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30760u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC24u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DC24u) [[unlikely]] return; }
L_0027DC24:
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u - 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC9Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x0027DC9Cu) [[unlikely]] return; }
L_0027DC9C:
    set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027DCE0:
    set32(c.r[3], 0u - 4u);
    c.r[9].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.f[12]);
    c.vu0.vf[7] = c.r[3];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_0027DD00:
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[7].w[0]);
    vu::mulabc(c.vu0, 15u, 3u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 3u, 4u, c.vu0.vf[7].w[0]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 5u, 6u, c.vu0.vf[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    c.budget -= 19;
    { const bool t = c.r[8].d[0] != c.r[9].d[0]; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DD00u | kUnwind; return; } goto L_0027DD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_0027DDA8; } }
L_0027DD54:
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[3] = fp::mul(c.f[12], c.f[2]);
    c.f[2] = fp::mul(c.f[12], c.f[1]);
    c.f[1] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 21;
L_0027DDA8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DD54u | kUnwind; return; } goto L_0027DD54; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027DDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DDD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027DDD4u) [[unlikely]] return; }
L_0027DDD4:
    st32((c.r[28].w[0] - 27720u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027DDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE00u);  if (depth < kMaxDepth) unit_0072(c, 33u, depth + 1u); else { c.pc = 0x002C8420u; return; } if (c.pc != 0x0027DE00u) [[unlikely]] return; }
L_0027DE00:
    st32((c.r[28].w[0] - 27720u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027DE10:
    set32(c.r[7], c.r[4].w[0] + 0u);
    set32(c.r[4], 0u + 0u);
    set32(c.r[3], c.r[6].w[0] + 0u);
    c.budget -= 3;
L_0027DE1C:
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 2u, c.vu0.vf[2].w[1]);
    vu::addbc(c.vu0, 8u, 2u, 2u, c.vu0.vf[2].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    vu::mulbc(c.vu0, 14u, 3u, 1u, c.vu0.q);
    c.r[6] = c.vu0.vf[3];
    st32((c.r[3].w[0] - 12u), c.r[6].w[0]);
    mmi::prot3w(c.r[6], c.r[6]);
    st32((c.r[3].w[0] - 8u), c.r[6].w[0]);
    mmi::prot3w(c.r[6], c.r[6]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; st32((c.r[3].w[0] - 4u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DE1Cu | kUnwind; return; } goto L_0027DE1C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027DE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 15u, 3u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[1]);
    vu::addbc(c.vu0, 2u, 3u, 3u, c.vu0.vf[3].w[3]);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[2]);
    c.r[8] = c.vu0.vf[3];
    c.f[6] = c.r[8].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 18;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027DF14; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[28].w[0] - 32476u));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32472u));
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[12]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[7] = fp::mul(c.f[12], c.f[0]);  if (t) { goto L_0027DF74; } }
L_0027DF14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[5], c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = 0u;
    c.f[3] = ld32((c.r[28].w[0] - 32476u));
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[3] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32472u));
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 24;
L_0027DF74:
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = 0u;
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.facc = fp::add(c.f[3], c.f[4]);
    c.f[13] = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.facc = fp::add(c.f[3], c.f[5]);
    c.f[14] = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.facc = fp::add(c.f[3], c.f[6]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DFD0u); c.f[15] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x0027DFD0u) [[unlikely]] return; }
L_0027DFD0:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[5] = ld32((c.r[3].w[0] + 15280u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[28].w[0] - 32648u));
    c.budget -= 12;
L_0027E000:
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32468u));
    c.f[1] = ld32((c.r[3].w[0] + 15272u));
    c.f[7] = 0u;
    c.f[3] = ld32((c.r[4].w[0] + 15280u));
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[1] = fp::sub(c.f[6], c.f[2]);
    c.f[4] = ld32((c.r[5].w[0] + 15272u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[8] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));  if (t) { goto L_0027E070; } }
    c.f[0] = fp::mul(c.f[8], c.f[8]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::add(c.f[7], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[8] = fp::mul(c.f[8], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32464u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 36u));  goto L_0027E074; }
    c.f[0] = fp::mul(c.f[8], c.f[8]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::add(c.f[7], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[8] = fp::mul(c.f[8], c.f[0]);
    c.budget -= 6;
L_0027E070:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 1;
L_0027E074:
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[3] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    c.f[1] = fp::mul(c.f[1], c.f[8]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E0D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[4] = ld32((c.r[3].w[0] + 15280u));
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[3] = ld32((c.r[3].w[0] + 15272u));
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 15280u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = ld32((c.r[3].w[0] + 15272u));
    c.f[1] = ld32((c.r[28].w[0] - 32648u));
    c.f[6] = 0u;
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[5], c.f[1]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32468u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 25;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 4u));  goto L_0027E178; }
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32464u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027E174; } }
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
L_0027E174:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_0027E178:
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.f[0]);  c.pc = t; return; }
L_0027E1B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 1u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 1u, 1u, c.vu0.vf[1].w[2]);
    vu::addbc(c.vu0, 8u, 1u, 1u, c.vu0.vf[1].w[1]);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    set32(c.r[8], cfc2(c, 22u));
    c.f[21] = c.r[8].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1F8u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0027E1F8u) [[unlikely]] return; }
L_0027E1F8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E204u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0027E204u) [[unlikely]] return; }
L_0027E204:
    c.f[2] = c.f[0] & fp::kAbs;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] + 31232u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027E22C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_0027E23C; } }
L_0027E22C:
    fpu_div(c, 3u, c.f[0], c.f[21]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
L_0027E23C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[13] = fp::mul(c.f[3], c.f[2]);
    c.f[14] = fp::mul(c.f[3], c.f[1]);
    c.f[15] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E25Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x0027E25Cu) [[unlikely]] return; }
L_0027E25C:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027E2A0:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 15u, 3u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[1]);
    vu::addbc(c.vu0, 2u, 3u, 3u, c.vu0.vf[3].w[3]);
    vu::addbc(c.vu0, 8u, 3u, 3u, c.vu0.vf[3].w[2]);
    c.r[8] = c.vu0.vf[3];
    c.f[0] = c.r[8].w[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027E2D0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[2] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_0027E2F0:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.f[12]);
    c.vu0.vf[2] = c.r[8];
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_0027E310:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 204u), c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E368u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 134u, depth + 1u); else { c.pc = 0x0027E710u; return; } if (c.pc != 0x0027E368u) [[unlikely]] return; }
L_0027E368:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[30].d[0] == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0027E38C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  goto L_0027E480; }
L_0027E38C:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3A4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0027E3A4u) [[unlikely]] return; }
L_0027E3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0027E468; } }
L_0027E3AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] << 5);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = ld16((c.r[16].w[0] + 84u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3DCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 133u, depth + 1u); else { c.pc = 0x0027E660u; return; } if (c.pc != 0x0027E3DCu) [[unlikely]] return; }
L_0027E3DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0027E3E0:
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = ld32((c.r[3].w[0] + 4u));
    c.vu0.vf[5] = c.r[7];
    set32(c.r[7], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[23].w[0]);
    c.r[6].d[0] = ld32((c.r[5].w[0] + 8u));
    ldr(c.r[7], (c.r[5].w[0]));
    ldl(c.r[7], (c.r[5].w[0] + 7u));
    mmi::pcpyld(c.r[6], c.r[6], c.r[7]);
    c.vu0.vf[6] = c.r[6];
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 14u, 7u, 3u, c.vu0.vf[6].w[2]);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = ld32((c.r[5].w[0] + 8u));
    vu::mulbc(c.vu0, 14u, 8u, 7u, c.vu0.vf[5].w[0]);
    ldr(c.r[7], (c.r[5].w[0]));
    ldl(c.r[7], (c.r[5].w[0] + 7u));
    mmi::pcpyld(c.r[6], c.r[6], c.r[7]);
    c.vu0.vf[9] = c.r[6];
    vu::add(c.vu0, 14u, 10u, 9u, 8u);
    c.r[6] = c.vu0.vf[10];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    mmi::prot3w(c.r[6], c.r[6]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    mmi::prot3w(c.r[6], c.r[6]);
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 33;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E3E0u | kUnwind; return; } goto L_0027E3E0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0027E468:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E3ACu | kUnwind; return; } goto L_0027E3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0027E628; } }
L_0027E480:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_0027E4B8; }
    set32(c.r[2], c.r[20].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E498u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0027E498u) [[unlikely]] return; }
L_0027E498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32272u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E4B4u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0027E4B4u) [[unlikely]] return; }
L_0027E4B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027E4B8:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E4D0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0027E4D0u) [[unlikely]] return; }
L_0027E4D0:
    set32(c.r[6], c.r[20].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E4E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0027E4E0u) [[unlikely]] return; }
L_0027E4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0027E5E0; } }
L_0027E4E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] << 5);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[22], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld16((c.r[22].w[0] + 84u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E518u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 133u, depth + 1u); else { c.pc = 0x0027E660u; return; } if (c.pc != 0x0027E518u) [[unlikely]] return; }
L_0027E518:
    set32(c.r[2], ld32((c.r[22].w[0] + 80u)));
    c.budget -= 1;
L_0027E51C:
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[6].d[0] = ld32((c.r[2].w[0] + 4u));
    c.vu0.vf[5] = c.r[6];
    set32(c.r[8], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[23].w[0]);
    c.r[5].d[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[11], c.r[3].w[0] + c.r[30].w[0]);
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    mmi::pcpyld(c.r[5], c.r[5], c.r[6]);
    c.vu0.vf[6] = c.r[5];
    c.r[10].d[0] = ld32((c.r[11].w[0] + 8u));
    ldr(c.r[9], (c.r[11].w[0]));
    ldl(c.r[9], (c.r[11].w[0] + 7u));
    vu::mulabc(c.vu0, 14u, 4u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 14u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 14u, 7u, 3u, c.vu0.vf[6].w[2]);
    mmi::pcpyld(c.r[10], c.r[10], c.r[9]);
    c.vu0.vf[16] = c.r[10];
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = ld32((c.r[4].w[0] + 8u));
    vu::mulbc(c.vu0, 14u, 8u, 7u, c.vu0.vf[5].w[0]);
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    mmi::pcpyld(c.r[5], c.r[5], c.r[6]);
    c.vu0.vf[9] = c.r[5];
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[16].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[16].w[1]);
    vu::maddbc(c.vu0, 14u, 17u, 3u, c.vu0.vf[16].w[2]);
    vu::add(c.vu0, 14u, 10u, 9u, 8u);
    c.r[5] = c.vu0.vf[10];
    set32(c.r[11], c.r[8].w[0] + c.r[18].w[0]);
    ld128((c.r[11].w[0]) & ~15u, c.vu0.vf[19]);
    vu::mulbc(c.vu0, 14u, 18u, 17u, c.vu0.vf[5].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    mmi::prot3w(c.r[5], c.r[5]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    vu::add(c.vu0, 14u, 20u, 19u, 18u);
    mmi::prot3w(c.r[5], c.r[5]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 48;
    { const bool t = c.r[16].d[0] != 0ull; st128((c.r[11].w[0]) & ~15u, c.vu0.vf[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E51Cu | kUnwind; return; } goto L_0027E51C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0027E5E0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E4E8u | kUnwind; return; } goto L_0027E4E8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E600u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 105u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x0027E600u) [[unlikely]] return; }
L_0027E600:
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027E624; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E624u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0027E624u) [[unlikely]] return; }
L_0027E624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0027E628:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0027E660:
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.vf[12].w[3]);
    vu::mulbc(c.vu0, 14u, 10u, 10u, c.vu0.vf[12].w[3]);
    vu::mulbc(c.vu0, 14u, 11u, 11u, c.vu0.vf[12].w[3]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[16]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[13]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[15]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[16].w[3]);
    vu::mulbc(c.vu0, 14u, 14u, 14u, c.vu0.vf[16].w[3]);
    vu::mulbc(c.vu0, 14u, 15u, 15u, c.vu0.vf[16].w[3]);
    vu::mulabc(c.vu0, 15u, 21u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 22u, c.vu0.vf[9].w[1]);
    vu::maddbc(c.vu0, 15u, 17u, 23u, c.vu0.vf[9].w[2]);
    vu::mulabc(c.vu0, 15u, 21u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 22u, c.vu0.vf[10].w[1]);
    vu::maddbc(c.vu0, 15u, 18u, 23u, c.vu0.vf[10].w[2]);
    vu::mulabc(c.vu0, 15u, 21u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 22u, c.vu0.vf[11].w[1]);
    vu::maddbc(c.vu0, 15u, 19u, 23u, c.vu0.vf[11].w[2]);
    vu::mulabc(c.vu0, 15u, 24u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 21u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 22u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 15u, 20u, 23u, c.vu0.vf[12].w[2]);
    vu::mulabc(c.vu0, 15u, 17u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[13].w[1]);
    vu::maddbc(c.vu0, 15u, 1u, 19u, c.vu0.vf[13].w[2]);
    vu::mulabc(c.vu0, 15u, 17u, c.vu0.vf[14].w[0]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[14].w[1]);
    vu::maddbc(c.vu0, 15u, 2u, 19u, c.vu0.vf[14].w[2]);
    vu::mulabc(c.vu0, 15u, 17u, c.vu0.vf[15].w[0]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[15].w[1]);
    vu::maddbc(c.vu0, 15u, 3u, 19u, c.vu0.vf[15].w[2]);
    vu::mulabc(c.vu0, 15u, 20u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 17u, c.vu0.vf[16].w[0]);
    vu::maddabc(c.vu0, 15u, 18u, c.vu0.vf[16].w[1]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; vu::maddbc(c.vu0, 15u, 4u, 19u, c.vu0.vf[16].w[2]);  c.pc = t; return; }
L_0027E710:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 8;
L_0027E730:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E730u | kUnwind; return; } goto L_0027E730; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E760u); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0027E760u) [[unlikely]] return; }
L_0027E760:
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E7D8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0027E7D8u) [[unlikely]] return; }
L_0027E7D8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 112u));
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0027E7EC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E7ECu | kUnwind; return; } goto L_0027E7EC; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[3], c.r[29].w[0] + 176u);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[24]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[21]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[22]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[23]);
    vu::mulbc(c.vu0, 14u, 21u, 21u, c.vu0.vf[24].w[3]);
    vu::mulbc(c.vu0, 14u, 22u, 22u, c.vu0.vf[24].w[3]);
    vu::mulbc(c.vu0, 14u, 23u, 23u, c.vu0.vf[24].w[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0027E870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027E96C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 371u, depth + 1u); else { c.pc = 0x002CB210u; return; } if (c.pc != 0x0027E8A0u) [[unlikely]] return; }
L_0027E8A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027E8ACu) [[unlikely]] return; }
L_0027E8AC:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_0027E8FC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027E8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027E8CCu) [[unlikely]] return; }
L_0027E8CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8DCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027E8DCu) [[unlikely]] return; }
L_0027E8DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E8F8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E8F8u) [[unlikely]] return; }
L_0027E8F8:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_0027E8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027E948; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027E944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E918u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027E918u) [[unlikely]] return; }
L_0027E918:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E928u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027E928u) [[unlikely]] return; }
L_0027E928:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E944; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E944u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027E944u) [[unlikely]] return; }
L_0027E944:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0027E950u) [[unlikely]] return; }
L_0027E950:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027E970; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E96Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027E96Cu) [[unlikely]] return; }
L_0027E96C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027E970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027E990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E9C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0069(c, 457u, depth + 1u); else { c.pc = 0x002A7C70u; return; } if (c.pc != 0x0027E9C0u) [[unlikely]] return; }
L_0027E9C0:
    c.r[16].d[0] = ld16((c.r[21].w[0] + 48u));
    set32(c.r[18], ld32((c.r[21].w[0] + 100u)));
    c.r[22].d[0] = ld16((c.r[21].w[0] + 82u));
    c.r[1].d[0] = c.r[16].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 32u)));  if (t) { goto L_0027E9E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] | 512ull;  if (t) { goto L_0027EA14; } }
L_0027E9E4:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E9F4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0027E9F4u) [[unlikely]] return; }
L_0027E9F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32272u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EA10u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0027EA10u) [[unlikely]] return; }
L_0027EA10:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027EA14:
    set32(c.r[6], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EA24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0027EA24u) [[unlikely]] return; }
L_0027EA24:
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    set32(c.r[7], 0u + 0u);
    set32(c.r[6], c.r[18].w[0] + 0u);
    c.budget -= 3;
L_0027EA30:
    c.r[8].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[20].w[0] + c.r[9].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[9], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[19].w[0] + c.r[8].w[0]);
    ldr(c.r[17], (c.r[8].w[0]));
    ldl(c.r[17], (c.r[8].w[0] + 7u));
    c.r[9].d[0] = ld32((c.r[8].w[0] + 8u));
    mmi::pcpyld(c.r[17], c.r[9], c.r[17]);
    c.vu0.vf[1] = c.r[17];
    c.r[8].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[4], c.r[20].w[0] + c.r[9].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[9], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[19].w[0] + c.r[8].w[0]);
    ldr(c.r[17], (c.r[8].w[0]));
    ldl(c.r[17], (c.r[8].w[0] + 7u));
    c.r[9].d[0] = ld32((c.r[8].w[0] + 8u));
    mmi::pcpyld(c.r[17], c.r[9], c.r[17]);
    c.vu0.vf[2] = c.r[17];
    c.r[8].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[9].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[9], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[19].w[0] + c.r[8].w[0]);
    ldr(c.r[17], (c.r[8].w[0]));
    ldl(c.r[17], (c.r[8].w[0] + 7u));
    c.r[9].d[0] = ld32((c.r[8].w[0] + 8u));
    mmi::pcpyld(c.r[17], c.r[9], c.r[17]);
    c.vu0.vf[3] = c.r[17];
    set32(c.r[6], c.r[6].w[0] + 6u);
    vu::sub(c.vu0, 14u, 7u, 2u, 1u);
    vu::sub(c.vu0, 14u, 8u, 3u, 2u);
    vu::opmula(c.vu0, 7u, 8u);
    vu::opmsub(c.vu0, 9u, 8u, 7u);
    vu::mul(c.vu0, 14u, 10u, 9u, 9u);
    vu::addbc(c.vu0, 8u, 10u, 10u, c.vu0.vf[10].w[1]);
    vu::addbc(c.vu0, 8u, 10u, 10u, c.vu0.vf[10].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[10].w[0]);
    vu::sub(c.vu0, 15u, 11u, 0u, 0u);
    vu::mulbc(c.vu0, 14u, 11u, 9u, c.vu0.q);
    vu::add(c.vu0, 14u, 4u, 4u, 11u);
    vu::add(c.vu0, 14u, 5u, 5u, 11u);
    vu::add(c.vu0, 14u, 6u, 6u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 60;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EA30u | kUnwind; return; } goto L_0027EA30; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EB30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 105u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x0027EB30u) [[unlikely]] return; }
L_0027EB30:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));  goto L_0027EB5C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EB58u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0027EB58u) [[unlikely]] return; }
L_0027EB58:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));
    c.budget -= 1;
L_0027EB5C:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0027EB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027EBA4u) [[unlikely]] return; }
L_0027EBA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027EBBC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 85u, depth + 1u); else { c.pc = 0x002B4A20u; return; } if (c.pc != 0x0027EBB8u) [[unlikely]] return; }
L_0027EBB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027EBBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027EBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15288u);  c.pc = t; return; }
L_0027EBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EBF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0027EBF4u) [[unlikely]] return; }
L_0027EBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC00u); set32(c.r[4], ld32((c.r[2].w[0] + 15288u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0027EC00u) [[unlikely]] return; }
L_0027EC00:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EC14u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027EC14u) [[unlikely]] return; }
L_0027EC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EC30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 418u, depth); }
L_0027EC40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 424u, depth); }
L_0027EC50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0027EC60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0027EC70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 428u, depth); }
L_0027EC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0027ECB8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027ECE0; }
    set32(c.r[2], ld32((c.r[12].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[3].w[0])));  goto L_0027ECC4; }
L_0027ECB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ECE0; } }
L_0027ECC4:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ECE0u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027ECE0u) [[unlikely]] return; }
L_0027ECE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027ECF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0027ED28; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027ED50; }
    set32(c.r[2], ld32((c.r[12].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[3].w[0])));  goto L_0027ED34; }
L_0027ED28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ED50; } }
L_0027ED34:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ED50u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027ED50u) [[unlikely]] return; }
L_0027ED50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027ED60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027ED70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027EE0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 6256u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0027EDE4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027EDE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EDB8u) [[unlikely]] return; }
L_0027EDB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDC8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EDC8u) [[unlikely]] return; }
L_0027EDC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EDE4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EDE4u) [[unlikely]] return; }
L_0027EDE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EDF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0027EDF0u) [[unlikely]] return; }
L_0027EDF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027EE10; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE0Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027EE0Cu) [[unlikely]] return; }
L_0027EE0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027EE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027EE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0027EE48u) [[unlikely]] return; }
L_0027EE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_0027EE80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EE70u) [[unlikely]] return; }
L_0027EE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EE80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EE80u) [[unlikely]] return; }
L_0027EE80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027EEA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0027EED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F01C; } }
L_0027EED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 20u);  goto L_0027EEE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F01C; } }
L_0027EEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EEF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027EEF0u) [[unlikely]] return; }
L_0027EEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027EF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0027EF00u) [[unlikely]] return; }
L_0027EF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0027EF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EF28u) [[unlikely]] return; }
L_0027EF28:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF38u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EF38u) [[unlikely]] return; }
L_0027EF38:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 16u)));  goto L_0027EFB0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_0027EF8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EF5Cu) [[unlikely]] return; }
L_0027EF5C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF6Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EF6Cu) [[unlikely]] return; }
L_0027EF6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EF88; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EF88u) [[unlikely]] return; }
L_0027EF88:
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_0027EF8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027EFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EF9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EF9Cu) [[unlikely]] return; }
L_0027EF9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EFACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EFACu) [[unlikely]] return; }
L_0027EFAC:
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0027EFB0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0027F01C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[17].w[0]);  goto L_0027EFF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EFC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027EFC8u) [[unlikely]] return; }
L_0027EFC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EFD8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027EFD8u) [[unlikely]] return; }
L_0027EFD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EFF4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027EFF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027EFF4u) [[unlikely]] return; }
L_0027EFF4:
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_0027EFF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027F018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F008u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027F008u) [[unlikely]] return; }
L_0027F008:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F018u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027F018u) [[unlikely]] return; }
L_0027F018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027F01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027F040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F06Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027F06Cu) [[unlikely]] return; }
L_0027F06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027F0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F07Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0027F07Cu) [[unlikely]] return; }
L_0027F07C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0027F0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027F0A4u) [[unlikely]] return; }
L_0027F0A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F0B4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027F0B4u) [[unlikely]] return; }
L_0027F0B4:
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027F0E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15336u);  c.pc = t; return; }
L_0027F0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027F13C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F120u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0027F120u) [[unlikely]] return; }
L_0027F120:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027F140; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F13Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027F13Cu) [[unlikely]] return; }
L_0027F13C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027F140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F160:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 418u, depth); }
L_0027F170:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 424u, depth); }
L_0027F180:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0027F190:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0027F1A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 428u, depth); }
L_0027F1B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 446u, depth); }
L_0027F1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0027F1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_0027F1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0027F1F4u) [[unlikely]] return; }
L_0027F1F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6352u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027F220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15360u);  c.pc = t; return; }
L_0027F230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F250u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0027F250u) [[unlikely]] return; }
L_0027F250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F25Cu); set32(c.r[4], ld32((c.r[2].w[0] + 15360u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0027F25Cu) [[unlikely]] return; }
L_0027F25C:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F270u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F270u) [[unlikely]] return; }
L_0027F270:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F280u); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x0027F280u) [[unlikely]] return; }
L_0027F280:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F294u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F294u) [[unlikely]] return; }
L_0027F294:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2A4u); set32(c.r[4], c.r[4].w[0] + 15680u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027F2A4u) [[unlikely]] return; }
L_0027F2A4:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2B8u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F2B8u) [[unlikely]] return; }
L_0027F2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027F300; } }
L_0027F2C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2CCu); set32(c.r[4], c.r[4].w[0] + 15700u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027F2CCu) [[unlikely]] return; }
L_0027F2CC:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2E0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F2E0u) [[unlikely]] return; }
L_0027F2E0:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F2FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0060(c, 21u, depth + 1u); else { c.pc = 0x00280310u; return; } if (c.pc != 0x0027F2FCu) [[unlikely]] return; }
L_0027F2FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027F300:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F2C0u | kUnwind; return; } goto L_0027F2C0; }
    c.r[5].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F320u); set32(c.r[4], c.r[4].w[0] + 15721u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027F320u) [[unlikely]] return; }
L_0027F320:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F334u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F334u) [[unlikely]] return; }
L_0027F334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027F3D0; } }
L_0027F33C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F348u); set32(c.r[4], c.r[4].w[0] + 15745u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027F348u) [[unlikely]] return; }
L_0027F348:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F35Cu); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F35Cu) [[unlikely]] return; }
L_0027F35C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0027F384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F37Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 323u, depth + 1u); else { c.pc = 0x0027FFD0u; return; } if (c.pc != 0x0027F37Cu) [[unlikely]] return; }
L_0027F37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0027F3D0; } }
L_0027F384:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F390u); set32(c.r[4], c.r[4].w[0] + 15765u);  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321BC0u; return; } if (c.pc != 0x0027F390u) [[unlikely]] return; }
L_0027F390:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F3A4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F3A4u) [[unlikely]] return; }
L_0027F3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 15791u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F3B8u); set32(c.r[5], c.r[5].w[0] + 15814u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0027F3B8u) [[unlikely]] return; }
L_0027F3B8:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F3CCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027F3CCu) [[unlikely]] return; }
L_0027F3CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027F3D0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F33Cu | kUnwind; return; } goto L_0027F33C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027F400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F420u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0027F420u) [[unlikely]] return; }
L_0027F420:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_0027F430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F5B0; } }
L_0027F430:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027F5B0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0027F458; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027F5B0; } }
L_0027F458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027F4FC; } }
L_0027F460:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 10;
    if (c.r[6].d[0] != c.r[4].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027F4EC; }
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0027F4E8; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0027F4E8; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0027F4E8; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0027F4E8; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0027F4E8; } }
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0027F4EC; }
L_0027F4E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F4EC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0027F4FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F5B0; } }
L_0027F4FC:
    c.r[4].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F460u | kUnwind; return; } goto L_0027F460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027F59C; } }
L_0027F510:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027F538; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027F5B0; }
L_0027F538:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027F554; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0027F554; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027F5B0; } }
L_0027F554:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0027F59C; }
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0027F574; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F588; } }
L_0027F574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F57Cu); set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0027F57Cu) [[unlikely]] return; }
L_0027F57C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0027F588; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F5B0; } }
L_0027F598:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027F59C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F510u | kUnwind; return; } goto L_0027F510; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027F5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027F5D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F5F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0027F5F4u) [[unlikely]] return; }
L_0027F5F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F600u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0027F600u) [[unlikely]] return; }
L_0027F600:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F60Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F60Cu) [[unlikely]] return; }
L_0027F60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027F67C; } }
L_0027F614:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F630u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F630u) [[unlikely]] return; }
L_0027F630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F63Cu); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F63Cu) [[unlikely]] return; }
L_0027F63C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F648u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F648u) [[unlikely]] return; }
L_0027F648:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F654u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F654u) [[unlikely]] return; }
L_0027F654:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F660u); set32(c.r[5], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F660u) [[unlikely]] return; }
L_0027F660:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F66Cu); set32(c.r[5], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F66Cu) [[unlikely]] return; }
L_0027F66C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0027F678u) [[unlikely]] return; }
L_0027F678:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027F67C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F614u | kUnwind; return; } goto L_0027F614; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6A0u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0027F6A0u) [[unlikely]] return; }
L_0027F6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027F6F4; } }
L_0027F6A8:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6C8u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0027F6C8u) [[unlikely]] return; }
L_0027F6C8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0027F6F4; }
    set32(c.r[7], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[18].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6F0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 6u, depth + 1u); else { c.pc = 0x00280050u; return; } if (c.pc != 0x0027F6F0u) [[unlikely]] return; }
L_0027F6F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027F6F4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F6A8u | kUnwind; return; } goto L_0027F6A8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027F720:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0027F730:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0027F740:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F76Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0027F76Cu) [[unlikely]] return; }
L_0027F76C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F778u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0027F778u) [[unlikely]] return; }
L_0027F778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F784u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F784u) [[unlikely]] return; }
L_0027F784:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027F84C; }
    set32(c.r[2], c.r[18].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7A8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0027F7A8u) [[unlikely]] return; }
L_0027F7A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1152u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7C4u); set32(c.r[7], 0u + 28u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0027F7C4u) [[unlikely]] return; }
L_0027F7C4:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0027F838; } }
L_0027F7D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7ECu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F7ECu) [[unlikely]] return; }
L_0027F7EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F7F8u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F7F8u) [[unlikely]] return; }
L_0027F7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F804u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F804u) [[unlikely]] return; }
L_0027F804:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F810u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F810u) [[unlikely]] return; }
L_0027F810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F81Cu); set32(c.r[5], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F81Cu) [[unlikely]] return; }
L_0027F81C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F828u); set32(c.r[5], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F828u) [[unlikely]] return; }
L_0027F828:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x0027F834u) [[unlikely]] return; }
L_0027F834:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0027F838:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F7D0u | kUnwind; return; } goto L_0027F7D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027F84C:
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F858u); st32((c.r[29].w[0] + 344u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F858u) [[unlikely]] return; }
L_0027F858:
    set32(c.r[4], ld32((c.r[29].w[0] + 344u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_0027FB20; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  goto L_0027F8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0027F8B0; } }
L_0027F880:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0027F8AC; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_0027F8AC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0027F8B0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F880u | kUnwind; return; } goto L_0027F880; }
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_0027F8CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0027F958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F8DCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_005F(c, 299u, depth + 1u); else { c.pc = 0x0027FB70u; return; } if (c.pc != 0x0027F8DCu) [[unlikely]] return; }
L_0027F8DC:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0027F908; } }
    goto L_0027F8E8;
L_0027F8E4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F8E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0027F908:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F8E8u | kUnwind; return; } goto L_0027F8E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));  if (t) { goto L_0027F940; } }
L_0027F924:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 7;
L_0027F940:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F924u | kUnwind; return; } goto L_0027F924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0027F960; } }
L_0027F958:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0027F960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F968u);  if (depth < kMaxDepth) unit_005F(c, 298u, depth + 1u); else { c.pc = 0x0027FB60u; return; } if (c.pc != 0x0027F968u) [[unlikely]] return; }
L_0027F968:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FB20; } }
L_0027F974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F97Cu); set32(c.r[5], c.r[29].w[0] + 351u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x0027F97Cu) [[unlikely]] return; }
L_0027F97C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 351u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 34u));  goto L_0027FAD4; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027F994u) [[unlikely]] return; }
L_0027F994:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_0027F9AC; }
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
L_0027F9AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F9B8u) [[unlikely]] return; }
L_0027F9B8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0027F9C4u) [[unlikely]] return; }
L_0027F9C4:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9D4u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F9D4u) [[unlikely]] return; }
L_0027F9D4:
    set32(c.r[6], ld32((c.r[29].w[0] + 340u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9E4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 168u, depth + 1u); else { c.pc = 0x00280E90u; return; } if (c.pc != 0x0027F9E4u) [[unlikely]] return; }
L_0027F9E4:
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0027FA34; } }
L_0027F9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9F8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027F9F8u) [[unlikely]] return; }
L_0027F9F8:
    set32(c.r[6], ld32((c.r[29].w[0] + 336u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA08u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0060(c, 168u, depth + 1u); else { c.pc = 0x00280E90u; return; } if (c.pc != 0x0027FA08u) [[unlikely]] return; }
L_0027FA08:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA30u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 165u, depth + 1u); else { c.pc = 0x00280E20u; return; } if (c.pc != 0x0027FA30u) [[unlikely]] return; }
L_0027FA30:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0027FA34:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F9F0u | kUnwind; return; } goto L_0027F9F0; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027FA70; } }
    set32(c.r[3], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027FAC0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027FAC0; } }
L_0027FA70:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0027FAA0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0027FAC4; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027FAC0; } }
L_0027FAA0:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027FAC0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0027FAC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0027FAC4:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[19].w[0]);  if (t) { goto L_0027FB1C; } }
L_0027FAD4:
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0027FAEC; }
    set32(c.r[3], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027FB0C; } }
L_0027FAEC:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0027FB10; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0027FB0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0027FB10:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 3;
L_0027FB1C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0027FB20:
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F974u | kUnwind; return; } goto L_0027F974; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0027FB60:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFD0u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_0027FB70:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D100u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_0027FB80:
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 7u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0027FBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027FBDCu) [[unlikely]] return; }
L_0027FBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027FC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0027FBECu) [[unlikely]] return; }
L_0027FBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6448u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6544u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 24u);  if (t) { goto L_0027FC38; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FC30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0027FC30u) [[unlikely]] return; }
L_0027FC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0027FC3C; } }
L_0027FC38:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0027FC3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6528u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0027FC78; } }
L_0027FC60:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
L_0027FC78:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FC60u | kUnwind; return; } goto L_0027FC60; }
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0027FC94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FD10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0027FCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FCF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027FCF4u) [[unlikely]] return; }
L_0027FCF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027FD14; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD10u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027FD10u) [[unlikely]] return; }
L_0027FD10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FD14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FD80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027FD64u) [[unlikely]] return; }
L_0027FD64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027FD84; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027FD80u) [[unlikely]] return; }
L_0027FD80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FD84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0027FDE4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0027FDE4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0027FDF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027FEC0; } }
L_0027FDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FDFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027FDFCu) [[unlikely]] return; }
L_0027FDFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE08u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027FE08u) [[unlikely]] return; }
L_0027FE08:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_0027FE24; }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0027FE44; } }
L_0027FE24:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_0027FE48; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0027FE44:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0027FE48:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_0027FEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0027FEAC; } }
L_0027FE60:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0027FEAC; }
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027FEA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027FEA8; } }
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 6;
L_0027FEA8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0027FEAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FE60u | kUnwind; return; } goto L_0027FE60; }
L_0027FEBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027FEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027FEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027FFB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6448u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0027FF24; } }
L_0027FF14:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005F(c, 312u, depth + 1u); else { c.pc = 0x0027FDA0u; return; } if (c.pc != 0x0027FF20u) [[unlikely]] return; }
L_0027FF20:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0027FF24:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FF14u | kUnwind; return; } goto L_0027FF14; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 24u);  goto L_0027FF58; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF54u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0027FF54u) [[unlikely]] return; }
L_0027FF54:
    set32(c.r[3], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0027FF58:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027FF8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6528u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0027FF88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6544u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027FF88u) [[unlikely]] return; }
L_0027FF88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FF94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0027FF94u) [[unlikely]] return; }
L_0027FF94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027FFB4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FFB0u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027FFB0u) [[unlikely]] return; }
L_0027FFB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027FFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027FFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FFF8u); set32(c.r[4], c.r[4].w[0] + 15765u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027FFF8u) [[unlikely]] return; }
L_0027FFF8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0060(c, 1u, depth);
}

}
