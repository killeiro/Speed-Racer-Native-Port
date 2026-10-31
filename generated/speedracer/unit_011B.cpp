#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_011B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
};

void unit_011B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0056C000;
    case 2u: goto L_0056C00C;
    case 3u: goto L_0056C02C;
    case 4u: goto L_0056C03C;
    case 5u: goto L_0056C050;
    case 6u: goto L_0056C080;
    case 7u: goto L_0056C094;
    case 8u: goto L_0056C0C4;
    case 9u: goto L_0056C0E4;
    case 10u: goto L_0056C100;
    case 11u: goto L_0056C128;
    case 12u: goto L_0056C150;
    case 13u: goto L_0056C18C;
    case 14u: goto L_0056C1CC;
    case 15u: goto L_0056C1EC;
    case 16u: goto L_0056C230;
    case 17u: goto L_0056C278;
    case 18u: goto L_0056C288;
    case 19u: goto L_0056C29C;
    case 20u: goto L_0056C2B8;
    case 21u: goto L_0056C2CC;
    case 22u: goto L_0056C2E0;
    case 23u: goto L_0056C304;
    case 24u: goto L_0056C334;
    case 25u: goto L_0056C350;
    case 26u: goto L_0056C36C;
    case 27u: goto L_0056C374;
    case 28u: goto L_0056C388;
    case 29u: goto L_0056C3A8;
    case 30u: goto L_0056C3C8;
    case 31u: goto L_0056C408;
    case 32u: goto L_0056C450;
    case 33u: goto L_0056C47C;
    case 34u: goto L_0056C494;
    case 35u: goto L_0056C4A8;
    case 36u: goto L_0056C4BC;
    case 37u: goto L_0056C4D8;
    case 38u: goto L_0056C4FC;
    case 39u: goto L_0056C524;
    case 40u: goto L_0056C540;
    case 41u: goto L_0056C5B8;
    case 42u: goto L_0056C5D4;
    case 43u: goto L_0056C5E8;
    case 44u: goto L_0056C600;
    case 45u: goto L_0056C614;
    case 46u: goto L_0056C630;
    case 47u: goto L_0056C640;
    case 48u: goto L_0056C690;
    case 49u: goto L_0056C6A4;
    case 50u: goto L_0056C6F0;
    case 51u: goto L_0056C718;
    case 52u: goto L_0056C764;
    case 53u: goto L_0056C7D0;
    case 54u: goto L_0056C7FC;
    case 55u: goto L_0056C824;
    case 56u: goto L_0056C844;
    case 57u: goto L_0056C860;
    case 58u: goto L_0056C874;
    case 59u: goto L_0056C890;
    case 60u: goto L_0056C8A8;
    case 61u: goto L_0056C8D0;
    case 62u: goto L_0056C8E0;
    case 63u: goto L_0056C918;
    case 64u: goto L_0056C940;
    case 65u: goto L_0056C970;
    case 66u: goto L_0056C984;
    case 67u: goto L_0056C9A4;
    case 68u: goto L_0056C9B8;
    case 69u: goto L_0056CA24;
    case 70u: goto L_0056CA54;
    case 71u: goto L_0056CAA0;
    case 72u: goto L_0056CAC4;
    case 73u: goto L_0056CAE4;
    case 74u: goto L_0056CB00;
    case 75u: goto L_0056CB20;
    case 76u: goto L_0056CB4C;
    case 77u: goto L_0056CB64;
    case 78u: goto L_0056CB9C;
    case 79u: goto L_0056CBC4;
    case 80u: goto L_0056CBF8;
    case 81u: goto L_0056CC14;
    case 82u: goto L_0056CC6C;
    case 83u: goto L_0056CC98;
    case 84u: goto L_0056CCC0;
    case 85u: goto L_0056CCD4;
    case 86u: goto L_0056CD10;
    case 87u: goto L_0056CD3C;
    case 88u: goto L_0056CD50;
    case 89u: goto L_0056CD64;
    case 90u: goto L_0056CD78;
    case 91u: goto L_0056CD90;
    case 92u: goto L_0056CDB0;
    case 93u: goto L_0056CDE8;
    case 94u: goto L_0056CE04;
    case 95u: goto L_0056CE20;
    case 96u: goto L_0056CE3C;
    case 97u: goto L_0056CE58;
    case 98u: goto L_0056CEB0;
    case 99u: goto L_0056CEC0;
    case 100u: goto L_0056CEE0;
    case 101u: goto L_0056CEF0;
    case 102u: goto L_0056CF10;
    case 103u: goto L_0056CF30;
    case 104u: goto L_0056CF64;
    case 105u: goto L_0056CF78;
    case 106u: goto L_0056CFC0;
    case 107u: goto L_0056CFD0;
    case 108u: goto L_0056CFF0;
    case 109u: goto L_0056D000;
    case 110u: goto L_0056D020;
    case 111u: goto L_0056D048;
    case 112u: goto L_0056D058;
    case 113u: goto L_0056D08C;
    case 114u: goto L_0056D0A8;
    case 115u: goto L_0056D140;
    case 116u: goto L_0056D168;
    case 117u: goto L_0056D178;
    case 118u: goto L_0056D194;
    case 119u: goto L_0056D1E0;
    case 120u: goto L_0056D208;
    case 121u: goto L_0056D218;
    case 122u: goto L_0056D260;
    case 123u: goto L_0056D288;
    case 124u: goto L_0056D298;
    case 125u: goto L_0056D2D4;
    case 126u: goto L_0056D2DC;
    case 127u: goto L_0056D30C;
    case 128u: goto L_0056D32C;
    case 129u: goto L_0056D348;
    case 130u: goto L_0056D384;
    case 131u: goto L_0056D3A0;
    case 132u: goto L_0056D3DC;
    case 133u: goto L_0056D418;
    case 134u: goto L_0056D438;
    case 135u: goto L_0056D460;
    case 136u: goto L_0056D470;
    case 137u: goto L_0056D498;
    case 138u: goto L_0056D4BC;
    case 139u: goto L_0056D558;
    case 140u: goto L_0056D5C0;
    case 141u: goto L_0056D5F0;
    case 142u: goto L_0056D670;
    case 143u: goto L_0056D834;
    case 144u: goto L_0056D844;
    case 145u: goto L_0056D858;
    case 146u: goto L_0056D974;
    case 147u: goto L_0056DA64;
    case 148u: goto L_0056DA74;
    case 149u: goto L_0056DA8C;
    case 150u: goto L_0056DB24;
    case 151u: goto L_0056DBA0;
    case 152u: goto L_0056DBC4;
    case 153u: goto L_0056DBD0;
    case 154u: goto L_0056DBE0;
    case 155u: goto L_0056DC04;
    case 156u: goto L_0056DC10;
    case 157u: goto L_0056DC30;
    case 158u: goto L_0056DC50;
    case 159u: goto L_0056DC60;
    case 160u: goto L_0056DC90;
    case 161u: goto L_0056DCA4;
    case 162u: goto L_0056DCE0;
    case 163u: goto L_0056DCF0;
    case 164u: goto L_0056DD34;
    case 165u: goto L_0056DD70;
    case 166u: goto L_0056E928;
    case 167u: goto L_0056E930;
    case 168u: goto L_0056E948;
    case 169u: goto L_0056E960;
    case 170u: goto L_0056E970;
    case 171u: goto L_0056E980;
    case 172u: goto L_0056F0B0;
    case 173u: goto L_0056F130;
    default: bad_entry(c, 0x0056C000u); return;
    }
L_0056C000:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C00Cu); set32(c.r[7], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_011B(c, 16u, depth + 1u); else { c.pc = 0x0056C230u; return; } if (c.pc != 0x0056C00Cu) [[unlikely]] return; }
L_0056C00C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 44u)));  goto L_0056C01C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0056C044; } }
L_0056C01C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056C040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C02Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 248u, depth + 1u); else { c.pc = 0x0056A950u; return; } if (c.pc != 0x0056C02Cu) [[unlikely]] return; }
L_0056C02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C040; } }
L_0056C03C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0056C044:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0056C050:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C080u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 114u, depth + 1u); else { c.pc = 0x00568DD0u; return; } if (c.pc != 0x0056C080u) [[unlikely]] return; }
L_0056C080:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C094u) [[unlikely]] return; }
L_0056C094:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 32u);  goto L_0056C0A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0056C20C; } }
L_0056C0A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C0C4u); set32(c.r[6], c.r[29].w[0] + 248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C0C4u) [[unlikely]] return; }
L_0056C0C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0056C0D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0056C210; } }
L_0056C0D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056C208; } }
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0056C0E4:
    st32((c.r[29].w[0] + 244u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C100u); set32(c.r[6], c.r[29].w[0] + 244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C100u) [[unlikely]] return; }
L_0056C100:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 244u)));  goto L_0056C134; }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0056C20C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C128u) [[unlikely]] return; }
L_0056C128:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C20C; } }
L_0056C134:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056C158; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[20].w[0] + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C150u); set32(c.r[6], c.r[29].w[0] + 255u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C150u) [[unlikely]] return; }
L_0056C150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0056C168; } }
L_0056C158:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0056C168:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));  goto L_0056C198; }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0056C20C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C18Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C18Cu) [[unlikely]] return; }
L_0056C18C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C20C; } }
L_0056C198:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 244u)));  goto L_0056C1D4; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056C208; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C1CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C1CCu) [[unlikely]] return; }
L_0056C1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C208; } }
L_0056C1D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056C1F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C1ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C1ECu) [[unlikely]] return; }
L_0056C1EC:
    c.budget -= 1;
L_0056C1F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C0E4u | kUnwind; return; } goto L_0056C0E4; } }
    c.budget -= 1;
L_0056C208:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C20C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0056C210:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0056C230:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0056C268; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056C430; } }
L_0056C268:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C278u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C278u) [[unlikely]] return; }
L_0056C278:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 32u);  goto L_0056C32C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C288u);  if (depth < kMaxDepth) unit_011A(c, 113u, depth + 1u); else { c.pc = 0x00568DB0u; return; } if (c.pc != 0x0056C288u) [[unlikely]] return; }
L_0056C288:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C29Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C29Cu) [[unlikely]] return; }
L_0056C29C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0056C2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056C430; } }
L_0056C2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C2B8u);  if (depth < kMaxDepth) unit_011A(c, 114u, depth + 1u); else { c.pc = 0x00568DD0u; return; } if (c.pc != 0x0056C2B8u) [[unlikely]] return; }
L_0056C2B8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C2CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C2CCu) [[unlikely]] return; }
L_0056C2CC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C2E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C2E0u) [[unlikely]] return; }
L_0056C2E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_0056C2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056C430; } }
L_0056C2F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C304u); set32(c.r[6], c.r[29].w[0] + 239u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C304u) [[unlikely]] return; }
L_0056C304:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_0056C314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0056C434; } }
L_0056C314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C328; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056C430; } }
L_0056C328:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_0056C32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C334u); st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_011A(c, 112u, depth + 1u); else { c.pc = 0x00568D90u; return; } if (c.pc != 0x0056C334u) [[unlikely]] return; }
L_0056C334:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C350u); set32(c.r[7], c.r[29].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C350u) [[unlikely]] return; }
L_0056C350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 232u)));  goto L_0056C360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C430; } }
L_0056C360:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0056C428; } }
    set32(c.r[16], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0056C36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C374u);  if (depth < kMaxDepth) unit_011A(c, 112u, depth + 1u); else { c.pc = 0x00568D90u; return; } if (c.pc != 0x0056C374u) [[unlikely]] return; }
L_0056C374:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C388u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C388u) [[unlikely]] return; }
L_0056C388:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0056C39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056C430; } }
L_0056C39C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C3A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C3A8u) [[unlikely]] return; }
L_0056C3A8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056C3D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C3C8u); set32(c.r[6], c.r[29].w[0] + 238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C3C8u) [[unlikely]] return; }
L_0056C3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C3E0; } }
L_0056C3D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0056C3E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 238u));  goto L_0056C3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C430; } }
L_0056C3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 232u)));  goto L_0056C414; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C408u) [[unlikely]] return; }
L_0056C408:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056C430; } }
L_0056C414:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C36Cu | kUnwind; return; } goto L_0056C36C; } }
    c.budget -= 1;
L_0056C428:
    st32((c.r[19].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056C430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0056C434:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0056C450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[19].w[0] + 20u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C47Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_011B(c, 5u, depth + 1u); else { c.pc = 0x0056C050u; return; } if (c.pc != 0x0056C47Cu) [[unlikely]] return; }
L_0056C47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C48C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056C670; } }
L_0056C48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C494u);  if (depth < kMaxDepth) unit_011A(c, 114u, depth + 1u); else { c.pc = 0x00568DD0u; return; } if (c.pc != 0x0056C494u) [[unlikely]] return; }
L_0056C494:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C4A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C4A8u) [[unlikely]] return; }
L_0056C4A8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C4BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C4BCu) [[unlikely]] return; }
L_0056C4BC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0056C50C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C4D8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 246u, depth + 1u); else { c.pc = 0x0056A8F0u; return; } if (c.pc != 0x0056C4D8u) [[unlikely]] return; }
L_0056C4D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  goto L_0056C4E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C66C; } }
L_0056C4E8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056C66C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C4FCu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 248u, depth + 1u); else { c.pc = 0x0056A950u; return; } if (c.pc != 0x0056C4FCu) [[unlikely]] return; }
L_0056C4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C66C; } }
L_0056C50C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056C668; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056C578; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C524:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0056C564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C540u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 265u, depth + 1u); else { c.pc = 0x0056AF00u; return; } if (c.pc != 0x0056C540u) [[unlikely]] return; }
L_0056C540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056C560; } }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0056C57C; } }
L_0056C560:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0056C564:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C524u | kUnwind; return; } goto L_0056C524; } }
    c.budget -= 1;
L_0056C578:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C57C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st64((c.r[19].w[0] + 72u), 0ull);  goto L_0056C58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056C66C; } }
L_0056C58C:
    set32(c.r[3], c.r[19].w[0] + 56u);
    st64((c.r[19].w[0] + 80u), 0ull);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 176u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C5B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_011A(c, 268u, depth + 1u); else { c.pc = 0x0056AFA0u; return; } if (c.pc != 0x0056C5B8u) [[unlikely]] return; }
L_0056C5B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_0056C608; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C5D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C5D4u) [[unlikely]] return; }
L_0056C5D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C5E8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 248u, depth + 1u); else { c.pc = 0x0056A950u; return; } if (c.pc != 0x0056C5E8u) [[unlikely]] return; }
L_0056C5E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0056C5F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C66C; } }
L_0056C5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C600u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_011A(c, 267u, depth + 1u); else { c.pc = 0x0056AF70u; return; } if (c.pc != 0x0056C600u) [[unlikely]] return; }
L_0056C600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + 20u);  if (t) { goto L_0056C660; } }
L_0056C608:
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C614u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056C614u) [[unlikely]] return; }
L_0056C614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0056C624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056C66C; } }
L_0056C624:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C630u) [[unlikely]] return; }
L_0056C630:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C640u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011B(c, 142u, depth + 1u); else { c.pc = 0x0056D670u; return; } if (c.pc != 0x0056C640u) [[unlikely]] return; }
L_0056C640:
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    st64((c.r[19].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st64((c.r[19].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], c.r[19].w[0] + 20u);
    c.budget -= 8;
L_0056C660:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 2;
L_0056C668:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0056C670:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0056C690:
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[4].w[0] + 40u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0056C6B8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_0056C6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0056C6B8; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C6A4u | kUnwind; return; } goto L_0056C6A4; }
L_0056C6B8:
    set32(c.r[2], c.r[4].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0056C6C8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C6C8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056C6E0; }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0056C6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056C6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0056C730; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0056C718:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0056C730; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C718u | kUnwind; return; } goto L_0056C718; }
    c.budget -= 1;
L_0056C730:
    set32(c.r[3], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0056C740; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C740:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  goto L_0056C7B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C764u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0056C764u) [[unlikely]] return; }
L_0056C764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C780; } }
    st32((c.r[2].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 5;
L_0056C780:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 12u), c.r[16].w[0]);  goto L_0056C790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0056C7BC; } }
L_0056C790:
    set32(c.r[3], c.r[17].w[0] + 40u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
L_0056C7B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0056C7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0056C7D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C7FCu); set32(c.r[4], c.r[16].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C7FCu) [[unlikely]] return; }
L_0056C7FC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0056C834; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 20u)));  goto L_0056C838; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C824u) [[unlikely]] return; }
L_0056C824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056C834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056C92C; } }
L_0056C834:
    set32(c.r[25], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0056C838:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C844u); set32(c.r[4], c.r[16].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C844u) [[unlikely]] return; }
L_0056C844:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056C928; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st64((c.r[16].w[0] + 104u), 0ull);  goto L_0056C924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C860u);  if (depth < kMaxDepth) unit_011A(c, 114u, depth + 1u); else { c.pc = 0x00568DD0u; return; } if (c.pc != 0x0056C860u) [[unlikely]] return; }
L_0056C860:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C874u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C874u) [[unlikely]] return; }
L_0056C874:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_0056C884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056C928; } }
L_0056C884:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C890u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C890u) [[unlikely]] return; }
L_0056C890:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C8A8u); c.r[17].d[0] = c.r[17].d[0] >> 32;  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056C8A8u) [[unlikely]] return; }
L_0056C8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056C924; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C8D0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 89u, depth + 1u); else { c.pc = 0x00538A30u; return; } if (c.pc != 0x0056C8D0u) [[unlikely]] return; }
L_0056C8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056C924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C8E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056C8E0u) [[unlikely]] return; }
L_0056C8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = 0u;
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C918u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056C918u) [[unlikely]] return; }
L_0056C918:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    st64((c.r[16].w[0] + 104u), c.r[2].d[0]);
    c.budget -= 3;
L_0056C924:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056C92C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0056C940:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C970u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_011A(c, 114u, depth + 1u); else { c.pc = 0x00568DD0u; return; } if (c.pc != 0x0056C970u) [[unlikely]] return; }
L_0056C970:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C984u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C984u) [[unlikely]] return; }
L_0056C984:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0056C998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0056CCE8; } }
L_0056C998:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056C9A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056C9A4u) [[unlikely]] return; }
L_0056C9A4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0056C9F0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0056C9B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 168u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_0056C9DC; }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0056C9F4; } }
L_0056C9DC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056C9B8u | kUnwind; return; } goto L_0056C9B8; } }
    c.budget -= 1;
L_0056C9F0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056C9F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[2].d[0] & 255ull;  goto L_0056CA04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CA04:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0056CBD4; }
    set32(c.r[25], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CA24u); set32(c.r[6], c.r[29].w[0] + 184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CA24u) [[unlikely]] return; }
L_0056CA24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  goto L_0056CA34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0056CCEC; } }
L_0056CA34:
    set32(c.r[3], c.r[19].w[0] + 20u);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0056CCE4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CA54u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 265u, depth + 1u); else { c.pc = 0x0056AF00u; return; } if (c.pc != 0x0056CA54u) [[unlikely]] return; }
L_0056CA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_0056CAD4; } }
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 112u));
    set32(c.r[6], c.r[19].w[0] + 20u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 113u));
    set32(c.r[7], c.r[29].w[0] + 180u);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 60u), 0u);
    st64((c.r[19].w[0] + 64u), 0ull);
    st64((c.r[19].w[0] + 72u), 0ull);
    st64((c.r[19].w[0] + 80u), 0ull);
    st32((c.r[19].w[0] + 88u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CAA0u); st32((c.r[19].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_011B(c, 5u, depth + 1u); else { c.pc = 0x0056C050u; return; } if (c.pc != 0x0056CAA0u) [[unlikely]] return; }
L_0056CAA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 180u)));  goto L_0056CAB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CAB0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056CCE8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CAC4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 248u, depth + 1u); else { c.pc = 0x0056A950u; return; } if (c.pc != 0x0056CAC4u) [[unlikely]] return; }
L_0056CAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CAD4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CAE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CAE4u) [[unlikely]] return; }
L_0056CAE4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CB00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CB00u) [[unlikely]] return; }
L_0056CB00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0056CBBC; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[16].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CB20u); c.r[16].d[0] = c.r[16].d[0] >> 32;  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056CB20u) [[unlikely]] return; }
L_0056CB20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_0056CB30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CBAC; } }
L_0056CB30:
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CB4Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 89u, depth + 1u); else { c.pc = 0x00538A30u; return; } if (c.pc != 0x0056CB4Cu) [[unlikely]] return; }
L_0056CB4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0056CB5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CBAC; } }
L_0056CB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CB64u);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056CB64u) [[unlikely]] return; }
L_0056CB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = 0u;
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CB9Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056CB9Cu) [[unlikely]] return; }
L_0056CB9C:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    st64((c.r[19].w[0] + 104u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0056CBAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CBC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_011B(c, 32u, depth + 1u); else { c.pc = 0x0056C450u; return; } if (c.pc != 0x0056CBC4u) [[unlikely]] return; }
L_0056CBC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st64((c.r[19].w[0] + 104u), 0ull);  goto L_0056CCE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CBD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056CCE4; } }
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0056CC48; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CBF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0056CC38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CC14u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 265u, depth + 1u); else { c.pc = 0x0056AF00u; return; } if (c.pc != 0x0056CC14u) [[unlikely]] return; }
L_0056CC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056CC34; } }
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0056CC4C; } }
L_0056CC34:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0056CC38:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056CBF8u | kUnwind; return; } goto L_0056CBF8; } }
L_0056CC48:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CC4C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] + 12u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CC6Cu); set32(c.r[6], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CC6Cu) [[unlikely]] return; }
L_0056CC6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_0056CC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CC7C:
    set32(c.r[6], c.r[20].w[0] + 12u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 172u);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CC98u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_011B(c, 5u, depth + 1u); else { c.pc = 0x0056C050u; return; } if (c.pc != 0x0056CC98u) [[unlikely]] return; }
L_0056CC98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 172u)));  goto L_0056CCA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CCC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CCC0u) [[unlikely]] return; }
L_0056CCC0:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st8((c.r[3].w[0] + 180u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CCD4u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 248u, depth + 1u); else { c.pc = 0x0056A950u; return; } if (c.pc != 0x0056CCD4u) [[unlikely]] return; }
L_0056CCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CCE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CCE8; } }
L_0056CCE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CCE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0056CCEC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0056CD10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 104u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0056CDF8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CD3Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 265u, depth + 1u); else { c.pc = 0x0056AF00u; return; } if (c.pc != 0x0056CD3Cu) [[unlikely]] return; }
L_0056CD3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056CD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CD50u);  if (depth < kMaxDepth) unit_011A(c, 113u, depth + 1u); else { c.pc = 0x00568DB0u; return; } if (c.pc != 0x0056CD50u) [[unlikely]] return; }
L_0056CD50:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CD64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CD64u) [[unlikely]] return; }
L_0056CD64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0056CD68:
    set32(c.r[25], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CD78u); set32(c.r[4], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CD78u) [[unlikely]] return; }
L_0056CD78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0056CDA0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CD90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056CD90u) [[unlikely]] return; }
L_0056CD90:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0056CDA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 104u), 0ull);  if (t) { goto L_0056CDF8; } }
L_0056CDA0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0056CDA4:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CDB0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056CDB0u) [[unlikely]] return; }
L_0056CDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056CE90; } }
L_0056CDC0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0056CDE0; }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 104u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0056CDFC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0056CDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CDE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011B(c, 32u, depth + 1u); else { c.pc = 0x0056C450u; return; } if (c.pc != 0x0056CDE8u) [[unlikely]] return; }
L_0056CDE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st64((c.r[18].w[0] + 104u), 0ull);  goto L_0056CDF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CE8C; } }
L_0056CDF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0056CDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CE04u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 276u, depth + 1u); else { c.pc = 0x0056B1D0u; return; } if (c.pc != 0x0056CE04u) [[unlikely]] return; }
L_0056CE04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0056CE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CE8C; } }
L_0056CE14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056CE88; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CE20:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0056CE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CE3Cu); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 276u, depth + 1u); else { c.pc = 0x0056B1D0u; return; } if (c.pc != 0x0056CE3Cu) [[unlikely]] return; }
L_0056CE3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_0056CE4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056CE8C; } }
L_0056CE4C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CE58u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 266u, depth + 1u); else { c.pc = 0x0056AF30u; return; } if (c.pc != 0x0056CE58u) [[unlikely]] return; }
L_0056CE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056CE70; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + 12u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0056CE70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056CE20u | kUnwind; return; } goto L_0056CE20; } }
    c.budget -= 1;
L_0056CE88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056CE90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0056CEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CEC0u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0106(c, 234u, depth + 1u); else { c.pc = 0x0051B7B0u; return; } if (c.pc != 0x0056CEC0u) [[unlikely]] return; }
L_0056CEC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056CEC8; }
L_0056CEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056CEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CEF0u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0106(c, 237u, depth + 1u); else { c.pc = 0x0051B7F0u; return; } if (c.pc != 0x0056CEF0u) [[unlikely]] return; }
L_0056CEF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056CEF8; }
L_0056CEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056CF10:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));  goto L_0056CF20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0056CF28; } }
L_0056CF20:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0056CF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056CF30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056CF98; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056CF64:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CF78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 269u, depth + 1u); else { c.pc = 0x0056AFD0u; return; } if (c.pc != 0x0056CF78u) [[unlikely]] return; }
L_0056CF78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0056CF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056CFA0; } }
L_0056CF88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056CF64u | kUnwind; return; } goto L_0056CF64; } }
L_0056CF98:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0056CFA0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0056CFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056CFD0u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0106(c, 249u, depth + 1u); else { c.pc = 0x0051B920u; return; } if (c.pc != 0x0056CFD0u) [[unlikely]] return; }
L_0056CFD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056CFD8; }
L_0056CFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056CFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D000u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0056D000u) [[unlikely]] return; }
L_0056D000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056D008; }
L_0056D008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056D020:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056D078; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D048:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D058u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 242u, depth + 1u); else { c.pc = 0x0056A830u; return; } if (c.pc != 0x0056D058u) [[unlikely]] return; }
L_0056D058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0056D068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056D128; } }
L_0056D068:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D048u | kUnwind; return; } goto L_0056D048; } }
L_0056D078:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[18].w[0] + 40u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0056D0B8; } }
L_0056D08C:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 37u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D0A8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056D0A8u) [[unlikely]] return; }
L_0056D0A8:
    set32(c.r[2], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D08Cu | kUnwind; return; } goto L_0056D08C; } }
    c.budget -= 1;
L_0056D0B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 40u);  goto L_0056D0CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D0D8; } }
L_0056D0CC:
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), 0u);
    c.budget -= 3;
L_0056D0D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056D0E0; }
L_0056D0E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));  goto L_0056D0F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D124; } }
L_0056D0F0:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 64u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 65u));
    st8((c.r[18].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 60u), 0u);
    st64((c.r[18].w[0] + 64u), 0ull);
    st64((c.r[18].w[0] + 72u), 0ull);
    st64((c.r[18].w[0] + 80u), 0ull);
    st32((c.r[18].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 92u), 0u);
    st64((c.r[18].w[0] + 104u), 0ull);
    c.budget -= 13;
L_0056D124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056D128:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0056D140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056D1B8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D168:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D178u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 304u, depth + 1u); else { c.pc = 0x0056B900u; return; } if (c.pc != 0x0056D178u) [[unlikely]] return; }
L_0056D178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_0056D188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056D1C0; } }
L_0056D188:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D194u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 246u, depth + 1u); else { c.pc = 0x0056A8F0u; return; } if (c.pc != 0x0056D194u) [[unlikely]] return; }
L_0056D194:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0056D1A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D1BC; } }
L_0056D1A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D168u | kUnwind; return; } goto L_0056D168; } }
    c.budget -= 1;
L_0056D1B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056D1C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0056D1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056D238; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D208:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D218u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 306u, depth + 1u); else { c.pc = 0x0056B930u; return; } if (c.pc != 0x0056D218u) [[unlikely]] return; }
L_0056D218:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0056D228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056D240; } }
L_0056D228:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D208u | kUnwind; return; } goto L_0056D208; } }
L_0056D238:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0056D240:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0056D260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056D2B8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D288:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D298u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_011A(c, 310u, depth + 1u); else { c.pc = 0x0056B9C0u; return; } if (c.pc != 0x0056D298u) [[unlikely]] return; }
L_0056D298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_0056D2A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056D38C; } }
L_0056D2A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D288u | kUnwind; return; } goto L_0056D288; } }
L_0056D2B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 597u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D2D4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056D2D4u) [[unlikely]] return; }
L_0056D2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D2DCu); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_0106(c, 255u, depth + 1u); else { c.pc = 0x0051B9A0u; return; } if (c.pc != 0x0056D2DCu) [[unlikely]] return; }
L_0056D2DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_0056D2EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D388; } }
L_0056D2EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056D310; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 175u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D30Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056D30Cu) [[unlikely]] return; }
L_0056D30C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  goto L_0056D320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D35C; } }
L_0056D320:
    set32(c.r[2], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0056D358; } }
L_0056D32C:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 37u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D348u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056D348u) [[unlikely]] return; }
L_0056D348:
    set32(c.r[2], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D32Cu | kUnwind; return; } goto L_0056D32C; } }
    c.budget -= 1;
L_0056D358:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D35C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0056D36C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D388; } }
L_0056D36C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D384u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056D384u) [[unlikely]] return; }
L_0056D384:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056D38C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0056D3A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[4].w[0]), c.r[18].w[0]);
    set32(c.r[5], c.r[5].w[0] - 18520u);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D3DCu); set32(c.r[6], c.r[19].w[0] + 96u);  if (depth < kMaxDepth) unit_010E(c, 33u, depth + 1u); else { c.pc = 0x00538390u; return; } if (c.pc != 0x0056D3DCu) [[unlikely]] return; }
L_0056D3DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0056D3EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056D5CC; } }
L_0056D3EC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0056D580; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[7], 0u + 554u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D418u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0056D418u) [[unlikely]] return; }
L_0056D418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0056D428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0056D5C8; } }
L_0056D428:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0056D528; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D438:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 192u);
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 565u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D460u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0056D460u) [[unlikely]] return; }
L_0056D460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056D470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 321u, depth + 1u); else { c.pc = 0x0056BC60u; return; } if (c.pc != 0x0056D470u) [[unlikely]] return; }
L_0056D470:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D498u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_011A(c, 315u, depth + 1u); else { c.pc = 0x0056BA60u; return; } if (c.pc != 0x0056D498u) [[unlikely]] return; }
L_0056D498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_0056D4A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D5C8; } }
L_0056D4A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D4BCu); set32(c.r[5], c.r[5].w[0] - 16416u);  if (depth < kMaxDepth) unit_011A(c, 241u, depth + 1u); else { c.pc = 0x0056A820u; return; } if (c.pc != 0x0056D4BCu) [[unlikely]] return; }
L_0056D4BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_0056D4CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056D5C8; } }
L_0056D4CC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056D500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17216u);
    set32(c.r[3], c.r[3].w[0] - 17248u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 20u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
L_0056D500:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + 12u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D438u | kUnwind; return; } goto L_0056D438; } }
    c.budget -= 1;
L_0056D528:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[19].w[0] + 56u);
    set32(c.r[3], c.r[19].w[0] + 20u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0056D580; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D558:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056D558u | kUnwind; return; } goto L_0056D558; } }
    c.budget -= 1;
L_0056D580:
    set32(c.r[2], 0u + 10u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056D5C8; }
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18544u);
    set32(c.r[7], 0u + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D5C0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0056D5C0u) [[unlikely]] return; }
L_0056D5C0:
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056D5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0056D5CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0056D5F0:
    st32((c.r[4].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], c.r[6].w[0] - 17216u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] - 17184u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[4].w[0] + 40u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 60u), 0u);
    st64((c.r[4].w[0] + 64u), 0ull);
    st64((c.r[4].w[0] + 72u), 0ull);
    st64((c.r[4].w[0] + 80u), 0ull);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 104u), 0ull);  c.pc = t; return; }
L_0056D670:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0056D6BC; } }
    c.r[21].d[0] = ld8((c.r[19].w[0] + 1u));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0056DB70; }
    c.r[20].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 4u));  goto L_0056D6C8; }
L_0056D6BC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056DB70; } }
L_0056D6C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.r[22].d[0] = ld64((c.r[19].w[0] + 8u));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[5].d[0] - c.r[22].d[0];  goto L_0056D6F0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056D6F0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[8], 0u + 32u);
    mmi::div(c, 0, c.r[2].w[0], c.r[21].w[0]);
    set32(c.r[7], 0u - 1u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 2u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[7].w[0] >> (c.r[8].w[0] & 31u));  if (t) { goto L_0056D730; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[6].d[0] & 255ull;  goto L_0056D734; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0056D730:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_0056D734:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = c.r[5].d[0] - c.r[22].d[0];  goto L_0056DB6C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0056D89C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0056D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056DB68; } }
L_0056D75C:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[3], c.r[21].w[0] >> 1);  goto L_0056D770; }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D788; } }
L_0056D770:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0056D788:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_0056D7B8; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D7D4; } }
L_0056D7B8:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0056D7D4:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0056D7FC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D818; } }
L_0056D7FC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0056D818:
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D834u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056D834u) [[unlikely]] return; }
L_0056D834:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D844u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x0056D844u) [[unlikely]] return; }
L_0056D844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + c.r[22].d[0];  goto L_0056DB70; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D858u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0056D858u) [[unlikely]] return; }
L_0056D858:
    c.r[7].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + c.r[4].d[0];  if (t) { goto L_0056DB6C; } }
L_0056D89C:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[3], c.r[21].w[0] >> 1);  goto L_0056D8B0; }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D8C8; } }
L_0056D8B0:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0056D8C8:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_0056D8F8; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D914; } }
L_0056D8F8:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0056D914:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0056D93C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D958; } }
L_0056D93C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0056D958:
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056D974u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056D974u) [[unlikely]] return; }
L_0056D974:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0056D988; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D9A4; } }
L_0056D988:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0056D9A4:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[3], c.r[21].w[0] >> 1);  goto L_0056D9B8; }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056D9D0; } }
L_0056D9B8:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0056D9D0:
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 14;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0056DA14; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056DA2C; } }
L_0056DA14:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0056DA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056DA64u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056DA64u) [[unlikely]] return; }
L_0056DA64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056DA74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x0056DA74u) [[unlikely]] return; }
L_0056DA74:
    set32(c.r[5], c.r[20].w[0] << 1);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0056DB18; } }
    set32(c.r[4], 0u + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[20].w[0]);
    c.budget -= 2;
L_0056DA8C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_0056DAEC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[21].d[0] ? 1ull : 0ull;  goto L_0056DAF0; }
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + c.r[4].d[0];  if (t) { goto L_0056DB18; } }
L_0056DAEC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0056DAF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056DB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] - c.r[16].d[0];  if (t) { goto L_0056DB08; } }
L_0056DB00:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056DB08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { mmi::div(c, 0, c.r[6].w[0], c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056DA8Cu | kUnwind; return; } goto L_0056DA8C; }
L_0056DB18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056DB24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0056DB24u) [[unlikely]] return; }
L_0056DB24:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[21].d[0] + c.r[2].d[0];  if (t) { goto L_0056DB6C; } }
L_0056DB68:
    c.r[18].d[0] = c.r[5].d[0] - c.r[22].d[0];
    c.budget -= 1;
L_0056DB6C:
    c.r[2].d[0] = c.r[18].d[0] + c.r[22].d[0];
    c.budget -= 1;
L_0056DB70:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0056DBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DBC4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056DBC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056DBC4u) [[unlikely]] return; }
L_0056DBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056DBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_0056DBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DC04; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056DC04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056DC04u) [[unlikely]] return; }
L_0056DC04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056DC10:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DC24; }
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056DC24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056DC30:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0056DC3C; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0056DC3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0056DC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0056DC60:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DC80; }
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
L_0056DC80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056DC90:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 20u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0056DCB8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_0056DCA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0056DCB8; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056DCA4u | kUnwind; return; } goto L_0056DCA4; }
L_0056DCB8:
    set32(c.r[2], c.r[4].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0056DCC8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056DCC8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DCD4; }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 1;
L_0056DCD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0056DCE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0056DD10; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_0056DCF0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0056DD10; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056DCF0u | kUnwind; return; } goto L_0056DCF0; } }
    c.budget -= 1;
L_0056DD10:
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056DD68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0056DD68; } }
    set32(c.r[6], c.r[7].w[0] << 3);
    c.budget -= 1;
L_0056DD34:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056DD34u | kUnwind; return; } goto L_0056DD34; } }
L_0056DD68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0056DD70:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DDD4; }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 8u)));
    c.budget -= 20;
L_0056DDD4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056DDE4; }
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056DDE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056E928:
    c.budget -= 2;
L_0056E930:
    set32(c.r[17], c.r[2].w[0] + c.r[24].w[0]);
    if (c.r[2].d[0] < c.r[24].d[0]) trap(c, 0x0056E934u);
    set32(c.r[17], c.r[24].w[0] << (c.r[2].w[0] & 31u));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> (c.r[2].w[0] & 63u));
    c.sa = c.r[2].w[0] & 15u;
    c.budget -= 6;
L_0056E948:
    c.r[17].d[0] = c.hi.d[0];
    c.lo.d[0] = c.r[2].d[0];
    c.r[17].d[0] = c.r[24].d[0] >> (c.r[2].w[0] & 63u);
    c.budget -= 6;
L_0056E960:
    c.budget -= 4;
L_0056E970:
    c.budget -= 4;
L_0056E980:
    c.budget -= 7;
    { const std::uint32_t t = 0u;  c.pc = t; if (t - 0x0056C000u < 16384u) { entry = entries_011B[(t - 0x0056C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0056F0B0:
    c.budget -= 2;
    { const std::uint32_t t = 0u; if (c.r[1].sd[0] >= c.r[19].sd[0]) trap(c, 0x0056F0B4u);  c.pc = t; if (t - 0x0056C000u < 16384u) { entry = entries_011B[(t - 0x0056C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0056F130:
    c.budget -= 4;
    { const std::uint32_t t = 0u;  c.pc = t; if (t - 0x0056C000u < 16384u) { entry = entries_011B[(t - 0x0056C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
