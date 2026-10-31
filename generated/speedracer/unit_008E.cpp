#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0,
    0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00338000;
    case 2u: goto L_0033802C;
    case 3u: goto L_003383A8;
    case 4u: goto L_003383E0;
    case 5u: goto L_003384B0;
    case 6u: goto L_00338650;
    case 7u: goto L_003386C8;
    case 8u: goto L_003386E0;
    case 9u: goto L_003386F0;
    case 10u: goto L_0033871C;
    case 11u: goto L_00338740;
    case 12u: goto L_0033875C;
    case 13u: goto L_00338774;
    case 14u: goto L_00338784;
    case 15u: goto L_003387A0;
    case 16u: goto L_00338818;
    case 17u: goto L_00338830;
    case 18u: goto L_00338840;
    case 19u: goto L_0033886C;
    case 20u: goto L_00338890;
    case 21u: goto L_003388AC;
    case 22u: goto L_003388C4;
    case 23u: goto L_003388D4;
    case 24u: goto L_003388DC;
    case 25u: goto L_00338900;
    case 26u: goto L_00338910;
    case 27u: goto L_00338920;
    case 28u: goto L_00338958;
    case 29u: goto L_00338980;
    case 30u: goto L_003389B0;
    case 31u: goto L_00338E18;
    case 32u: goto L_003391E0;
    case 33u: goto L_003392F0;
    case 34u: goto L_00339300;
    case 35u: goto L_00339314;
    case 36u: goto L_0033931C;
    case 37u: goto L_00339360;
    case 38u: goto L_003393A0;
    case 39u: goto L_003393AC;
    case 40u: goto L_00339410;
    case 41u: goto L_00339450;
    case 42u: goto L_0033945C;
    case 43u: goto L_00339530;
    case 44u: goto L_00339560;
    case 45u: goto L_0033956C;
    case 46u: goto L_003395C0;
    case 47u: goto L_00339620;
    case 48u: goto L_0033962C;
    case 49u: goto L_00339670;
    case 50u: goto L_003396A0;
    case 51u: goto L_003396C0;
    case 52u: goto L_003396CC;
    case 53u: goto L_003396E0;
    case 54u: goto L_00339714;
    case 55u: goto L_0033972C;
    case 56u: goto L_00339768;
    case 57u: goto L_00339778;
    case 58u: goto L_00339788;
    case 59u: goto L_00339798;
    case 60u: goto L_003397A8;
    case 61u: goto L_003397B8;
    case 62u: goto L_003397C8;
    case 63u: goto L_003397D8;
    case 64u: goto L_003397E8;
    case 65u: goto L_003397F4;
    case 66u: goto L_00339830;
    case 67u: goto L_0033986C;
    case 68u: goto L_003398AC;
    case 69u: goto L_003398C0;
    case 70u: goto L_00339938;
    case 71u: goto L_00339944;
    case 72u: goto L_00339960;
    case 73u: goto L_003399F0;
    case 74u: goto L_00339A2C;
    case 75u: goto L_00339A3C;
    case 76u: goto L_00339A60;
    case 77u: goto L_00339A68;
    case 78u: goto L_00339AA4;
    case 79u: goto L_00339AB0;
    case 80u: goto L_00339B20;
    case 81u: goto L_00339B88;
    case 82u: goto L_00339B9C;
    case 83u: goto L_00339C10;
    case 84u: goto L_00339C20;
    case 85u: goto L_00339CA0;
    case 86u: goto L_00339D14;
    case 87u: goto L_00339D28;
    case 88u: goto L_00339D38;
    case 89u: goto L_00339D94;
    case 90u: goto L_00339E10;
    case 91u: goto L_00339E58;
    case 92u: goto L_00339E70;
    case 93u: goto L_00339E80;
    case 94u: goto L_00339EF0;
    case 95u: goto L_00339F38;
    case 96u: goto L_00339F40;
    case 97u: goto L_00339F54;
    case 98u: goto L_00339FB0;
    case 99u: goto L_00339FB8;
    case 100u: goto L_00339FE0;
    case 101u: goto L_00339FE8;
    case 102u: goto L_0033A010;
    case 103u: goto L_0033A030;
    case 104u: goto L_0033A040;
    case 105u: goto L_0033A050;
    case 106u: goto L_0033A06C;
    case 107u: goto L_0033A07C;
    case 108u: goto L_0033A090;
    case 109u: goto L_0033A0AC;
    case 110u: goto L_0033A0BC;
    case 111u: goto L_0033A0D0;
    case 112u: goto L_0033A0E0;
    case 113u: goto L_0033A0F0;
    case 114u: goto L_0033A100;
    case 115u: goto L_0033A1A4;
    case 116u: goto L_0033A1C0;
    case 117u: goto L_0033A260;
    case 118u: goto L_0033A2B0;
    case 119u: goto L_0033A300;
    case 120u: goto L_0033A330;
    case 121u: goto L_0033A344;
    case 122u: goto L_0033A3A8;
    case 123u: goto L_0033A440;
    case 124u: goto L_0033A468;
    case 125u: goto L_0033A474;
    case 126u: goto L_0033A4A0;
    case 127u: goto L_0033A4C0;
    case 128u: goto L_0033A4E0;
    case 129u: goto L_0033A4F0;
    case 130u: goto L_0033A500;
    case 131u: goto L_0033A510;
    case 132u: goto L_0033A520;
    case 133u: goto L_0033A530;
    case 134u: goto L_0033A540;
    case 135u: goto L_0033A550;
    case 136u: goto L_0033A56C;
    case 137u: goto L_0033A578;
    case 138u: goto L_0033A590;
    case 139u: goto L_0033A5C0;
    case 140u: goto L_0033A5D4;
    case 141u: goto L_0033A5EC;
    case 142u: goto L_0033A600;
    case 143u: goto L_0033A614;
    case 144u: goto L_0033A634;
    case 145u: goto L_0033A690;
    case 146u: goto L_0033A6CC;
    case 147u: goto L_0033A750;
    case 148u: goto L_0033A7B0;
    case 149u: goto L_0033A7B8;
    case 150u: goto L_0033A7D0;
    case 151u: goto L_0033A7EC;
    case 152u: goto L_0033A808;
    case 153u: goto L_0033A860;
    case 154u: goto L_0033A890;
    case 155u: goto L_0033A8A4;
    case 156u: goto L_0033A8B8;
    case 157u: goto L_0033A8C4;
    case 158u: goto L_0033A8E0;
    case 159u: goto L_0033A8F4;
    case 160u: goto L_0033A904;
    case 161u: goto L_0033A920;
    case 162u: goto L_0033A93C;
    case 163u: goto L_0033A948;
    case 164u: goto L_0033A974;
    case 165u: goto L_0033A9C0;
    case 166u: goto L_0033A9FC;
    case 167u: goto L_0033AA18;
    case 168u: goto L_0033AA64;
    case 169u: goto L_0033AABC;
    case 170u: goto L_0033AAF0;
    case 171u: goto L_0033AB20;
    case 172u: goto L_0033AB40;
    case 173u: goto L_0033AB50;
    case 174u: goto L_0033AB80;
    case 175u: goto L_0033ABE0;
    case 176u: goto L_0033AC50;
    case 177u: goto L_0033AD10;
    case 178u: goto L_0033AD80;
    case 179u: goto L_0033AD90;
    case 180u: goto L_0033ADA0;
    case 181u: goto L_0033ADB0;
    case 182u: goto L_0033ADC0;
    case 183u: goto L_0033AE90;
    case 184u: goto L_0033AF40;
    case 185u: goto L_0033AFB0;
    case 186u: goto L_0033AFE0;
    case 187u: goto L_0033B010;
    case 188u: goto L_0033B02C;
    case 189u: goto L_0033B03C;
    case 190u: goto L_0033B04C;
    case 191u: goto L_0033B080;
    case 192u: goto L_0033B090;
    case 193u: goto L_0033B0A0;
    case 194u: goto L_0033B0B0;
    case 195u: goto L_0033B0C0;
    case 196u: goto L_0033B0D0;
    case 197u: goto L_0033B0E0;
    case 198u: goto L_0033B0F0;
    case 199u: goto L_0033B128;
    case 200u: goto L_0033B134;
    case 201u: goto L_0033B13C;
    case 202u: goto L_0033B144;
    case 203u: goto L_0033B14C;
    case 204u: goto L_0033B170;
    case 205u: goto L_0033B188;
    case 206u: goto L_0033B190;
    case 207u: goto L_0033B1BC;
    case 208u: goto L_0033B1C4;
    case 209u: goto L_0033B1CC;
    case 210u: goto L_0033B1D4;
    case 211u: goto L_0033B1F0;
    case 212u: goto L_0033B210;
    case 213u: goto L_0033B218;
    case 214u: goto L_0033B220;
    case 215u: goto L_0033B240;
    case 216u: goto L_0033B250;
    case 217u: goto L_0033B260;
    case 218u: goto L_0033B280;
    case 219u: goto L_0033B288;
    case 220u: goto L_0033B298;
    case 221u: goto L_0033B2AC;
    case 222u: goto L_0033B2DC;
    case 223u: goto L_0033B32C;
    case 224u: goto L_0033B350;
    case 225u: goto L_0033B374;
    case 226u: goto L_0033B384;
    case 227u: goto L_0033B3E0;
    case 228u: goto L_0033B3EC;
    case 229u: goto L_0033B40C;
    case 230u: goto L_0033B418;
    case 231u: goto L_0033B428;
    case 232u: goto L_0033B434;
    case 233u: goto L_0033B440;
    case 234u: goto L_0033B44C;
    case 235u: goto L_0033B458;
    case 236u: goto L_0033B464;
    case 237u: goto L_0033B530;
    case 238u: goto L_0033B538;
    case 239u: goto L_0033B55C;
    case 240u: goto L_0033B5B0;
    case 241u: goto L_0033B6A0;
    case 242u: goto L_0033B730;
    case 243u: goto L_0033B7B4;
    case 244u: goto L_0033B810;
    case 245u: goto L_0033B87C;
    case 246u: goto L_0033B8B0;
    case 247u: goto L_0033B91C;
    case 248u: goto L_0033B968;
    case 249u: goto L_0033B9AC;
    case 250u: goto L_0033B9C8;
    case 251u: goto L_0033B9D8;
    case 252u: goto L_0033B9E8;
    case 253u: goto L_0033B9F8;
    case 254u: goto L_0033BA08;
    case 255u: goto L_0033BA18;
    case 256u: goto L_0033BA28;
    case 257u: goto L_0033BA38;
    case 258u: goto L_0033BA48;
    case 259u: goto L_0033BA60;
    case 260u: goto L_0033BA6C;
    case 261u: goto L_0033BA78;
    case 262u: goto L_0033BA84;
    case 263u: goto L_0033BA90;
    case 264u: goto L_0033BA9C;
    case 265u: goto L_0033BAA8;
    case 266u: goto L_0033BAB4;
    case 267u: goto L_0033BAC0;
    case 268u: goto L_0033BAD8;
    case 269u: goto L_0033BAE8;
    case 270u: goto L_0033BAF8;
    case 271u: goto L_0033BB08;
    case 272u: goto L_0033BB18;
    case 273u: goto L_0033BB28;
    case 274u: goto L_0033BB38;
    case 275u: goto L_0033BB48;
    case 276u: goto L_0033BB58;
    case 277u: goto L_0033BB84;
    case 278u: goto L_0033BB94;
    case 279u: goto L_0033BBA4;
    case 280u: goto L_0033BBB4;
    case 281u: goto L_0033BBC4;
    case 282u: goto L_0033BBD4;
    case 283u: goto L_0033BBE4;
    case 284u: goto L_0033BBF4;
    case 285u: goto L_0033BC04;
    case 286u: goto L_0033BC24;
    case 287u: goto L_0033BCCC;
    case 288u: goto L_0033BCF0;
    case 289u: goto L_0033BD58;
    case 290u: goto L_0033BE90;
    case 291u: goto L_0033BEA0;
    case 292u: goto L_0033BEB0;
    case 293u: goto L_0033BEC0;
    case 294u: goto L_0033BECC;
    case 295u: goto L_0033BEF4;
    case 296u: goto L_0033BF10;
    case 297u: goto L_0033BFA8;
    case 298u: goto L_0033BFB8;
    default: bad_entry(c, 0x00338000u); return;
    }
L_00338000:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_0033802C:
    c.f[29] = 0u;
    c.facc = fp::mul(c.f[15], c.f[15]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[14]));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[29]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[17] = fp::add(c.facc, fp::mul(c.f[16], c.f[16]));  if (t) { goto L_003380D0; } }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[29]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003380D0; } }
    fpu_div(c, 24u, c.f[23], c.f[17]);
    c.f[28] = fp::mul(c.f[24], c.f[15]);
    c.f[31] = fp::sub(c.f[9], c.f[28]);
    c.f[26] = fp::mul(c.f[24], c.f[16]);
    c.f[27] = fp::mul(c.f[24], c.f[14]);
    c.f[31] = fp::mul(c.f[12], c.f[31]);
    c.f[24] = fp::sub(c.f[8], c.f[27]);
    c.facc = fp::add(c.f[29], c.f[31]);
    c.f[24] = fp::add(c.facc, fp::mul(c.f[11], c.f[24]));
    c.f[25] = fp::sub(c.f[10], c.f[26]);
    c.facc = fp::add(c.f[29], c.f[24]);
    c.f[24] = fp::add(c.facc, fp::mul(c.f[13], c.f[25]));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[29]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003380D0; } }
    c.f[0] = fp::add(c.f[1], c.f[27]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[28]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[26]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_003380D0:
    c.f[24] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338170; } }
    fpu_compare(c, fp::key(c.f[30]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338170; } }
    fpu_div(c, 26u, c.f[21], c.f[17]);
    c.f[21] = fp::mul(c.f[26], c.f[15]);
    c.f[6] = fp::sub(c.f[6], c.f[21]);
    c.f[6] = fp::mul(c.f[12], c.f[6]);
    c.f[25] = fp::mul(c.f[26], c.f[14]);
    c.facc = fp::add(c.f[24], c.f[6]);
    c.f[6] = fp::mul(c.f[26], c.f[16]);
    c.f[5] = fp::sub(c.f[5], c.f[25]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[11], c.f[5]));
    c.f[7] = fp::sub(c.f[7], c.f[6]);
    c.facc = fp::add(c.f[24], c.f[5]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[13], c.f[7]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[24]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338170; } }
    c.f[0] = fp::add(c.f[1], c.f[25]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_00338170:
    c.f[7] = 0u;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[11]));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[7]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));  if (t) { goto L_0033821C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033821C; } }
    c.f[5] = c.f[9] ^ fp::kSign;
    c.f[6] = c.f[22] ^ fp::kSign;
    fpu_div(c, 9u, c.f[6], c.f[21]);
    c.f[6] = fp::mul(c.f[9], c.f[12]);
    c.f[5] = fp::sub(c.f[5], c.f[6]);
    c.f[5] = fp::mul(c.f[15], c.f[5]);
    c.facc = fp::add(c.f[7], c.f[5]);
    c.f[20] = fp::mul(c.f[9], c.f[11]);
    c.f[8] = c.f[8] ^ fp::kSign;
    c.f[8] = fp::sub(c.f[8], c.f[20]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[14], c.f[8]));
    c.f[5] = fp::mul(c.f[9], c.f[13]);
    c.f[10] = c.f[10] ^ fp::kSign;
    c.f[9] = fp::sub(c.f[10], c.f[5]);
    c.facc = fp::add(c.f[7], c.f[8]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[7]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033821C; } }
    st32((c.r[8].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_0033821C:
    c.f[9] = 0u;
    fpu_compare(c, fp::key(c.f[19]) <= fp::key(c.f[9]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.facc = fp::mul(c.f[15], c.f[12]);  goto L_003382CC; }
    fpu_compare(c, fp::key(c.f[18]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003382C8; } }
    c.f[5] = c.f[19] ^ fp::kSign;
    fpu_div(c, 6u, c.f[5], c.f[21]);
    c.f[8] = fp::mul(c.f[6], c.f[12]);
    c.f[5] = c.f[4] ^ fp::kSign;
    c.f[4] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[3] ^ fp::kSign;
    c.f[2] = fp::sub(c.f[2], c.f[8]);
    c.f[7] = fp::mul(c.f[6], c.f[11]);
    c.f[2] = fp::mul(c.f[15], c.f[2]);
    c.f[6] = fp::mul(c.f[6], c.f[13]);
    c.facc = fp::add(c.f[9], c.f[2]);
    c.f[2] = fp::sub(c.f[4], c.f[7]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[14], c.f[2]));
    c.f[3] = fp::sub(c.f[5], c.f[6]);
    c.facc = fp::add(c.f[9], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[16], c.f[3]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[9]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003382C8; } }
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[7]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[8]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_003382C8:
    c.facc = fp::mul(c.f[15], c.f[12]);
    c.budget -= 1;
L_003382CC:
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[11]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[16], c.f[13]));
    c.facc = fp::mul(c.f[17], c.f[21]);
    c.f[5] = 0u;
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[4], c.f[4]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[5]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::mul(c.f[21], c.f[23]);  goto L_00338320; }
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
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 8u), c.f[0]);  if (t) { goto L_003383A8; } }
L_00338320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[23]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[4], c.f[22]));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[17], c.f[22]));
    c.facc = fp::add(c.f[5], c.f[1]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[14]));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[15]));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[16]));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[11]));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[13]));
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.budget -= 34;
L_003383A8:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003383E0:
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[11] = fp::sub(c.f[3], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[8] = ld32((c.r[7].w[0] + 4u));
    c.f[10] = fp::sub(c.f[4], c.f[3]);
    c.f[9] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[7] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[4], c.f[8]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.f[2] = c.r[3].w[0];
    c.f[5] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::mul(c.f[4], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[11]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[9]));
    c.facc = fp::mul(c.f[8], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[11]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32268u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[5]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338478; } }
    st32((c.r[8].w[0]), c.f[6]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[6]);  if (t) { goto L_003384A4; } }
L_00338478:
    fpu_div(c, 2u, c.f[2], c.f[1]);
    c.facc = fp::add(c.f[6], c.f[4]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[8].w[0]), c.f[1]);
    st32((c.r[9].w[0]), c.f[0]);
    c.budget -= 11;
L_003384A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003384B0:
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[5] = fp::sqrt(c.f[0]);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033850C; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = fp::add(c.f[12], c.f[13]);  goto L_00338514; }
L_0033850C:
    c.f[5] = c.f[5] ^ fp::kSign;
    c.f[4] = fp::add(c.f[12], c.f[13]);
    c.budget -= 2;
L_00338514:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00338644; } }
L_00338528:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[5]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[13], c.f[12]);  goto L_0033856C; }
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 20u), c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 32u), c.f[4]);  if (t) { goto L_00338640; } }
L_0033856C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.f[1] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.f[5] & fp::kAbs;
    fpu_div(c, 3u, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[6].w[0] + 24u), c.f[1]);  if (t) { goto L_003385F8; } }
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[6].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[6].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[6].w[0] + 24u), c.f[1]);
    c.budget -= 9;
L_003385F8:
    c.f[1] = fp::sub(c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[4] = 0u;
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[6].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] + 20u));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[6].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 24u));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 32u), c.f[1]);
    c.budget -= 18;
L_00338640:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00338644:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338650:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (t) { goto L_00338698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003386A4; } }
L_00338698:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.budget -= 3;
L_003386A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27348u)));
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_003386D0; } }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003386C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003386C8u) [[unlikely]] return; }
L_003386C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00338788; } }
L_003386D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386E0u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003386E0u) [[unlikely]] return; }
L_003386E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386F0u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003386F0u) [[unlikely]] return; }
L_003386F0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00338724; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17056u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033871Cu); set32(c.r[6], c.r[6].w[0] - 17047u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0033871Cu) [[unlikely]] return; }
L_0033871C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338740; } }
L_00338724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 17035u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338740u); set32(c.r[6], c.r[6].w[0] - 17047u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00338740u) [[unlikely]] return; }
L_00338740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033875Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x0033875Cu) [[unlikely]] return; }
L_0033875C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338774u); set32(c.r[5], c.r[5].w[0] - 17029u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00338774u) [[unlikely]] return; }
L_00338774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338784u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x00338784u) [[unlikely]] return; }
L_00338784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00338788:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003387A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (t) { goto L_003387E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003387F4; } }
L_003387E8:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.budget -= 3;
L_003387F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27352u)));
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00338820; } }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338818u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338818u) [[unlikely]] return; }
L_00338818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003388D4; } }
L_00338820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338830u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x00338830u) [[unlikely]] return; }
L_00338830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338840u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x00338840u) [[unlikely]] return; }
L_00338840:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00338874; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17056u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033886Cu); set32(c.r[6], c.r[6].w[0] - 17027u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0033886Cu) [[unlikely]] return; }
L_0033886C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338890; } }
L_00338874:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 17035u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338890u); set32(c.r[6], c.r[6].w[0] - 17027u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00338890u) [[unlikely]] return; }
L_00338890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388ACu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003388ACu) [[unlikely]] return; }
L_003388AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388C4u); set32(c.r[5], c.r[5].w[0] - 17029u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003388C4u) [[unlikely]] return; }
L_003388C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388D4u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003388D4u) [[unlikely]] return; }
L_003388D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388DCu);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003388DCu) [[unlikely]] return; }
L_003388DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00338900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 27348u), c.r[4].w[0]);  c.pc = t; return; }
L_00338910:
    c.f[0] = 0u;
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_00338944; } }
L_00338920:
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 9;
L_00338944:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { c.facc = fp::add(c.f[2], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00338920u | kUnwind; return; } goto L_00338920; }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { goto L_00338970; } }
L_00338958:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 6;
L_00338970:
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.facc = fp::add(c.f[1], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00338958u | kUnwind; return; } goto L_00338958; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338980:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  c.pc = t; return; }
L_003389B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[19], ld32((c.r[5].w[0] + 24u)));
    c.f[21] = ld32((c.r[29].w[0] + 148u));
    c.f[22] = ld32((c.r[29].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] << 1);  if (t) { goto L_00338A30; } }
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 156u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_00338A48; } }
L_00338A30:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 156u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 6;
L_00338A48:
    st32((c.r[29].w[0] + 172u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.f[7] = ld32((c.r[17].w[0] + 132u));
    c.f[5] = ld32((c.r[17].w[0] + 136u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[3] = ld32((c.r[17].w[0] + 140u));
    c.f[6] = ld32((c.r[4].w[0] + 152u));
    c.f[4] = ld32((c.r[4].w[0] + 156u));
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[23] = fp::sub(c.f[7], c.f[6]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[25] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[24] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[24], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[25], c.f[2]));
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::mul(c.f[25], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[23], c.f[2]));
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::mul(c.f[23], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[24], c.f[2]));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 43;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_00338BAC; }
    c.f[3] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[2] = ld32((c.r[4].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[5] = ld32((c.r[17].w[0] + 136u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = ld32((c.r[4].w[0] + 156u));
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[3] = ld32((c.r[17].w[0] + 140u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[22], c.f[2]));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[21], c.f[2]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 46;
L_00338BAC:
    c.f[2] = 0u;
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[16].w[0] + 4u));  goto L_00338BC4; }
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 2;
L_00338BC4:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0]));  goto L_00338BD8; }
    c.f[4] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.budget -= 2;
L_00338BD8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[3] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[4] = fp::mul(c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338C04; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00338C04:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  goto L_00338C30; }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_00338C34; } }
L_00338C30:
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_00338C34:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00338C54; }
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
L_00338C54:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00338D80; }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[6].w[0] + 236u));
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 232u));
    c.f[5] = ld32((c.r[3].w[0]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[8] = ld32((c.r[6].w[0] + 240u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[9] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 252u));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[9], c.f[8]));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 248u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[7] = ld32((c.r[4].w[0] + 8u));
    c.f[6] = ld32((c.r[6].w[0] + 256u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.budget -= 25;
    { const bool t = c.r[5].d[0] == 0ull; c.f[1] = fp::add(c.f[8], c.f[1]);  if (t) { goto L_00338D2C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[3] = ld32((c.r[5].w[0] + 236u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[5] = ld32((c.r[5].w[0] + 232u));
    c.f[10] = ld32((c.r[5].w[0] + 240u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[9] = ld32((c.r[3].w[0]));
    c.f[11] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 252u));
    c.f[6] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 248u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[11], c.f[10]));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[8] = ld32((c.r[4].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 256u));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[0] = fp::add(c.f[9], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 26;
L_00338D2C:
    c.f[4] = ld32((c.r[17].w[0] + 100u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338D7C; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338D7C; } }
    c.facc = fp::add(c.f[3], c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338D7C; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 1;
L_00338D7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00338D80:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.f[9] = 0u;
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  goto L_00338FC8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00338E0C; }
    c.f[8] = ld32((c.r[17].w[0] + 184u));
    c.f[5] = ld32((c.r[29].w[0] + 168u));
    c.f[4] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 128u), c.f[8]);
    c.f[7] = ld32((c.r[17].w[0] + 188u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = fp::mul(c.f[5], c.f[8]);
    st32((c.r[29].w[0] + 132u), c.f[7]);
    c.f[6] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = fp::mul(c.f[2], c.f[7]);
    c.f[3] = fp::mul(c.f[4], c.f[6]);
    c.facc = fp::add(c.f[9], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[5], c.f[7]));
    c.facc = fp::add(c.f[9], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::add(c.f[9], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[8]));
    st32((c.r[29].w[0] + 136u), c.f[6]);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_00338E18; } }
L_00338E0C:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E18u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008E(c, 240u, depth + 1u); else { c.pc = 0x0033B5B0u; return; } if (c.pc != 0x00338E18u) [[unlikely]] return; }
L_00338E18:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = 0u;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.facc = fp::mul(c.f[24], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[25], c.f[1]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.facc = fp::mul(c.f[25], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[23], c.f[1]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.facc = fp::mul(c.f[23], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[24], c.f[1]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 38;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00338F5C; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 43;
L_00338F5C:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_00338F78; }
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
L_00338F78:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00338FAC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
L_00338FAC:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338FC4; } }
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_00338FC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_00338FC8:
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003391B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = 0u;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.facc = fp::mul(c.f[24], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[25], c.f[1]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[25], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[23], c.f[1]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.facc = fp::mul(c.f[23], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[24], c.f[1]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 38;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00339118; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 43;
L_00339118:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00339134; }
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
L_00339134:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_00339160; }
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00339178; } }
L_00339160:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_00339178:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  goto L_00339194; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
L_00339194:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003391AC; } }
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_003391AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003391B0:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003391E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 88u));  goto L_003391FC; }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { goto L_003392E4; } }
L_003391FC:
    set32(c.r[7], 0u + 1u);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00339218; } }
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.budget -= 1;
L_00339218:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 88u));  goto L_003392AC; }
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[4].w[0] + 92u));  goto L_00339248; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.budget -= 2;
L_00339248:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[4].w[0] + 92u));  goto L_00339264; }
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 92u));
    c.budget -= 2;
L_00339264:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[4].w[0] + 88u));  goto L_00339280; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.budget -= 2;
L_00339280:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32640u));  goto L_00339298; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 2;
L_00339298:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 80u), c.r[7].w[0]);  goto L_003392DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_003392D8; } }
L_003392AC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32640u));  goto L_003392C8; }
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 2;
L_003392C8:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003392D8; } }
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 1;
L_003392D8:
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    c.budget -= 1;
L_003392DC:
    st32((c.r[5].w[0]), c.r[7].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 2;
L_003392E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003392F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339300:
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    fpu_div(c, 1u, c.f[12], c.f[0]);
    st32((c.r[4].w[0]), c.f[12]);
    set32(c.r[3], c.r[8].w[0] << 4);
    c.budget -= 5;
L_00339314:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0033931C:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 20u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033931Cu | kUnwind; return; } goto L_0033931C; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339314u | kUnwind; return; } goto L_00339314; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0]), 0u);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.f[21] = c.f[14];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003393A0u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x003393A0u) [[unlikely]] return; }
L_003393A0:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003393ACu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x003393ACu) [[unlikely]] return; }
L_003393AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[23], c.f[1]);
    c.f[4] = fp::mul(c.f[20], c.f[20]);
    c.f[3] = fp::mul(c.f[21], c.f[21]);
    c.f[1] = fp::add(c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[23]);
    c.f[0] = fp::mul(c.f[22], c.f[22]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00339410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0]), 0u);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339450u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x00339450u) [[unlikely]] return; }
L_00339450:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033945Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033945Cu) [[unlikely]] return; }
L_0033945C:
    c.f[3] = ld32((c.r[28].w[0] - 31816u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[28].w[0] - 31836u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EC00000u);
    c.f[3] = fp::mul(c.f[3], c.f[21]);
    set32(c.r[4], c.r[17].w[0] - 1u);
    c.f[4] = fp::mul(c.f[4], c.f[21]);
    c.f[3] = fp::mul(c.f[3], c.f[21]);
    c.f[4] = fp::mul(c.f[4], c.f[21]);
    c.f[3] = fp::mul(c.f[21], c.f[3]);
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[0] = c.r[3].w[0];
    c.f[6] = fp::mul(c.f[22], c.f[3]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[7] = fp::mul(c.f[22], c.f[4]);
    c.f[4] = ld32((c.r[28].w[0] - 31812u));
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.f[4] = fp::mul(c.f[4], c.f[20]);
    c.f[5] = fp::mul(c.f[2], c.f[21]);
    c.f[3] = fp::mul(c.f[2], c.f[20]);
    c.f[2] = fp::add(c.f[7], c.f[6]);
    st32((c.r[16].w[0]), c.f[2]);
    c.facc = fp::mul(c.f[4], c.f[20]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[5], c.f[21]));
    c.f[2] = ld32((c.r[28].w[0] - 32344u));
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[21]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[20]));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00339530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0]), 0u);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339560u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x00339560u) [[unlikely]] return; }
L_00339560:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033956Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033956Cu) [[unlikely]] return; }
L_0033956C:
    c.f[1] = ld32((c.r[28].w[0] - 31816u));
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003395C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0]), 0u);
    c.f[27] = c.f[12];
    c.f[26] = c.f[13];
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.f[25] = c.f[14];
    c.f[24] = c.f[15];
    c.f[23] = c.f[16];
    c.f[22] = c.f[17];
    c.f[21] = c.f[18];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339620u); c.f[20] = c.f[19];  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x00339620u) [[unlikely]] return; }
L_00339620:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033962Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033962Cu) [[unlikely]] return; }
L_0033962C:
    st32((c.r[16].w[0]), c.f[27]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.f[26]);
    st32((c.r[16].w[0] + 8u), c.f[25]);
    st32((c.r[16].w[0] + 12u), c.f[24]);
    st32((c.r[16].w[0] + 20u), c.f[23]);
    st32((c.r[16].w[0] + 40u), c.f[22]);
    st32((c.r[16].w[0] + 60u), c.f[21]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 24u), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[16].w[0] + 28u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[20]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339670u); st32((c.r[16].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 53u, depth + 1u); else { c.pc = 0x003396E0u; return; } if (c.pc != 0x00339670u) [[unlikely]] return; }
L_00339670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003396A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396C0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x003396C0u) [[unlikely]] return; }
L_003396C0:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396CCu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x003396CCu) [[unlikely]] return; }
L_003396CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003396E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00339708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003398B0; } }
L_00339708:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339714u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x003398C0u; return; } if (c.pc != 0x00339714u) [[unlikely]] return; }
L_00339714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_00339724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003398B0; } }
L_00339724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033972Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033972Cu) [[unlikely]] return; }
L_0033972C:
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339768u); st32((c.r[29].w[0] + 68u), c.f[1]);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x00339768u) [[unlikely]] return; }
L_00339768:
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339778u); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x00339778u) [[unlikely]] return; }
L_00339778:
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339788u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x00339788u) [[unlikely]] return; }
L_00339788:
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339798u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x00339798u) [[unlikely]] return; }
L_00339798:
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397A8u); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x003397A8u) [[unlikely]] return; }
L_003397A8:
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397B8u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x003397B8u) [[unlikely]] return; }
L_003397B8:
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x003397C8u) [[unlikely]] return; }
L_003397C8:
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397D8u); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x003397D8u) [[unlikely]] return; }
L_003397D8:
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397E8u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x003397E8u) [[unlikely]] return; }
L_003397E8:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.budget -= 3;
L_003397F4:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003397F4u | kUnwind; return; } goto L_003397F4; } }
    set32(c.r[4], 0u + 4u);
    c.f[0] = 0u;
    c.budget -= 2;
L_00339830:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339830u | kUnwind; return; } goto L_00339830; } }
    set32(c.r[4], 0u + 8u);
    c.f[0] = 0u;
    c.budget -= 2;
L_0033986C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033986Cu | kUnwind; return; } goto L_0033986C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003398ACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008E(c, 69u, depth + 1u); else { c.pc = 0x003398C0u; return; } if (c.pc != 0x003398ACu) [[unlikely]] return; }
L_003398AC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003398B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003398C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_003398F4; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_003398F8; } }
L_003398F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003398F8:
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[6].w[0] + 15u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00339938u) [[unlikely]] return; }
L_00339938:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339944u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00339CA0u; return; } if (c.pc != 0x00339944u) [[unlikely]] return; }
L_00339944:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00339960:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003399AC; } }
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_003399B0; } }
L_003399AC:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003399B0:
    mmi::mult(c, 0, c.r[16].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 15u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003399F0u) [[unlikely]] return; }
L_003399F0:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A2Cu); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00339CA0u; return; } if (c.pc != 0x00339A2Cu) [[unlikely]] return; }
L_00339A2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] + 0ull;  goto L_00339A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339AEC; } }
L_00339A3C:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00339A48:
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339A3Cu | kUnwind; return; } goto L_00339A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00339ADC; } }
L_00339A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00339A78; } }
L_00339A68:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00339A78:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339A68u | kUnwind; return; } goto L_00339A68; } }
    set32(c.r[21], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AA4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 80u, depth + 1u); else { c.pc = 0x00339B20u; return; } if (c.pc != 0x00339AA4u) [[unlikely]] return; }
L_00339AA4:
    set32(c.r[3], c.r[22].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00339ACC; } }
L_00339AB0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
L_00339ACC:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339AB0u | kUnwind; return; } goto L_00339AB0; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00339ADC:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339A60u | kUnwind; return; } goto L_00339A60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00339AEC:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00339B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[30]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_00339B44; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_00339B48; } }
L_00339B44:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00339B48:
    set32(c.r[8], c.r[6].w[0] << 2);
    set32(c.r[3], 0u - 16u);
    set32(c.r[9], c.r[8].w[0] + 15u);
    set32(c.r[11], c.r[7].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    set32(c.r[9], c.r[9].w[0] + 15u);
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 15ull;
    c.f[2] = 0u;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_00339BF4; } }
L_00339B88:
    c.r[13].d[0] = 0ull + 0ull;
    c.f[1] = c.f[2];
    set32(c.r[9], c.r[9].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[4].w[0] + c.r[9].w[0]);  if (t) { goto L_00339BB8; } }
L_00339B9C:
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.facc = fp::add(c.f[2], c.f[1]);
    set32(c.r[9], c.r[12].w[0] + c.r[9].w[0]);
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 7;
L_00339BB8:
    c.r[9].d[0] = c.r[13].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { set32(c.r[9], c.r[13].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339B9Cu | kUnwind; return; } goto L_00339B9C; }
    set32(c.r[12], c.r[8].w[0] << 2);
    set32(c.r[9], c.r[5].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    mmi::mult(c, 0, c.r[8].w[0], c.r[11].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[9].w[0]), c.f[0]);
    c.budget -= 12;
L_00339BF4:
    c.r[9].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]); c.r[9].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339B88u | kUnwind; return; } goto L_00339B88; }
    set32(c.r[13], c.r[6].w[0] - 1u);
    c.f[2] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[7].w[0] + 1u);  if (t) { goto L_00339C7C; } }
L_00339C10:
    set32(c.r[12], c.r[13].w[0] + 1u);
    c.f[1] = c.f[2];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[11].w[0]);  if (t) { goto L_00339C44; } }
L_00339C20:
    c.facc = fp::add(c.f[2], c.f[1]);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    mmi::mult(c, 0, c.r[12].w[0], c.r[7].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 9;
L_00339C44:
    c.r[8].d[0] = c.r[12].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339C20u | kUnwind; return; } goto L_00339C20; }
    set32(c.r[8], c.r[3].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    mmi::mult(c, 0, c.r[13].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[8], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 11;
L_00339C7C:
    c.budget -= 2;
    if (c.r[13].sd[0] >= 0) { set32(c.r[11], c.r[13].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339C10u | kUnwind; return; } goto L_00339C10; }
    set32(c.r[29], c.r[30].w[0] + 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[30]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[30]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[30], c.r[29].w[0] + 0u);  if (t) { goto L_00339CC4; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00339CC8; } }
L_00339CC4:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00339CC8:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], 0u - 16u);
    set32(c.r[6], c.r[3].w[0] + 15u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[8].w[0] + 15u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[7].d[0];
    set32(c.r[8], c.r[2].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[29], c.r[29].w[0] - c.r[9].w[0]);
    c.f[1] = c.r[7].w[0];
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] | 15ull;
    c.f[2] = 0u;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[7].w[0] + 1u);  if (t) { goto L_00339DEC; } }
L_00339D14:
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_00339D78; } }
L_00339D28:
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_00339D50; } }
L_00339D38:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 6;
L_00339D50:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { c.facc = fp::add(c.f[2], c.f[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D38u | kUnwind; return; } goto L_00339D38; }
    set32(c.r[7], c.r[14].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[11].w[0]), c.f[0]);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 8;
L_00339D78:
    c.r[7].d[0] = c.r[14].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.f[3] = ld32((c.r[11].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D28u | kUnwind; return; } goto L_00339D28; }
    c.f[0] = ld32((c.r[11].w[0]));
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00339DA8; } }
L_00339D94:
    c.facc = fp::add(c.f[2], c.f[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 5;
L_00339DA8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D94u | kUnwind; return; } goto L_00339D94; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00339DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339DFC; } }
L_00339DC4:
    c.f[0] = fp::sqrt(c.f[0]);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[11].w[0]), c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 10;
L_00339DEC:
    c.r[7].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]); c.r[7].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D14u | kUnwind; return; } goto L_00339D14; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00339DFC:
    set32(c.r[29], c.r[30].w[0] + 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[30]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00339E30; } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[3].w[0] + 1u);  if (t) { goto L_00339E34; } }
L_00339E30:
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00339E34:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[11].d[0] = c.r[9].d[0] + 0ull;  goto L_00339E4C; }
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[11], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00339E4C:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_00339ED0; } }
L_00339E58:
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[14].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00339EC0; } }
L_00339E70:
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = c.f[2];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[6].w[0] + c.r[25].w[0]);  if (t) { goto L_00339EA8; } }
L_00339E80:
    c.facc = fp::add(c.f[2], c.f[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[24].w[0] + c.r[15].w[0]);
    c.f[0] = ld32((c.r[15].w[0]));
    mmi::mult(c, 0, c.r[16].w[0], c.r[12].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[15], c.r[10].w[0] + c.r[15].w[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 10;
L_00339EA8:
    c.r[15].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { mmi::mult(c, 1, c.r[16].w[0], c.r[11].w[0]); c.r[15].d[0] = c.lo.d[1];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339E80u | kUnwind; return; } goto L_00339E80; }
    set32(c.r[15], c.r[3].w[0] + c.r[25].w[0]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[15].w[0]), c.f[0]);
    c.budget -= 3;
L_00339EC0:
    c.r[15].d[0] = c.r[13].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[25], c.r[13].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339E70u | kUnwind; return; } goto L_00339E70; }
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_00339ED0:
    c.r[3].d[0] = c.r[14].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[14].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339E58u | kUnwind; return; } goto L_00339E58; }
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339EF0:
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[10].d[0] = c.r[8].d[0] + 0ull;  goto L_00339F08; }
    set32(c.r[3], c.r[8].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[10], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00339F08:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[9].d[0] + 0ull;  goto L_00339F20; }
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00339F20:
    set32(c.r[12], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    c.f[2] = 0u;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[3].w[0] << 2);  if (t) { goto L_00339F98; } }
L_00339F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_00339F80; } }
L_00339F40:
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[14].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[2];  if (t) { goto L_00339F6C; } }
L_00339F54:
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 6;
L_00339F6C:
    c.budget -= 2;
    if (c.r[14].d[0] != 0ull) { c.facc = fp::add(c.f[2], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339F54u | kUnwind; return; } goto L_00339F54; }
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
L_00339F80:
    c.r[3].d[0] = c.r[15].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[15].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339F40u | kUnwind; return; } goto L_00339F40; }
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
L_00339F98:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339F38u | kUnwind; return; } goto L_00339F38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339FC8; } }
L_00339FB8:
    st32((c.r[4].w[0]), c.f[12]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 4;
L_00339FC8:
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339FB8u | kUnwind; return; } goto L_00339FB8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339FF8; } }
L_00339FE8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 4;
L_00339FF8:
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339FE8u | kUnwind; return; } goto L_00339FE8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0033A040; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A038; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A030u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A030u) [[unlikely]] return; }
L_0033A030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0033A044; } }
L_0033A038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A040u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0033A040u) [[unlikely]] return; }
L_0033A040:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0033A044:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27340u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_0033A074; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A06Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A06Cu) [[unlikely]] return; }
L_0033A06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0033A080; } }
L_0033A074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A07Cu);  if (depth < kMaxDepth) unit_0000(c, 24u, depth + 1u); else { c.pc = 0x001002C0u; return; } if (c.pc != 0x0033A07Cu) [[unlikely]] return; }
L_0033A07C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0033A080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27344u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A0B4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033A0ACu) [[unlikely]] return; }
L_0033A0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0033A0C0; } }
L_0033A0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0BCu);  if (depth < kMaxDepth) unit_0000(c, 26u, depth + 1u); else { c.pc = 0x001002E0u; return; } if (c.pc != 0x0033A0BCu) [[unlikely]] return; }
L_0033A0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0033A0C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 27336u), c.r[4].w[0]);  c.pc = t; return; }
L_0033A0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 27340u), c.r[4].w[0]);  c.pc = t; return; }
L_0033A0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 27344u), c.r[4].w[0]);  c.pc = t; return; }
L_0033A100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C6E0000u);
    c.r[6].d[0] = ld64((c.r[28].w[0] - 27328u));
    c.r[3].d[0] = c.r[2].d[0] | 62303ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[6].d[0] << 6;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[1].d[0] = c.r[5].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[6].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 2;
    c.r[6].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 2;
    c.r[4].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[28].w[0] - 27328u), c.r[4].d[0]);  if (t) { goto L_0033A19C; } }
    c.r[2].d[0] = c.r[4].d[0] >> 16;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];  if (t) { goto L_0033A19C; } }
    c.r[2].d[0] = c.r[4].d[0] >> 8;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];  if (t) { goto L_0033A19C; } }
    c.r[2].d[0] = c.r[4].d[0] >> 4;
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.budget -= 2;
L_0033A19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A1A4u);  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x0033A1A4u) [[unlikely]] return; }
L_0033A1A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A1C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_0033A1D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A250; } }
L_0033A1D4:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_0033A248; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0033A220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A250; } }
L_0033A220:
    set32(c.r[2], 0u + 8u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
L_0033A248:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0033A250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A260:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 8u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0033A2A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_0033A2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A2B0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033A2EC; } }
    set32(c.r[3], 0u + 8u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 15ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_0033A2EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16362ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033A330; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A330u); set32(c.r[5], c.r[5].w[0] - 16992u);  if (depth < kMaxDepth) unit_008E(c, 15u, depth + 1u); else { c.pc = 0x003387A0u; return; } if (c.pc != 0x0033A330u) [[unlikely]] return; }
L_0033A330:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0033A380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A344u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033A344u) [[unlikely]] return; }
L_0033A344:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033A3F0; } }
L_0033A380:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16385ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0033A3F4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0033A3C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A3A8u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033A3A8u) [[unlikely]] return; }
L_0033A3A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
L_0033A3C0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 12;
L_0033A3F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0033A3F4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 15ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033A4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_0033A478; } }
L_0033A468:
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A474u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A474u) [[unlikely]] return; }
L_0033A474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033A478:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A468u | kUnwind; return; } goto L_0033A468; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0033A4A4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A4A0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A4A0u) [[unlikely]] return; }
L_0033A4A0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0033A4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033A4C0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0033A4E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.f[12]);  c.pc = t; return; }
L_0033A4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.f[12]);  c.pc = t; return; }
L_0033A500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_0033A510:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 18256u);  [[clang::musttail]] return unit_008F(c, 67u, depth); }
L_0033A520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[12]);  c.pc = t; return; }
L_0033A530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.f[12]);  c.pc = t; return; }
L_0033A540:
    st32((c.r[4].w[0] + 16u), c.f[12]);
    st32((c.r[4].w[0] + 20u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[14]);  c.pc = t; return; }
L_0033A550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_0033A57C; } }
L_0033A56C:
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A578u); set32(c.r[5], 0u + 336u);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A578u) [[unlikely]] return; }
L_0033A578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033A57C:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A56Cu | kUnwind; return; } goto L_0033A56C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0033A5D8; } }
L_0033A590:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0033A5C8; } }
    st32((c.r[4].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[5], c.r[5].w[0] - 16960u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 6u, depth + 1u); else { c.pc = 0x00338650u; return; } if (c.pc != 0x0033A5C0u) [[unlikely]] return; }
L_0033A5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033A5D8; } }
L_0033A5C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5D4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A5D4u) [[unlikely]] return; }
L_0033A5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033A5D8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A590u | kUnwind; return; } goto L_0033A590; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5ECu); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A5ECu) [[unlikely]] return; }
L_0033A5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 76u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A614u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033A614u) [[unlikely]] return; }
L_0033A614:
    st32((c.r[2].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A634u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033A634u) [[unlikely]] return; }
L_0033A634:
    c.f[2] = ld32((c.r[28].w[0] - 32020u));
    set32(c.r[4], 0u + 10u);
    c.f[1] = ld32((c.r[28].w[0] - 32372u));
    set32(c.r[3], 0u + 20u);
    c.f[0] = ld32((c.r[28].w[0] - 31868u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32432u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0033A6C4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033A6CC; } }
L_0033A6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033B530u; return; } if (c.pc != 0x0033A6CCu) [[unlikely]] return; }
L_0033A6CC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_0033A6EC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0033A6F8; } }
L_0033A6EC:
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
L_0033A6F8:
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 44u), c.r[16].w[0]);  if (t) { goto L_0033A718; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[18].w[0] + 40u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0033A71C; } }
L_0033A718:
    st32((c.r[18].w[0] + 48u), 0u);
    c.budget -= 1;
L_0033A71C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 36u), 0u);  goto L_0033A734; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[18].w[0] + 28u);
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0033A734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033A750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7B0u); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_008E(c, 117u, depth + 1u); else { c.pc = 0x0033A260u; return; } if (c.pc != 0x0033A7B0u) [[unlikely]] return; }
L_0033A7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033A7D4; } }
L_0033A7B8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7D0u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 116u, depth + 1u); else { c.pc = 0x0033A1C0u; return; } if (c.pc != 0x0033A7D0u) [[unlikely]] return; }
L_0033A7D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033A7D4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A7B8u | kUnwind; return; } goto L_0033A7B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[4].w[0] - 1u);  if (t) { goto L_0033A84C; } }
L_0033A7EC:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0033A84C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A808u);  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033B530u; return; } if (c.pc != 0x0033A808u) [[unlikely]] return; }
L_0033A808:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0033A824; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
L_0033A824:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 10;
L_0033A84C:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A7ECu | kUnwind; return; } goto L_0033A7EC; }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A860u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_008E(c, 118u, depth + 1u); else { c.pc = 0x0033A2B0u; return; } if (c.pc != 0x0033A860u) [[unlikely]] return; }
L_0033A860:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033A890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 147u, depth + 1u); else { c.pc = 0x0033A750u; return; } if (c.pc != 0x0033A8A4u) [[unlikely]] return; }
L_0033A8A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0033A8C8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008E(c, 123u, depth + 1u); else { c.pc = 0x0033A440u; return; } if (c.pc != 0x0033A8B8u) [[unlikely]] return; }
L_0033A8B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8C4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033A8C4u) [[unlikely]] return; }
L_0033A8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033A8C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033A8F4u) [[unlikely]] return; }
L_0033A8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033A904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A904u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 127u, depth + 1u); else { c.pc = 0x0033A4C0u; return; } if (c.pc != 0x0033A904u) [[unlikely]] return; }
L_0033A904:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A93Cu); set32(c.r[6], c.r[6].w[0] - 3920u);  if (depth < kMaxDepth) unit_008E(c, 165u, depth + 1u); else { c.pc = 0x0033A9C0u; return; } if (c.pc != 0x0033A93Cu) [[unlikely]] return; }
L_0033A93C:
    set32(c.r[6], c.r[2].w[0] + 84u);
    set32(c.r[5], 0u + 6u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0033A948:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A948u | kUnwind; return; } goto L_0033A948; } }
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] + 132u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
L_0033A974:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A974u | kUnwind; return; } goto L_0033A974; } }
    c.f[3] = ld32((c.r[16].w[0] + 100u));
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[2].w[0] + 184u), c.f[3]);
    st32((c.r[2].w[0] + 188u), c.f[2]);
    st32((c.r[2].w[0] + 192u), c.f[1]);
    st32((c.r[2].w[0] + 196u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A9C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0033AA10; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9FCu); set32(c.r[4], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 119u, depth + 1u); else { c.pc = 0x0033A300u; return; } if (c.pc != 0x0033A9FCu) [[unlikely]] return; }
L_0033A9FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0033AA1C; } }
L_0033AA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA18u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033AA18u) [[unlikely]] return; }
L_0033AA18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033AA1C:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    set32(c.r[4], c.r[18].w[0] + 56u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[17], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[16], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA64u); st32((c.r[18].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033AA64u) [[unlikely]] return; }
L_0033AA64:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[21].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 4u), c.r[18].w[0]);  goto L_0033AA88; }
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 2;
L_0033AA88:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[19].w[0]);  if (t) { goto L_0033AAA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_0033AAA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 52u), 0u);  goto L_0033AAC0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AABCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033AABCu) [[unlikely]] return; }
L_0033AABC:
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 1;
L_0033AAC0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0033AAF0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  goto L_0033AB0C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0033AB14; } }
L_0033AB0C:
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_0033AB14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AB20:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0033AB40:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0033AB50:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 324u)));
    st32((c.r[4].w[0] + 332u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 328u), c.f[0]);  c.pc = t; return; }
L_0033AB80:
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[2] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[14]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.f[1] = ld32((c.r[4].w[0] + 184u));
    c.f[2] = ld32((c.r[4].w[0] + 192u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[14]));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.f[2] = ld32((c.r[4].w[0] + 208u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[14]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0033ABE0:
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.f[2] = ld32((c.r[4].w[0] + 152u));
    c.f[3] = fp::sub(c.f[14], c.f[0]);
    c.f[4] = fp::sub(c.f[13], c.f[1]);
    c.f[5] = fp::sub(c.f[12], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[2] = ld32((c.r[4].w[0] + 200u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[2] = ld32((c.r[4].w[0] + 204u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.f[1] = ld32((c.r[4].w[0] + 176u));
    c.f[2] = ld32((c.r[4].w[0] + 208u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0033AC50:
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[4].w[0] + 184u));
    c.f[4] = ld32((c.r[4].w[0] + 192u));
    c.f[3] = ld32((c.r[4].w[0] + 208u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[2] = ld32((c.r[4].w[0] + 200u));
    c.f[1] = ld32((c.r[4].w[0] + 204u));
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[14]));
    c.facc = fp::mul(c.f[1], c.f[13]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 236u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 252u));
    c.f[2] = ld32((c.r[4].w[0] + 256u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 256u));
    c.f[2] = ld32((c.r[4].w[0] + 248u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 248u));
    c.f[2] = ld32((c.r[4].w[0] + 252u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0033AD10:
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.f[2] = ld32((c.r[4].w[0] + 184u));
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.f[4] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[14]));
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[1], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    c.f[0] = fp::add(c.f[5], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0033AD80:
    st32((c.r[4].w[0] + 280u), c.f[12]);
    st32((c.r[4].w[0] + 284u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[14]);  c.pc = t; return; }
L_0033AD90:
    st32((c.r[4].w[0] + 264u), c.f[12]);
    st32((c.r[4].w[0] + 268u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 272u), c.f[14]);  c.pc = t; return; }
L_0033ADA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 280u);  c.pc = t; return; }
L_0033ADB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 264u);  c.pc = t; return; }
L_0033ADC0:
    c.f[11] = ld32((c.r[4].w[0] + 172u));
    c.f[10] = ld32((c.r[4].w[0] + 168u));
    c.f[5] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[11], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[12]));
    c.f[8] = ld32((c.r[4].w[0] + 188u));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[5], c.f[14]));
    c.f[4] = ld32((c.r[4].w[0] + 184u));
    c.facc = fp::mul(c.f[8], c.f[13]);
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[12]));
    c.f[2] = ld32((c.r[4].w[0] + 204u));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.facc = fp::mul(c.f[2], c.f[13]);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[14]));
    c.facc = fp::mul(c.f[11], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[15]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[17]));
    c.facc = fp::mul(c.f[8], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[15]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[17]));
    c.facc = fp::mul(c.f[2], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[15]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[17]));
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.facc = fp::mul(c.f[4], c.f[6]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[0] = fp::add(c.f[0], c.f[9]);
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    c.facc = fp::mul(c.f[1], c.f[9]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[0] = fp::add(c.f[0], c.f[7]);
    st32((c.r[4].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    c.facc = fp::mul(c.f[5], c.f[7]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[9]));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[4].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[0]);  c.pc = t; return; }
L_0033AE90:
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[16]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[15]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[17]));
    c.facc = fp::mul(c.f[0], c.f[16]);
    c.f[1] = ld32((c.r[4].w[0] + 184u));
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.f[4] = ld32((c.r[4].w[0] + 192u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[15]));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    c.f[3] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = ld32((c.r[4].w[0] + 200u));
    c.f[1] = ld32((c.r[4].w[0] + 204u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[17]));
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    c.facc = fp::mul(c.f[1], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[15]));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[17]));
    c.facc = fp::mul(c.f[4], c.f[14]);
    c.f[0] = fp::add(c.f[0], c.f[14]);
    st32((c.r[4].w[0] + 272u), c.f[0]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[13]));
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.facc = fp::mul(c.f[1], c.f[12]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[14]));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    c.facc = fp::mul(c.f[5], c.f[13]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[12]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[0]);  c.pc = t; return; }
L_0033AF40:
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.f[2] = ld32((c.r[4].w[0] + 184u));
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.facc = fp::mul(c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.f[4] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[14]));
    c.f[3] = ld32((c.r[4].w[0] + 176u));
    c.facc = fp::mul(c.f[1], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[0]);  c.pc = t; return; }
L_0033AFB0:
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[14]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[0]);  c.pc = t; return; }
L_0033AFE0:
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 268u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    c.f[0] = fp::add(c.f[0], c.f[14]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 272u), c.f[0]);  c.pc = t; return; }
L_0033B010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 68u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B02Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0033B02Cu) [[unlikely]] return; }
L_0033B02C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[5], c.r[16].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B03Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_008E(c, 72u, depth + 1u); else { c.pc = 0x00339960u; return; } if (c.pc != 0x0033B03Cu) [[unlikely]] return; }
L_0033B03C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 32u));  goto L_0033B050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B04Cu); set32(c.r[4], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_008F(c, 66u, depth + 1u); else { c.pc = 0x0033D6F0u; return; } if (c.pc != 0x0033B04Cu) [[unlikely]] return; }
L_0033B04C:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_0033B050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 248u);  c.pc = t; return; }
L_0033B090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 232u);  c.pc = t; return; }
L_0033B0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 216u);  c.pc = t; return; }
L_0033B0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 168u);  c.pc = t; return; }
L_0033B0C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 152u);  c.pc = t; return; }
L_0033B0D0:
    st32((c.r[4].w[0] + 248u), c.f[12]);
    st32((c.r[4].w[0] + 252u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), c.f[14]);  c.pc = t; return; }
L_0033B0E0:
    st32((c.r[4].w[0] + 232u), c.f[12]);
    st32((c.r[4].w[0] + 236u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 240u), c.f[14]);  c.pc = t; return; }
L_0033B0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 228u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B128u); set32(c.r[4], c.r[16].w[0] + 216u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033B6A0u; return; } if (c.pc != 0x0033B128u) [[unlikely]] return; }
L_0033B128:
    set32(c.r[4], c.r[16].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B134u); set32(c.r[5], c.r[16].w[0] + 216u);  if (depth < kMaxDepth) unit_008F(c, 61u, depth + 1u); else { c.pc = 0x0033D410u; return; } if (c.pc != 0x0033B134u) [[unlikely]] return; }
L_0033B134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_0033B150; } }
L_0033B13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 137u, depth + 1u); else { c.pc = 0x0032AF50u; return; } if (c.pc != 0x0033B144u) [[unlikely]] return; }
L_0033B144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B14Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 222u, depth + 1u); else { c.pc = 0x003279C0u; return; } if (c.pc != 0x0033B14Cu) [[unlikely]] return; }
L_0033B14C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033B150:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B13Cu | kUnwind; return; } goto L_0033B13C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B188u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 60u, depth + 1u); else { c.pc = 0x0033D1E0u; return; } if (c.pc != 0x0033B188u) [[unlikely]] return; }
L_0033B188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B190u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033B6A0u; return; } if (c.pc != 0x0033B190u) [[unlikely]] return; }
L_0033B190:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[16].w[0] + 168u);
    set32(c.r[5], c.r[16].w[0] + 216u);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1BCu); st32((c.r[16].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_008F(c, 61u, depth + 1u); else { c.pc = 0x0033D410u; return; } if (c.pc != 0x0033B1BCu) [[unlikely]] return; }
L_0033B1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_0033B1D8; } }
L_0033B1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 137u, depth + 1u); else { c.pc = 0x0032AF50u; return; } if (c.pc != 0x0033B1CCu) [[unlikely]] return; }
L_0033B1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 222u, depth + 1u); else { c.pc = 0x003279C0u; return; } if (c.pc != 0x0033B1D4u) [[unlikely]] return; }
L_0033B1D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033B1D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B1C4u | kUnwind; return; } goto L_0033B1C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033B1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 152u), c.f[12]);
    st32((c.r[4].w[0] + 156u), c.f[13]);
    st32((c.r[4].w[0] + 160u), c.f[14]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_0033B224; } }
L_0033B210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B218u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 137u, depth + 1u); else { c.pc = 0x0032AF50u; return; } if (c.pc != 0x0033B218u) [[unlikely]] return; }
L_0033B218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 222u, depth + 1u); else { c.pc = 0x003279C0u; return; } if (c.pc != 0x0033B220u) [[unlikely]] return; }
L_0033B220:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033B224:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B210u | kUnwind; return; } goto L_0033B210; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_0033B250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_0033B260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B29C; } }
L_0033B280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 222u, depth + 1u); else { c.pc = 0x003279C0u; return; } if (c.pc != 0x0033B288u) [[unlikely]] return; }
L_0033B288:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x0033B298u) [[unlikely]] return; }
L_0033B298:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0033B29C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B280u | kUnwind; return; } goto L_0033B280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0033B2E0; } }
L_0033B2AC:
    set32(c.r[2], c.r[4].w[0] + 28u);
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2DCu); set32(c.r[4], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033B530u; return; } if (c.pc != 0x0033B2DCu) [[unlikely]] return; }
L_0033B2DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033B2E0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B2ACu | kUnwind; return; } goto L_0033B2AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 4u);  if (t) { goto L_0033B2FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0033B2FC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], 0u + 336u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B32Cu); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 102u, depth + 1u); else { c.pc = 0x0033A010u; return; } if (c.pc != 0x0033B32Cu) [[unlikely]] return; }
L_0033B32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033B350:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 336u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B374u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008E(c, 108u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033B374u) [[unlikely]] return; }
L_0033B374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033B384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B384u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 50u, depth + 1u); else { c.pc = 0x003396A0u; return; } if (c.pc != 0x0033B384u) [[unlikely]] return; }
L_0033B384:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.f[13] = 0u;
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    st32((c.r[18].w[0] + 16u), 0u);
    c.f[14] = c.f[13];
    st32((c.r[18].w[0] + 20u), 0u);
    c.f[15] = c.f[13];
    st32((c.r[18].w[0] + 24u), 0u);
    c.f[16] = c.f[12];
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[17] = c.f[12];
    st32((c.r[29].w[0]), 0u);
    c.f[18] = c.f[12];
    c.f[19] = c.f[13];
    set32(c.r[17], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[18].w[0] + 8u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3E0u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_008E(c, 46u, depth + 1u); else { c.pc = 0x003395C0u; return; } if (c.pc != 0x0033B3E0u) [[unlikely]] return; }
L_0033B3E0:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3ECu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B3ECu) [[unlikely]] return; }
L_0033B3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] + 152u);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B40Cu); st32((c.r[18].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B40Cu) [[unlikely]] return; }
L_0033B40C:
    set32(c.r[4], c.r[18].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B418u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B418u) [[unlikely]] return; }
L_0033B418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B428u); st32((c.r[18].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 66u, depth + 1u); else { c.pc = 0x0033D6F0u; return; } if (c.pc != 0x0033B428u) [[unlikely]] return; }
L_0033B428:
    set32(c.r[4], c.r[18].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B434u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B434u) [[unlikely]] return; }
L_0033B434:
    set32(c.r[4], c.r[18].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B440u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B440u) [[unlikely]] return; }
L_0033B440:
    set32(c.r[4], c.r[18].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B44Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B44Cu) [[unlikely]] return; }
L_0033B44C:
    set32(c.r[4], c.r[18].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B458u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B458u) [[unlikely]] return; }
L_0033B458:
    set32(c.r[4], c.r[18].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B464u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033B464u) [[unlikely]] return; }
L_0033B464:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_0033B484; }
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 2;
L_0033B484:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[18].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[18].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[18].w[0] + 320u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[18].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_0033B4F8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u - 17u);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[18].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 320u), c.f[0]);  if (t) { goto L_0033B500; } }
L_0033B4F8:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0033B500:
    set32(c.r[3], ld32((c.r[18].w[0] + 324u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 332u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 320u));
    st32((c.r[18].w[0] + 328u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033B530:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[8].w[0] << 1);
    c.budget -= 2;
L_0033B538:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0033B590; }
    set32(c.r[7], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0033B584; } }
L_0033B55C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[6].d[0] = c.r[7].d[0] + 0ull;  goto L_0033B580; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 8u)));  goto L_0033B578; }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0033B58C; } }
L_0033B578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0033B58C; } }
L_0033B580:
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_0033B584:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B55Cu | kUnwind; return; } goto L_0033B55C; }
L_0033B58C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0033B590:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B538u | kUnwind; return; } goto L_0033B538; }
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_0033B5B0:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[4].w[0] + 4u));  goto L_0033B634; }
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    st32((c.r[5].w[0]), 0u);
    fpu_rsqrt(c, 2u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_0033B698; } }
L_0033B634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = c.r[3].w[0];
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 3u, c.f[1], c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 25;
L_0033B698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B6A0:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0033B718; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0033B728; } }
L_0033B718:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_0033B728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[13] = ld32((c.r[4].w[0]));
    c.f[22] = ld32((c.r[4].w[0] + 4u));
    c.f[20] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = c.f[13] & fp::kAbs;
    c.f[1] = c.f[22] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[20] & fp::kAbs;  if (t) { goto L_0033B7C4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033B7D0; } }
    fpu_div(c, 20u, c.f[20], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 2u, c.f[13], c.f[1]);
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_rsqrt(c, 21u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[21]);
    c.f[13] = c.f[22];
    c.f[12] = c.f[21];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7B4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 381u, depth + 1u); else { c.pc = 0x003AF1B0u; return; } if (c.pc != 0x0033B7B4u) [[unlikely]] return; }
L_0033B7B4:
    c.f[1] = fp::mul(c.f[20], c.f[21]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_0033B890; } }
L_0033B7C4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033B818; } }
L_0033B7D0:
    fpu_div(c, 2u, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 3u, c.f[13], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_rsqrt(c, 12u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[12]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[12]);
    c.f[13] = c.f[20];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B810u); st32((c.r[16].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 381u, depth + 1u); else { c.pc = 0x003AF1B0u; return; } if (c.pc != 0x0033B810u) [[unlikely]] return; }
L_0033B810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0033B890; } }
L_0033B818:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033B840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[2]);  if (t) { goto L_0033B890; } }
L_0033B840:
    fpu_div(c, 20u, c.f[20], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    fpu_div(c, 22u, c.f[22], c.f[3]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_rsqrt(c, 21u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B87Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 381u, depth + 1u); else { c.pc = 0x003AF1B0u; return; } if (c.pc != 0x0033B87Cu) [[unlikely]] return; }
L_0033B87C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[22], c.f[21]);
    c.f[0] = fp::mul(c.f[20], c.f[21]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 5;
L_0033B890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033B8B0:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 52u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st32((c.r[30].w[0] + 476u), c.r[8].w[0]);
    c.f[21] = c.f[12];
    fpu_div(c, 20u, c.f[0], c.f[21]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B92C; } }
L_0033B91C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_0033B92C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B91Cu | kUnwind; return; } goto L_0033B91C; }
    set32(c.r[2], ld32((c.r[30].w[0] + 476u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B968u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0033B968u) [[unlikely]] return; }
L_0033B968:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 15ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_0033BC0C; } }
L_0033B9AC:
    set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[2].w[0] + 168u);
    set32(c.r[18], c.r[2].w[0] + 52u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033B9C8u) [[unlikely]] return; }
L_0033B9C8:
    st32((c.r[30].w[0] + 528u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9D8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033B9D8u) [[unlikely]] return; }
L_0033B9D8:
    st32((c.r[30].w[0] + 532u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9E8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033B9E8u) [[unlikely]] return; }
L_0033B9E8:
    st32((c.r[30].w[0] + 536u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033B9F8u) [[unlikely]] return; }
L_0033B9F8:
    st32((c.r[30].w[0] + 544u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA08u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BA08u) [[unlikely]] return; }
L_0033BA08:
    st32((c.r[30].w[0] + 548u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA18u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BA18u) [[unlikely]] return; }
L_0033BA18:
    st32((c.r[30].w[0] + 552u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BA28u) [[unlikely]] return; }
L_0033BA28:
    st32((c.r[30].w[0] + 560u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA38u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BA38u) [[unlikely]] return; }
L_0033BA38:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA48u); st32((c.r[30].w[0] + 564u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BA48u) [[unlikely]] return; }
L_0033BA48:
    st32((c.r[30].w[0] + 568u), c.f[0]);
    set32(c.r[5], c.r[30].w[0] + 528u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[2].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA60u) [[unlikely]] return; }
L_0033BA60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA6Cu); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA6Cu) [[unlikely]] return; }
L_0033BA6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA78u); set32(c.r[5], c.r[30].w[0] + 536u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA78u) [[unlikely]] return; }
L_0033BA78:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA84u); set32(c.r[5], c.r[30].w[0] + 528u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA84u) [[unlikely]] return; }
L_0033BA84:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA90u); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA90u) [[unlikely]] return; }
L_0033BA90:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA9Cu); set32(c.r[5], c.r[30].w[0] + 536u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BA9Cu) [[unlikely]] return; }
L_0033BA9C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAA8u); set32(c.r[5], c.r[30].w[0] + 528u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BAA8u) [[unlikely]] return; }
L_0033BAA8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAB4u); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BAB4u) [[unlikely]] return; }
L_0033BAB4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAC0u); set32(c.r[5], c.r[30].w[0] + 536u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BAC0u) [[unlikely]] return; }
L_0033BAC0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[2].w[0] + 168u);
    set32(c.r[18], c.r[2].w[0] + 100u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BAD8u) [[unlikely]] return; }
L_0033BAD8:
    st32((c.r[30].w[0] + 528u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAE8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BAE8u) [[unlikely]] return; }
L_0033BAE8:
    st32((c.r[30].w[0] + 532u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAF8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BAF8u) [[unlikely]] return; }
L_0033BAF8:
    st32((c.r[30].w[0] + 536u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB08u) [[unlikely]] return; }
L_0033BB08:
    st32((c.r[30].w[0] + 544u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB18u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB18u) [[unlikely]] return; }
L_0033BB18:
    st32((c.r[30].w[0] + 548u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB28u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB28u) [[unlikely]] return; }
L_0033BB28:
    st32((c.r[30].w[0] + 552u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB38u) [[unlikely]] return; }
L_0033BB38:
    st32((c.r[30].w[0] + 560u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB48u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB48u) [[unlikely]] return; }
L_0033BB48:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB58u); st32((c.r[30].w[0] + 564u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x0033BB58u) [[unlikely]] return; }
L_0033BB58:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[5], c.r[30].w[0] + 528u);
    st32((c.r[30].w[0] + 568u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[30].w[0] + 448u)));
    set32(c.r[18], c.r[4].w[0] + 168u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BB84u) [[unlikely]] return; }
L_0033BB84:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB94u); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BB94u) [[unlikely]] return; }
L_0033BB94:
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBA4u); set32(c.r[5], c.r[30].w[0] + 536u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBA4u) [[unlikely]] return; }
L_0033BBA4:
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBB4u); set32(c.r[5], c.r[30].w[0] + 528u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBB4u) [[unlikely]] return; }
L_0033BBB4:
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBC4u); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBC4u) [[unlikely]] return; }
L_0033BBC4:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBD4u); set32(c.r[5], c.r[30].w[0] + 536u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBD4u) [[unlikely]] return; }
L_0033BBD4:
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBE4u); set32(c.r[5], c.r[30].w[0] + 528u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBE4u) [[unlikely]] return; }
L_0033BBE4:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBF4u); set32(c.r[5], c.r[30].w[0] + 532u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BBF4u) [[unlikely]] return; }
L_0033BBF4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[30].w[0] + 536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BC04u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x0033BC04u) [[unlikely]] return; }
L_0033BC04:
    st32((c.r[17].w[0] + 40u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0033BC0C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B9ACu | kUnwind; return; } goto L_0033B9AC; }
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0033BC90; } }
L_0033BC24:
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0033BC90; }
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.f[2] = ld32((c.r[23].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[4].w[0] + 264u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[23].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 268u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[3].w[0] + 268u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[23].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 272u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[3].w[0] + 272u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 21;
L_0033BC90:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BC24u | kUnwind; return; } goto L_0033BC24; }
    set32(c.r[3], ld32((c.r[30].w[0] + 476u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[3], 0u - 16u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { goto L_0033BD18; } }
L_0033BCCC:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    st128((c.r[30].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BCF0u) [[unlikely]] return; }
L_0033BCF0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0033BD18; }
    ld128((c.r[30].w[0] + 320u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_0033BD18:
    set32(c.r[3], ld32((c.r[30].w[0] + 476u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BCCCu | kUnwind; return; } goto L_0033BCCC; }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[30].w[0] + 304u) & ~15u, c.r[3]);  if (t) { goto L_0033BD78; } }
L_0033BD58:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_0033BD78:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[30].w[0] + 304u) & ~15u, c.r[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BD58u | kUnwind; return; } goto L_0033BD58; }
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[21], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[4].d[0] | 15ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[30].w[0] + 416u), c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 25;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[30].w[0] + 432u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_008F(c, 20u, depth); } }
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + 15u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    st128((c.r[30].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[4].w[0] + 15u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    ld128((c.r[30].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[6].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[29], c.r[29].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[29], c.r[29].w[0] - c.r[6].w[0]);
    st128((c.r[30].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[30].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[29], c.r[29].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 15ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[29], c.r[29].w[0] - c.r[4].w[0]);
    st32((c.r[30].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    ld128((c.r[30].w[0] + 272u) & ~15u, c.r[4]);
    st128((c.r[30].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] | 15ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE90u); st32((c.r[30].w[0] + 368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033BE90u) [[unlikely]] return; }
L_0033BE90:
    set32(c.r[4], ld32((c.r[30].w[0] + 400u)));
    c.f[12] = ld32((c.r[23].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 98u, depth + 1u); else { c.pc = 0x00339FB0u; return; } if (c.pc != 0x0033BEA0u) [[unlikely]] return; }
L_0033BEA0:
    set32(c.r[4], ld32((c.r[30].w[0] + 384u)));
    c.f[12] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 98u, depth + 1u); else { c.pc = 0x00339FB0u; return; } if (c.pc != 0x0033BEB0u) [[unlikely]] return; }
L_0033BEB0:
    set32(c.r[4], ld32((c.r[30].w[0] + 368u)));
    c.f[12] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 98u, depth + 1u); else { c.pc = 0x00339FB0u; return; } if (c.pc != 0x0033BEC0u) [[unlikely]] return; }
L_0033BEC0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0033BEDC; } }
L_0033BECC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0033BEDC:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[30].w[0] + 256u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BECCu | kUnwind; return; } goto L_0033BECC; }
    set32(c.r[4], ld32((c.r[30].w[0] + 432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEF4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 100u, depth + 1u); else { c.pc = 0x00339FE0u; return; } if (c.pc != 0x0033BEF4u) [[unlikely]] return; }
L_0033BEF4:
    set32(c.r[2], 0u + 12u);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 480u), c.f[20]);
    st32((c.r[30].w[0] + 504u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[23].w[0] + 32u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 484u), c.f[0]);  if (t) { goto L_0033BFF8; } }
L_0033BF10:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[30].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[30].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[30].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 432u)));
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 400u)));
    set32(c.r[4], c.r[6].w[0] + 36u);
    st32((c.r[30].w[0] + 488u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 500u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[30].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + 12u);
    st32((c.r[30].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + 24u);
    st32((c.r[30].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 384u)));
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 368u)));
    st32((c.r[30].w[0] + 516u), c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    ld128((c.r[30].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[30].w[0] + 520u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[30].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 38;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFA8u); set32(c.r[5], c.r[30].w[0] + 480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BFA8u) [[unlikely]] return; }
L_0033BFA8:
    set32(c.r[2], c.r[21].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0033BFE4; } }
L_0033BFB8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[30].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[2].sd[0] < 0) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0033BFE4; }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0033BFE4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 336u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BFB8u | kUnwind; return; } goto L_0033BFB8; }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0033BFF8:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[30].w[0] + 304u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BF10u | kUnwind; return; } goto L_0033BF10; }
    [[clang::musttail]] return unit_008F(c, 2u, depth);
}

}
