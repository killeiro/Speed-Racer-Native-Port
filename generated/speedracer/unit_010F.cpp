#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_010F[4096] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92,
    0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0,
    186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0,
    218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270,
};

void unit_010F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0053C000;
    case 2u: goto L_0053C014;
    case 3u: goto L_0053C018;
    case 4u: goto L_0053C044;
    case 5u: goto L_0053C054;
    case 6u: goto L_0053C070;
    case 7u: goto L_0053C088;
    case 8u: goto L_0053C090;
    case 9u: goto L_0053C098;
    case 10u: goto L_0053C0AC;
    case 11u: goto L_0053C0B4;
    case 12u: goto L_0053C0C8;
    case 13u: goto L_0053C0D0;
    case 14u: goto L_0053C0E4;
    case 15u: goto L_0053C10C;
    case 16u: goto L_0053C12C;
    case 17u: goto L_0053C13C;
    case 18u: goto L_0053C14C;
    case 19u: goto L_0053C174;
    case 20u: goto L_0053C1B4;
    case 21u: goto L_0053C1D0;
    case 22u: goto L_0053C1F0;
    case 23u: goto L_0053C214;
    case 24u: goto L_0053C25C;
    case 25u: goto L_0053C270;
    case 26u: goto L_0053C298;
    case 27u: goto L_0053C2A0;
    case 28u: goto L_0053C2A8;
    case 29u: goto L_0053C2D0;
    case 30u: goto L_0053C2D8;
    case 31u: goto L_0053C2F4;
    case 32u: goto L_0053C368;
    case 33u: goto L_0053C390;
    case 34u: goto L_0053C398;
    case 35u: goto L_0053C3A0;
    case 36u: goto L_0053C438;
    case 37u: goto L_0053C454;
    case 38u: goto L_0053C470;
    case 39u: goto L_0053C488;
    case 40u: goto L_0053C4A4;
    case 41u: goto L_0053C4C4;
    case 42u: goto L_0053C4E0;
    case 43u: goto L_0053C4FC;
    case 44u: goto L_0053C50C;
    case 45u: goto L_0053C54C;
    case 46u: goto L_0053C5C0;
    case 47u: goto L_0053C5E8;
    case 48u: goto L_0053C614;
    case 49u: goto L_0053C658;
    case 50u: goto L_0053C670;
    case 51u: goto L_0053C720;
    case 52u: goto L_0053C778;
    case 53u: goto L_0053C878;
    case 54u: goto L_0053C964;
    case 55u: goto L_0053C978;
    case 56u: goto L_0053C9D4;
    case 57u: goto L_0053C9E8;
    case 58u: goto L_0053CA74;
    case 59u: goto L_0053CA88;
    case 60u: goto L_0053CB4C;
    case 61u: goto L_0053CB60;
    case 62u: goto L_0053CBBC;
    case 63u: goto L_0053CBD0;
    case 64u: goto L_0053CC78;
    case 65u: goto L_0053CCA4;
    case 66u: goto L_0053CCC8;
    case 67u: goto L_0053CCE4;
    case 68u: goto L_0053CD1C;
    case 69u: goto L_0053CD28;
    case 70u: goto L_0053CDF4;
    case 71u: goto L_0053CE78;
    case 72u: goto L_0053CEAC;
    case 73u: goto L_0053CF20;
    case 74u: goto L_0053CF28;
    case 75u: goto L_0053CF30;
    case 76u: goto L_0053CF38;
    case 77u: goto L_0053CF40;
    case 78u: goto L_0053CF48;
    case 79u: goto L_0053CF50;
    case 80u: goto L_0053CF58;
    case 81u: goto L_0053CF60;
    case 82u: goto L_0053CF68;
    case 83u: goto L_0053CF88;
    case 84u: goto L_0053D0C4;
    case 85u: goto L_0053D144;
    case 86u: goto L_0053D14C;
    case 87u: goto L_0053D154;
    case 88u: goto L_0053D15C;
    case 89u: goto L_0053D164;
    case 90u: goto L_0053D16C;
    case 91u: goto L_0053D174;
    case 92u: goto L_0053D17C;
    case 93u: goto L_0053D184;
    case 94u: goto L_0053D18C;
    case 95u: goto L_0053D1AC;
    case 96u: goto L_0053D2E8;
    case 97u: goto L_0053D308;
    case 98u: goto L_0053D37C;
    case 99u: goto L_0053D3A4;
    case 100u: goto L_0053D3C4;
    case 101u: goto L_0053D404;
    case 102u: goto L_0053D424;
    case 103u: goto L_0053D450;
    case 104u: goto L_0053D478;
    case 105u: goto L_0053D4A8;
    case 106u: goto L_0053D554;
    case 107u: goto L_0053D564;
    case 108u: goto L_0053D5B8;
    case 109u: goto L_0053D6C0;
    case 110u: goto L_0053D6D0;
    case 111u: goto L_0053D708;
    case 112u: goto L_0053D71C;
    case 113u: goto L_0053D764;
    case 114u: goto L_0053D798;
    case 115u: goto L_0053D7AC;
    case 116u: goto L_0053D808;
    case 117u: goto L_0053D810;
    case 118u: goto L_0053D818;
    case 119u: goto L_0053D820;
    case 120u: goto L_0053D828;
    case 121u: goto L_0053D830;
    case 122u: goto L_0053D838;
    case 123u: goto L_0053D840;
    case 124u: goto L_0053D848;
    case 125u: goto L_0053D850;
    case 126u: goto L_0053D870;
    case 127u: goto L_0053D9D4;
    case 128u: goto L_0053DA64;
    case 129u: goto L_0053DA98;
    case 130u: goto L_0053DB20;
    case 131u: goto L_0053DC1C;
    case 132u: goto L_0053DD40;
    case 133u: goto L_0053DD60;
    case 134u: goto L_0053DD94;
    case 135u: goto L_0053DDA4;
    case 136u: goto L_0053DDD8;
    case 137u: goto L_0053DDF0;
    case 138u: goto L_0053DE1C;
    case 139u: goto L_0053DE54;
    case 140u: goto L_0053DE64;
    case 141u: goto L_0053DE98;
    case 142u: goto L_0053DEE8;
    case 143u: goto L_0053DF18;
    case 144u: goto L_0053DFB0;
    case 145u: goto L_0053DFD0;
    case 146u: goto L_0053E008;
    case 147u: goto L_0053E030;
    case 148u: goto L_0053E0A4;
    case 149u: goto L_0053E0CC;
    case 150u: goto L_0053E134;
    case 151u: goto L_0053E16C;
    case 152u: goto L_0053E19C;
    case 153u: goto L_0053E22C;
    case 154u: goto L_0053E234;
    case 155u: goto L_0053E23C;
    case 156u: goto L_0053E244;
    case 157u: goto L_0053E24C;
    case 158u: goto L_0053E254;
    case 159u: goto L_0053E25C;
    case 160u: goto L_0053E264;
    case 161u: goto L_0053E26C;
    case 162u: goto L_0053E274;
    case 163u: goto L_0053E294;
    case 164u: goto L_0053E480;
    case 165u: goto L_0053E4E8;
    case 166u: goto L_0053E51C;
    case 167u: goto L_0053E540;
    case 168u: goto L_0053E574;
    case 169u: goto L_0053E5B4;
    case 170u: goto L_0053E5E8;
    case 171u: goto L_0053E60C;
    case 172u: goto L_0053E640;
    case 173u: goto L_0053E714;
    case 174u: goto L_0053E71C;
    case 175u: goto L_0053E724;
    case 176u: goto L_0053E72C;
    case 177u: goto L_0053E734;
    case 178u: goto L_0053E73C;
    case 179u: goto L_0053E744;
    case 180u: goto L_0053E74C;
    case 181u: goto L_0053E754;
    case 182u: goto L_0053E75C;
    case 183u: goto L_0053E77C;
    case 184u: goto L_0053E870;
    case 185u: goto L_0053E878;
    case 186u: goto L_0053E880;
    case 187u: goto L_0053E888;
    case 188u: goto L_0053E890;
    case 189u: goto L_0053E898;
    case 190u: goto L_0053E8A0;
    case 191u: goto L_0053E8A8;
    case 192u: goto L_0053E8B0;
    case 193u: goto L_0053E8B8;
    case 194u: goto L_0053EBA8;
    case 195u: goto L_0053EBDC;
    case 196u: goto L_0053EC44;
    case 197u: goto L_0053EC54;
    case 198u: goto L_0053ECA8;
    case 199u: goto L_0053ED88;
    case 200u: goto L_0053EDA8;
    case 201u: goto L_0053EE18;
    case 202u: goto L_0053EF4C;
    case 203u: goto L_0053EF84;
    case 204u: goto L_0053EFAC;
    case 205u: goto L_0053EFD0;
    case 206u: goto L_0053F068;
    case 207u: goto L_0053F0C4;
    case 208u: goto L_0053F148;
    case 209u: goto L_0053F178;
    case 210u: goto L_0053F198;
    case 211u: goto L_0053F1EC;
    case 212u: goto L_0053F214;
    case 213u: goto L_0053F258;
    case 214u: goto L_0053F270;
    case 215u: goto L_0053F2E8;
    case 216u: goto L_0053F2F0;
    case 217u: goto L_0053F2F8;
    case 218u: goto L_0053F300;
    case 219u: goto L_0053F308;
    case 220u: goto L_0053F310;
    case 221u: goto L_0053F318;
    case 222u: goto L_0053F320;
    case 223u: goto L_0053F328;
    case 224u: goto L_0053F330;
    case 225u: goto L_0053F338;
    case 226u: goto L_0053F4C8;
    case 227u: goto L_0053F4FC;
    case 228u: goto L_0053F524;
    case 229u: goto L_0053F538;
    case 230u: goto L_0053F560;
    case 231u: goto L_0053F5B0;
    case 232u: goto L_0053F5D8;
    case 233u: goto L_0053F5EC;
    case 234u: goto L_0053F614;
    case 235u: goto L_0053F694;
    case 236u: goto L_0053F6DC;
    case 237u: goto L_0053F6F0;
    case 238u: goto L_0053F714;
    case 239u: goto L_0053F754;
    case 240u: goto L_0053F840;
    case 241u: goto L_0053F860;
    case 242u: goto L_0053F898;
    case 243u: goto L_0053F8C0;
    case 244u: goto L_0053F950;
    case 245u: goto L_0053F968;
    case 246u: goto L_0053F994;
    case 247u: goto L_0053F9B8;
    case 248u: goto L_0053F9D0;
    case 249u: goto L_0053F9FC;
    case 250u: goto L_0053FA38;
    case 251u: goto L_0053FA54;
    case 252u: goto L_0053FAA4;
    case 253u: goto L_0053FAB8;
    case 254u: goto L_0053FACC;
    case 255u: goto L_0053FB20;
    case 256u: goto L_0053FB3C;
    case 257u: goto L_0053FB80;
    case 258u: goto L_0053FC20;
    case 259u: goto L_0053FD40;
    case 260u: goto L_0053FD84;
    case 261u: goto L_0053FDC8;
    case 262u: goto L_0053FDD8;
    case 263u: goto L_0053FE28;
    case 264u: goto L_0053FE4C;
    case 265u: goto L_0053FECC;
    case 266u: goto L_0053FF00;
    case 267u: goto L_0053FF28;
    case 268u: goto L_0053FF58;
    case 269u: goto L_0053FFD4;
    case 270u: goto L_0053FFFC;
    default: bad_entry(c, 0x0053C000u); return;
    }
L_0053C000:
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 4278u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C014u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053C014u) [[unlikely]] return; }
L_0053C014:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.budget -= 1;
L_0053C018:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));  goto L_0053C104; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3648u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C044u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053C044u) [[unlikely]] return; }
L_0053C044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 1756u), c.r[2].w[0]);  goto L_0053C058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 222u, depth + 1u); else { c.pc = 0x0052F240u; return; } if (c.pc != 0x0053C054u) [[unlikely]] return; }
L_0053C054:
    st32((c.r[17].w[0] + 1756u), c.r[2].w[0]);
    c.budget -= 1;
L_0053C058:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0053C068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053C0F0; } }
L_0053C068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C070u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 210u, depth + 1u); else { c.pc = 0x0052F010u; return; } if (c.pc != 0x0053C070u) [[unlikely]] return; }
L_0053C070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));  goto L_0053C080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053C0F0; } }
L_0053C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C088u); set32(c.r[5], c.r[17].w[0] + 1760u);  if (depth < kMaxDepth) unit_010B(c, 207u, depth + 1u); else { c.pc = 0x0052EFB0u; return; } if (c.pc != 0x0053C088u) [[unlikely]] return; }
L_0053C088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C090u); set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));  if (depth < kMaxDepth) unit_0104(c, 329u, depth + 1u); else { c.pc = 0x005136F0u; return; } if (c.pc != 0x0053C090u) [[unlikely]] return; }
L_0053C090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C098u);  if (depth < kMaxDepth) unit_0109(c, 222u, depth + 1u); else { c.pc = 0x00527920u; return; } if (c.pc != 0x0053C098u) [[unlikely]] return; }
L_0053C098:
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C0ACu); set32(c.r[7], c.r[17].w[0] + 2016u);  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053C0ACu) [[unlikely]] return; }
L_0053C0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C0B4u);  if (depth < kMaxDepth) unit_0104(c, 210u, depth + 1u); else { c.pc = 0x005126B0u; return; } if (c.pc != 0x0053C0B4u) [[unlikely]] return; }
L_0053C0B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C0C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053C0C8u) [[unlikely]] return; }
L_0053C0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C0D0u);  if (depth < kMaxDepth) unit_0109(c, 242u, depth + 1u); else { c.pc = 0x00527D00u; return; } if (c.pc != 0x0053C0D0u) [[unlikely]] return; }
L_0053C0D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C0E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053C0E4u) [[unlikely]] return; }
L_0053C0E4:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0053C0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053C100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0053C1B8; } }
L_0053C100:
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.budget -= 1;
L_0053C104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C10Cu); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010B(c, 187u, depth + 1u); else { c.pc = 0x0052E850u; return; } if (c.pc != 0x0053C10Cu) [[unlikely]] return; }
L_0053C10C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_0053C11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053C1B4; } }
L_0053C11C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0053C130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C12Cu); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0104(c, 328u, depth + 1u); else { c.pc = 0x005136D0u; return; } if (c.pc != 0x0053C12Cu) [[unlikely]] return; }
L_0053C12C:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0053C130:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0053C1B0; } }
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 1;
L_0053C13C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C14Cu); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_010B(c, 181u, depth + 1u); else { c.pc = 0x0052E700u; return; } if (c.pc != 0x0053C14Cu) [[unlikely]] return; }
L_0053C14C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0053C19C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053C198; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1756u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C174u); set32(c.r[6], c.r[17].w[0] + 1232u);  if (depth < kMaxDepth) unit_010B(c, 170u, depth + 1u); else { c.pc = 0x0052E440u; return; } if (c.pc != 0x0053C174u) [[unlikely]] return; }
L_0053C174:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1232u)));  goto L_0053C184; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053C1B4; } }
L_0053C184:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1248u), c.r[16].w[0]);  if (t) { goto L_0053C1B4; } }
L_0053C198:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0053C19C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 56u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053C13Cu | kUnwind; return; } goto L_0053C13C; }
    c.budget -= 1;
L_0053C1B0:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0053C1B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0053C1B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0053C1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053C200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C1F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053C1F0u) [[unlikely]] return; }
L_0053C1F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1756u)));  goto L_0053C204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0053C264; } }
L_0053C200:
    set32(c.r[4], ld32((c.r[16].w[0] + 1756u)));
    c.budget -= 1;
L_0053C204:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0053C21C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C214u);  if (depth < kMaxDepth) unit_010B(c, 211u, depth + 1u); else { c.pc = 0x0052F020u; return; } if (c.pc != 0x0053C214u) [[unlikely]] return; }
L_0053C214:
    st32((c.r[16].w[0] + 1756u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0053C21C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 4240u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C25Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053C25Cu) [[unlikely]] return; }
L_0053C25C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0053C264:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0053C270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C298u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_010D(c, 276u, depth + 1u); else { c.pc = 0x005378C0u; return; } if (c.pc != 0x0053C298u) [[unlikely]] return; }
L_0053C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C2A0u); set32(c.r[4], c.r[16].w[0] + 336u);  if (depth < kMaxDepth) unit_0108(c, 108u, depth + 1u); else { c.pc = 0x00522080u; return; } if (c.pc != 0x0053C2A0u) [[unlikely]] return; }
L_0053C2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C2A8u); set32(c.r[4], c.r[16].w[0] + 776u);  if (depth < kMaxDepth) unit_0108(c, 108u, depth + 1u); else { c.pc = 0x00522080u; return; } if (c.pc != 0x0053C2A8u) [[unlikely]] return; }
L_0053C2A8:
    set32(c.r[3], c.r[16].w[0] + 1216u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    set32(c.r[17], c.r[16].w[0] + 1288u);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1224u), 0u);
    st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1224u), 0u);
    c.budget -= 10;
L_0053C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C2D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 19u, depth + 1u); else { c.pc = 0x0052C230u; return; } if (c.pc != 0x0053C2D8u) [[unlikely]] return; }
L_0053C2D8:
    set32(c.r[17], c.r[17].w[0] + 112u);
    set32(c.r[2], c.r[16].w[0] + 1736u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053C2D0u | kUnwind; return; } goto L_0053C2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C2F4u); set32(c.r[4], c.r[16].w[0] + 2100u);  if (depth < kMaxDepth) unit_0110(c, 156u, depth + 1u); else { c.pc = 0x005425F0u; return; } if (c.pc != 0x0053C2F4u) [[unlikely]] return; }
L_0053C2F4:
    set32(c.r[2], c.r[16].w[0] + 2196u);
    set32(c.r[6], c.r[16].w[0] + 2232u);
    st32((c.r[16].w[0] + 2196u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 2200u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2292u);
    st32((c.r[16].w[0] + 2204u), 0u);
    set32(c.r[2], c.r[16].w[0] + 2304u);
    st32((c.r[16].w[0] + 2232u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 2352u);
    st32((c.r[16].w[0] + 2236u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2240u), 0u);
    st32((c.r[16].w[0] + 2256u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2252u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2280u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2276u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2264u), 0u);
    st32((c.r[16].w[0] + 2260u), 0u);
    st32((c.r[16].w[0] + 2272u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2268u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2292u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2296u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2300u), 0u);
    st32((c.r[16].w[0] + 2304u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2308u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2312u), 0u);
    st32((c.r[16].w[0] + 2320u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C368u); st32((c.r[16].w[0] + 2324u), 0u);  if (depth < kMaxDepth) unit_0110(c, 226u, depth + 1u); else { c.pc = 0x00543CE0u; return; } if (c.pc != 0x0053C368u) [[unlikely]] return; }
L_0053C368:
    set32(c.r[3], c.r[16].w[0] + 2628u);
    set32(c.r[2], c.r[16].w[0] + 2648u);
    st32((c.r[16].w[0] + 2628u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 2660u);
    st32((c.r[16].w[0] + 2632u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2636u), 0u);
    st32((c.r[16].w[0] + 2648u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2652u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C390u); st32((c.r[16].w[0] + 2656u), 0u);  if (depth < kMaxDepth) unit_0110(c, 136u, depth + 1u); else { c.pc = 0x005421E0u; return; } if (c.pc != 0x0053C390u) [[unlikely]] return; }
L_0053C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C398u); set32(c.r[4], c.r[16].w[0] + 2968u);  if (depth < kMaxDepth) unit_0110(c, 156u, depth + 1u); else { c.pc = 0x005425F0u; return; } if (c.pc != 0x0053C398u) [[unlikely]] return; }
L_0053C398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C3A0u); set32(c.r[4], c.r[16].w[0] + 3024u);  if (depth < kMaxDepth) unit_0110(c, 193u, depth + 1u); else { c.pc = 0x00543790u; return; } if (c.pc != 0x0053C3A0u) [[unlikely]] return; }
L_0053C3A0:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1232u), 0u);
    set32(c.r[5], 0u + 16384u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[6], 0u + 64u);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[9], 0u + 1000u);
    st32((c.r[16].w[0] + 1756u), 0u);
    set32(c.r[8], 0u + 1024u);
    st32((c.r[16].w[0] + 2156u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4096ll);
    st32((c.r[16].w[0] + 2360u), c.r[5].w[0]);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 2364u), c.r[4].w[0]);
    c.f[13] = c.r[2].w[0];
    st32((c.r[16].w[0] + 2184u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2096u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2164u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2168u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 2172u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 2176u), 0u);
    st32((c.r[16].w[0] + 2180u), c.r[9].w[0]);
    st8((c.r[16].w[0] + 2188u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1272u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 1276u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 1252u), c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C438u); st32((c.r[16].w[0] + 1256u), 0u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C438u) [[unlikely]] return; }
L_0053C438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C454u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C454u) [[unlikely]] return; }
L_0053C454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C470u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C470u) [[unlikely]] return; }
L_0053C470:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C488u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C488u) [[unlikely]] return; }
L_0053C488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C4A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C4A4u) [[unlikely]] return; }
L_0053C4A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C4C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C4C4u) [[unlikely]] return; }
L_0053C4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C4E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C4E0u) [[unlikely]] return; }
L_0053C4E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 7u);
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C4FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053C4FCu) [[unlikely]] return; }
L_0053C4FC:
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C50Cu); st32((c.r[16].w[0] + 1240u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_010E(c, 322u, depth + 1u); else { c.pc = 0x0053B450u; return; } if (c.pc != 0x0053C50Cu) [[unlikely]] return; }
L_0053C50C:
    c.r[2].d[0] = 0ull | 48000ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1244u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1760u);
    st32((c.r[16].w[0] + 1248u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 1268u), 0u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[16].w[0] + 2316u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1736u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1740u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1744u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C54Cu); st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0053C54Cu) [[unlikely]] return; }
L_0053C54C:
    st32((c.r[16].w[0] + 2040u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[16].w[0] + 2036u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st32((c.r[16].w[0] + 2032u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    st32((c.r[16].w[0] + 2044u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[16].w[0] + 2060u), 0u);
    set32(c.r[4], 0u + 400u);
    st32((c.r[16].w[0] + 2064u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2068u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 2072u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 2076u), 0u);
    st32((c.r[16].w[0] + 2080u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2084u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 2024u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2016u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2020u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0053C5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2368u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053C5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053C70C; } }
L_0053C5E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0053C5E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 2596u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053C5E8u | kUnwind; return; } goto L_0053C5E8; } }
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C614u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0053C614u) [[unlikely]] return; }
L_0053C614:
    set32(c.r[4], ld32((c.r[16].w[0] + 2368u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 1256u)));  if (t) { goto L_0053C630; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[10].d[0] = 0ull + 0ull;  goto L_0053C638; }
L_0053C630:
    set32(c.r[2], 0u + 6u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053C638:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0053C708; } }
    c.r[13].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], c.r[29].w[0] + 40u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[9], 0u + 361u);
    c.budget -= 6;
L_0053C658:
    c.r[14].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_0053C6E0; } }
    c.r[12].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
L_0053C670:
    set32(c.r[5], ld32((c.r[12].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0053C6C8; } }
    c.r[3].d[0] = ld8((c.r[12].w[0] + 2396u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053C6C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0053C6A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0053C6C8; } }
    c.budget -= 1;
L_0053C6A0:
    set32(c.r[5], ld32((c.r[12].w[0] + 2388u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053C6C8; } }
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053C6C8; } }
    set32(c.r[3], c.r[12].w[0] + 2372u);
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[13].w[0] + 2596u), c.r[3].w[0]);
    c.budget -= 3;
L_0053C6C8:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[3].d[0] = c.r[15].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053C670u | kUnwind; return; } goto L_0053C670; } }
    c.budget -= 1;
L_0053C6E0:
    set32(c.r[3], ld32((c.r[13].w[0] + 2596u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053C6F8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0053C6F8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053C658u | kUnwind; return; } goto L_0053C658; } }
L_0053C708:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053C70C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0053C720:
    set32(c.r[29], c.r[29].w[0] - 18352u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 18340u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 348u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[6].w[0]);
    st8((c.r[29].w[0] + 319u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 312u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 18348u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C778u); st32((c.r[29].w[0] + 288u), 0u);  if (depth < kMaxDepth) unit_010B(c, 88u, depth + 1u); else { c.pc = 0x0052D530u; return; } if (c.pc != 0x0053C778u) [[unlikely]] return; }
L_0053C778:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 272u), 0u);  if (t) { goto L_0053C790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053FB4C; } }
L_0053C790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053C7AC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0053C7AC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C7D0; }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053C7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053FB4C; } }
L_0053C7CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053C7D0:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C7F4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], 0u - 769u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_0053C810; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053C7F4:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C814; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], 0u - 257u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 4;
L_0053C810:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053C814:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C838; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBC30000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 6;
L_0053C838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x043C0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C858; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
L_0053C858:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053C8D0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 18336u);
    set32(c.r[6], c.r[29].w[0] + 18332u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C878u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 366u, depth + 1u); else { c.pc = 0x0053BE90u; return; } if (c.pc != 0x0053C878u) [[unlikely]] return; }
L_0053C878:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18336u)));  goto L_0053C8B0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 18332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053C8CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], 0u - 33u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_0053C8CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18336u)));
    c.budget -= 1;
L_0053C8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053C8CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], 0u - 33u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 5;
L_0053C8CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053C8D0:
    c.r[4].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0053C8E8; } }
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_0053C92C; }
L_0053C8E8:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_0053C8FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0053C8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0053FB4C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0053C91C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053C928; } }
L_0053C91C:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053C928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0053C92C:
    c.r[3].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053C9A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 412u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2126u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C964u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053C964u) [[unlikely]] return; }
L_0053C964:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0053C98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C978u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x0053C978u) [[unlikely]] return; }
L_0053C978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 20448u);
    st32((c.r[23].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_0053C98C:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { st32((c.r[23].w[0] + 344u), 0u);  goto L_0053CBF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
    st32((c.r[23].w[0] + 344u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053CBF4; } }
L_0053C9A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053CA18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 408u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2135u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C9D4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053C9D4u) [[unlikely]] return; }
L_0053C9D4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0053C9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053C9E8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x0053C9E8u) [[unlikely]] return; }
L_0053C9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20400u);
    st32((c.r[23].w[0] + 400u), c.r[2].w[0]);
    c.budget -= 3;
L_0053C9F4:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053CA08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053CA08:
    set32(c.r[3], 0u - 4097u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_0053CBF4; } }
L_0053CA18:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[28].w[0] - 21924u));  goto L_0053CB20; }
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CB1C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CB1C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CB1C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CB1C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 428u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2147u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CA74u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053CA74u) [[unlikely]] return; }
L_0053CA74:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0053CAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CA88u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x0053CA88u) [[unlikely]] return; }
L_0053CA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20352u);
    st32((c.r[23].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 420u), 0u);
    st32((c.r[23].w[0] + 424u), 0u);
    st32((c.r[23].w[0] + 404u), 0u);
    st32((c.r[23].w[0] + 408u), 0u);
    st32((c.r[23].w[0] + 412u), 0u);
    st32((c.r[23].w[0] + 416u), 0u);
    st32((c.r[23].w[0] + 32u), 0u);
    c.budget -= 10;
L_0053CAB0:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 76u)));  goto L_0053CAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 1;
L_0053CAC4:
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  if (t) { goto L_0053CAEC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0053CAF0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053CAEC; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[23].w[0] + 404u), c.r[5].w[0]);  goto L_0053CB00; }
L_0053CAEC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053CAF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[23].w[0] + 404u), c.r[5].w[0]);
    c.budget -= 4;
L_0053CB00:
    st32((c.r[23].w[0] + 408u), c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[23].w[0] + 412u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[23].w[0] + 416u), c.r[2].w[0]);  if (t) { goto L_0053CBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053FB4C; } }
L_0053CB1C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 21924u));
    c.budget -= 1;
L_0053CB20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053CB9C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 428u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2163u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CB4Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053CB4Cu) [[unlikely]] return; }
L_0053CB4C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0053CB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CB60u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x0053CB60u) [[unlikely]] return; }
L_0053CB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20352u);
    st32((c.r[23].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 420u), 0u);
    st32((c.r[23].w[0] + 424u), 0u);
    st32((c.r[23].w[0] + 404u), 0u);
    st32((c.r[23].w[0] + 408u), 0u);
    st32((c.r[23].w[0] + 412u), 0u);
    st32((c.r[23].w[0] + 416u), 0u);
    st32((c.r[23].w[0] + 32u), 0u);
    c.budget -= 10;
L_0053CB88:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0053CBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0053CB9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 408u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2215u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CBBCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053CBBCu) [[unlikely]] return; }
L_0053CBBC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0053CBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CBD0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x0053CBD0u) [[unlikely]] return; }
L_0053CBD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 20496u);
    st32((c.r[23].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_0053CBE4:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0053CBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053CBF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[23].w[0] + 388u), c.r[20].w[0]);  if (t) { goto L_0053CC34; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CC34; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16385ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053CC34; } }
    set32(c.r[3], c.r[29].w[0] + 1600u);
    set32(c.r[2], 0u - 32u);
    set32(c.r[3], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 6;
L_0053CC34:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_0053CC48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_0053CC48; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053CC48:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0053CC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0053CC68; } }
L_0053CC64:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053CC68:
    set32(c.r[5], ld32((c.r[29].w[0] + 348u)));
    c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CC78u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 208u, depth + 1u); else { c.pc = 0x0052B5C0u; return; } if (c.pc != 0x0053CC78u) [[unlikely]] return; }
L_0053CC78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053CCAC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2244u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CCA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053CCA4u) [[unlikely]] return; }
L_0053CCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0053FB4C; } }
L_0053CCAC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0053CCC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0053CCC0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053CCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CCC8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 157u, depth + 1u); else { c.pc = 0x0052A370u; return; } if (c.pc != 0x0053CCC8u) [[unlikely]] return; }
L_0053CCC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  goto L_0053CCDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.budget -= 1;
L_0053CCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CCE4u); set32(c.r[5], c.r[29].w[0] + 18344u);  if (depth < kMaxDepth) unit_010B(c, 191u, depth + 1u); else { c.pc = 0x0052E910u; return; } if (c.pc != 0x0053CCE4u) [[unlikely]] return; }
L_0053CCE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18344u)));  goto L_0053CCF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18344u)));
    c.budget -= 1;
L_0053CCF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0053D3E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], c.r[19].w[0] + 72u);
    set32(c.r[30], c.r[3].w[0] - c.r[19].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.budget -= 7;
L_0053CD1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CD28u); set32(c.r[6], c.r[29].w[0] + 18328u);  if (depth < kMaxDepth) unit_010B(c, 185u, depth + 1u); else { c.pc = 0x0052E7E0u; return; } if (c.pc != 0x0053CD28u) [[unlikely]] return; }
L_0053CD28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18344u)));  goto L_0053D3D4; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053CD70; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053CD70; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053CD70; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0053CD70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18328u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0053D3D0; } }
    c.budget -= 1;
L_0053CD70:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053CD98; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 18328u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053CDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18328u), 0u);  if (t) { goto L_0053D3D0; } }
L_0053CD98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0053CDC0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 18328u)));
    set32(c.r[2], 0u + 19u);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053CDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18328u), 0u);  if (t) { goto L_0053D3D0; } }
    c.budget -= 1;
L_0053CDC0:
    set32(c.r[5], ld32((c.r[29].w[0] + 18328u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053CDE0; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053CDE8; } }
L_0053CDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18328u), 0u);  if (t) { goto L_0053D3D0; } }
L_0053CDE8:
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CDF4u); set32(c.r[6], c.r[29].w[0] + 18348u);  if (depth < kMaxDepth) unit_010B(c, 176u, depth + 1u); else { c.pc = 0x0052E550u; return; } if (c.pc != 0x0053CDF4u) [[unlikely]] return; }
L_0053CDF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053CE14; }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0053D3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053CE14:
    st32((c.r[2].w[0] + 224u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[3].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 216u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 36u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053CE68; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053CE68:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CE78u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053CE78u) [[unlikely]] return; }
L_0053CE78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D35C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_0053CE9C; } }
    set32(c.r[4], c.r[3].w[0] + 24u);
    c.budget -= 1;
L_0053CE9C:
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CEACu); set32(c.r[6], c.r[29].w[0] + 18016u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053CEACu) [[unlikely]] return; }
L_0053CEAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053CEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053CEC0:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053D0A4; }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[29].w[0] + 18272u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 18276u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[29].w[0] + 18280u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0053CEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053D078; } }
L_0053CEF8:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053CF68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053CF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0053CF68; } }
L_0053CF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0053CF68; } }
L_0053CF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 24u);  if (t) { goto L_0053CF68; } }
L_0053CF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053CF68; } }
L_0053CF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053CF68; } }
L_0053CF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053CF68; } }
L_0053CF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053CF68; } }
L_0053CF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053CF68; } }
L_0053CF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053CF68; } }
L_0053CF68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0053CF98; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053CF88u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053CF88u) [[unlikely]] return; }
L_0053CF88:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D064; } }
L_0053CF98:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[29].w[0] + 18288u), 0u);  goto L_0053D064; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);  goto L_0053D044; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);  goto L_0053D038; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 3);  goto L_0053D020; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0053D000; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 3);  goto L_0053CFE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_0053D05C; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_0053CFE8:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D064; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.budget -= 1;
L_0053D000:
    set32(c.r[3], c.r[4].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D064; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_0053D020:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D064; } }
    st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);
    c.budget -= 1;
L_0053D038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053D078; } }
    st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);
    c.budget -= 1;
L_0053D044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053D078; } }
    st32((c.r[29].w[0] + 18288u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D064; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_0053D05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D078; } }
L_0053D064:
    set32(c.r[3], ld32((c.r[29].w[0] + 18288u)));
    c.r[2].d[0] = 0ull + 0ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 18288u), c.r[3].w[0]);
    c.budget -= 5;
L_0053D078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D08C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D08C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[2].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18292u), c.r[3].w[0]);  if (t) { goto L_0053D2AC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053D0A4:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], ld32((c.r[29].w[0] + 18276u)));  goto L_0053D2B0; }
    set32(c.r[25], ld32((c.r[23].w[0] + 400u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D0C4u); set32(c.r[5], c.r[29].w[0] + 18324u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D0C4u) [[unlikely]] return; }
L_0053D0C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[2].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[29].w[0] + 18272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[2].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[29].w[0] + 18276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[2].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 18280u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 18324u)));
    c.budget -= 20;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0053D11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053D29C; } }
L_0053D11C:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053D18C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053D144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0053D18C; } }
L_0053D14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0053D18C; } }
L_0053D154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 24u);  if (t) { goto L_0053D18C; } }
L_0053D15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053D18C; } }
L_0053D164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053D18C; } }
L_0053D16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D18C; } }
L_0053D174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D18C; } }
L_0053D17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D18C; } }
L_0053D184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D18C; } }
L_0053D18C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0053D1BC; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D1ACu); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053D1ACu) [[unlikely]] return; }
L_0053D1AC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D288; } }
L_0053D1BC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[29].w[0] + 18288u), 0u);  goto L_0053D288; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);  goto L_0053D268; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);  goto L_0053D25C; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 3);  goto L_0053D244; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0053D224; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 3);  goto L_0053D20C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_0053D280; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_0053D20C:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.budget -= 1;
L_0053D224:
    set32(c.r[3], c.r[4].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D288; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_0053D244:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18288u), c.r[2].w[0]);  if (t) { goto L_0053D288; } }
    st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);
    c.budget -= 1;
L_0053D25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053D29C; } }
    st32((c.r[29].w[0] + 18288u), c.r[4].w[0]);
    c.budget -= 1;
L_0053D268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053D29C; } }
    st32((c.r[29].w[0] + 18288u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D288; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_0053D280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D29C; } }
L_0053D288:
    set32(c.r[3], ld32((c.r[29].w[0] + 18288u)));
    c.r[2].d[0] = 0ull + 0ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 18288u), c.r[3].w[0]);
    c.budget -= 5;
L_0053D29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053D2AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053D2AC:
    set32(c.r[21], ld32((c.r[29].w[0] + 18276u)));
    c.budget -= 1;
L_0053D2B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 18292u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053D3E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053D3E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0053D3E8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D2E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053D2F8; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.budget -= 2;
L_0053D2F8:
    set32(c.r[2], ld32((c.r[5].w[0] + 108u)));
    set32(c.r[6], c.r[29].w[0] + 1296u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D308u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D308u) [[unlikely]] return; }
L_0053D308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1556u)));  goto L_0053D31C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 1556u)));
    c.budget -= 1;
L_0053D31C:
    c.r[1].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053D338; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 1572u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_0053D338:
    set32(c.r[5], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053D2E8u | kUnwind; return; } goto L_0053D2E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D3E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D35C:
    st32((c.r[2].w[0] + 224u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[2].w[0] + 220u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D37Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D37Cu) [[unlikely]] return; }
L_0053D37C:
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 18348u), 0u);  if (t) { goto L_0053D3D0; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0053D3D0; } }
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0053FB4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D3A4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 195u, depth + 1u); else { c.pc = 0x0052B3F0u; return; } if (c.pc != 0x0053D3A4u) [[unlikely]] return; }
L_0053D3A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2446u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D3C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053D3C4u) [[unlikely]] return; }
L_0053D3C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053D3D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 18344u)));
    c.budget -= 1;
L_0053D3D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053CD1Cu | kUnwind; return; } goto L_0053CD1C; }
    c.budget -= 1;
L_0053D3E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0053D430; } }
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], 0u + 25u);  goto L_0053FB4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D404u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 195u, depth + 1u); else { c.pc = 0x0052B3F0u; return; } if (c.pc != 0x0053D404u) [[unlikely]] return; }
L_0053D404:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2462u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D424u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053D424u) [[unlikely]] return; }
L_0053D424:
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053D430:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[30], ld32((c.r[4].w[0] + 24u)));  goto L_0053D448; }
    set32(c.r[30], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0053D448; } }
    set32(c.r[30], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_0053D448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D450u);  if (depth < kMaxDepth) unit_0109(c, 49u, depth + 1u); else { c.pc = 0x00524880u; return; } if (c.pc != 0x0053D450u) [[unlikely]] return; }
L_0053D450:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D48C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[30].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2492u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D478u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053D478u) [[unlikely]] return; }
L_0053D478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0053D488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053D488:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053D498; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053D498:
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D4A8u); set32(c.r[6], c.r[29].w[0] + 18016u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D4A8u) [[unlikely]] return; }
L_0053D4A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 18276u)));  goto L_0053D4C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18276u)));
    c.budget -= 1;
L_0053D4C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 1252u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D4DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 75u);  if (t) { goto L_0053FB4C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D4DC:
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 60u)));  goto L_0053D508; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053D504; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 3;
L_0053D504:
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 1;
L_0053D508:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053D664; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_0053D534; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_0053D578; } }
L_0053D534:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 316u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2536u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D554u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053D554u) [[unlikely]] return; }
L_0053D554:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_0053D568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D564u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 101u, depth + 1u); else { c.pc = 0x00531490u; return; } if (c.pc != 0x0053D564u) [[unlikely]] return; }
L_0053D564:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053D568:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0053D57C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053D578:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0053D57C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 240u), c.r[20].w[0]);  goto L_0053D5CC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053D5C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2545u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D5B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053D5B8u) [[unlikely]] return; }
L_0053D5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053D5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053D5C8:
    st32((c.r[17].w[0] + 240u), c.r[20].w[0]);
    c.budget -= 1;
L_0053D5CC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053D5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_0053D5E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053D5E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0053D5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  if (t) { goto L_0053D5F4; } }
L_0053D5F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053D5F4:
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 296u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 20;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_0053D64C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_0053D650; } }
L_0053D64C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053D650:
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[17].w[0]);  if (t) { goto L_0053F888; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053D664:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 18316u), 0u);  goto L_0053EBF8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], 0u - 513u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 18320u), 0u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_0053D6A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_0053D724; } }
L_0053D6A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2586u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D6C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053D6C0u) [[unlikely]] return; }
L_0053D6C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_0053D6D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D6D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 143u, depth + 1u); else { c.pc = 0x005322A0u; return; } if (c.pc != 0x0053D6D0u) [[unlikely]] return; }
L_0053D6D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053D6D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_0053D728; }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D70C; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2591u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D708u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053D708u) [[unlikely]] return; }
L_0053D708:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D70C:
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D71Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D71Cu) [[unlikely]] return; }
L_0053D71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053D724:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0053D728:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  goto L_0053D7B8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053D7B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2600u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D764u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053D764u) [[unlikely]] return; }
L_0053D764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053D7B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  goto L_0053D79C; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2605u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D798u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053D798u) [[unlikely]] return; }
L_0053D798:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053D79C:
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D7ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053D7ACu) [[unlikely]] return; }
L_0053D7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053D7B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_0053D7B8:
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 132u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 240u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 18272u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 10;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0053D930; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053D850; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053D808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0053D850; } }
L_0053D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0053D850; } }
L_0053D818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0053D850; } }
L_0053D820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0053D850; } }
L_0053D828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0053D850; } }
L_0053D830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D850; } }
L_0053D838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D850; } }
L_0053D840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D850; } }
L_0053D848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D850; } }
L_0053D850:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0053D87C; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D870u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053D870u) [[unlikely]] return; }
L_0053D870:
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);  if (t) { goto L_0053D928; } }
L_0053D87C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_0053D928; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[6].d[0] + 0ull;  goto L_0053D930; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[6].d[0] + 0ull;  goto L_0053D930; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[6].w[0] << 3);  goto L_0053D8FC; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0053D8E0; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[6].w[0] << 3);  goto L_0053D8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D930; } }
    set32(c.r[2], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0053D8CC:
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] >> 3);  if (t) { goto L_0053D928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.budget -= 1;
L_0053D8E0:
    set32(c.r[3], c.r[6].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] >> 3);  if (t) { goto L_0053D928; } }
    set32(c.r[2], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0053D8FC:
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] >> 4);  if (t) { goto L_0053D928; } }
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D930; } }
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053D930; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053D928:
    mmi::divu(c, 0, c.r[22].w[0], c.r[21].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0053D930:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0053D944; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_0053D944; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053D944:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0053D974; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 2084u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 18280u)));
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[2].w[0] >> 6);
    c.budget -= 10;
L_0053D974:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  goto L_0053D984; }
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0053D984:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { mmi::divu(c, 0, c.r[16].w[0], c.r[22].w[0]);  goto L_0053D9AC; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] + 255u);  goto L_0053D99C; }
    set32(c.r[22], 0u + 1u);
    set32(c.r[2], c.r[22].w[0] + 255u);
    c.budget -= 2;
L_0053D99C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[16].w[0], c.r[22].w[0]);
    c.budget -= 4;
L_0053D9AC:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 992u);  goto L_0053D9C8; }
    set32(c.r[16], c.r[22].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.budget -= 2;
L_0053D9C8:
    set32(c.r[5], c.r[29].w[0] + 18016u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053D9D4u); set32(c.r[6], 0u + 296u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0053D9D4u) [[unlikely]] return; }
L_0053D9D4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] - 1u);  goto L_0053DA34; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053DA30; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0053DA08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);  if (t) { goto L_0053DA30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0053DA08:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0053DA20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);  if (t) { goto L_0053DA30; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0053DA20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053DA30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);
    c.budget -= 2;
L_0053DA30:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0053DA34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 992u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[7], c.r[29].w[0] + 18320u);
    c.r[2].d[0] = c.r[2].d[0] | 65530ull;
    st32((c.r[29].w[0] + 1264u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 1252u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DA64u); st32((c.r[29].w[0] + 1272u), 0u);  if (depth < kMaxDepth) unit_010F(c, 257u, depth + 1u); else { c.pc = 0x0053FB80u; return; } if (c.pc != 0x0053DA64u) [[unlikely]] return; }
L_0053DA64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053DAA4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DA98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DA98u) [[unlikely]] return; }
L_0053DA98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053DAA4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0053DAB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_0053DAB8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DAB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0053DACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 48u)));  if (t) { goto L_0053DAD0; } }
L_0053DACC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DAD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_0053DAE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_0053DAE8; } }
L_0053DAE4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DAE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    st32((c.r[2].w[0] + 296u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 18320u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053DB48; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0053DB48; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DB20:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 18320u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053DB20u | kUnwind; return; } goto L_0053DB20; } }
L_0053DB48:
    st32((c.r[18].w[0] + 320u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 18288u)));
    c.r[2].d[0] = c.r[2].d[0] | 130ull;
    c.r[3].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u - 3u);
    st32((c.r[18].w[0] + 32u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 18284u)));
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 18280u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18272u)));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[21].w[0]);
    c.budget -= 21;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 240u), c.r[20].w[0]);  if (t) { goto L_0053DBA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_0053DBA8; } }
L_0053DBA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DBA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0053DBB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  if (t) { goto L_0053DBBC; } }
L_0053DBB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DBBC:
    st32((c.r[18].w[0] + 292u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    st32((c.r[18].w[0] + 296u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[18].w[0] + 328u), c.r[22].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { goto L_0053DC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_0053DC04; } }
L_0053DC00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DC04:
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053DC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DC1Cu); set32(c.r[5], c.r[29].w[0] + 18016u);  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0053DC1Cu) [[unlikely]] return; }
L_0053DC1C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 18308u)));  goto L_0053DC8C; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053DC88; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0053DC54; }
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0053DC94; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0053DC54:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0053DC70; }
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0053DC94; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0053DC70:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0053DC98; }
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0053DC94; } }
L_0053DC88:
    set32(c.r[3], ld32((c.r[29].w[0] + 18308u)));
    c.budget -= 1;
L_0053DC8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_0053DC94:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0053DC98:
    set32(c.r[2], 0u - 121u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 120ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18304u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_0053DCDC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_0053DCEC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0053DCDC:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0053DD20; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 1;
L_0053DCEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_0053DD08; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_0053DD18; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0053DD08:
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0053DD20; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0053DD18:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0053DD20:
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], ld32((c.r[29].w[0] + 18296u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 18300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DD40u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DD40u) [[unlikely]] return; }
L_0053DD40:
    set32(c.r[2], ld32((c.r[18].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053DD78; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2288u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DD60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DD60u) [[unlikely]] return; }
L_0053DD60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053DD74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053DD74:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0053DD78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 204u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2794u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DD94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053DD94u) [[unlikely]] return; }
L_0053DD94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 316u), c.r[2].w[0]);  goto L_0053DDA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DDA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0106(c, 208u, depth + 1u); else { c.pc = 0x0051B4B0u; return; } if (c.pc != 0x0053DDA4u) [[unlikely]] return; }
L_0053DDA4:
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 1;
L_0053DDA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[20].w[0]);  goto L_0053DDE8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 42u);  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DDD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DDD8u) [[unlikely]] return; }
L_0053DDD8:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_0053DDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DDF0u); set32(c.r[4], ld32((c.r[20].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0053DDF0u) [[unlikely]] return; }
L_0053DDF0:
    st32((c.r[18].w[0] + 312u), c.r[18].w[0]);
    set32(c.r[2], c.r[20].w[0] + 2648u);
    set32(c.r[4], ld32((c.r[20].w[0] + 2652u)));
    set32(c.r[3], c.r[18].w[0] + 304u);
    st32((c.r[18].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 2652u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DE1Cu); set32(c.r[4], ld32((c.r[20].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0053DE1Cu) [[unlikely]] return; }
L_0053DE1C:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  goto L_0053E178; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053E174; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2819u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DE54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053DE54u) [[unlikely]] return; }
L_0053DE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053DE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DE64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 143u, depth + 1u); else { c.pc = 0x005322A0u; return; } if (c.pc != 0x0053DE64u) [[unlikely]] return; }
L_0053DE64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053DE68:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[1].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  goto L_0053DEA8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 42u);  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DE98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DE98u) [[unlikely]] return; }
L_0053DE98:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    c.r[1].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0053DEA8:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053DEB8; }
    st32((c.r[18].w[0] + 128u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 2;
L_0053DEB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_0053DF24; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 2836u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DEE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053DEE8u) [[unlikely]] return; }
L_0053DEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053DF24; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 42u);  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DF18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DF18u) [[unlikely]] return; }
L_0053DF18:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053DF24:
    st32((c.r[17].w[0] + 240u), c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 18320u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[1] = c.r[2].w[0];
    c.r[1].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[17].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 144u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 316u)));
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 260u)));
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    st32((c.r[17].w[0] + 328u), c.r[22].w[0]);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 140u), c.r[18].w[0]);  if (t) { goto L_0053DF90; } }
    st32((c.r[17].w[0] + 128u), c.r[17].w[0]);
    c.budget -= 1;
L_0053DF90:
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0053DFC8; }
    set32(c.r[25], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2288u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053DFB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053DFB0u) [[unlikely]] return; }
L_0053DFB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053DFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053DFC4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053DFC8:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0053E108; } }
L_0053DFD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  goto L_0053E0E4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0053DFF8; } }
    set32(c.r[4], c.r[3].w[0] + 24u);
    c.budget -= 1;
L_0053DFF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E008u); set32(c.r[6], c.r[29].w[0] + 688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E008u) [[unlikely]] return; }
L_0053E008:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0053E020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0053E020:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053E030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E030u); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0053E030u) [[unlikely]] return; }
L_0053E030:
    st32((c.r[17].w[0] + 144u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 944u)));
    set32(c.r[6], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 948u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 952u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 980u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 968u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 972u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 968u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 956u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 968u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 972u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E0A4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E0A4u) [[unlikely]] return; }
L_0053E0A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053E0E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053E0C0; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.budget -= 1;
L_0053E0C0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E0CCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E0CCu) [[unlikely]] return; }
L_0053E0CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E0E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_0053E0E4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 136u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053DFD0u | kUnwind; return; } goto L_0053DFD0; } }
    c.budget -= 1;
L_0053E108:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  goto L_0053E138; }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053E134; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E134u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010C(c, 149u, depth + 1u); else { c.pc = 0x005323B0u; return; } if (c.pc != 0x0053E134u) [[unlikely]] return; }
L_0053E134:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0053E138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053E1B0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 300u)));  goto L_0053E158; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053E1B0; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.budget -= 1;
L_0053E158:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E16Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E16Cu) [[unlikely]] return; }
L_0053E16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E1B0; } }
L_0053E174:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053E178:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053E1B0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0053E194; }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053E194:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E19Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E19Cu) [[unlikely]] return; }
L_0053E19C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E1B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053E420; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  goto L_0053E37C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 60u)));  goto L_0053E1F4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053E420; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053E420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053E418; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_0053E1F4:
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0053E36C; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053E274; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053E22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0053E274; } }
L_0053E234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0053E274; } }
L_0053E23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 24u);  if (t) { goto L_0053E274; } }
L_0053E244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053E274; } }
L_0053E24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0053E274; } }
L_0053E254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E274; } }
L_0053E25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E274; } }
L_0053E264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E274; } }
L_0053E26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E274; } }
L_0053E274:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0053E2A4; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E294u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053E294u) [[unlikely]] return; }
L_0053E294:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0053E35C; } }
L_0053E2A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 100u), 0u);  goto L_0053E35C; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[19].w[0] + 100u), c.r[5].w[0]);  goto L_0053E36C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[19].w[0] + 100u), c.r[5].w[0]);  goto L_0053E36C; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_0053E32C; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0053E30C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_0053E2F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E36C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 1;
L_0053E2F4:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0053E35C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.budget -= 1;
L_0053E30C:
    set32(c.r[3], c.r[5].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0053E35C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 1;
L_0053E32C:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0053E35C; } }
    st32((c.r[19].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E36C; } }
    st32((c.r[19].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E36C; } }
    st32((c.r[19].w[0] + 100u), 0u);
    c.budget -= 1;
L_0053E35C:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
L_0053E36C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0053E420; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_0053E37C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0053E394; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053E3AC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0053E394:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0053E3AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0053E3F0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0053E408; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0053E3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 6;
L_0053E408:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0053E420; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0053E418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E420:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053E580; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053E580; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053E580; } }
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0053E45C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 144u), c.r[3].w[0]);  goto L_0053E490; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0053E45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 37u);  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E480u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E480u) [[unlikely]] return; }
L_0053E480:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    st32((c.r[18].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 1;
L_0053E490:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 316u)));
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_0053E5F8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 316u)));
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  goto L_0053E52C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E4E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010C(c, 149u, depth + 1u); else { c.pc = 0x005323B0u; return; } if (c.pc != 0x0053E4E8u) [[unlikely]] return; }
L_0053E4E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E528; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E51Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E51Cu) [[unlikely]] return; }
L_0053E51C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E528:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_0053E52C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E540u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_010C(c, 118u, depth + 1u); else { c.pc = 0x00531830u; return; } if (c.pc != 0x0053E540u) [[unlikely]] return; }
L_0053E540:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E5F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E574u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E574u) [[unlikely]] return; }
L_0053E574:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E580:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053E594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_0053E594; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053E594:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0053E5A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 100u)));  if (t) { goto L_0053E5A8; } }
L_0053E5A4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053E5A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E5B4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_010C(c, 118u, depth + 1u); else { c.pc = 0x00531830u; return; } if (c.pc != 0x0053E5B4u) [[unlikely]] return; }
L_0053E5B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E5F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E5E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E5E8u) [[unlikely]] return; }
L_0053E5E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E5F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_0053E5F8:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 2364u)));  goto L_0053E650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E60Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 127u, depth + 1u); else { c.pc = 0x00531B90u; return; } if (c.pc != 0x0053E60Cu) [[unlikely]] return; }
L_0053E60C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053E64C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E640u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053E640u) [[unlikely]] return; }
L_0053E640:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053E64C:
    set32(c.r[4], ld32((c.r[20].w[0] + 2364u)));
    c.budget -= 1;
L_0053E650:
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0053E664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 2360u)));  if (t) { goto L_0053EB88; } }
L_0053E664:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[20].w[0] + 2360u)));  if (t) { goto L_0053E6D0; } }
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0053E6A0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0053E6B8; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0053E6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
L_0053E6B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] >> 6);  if (t) { goto L_0053E824; } }
L_0053E6D0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 32u)));  goto L_0053E828; }
    set32(c.r[19], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0053E824; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053E75C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20752u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053E714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0053E75C; } }
L_0053E71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_0053E75C; } }
L_0053E724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 24u);  if (t) { goto L_0053E75C; } }
L_0053E72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0053E75C; } }
L_0053E734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0053E75C; } }
L_0053E73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E75C; } }
L_0053E744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E75C; } }
L_0053E74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E75C; } }
L_0053E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E75C; } }
L_0053E75C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0053E788; } }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053E77Cu); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053E77Cu) [[unlikely]] return; }
L_0053E77C:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_0053E81C; } }
L_0053E788:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0053E81C; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0053E824; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0053E824; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] << 3);  goto L_0053E808; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0053E7EC; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] << 3);  goto L_0053E7D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E824; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    c.budget -= 1;
L_0053E7D8:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] >> 3);  if (t) { goto L_0053E81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    c.budget -= 1;
L_0053E7EC:
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] >> 3);  if (t) { goto L_0053E81C; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    c.budget -= 1;
L_0053E808:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] >> 4);  if (t) { goto L_0053E81C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053E81C:
    mmi::divu(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0053E824:
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_0053E828:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 16u)));  goto L_0053E844; }
    set32(c.r[5], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_0053EA24; }
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0053E844:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0053E8B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 20800u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053E870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 8u);  if (t) { goto L_0053E8B8; } }
L_0053E878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_0053E8B8; } }
L_0053E880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 24u);  if (t) { goto L_0053E8B8; } }
L_0053E888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0053E8B8; } }
L_0053E890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0053E8B8; } }
L_0053E898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E8B8; } }
L_0053E8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E8B8; } }
L_0053E8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E8B8; } }
L_0053E8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053E8B8; } }
L_0053E8B8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0053E8FC; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.r[17].d[0] = c.r[3].d[0] << 32;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { goto L_0053EA18; } }
L_0053E8FC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0053EA18; }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_0053EB88; }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { c.r[17].d[0] = c.r[3].d[0] + 0ull;  goto L_0053EB88; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] + 27u);  goto L_0053E9B4; }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 63u);  goto L_0053E998; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] + 13u);  goto L_0053E94C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EB88; } }
    set32(c.r[6], c.r[3].w[0] + 13u);
    c.budget -= 1;
L_0053E94C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[5].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] >> 3);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    mmi::multu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] >> 3);  if (t) { goto L_0053EA18; } }
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.budget -= 1;
L_0053E998:
    set32(c.r[4], c.r[3].w[0] >> 6);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] >> 6);  if (t) { goto L_0053EA18; } }
    set32(c.r[6], c.r[3].w[0] + 27u);
    c.budget -= 1;
L_0053E9B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[5].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    mmi::multu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] >> 4);  if (t) { goto L_0053EA18; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EB88; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EB88; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053EA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[17].d[0] = c.lo.d[0];  if (t) { goto L_0053EB88; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0053EA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EAA8; } }
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[2].w[0] >> 1);  goto L_0053EA44; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053EA5C; } }
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0053EA44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0053EA5C:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], c.r[6].w[0] >> 1);  goto L_0053EA74; }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053EA8C; } }
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.budget -= 1;
L_0053EA74:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0053EA8C:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EB14; } }
L_0053EAA8:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[4], c.r[5].w[0] >> 1);  goto L_0053EAC0; }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053EAD8; } }
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.budget -= 1;
L_0053EAC0:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0053EAD8:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], c.r[6].w[0] >> 1);  goto L_0053EAF0; }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053EB08; } }
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.budget -= 1;
L_0053EAF0:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0053EB08:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 3;
L_0053EB14:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0053EB2C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0053EB44; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_0053EB2C:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0053EB44:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0053EB74; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EB88; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0053EB74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0053EB88:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 312u)));  goto L_0053EBEC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EBA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 147u, depth + 1u); else { c.pc = 0x0052A190u; return; } if (c.pc != 0x0053EBA8u) [[unlikely]] return; }
L_0053EBA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053EBE8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[18].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EBDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053EBDCu) [[unlikely]] return; }
L_0053EBDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053EBE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 1;
L_0053EBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[18].w[0]);  if (t) { goto L_0053F888; } }
    st32((c.r[29].w[0] + 18316u), 0u);
    c.budget -= 1;
L_0053EBF8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].sd[0] <= 0; st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0053ED50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053EC28; }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[2].w[0])));  if (t) { goto L_0053EC68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0053EC28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 316u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3143u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EC44u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053EC44u) [[unlikely]] return; }
L_0053EC44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = c.r[2].d[0] + 0ull;  goto L_0053EC58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EC54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 101u, depth + 1u); else { c.pc = 0x00531490u; return; } if (c.pc != 0x0053EC54u) [[unlikely]] return; }
L_0053EC54:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053EC58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  goto L_0053EC6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053EC68:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_0053EC6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 240u), c.r[20].w[0]);  goto L_0053ECBC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053ECB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3152u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ECA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053ECA8u) [[unlikely]] return; }
L_0053ECA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053ECB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053FB4C; } }
L_0053ECB8:
    st32((c.r[21].w[0] + 240u), c.r[20].w[0]);
    c.budget -= 1;
L_0053ECBC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053ECD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_0053ECD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053ECD0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0053ECE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  if (t) { goto L_0053ECE4; } }
L_0053ECE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053ECE4:
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    st32((c.r[21].w[0] + 296u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[21].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 100u), c.f[0]);
    st32((c.r[21].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 132u), c.r[30].w[0]);
    c.budget -= 21;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0053ED40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_0053ED44; } }
L_0053ED40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053ED44:
    st32((c.r[21].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0053ED50:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0053F7A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053ED88:
    set32(c.r[17], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053ED98; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053ED98:
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EDA8u); set32(c.r[6], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053EDA8u) [[unlikely]] return; }
L_0053EDA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053EDBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053EDBC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0053EDE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EDE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18316u), c.r[2].w[0]);  if (t) { goto L_0053EDE8; } }
L_0053EDE0:
    st32((c.r[29].w[0] + 18316u), 0u);
    c.budget -= 2;
L_0053EDE8:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0053EE48; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053EE48; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053EE48; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0053EE40; } }
    c.budget -= 1;
L_0053EE18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_0053EE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0053EE40; } }
    c.budget -= 1;
L_0053EE30:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053EE18u | kUnwind; return; } goto L_0053EE18; } }
L_0053EE40:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0053F798; } }
L_0053EE48:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053EEA8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EEA8; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053EE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 676u), c.r[2].w[0]);  if (t) { goto L_0053EEA8; } }
L_0053EE78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053EE90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 676u), c.r[2].w[0]);  if (t) { goto L_0053EEA8; } }
L_0053EE90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053EEA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    c.budget -= 3;
L_0053EEA8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EF08; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053EEE0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053EEE0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053EEF0; } }
    c.budget -= 1;
L_0053EEE0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0053EF08; } }
    c.budget -= 1;
L_0053EEF0:
    set32(c.r[3], 0u - 513u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];  if (t) { goto L_0053EF08; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0053EF08:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0053EF74; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EF70; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EF58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0053EF40; } }
    set32(c.r[4], c.r[3].w[0] + 24u);
    c.budget -= 2;
L_0053EF40:
    set32(c.r[2], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EF4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053EF4Cu) [[unlikely]] return; }
L_0053EF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053EF60; } }
    c.budget -= 1;
L_0053EF58:
    set32(c.r[2], 0u + 43u);
    c.budget -= 2;
L_0053EF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053EF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053EF70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0053EF74:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EF84u); set32(c.r[7], c.r[29].w[0] + 18316u);  if (depth < kMaxDepth) unit_010F(c, 257u, depth + 1u); else { c.pc = 0x0053FB80u; return; } if (c.pc != 0x0053EF84u) [[unlikely]] return; }
L_0053EF84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 18316u)));  goto L_0053EFE0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  goto L_0053EFB8; }
    set32(c.r[25], ld32((c.r[21].w[0] + 300u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EFACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053EFACu) [[unlikely]] return; }
L_0053EFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 18348u), 0u);  if (t) { goto L_0053EFD0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053EFB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053EFD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053EFD0u) [[unlikely]] return; }
L_0053EFD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 1;
L_0053EFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[1] = c.r[2].w[0];
    st32((c.r[3].w[0] + 144u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 140u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 100u), c.f[0]);  if (t) { goto L_0053F03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_0053F040; } }
L_0053F03C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053F040:
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F0A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0053F0A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053F068:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[2].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053F068u | kUnwind; return; } goto L_0053F068; } }
    c.budget -= 1;
L_0053F0A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F0D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F0C4u); set32(c.r[5], ld32((c.r[20].w[0] + 2288u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F0C4u) [[unlikely]] return; }
L_0053F0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F0D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F0D4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0053F120; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_0053F120; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0053F0F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 44u)));  if (t) { goto L_0053F0F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053F0F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0053F10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 48u)));  if (t) { goto L_0053F110; } }
L_0053F10C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053F110:
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    st32((c.r[2].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 4;
L_0053F120:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F15C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 18316u)));  if (t) { goto L_0053F140; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.budget -= 2;
L_0053F140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F148u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F148u) [[unlikely]] return; }
L_0053F148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F158:
    set32(c.r[16], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F15C:
    st32((c.r[16].w[0] + 204u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053F178; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0053F178u) [[unlikely]] return; }
L_0053F178:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F1A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053F190; } }
    set32(c.r[16], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_0053F190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F198u) [[unlikely]] return; }
L_0053F198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F1A8; } }
L_0053F1A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053F1A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 672u)));  goto L_0053F1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.budget -= 1;
L_0053F1BC:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F1D8; } }
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F204; }
    c.budget -= 1;
L_0053F1D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F1ECu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0108(c, 203u, depth + 1u); else { c.pc = 0x00523E50u; return; } if (c.pc != 0x0053F1ECu) [[unlikely]] return; }
L_0053F1EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));  goto L_0053F22C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F204:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F214u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0108(c, 203u, depth + 1u); else { c.pc = 0x00523E50u; return; } if (c.pc != 0x0053F214u) [[unlikely]] return; }
L_0053F214:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053F228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F228:
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 1;
L_0053F22C:
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F270; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0053F260; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F258u); set32(c.r[7], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F258u) [[unlikely]] return; }
L_0053F258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F270; } }
L_0053F260:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F270u); set32(c.r[7], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F270u) [[unlikely]] return; }
L_0053F270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] & 8192ull;  goto L_0053F624; }
    set32(c.r[5], ld32((c.r[29].w[0] + 18348u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 228u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F590; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053F590; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.r[9].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 240u), 0u);  if (t) { goto L_0053F338; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 20848u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x0053C000u < 16384u) { entry = entries_010F[(t - 0x0053C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053F2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 8u);  if (t) { goto L_0053F338; } }
L_0053F2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 16u);  if (t) { goto L_0053F338; } }
L_0053F2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 24u);  if (t) { goto L_0053F338; } }
L_0053F300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 32u);  if (t) { goto L_0053F338; } }
L_0053F308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 32u);  if (t) { goto L_0053F338; } }
L_0053F310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F338; } }
L_0053F318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F338; } }
L_0053F320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F338; } }
L_0053F328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F338; } }
L_0053F330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F338; } }
L_0053F338:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0053F380; } }
    c.r[6].d[0] = c.r[9].d[0] << 32;
    c.r[5].d[0] = c.r[8].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::mult(c, 1, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[5].d[0] = c.r[5].d[0] + c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 3;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[5].w[0]);  if (t) { goto L_0053F4A8; } }
L_0053F380:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0053F4A0; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0053F498; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0053F490; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0053F440; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0053F420; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0053F3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F4B8; } }
    c.budget -= 1;
L_0053F3D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x24920000u);
    set32(c.r[8], c.r[9].w[0] + 13u);
    c.r[7].d[0] = c.r[5].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[8].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 3);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    mmi::multu(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 3);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[5].w[0]);  if (t) { goto L_0053F4A8; } }
L_0053F420:
    set32(c.r[5], c.r[9].w[0] + 63u);
    set32(c.r[6], c.r[5].w[0] >> 6);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] >> 6);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[5].w[0]);  if (t) { goto L_0053F4A8; } }
L_0053F440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x24920000u);
    set32(c.r[8], c.r[9].w[0] + 27u);
    c.r[7].d[0] = c.r[5].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[8].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] >> 4);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 6);
    mmi::multu(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] >> 4);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[5].w[0]);  if (t) { goto L_0053F4A8; } }
L_0053F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[9].w[0]);  if (t) { goto L_0053F4B8; } }
L_0053F498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[9].w[0]);  if (t) { goto L_0053F4B8; } }
L_0053F4A0:
    st32((c.r[29].w[0] + 240u), 0u);
    c.budget -= 2;
L_0053F4A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    c.budget -= 4;
L_0053F4B8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0053F774; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053F4C8:
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F4FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F4FCu) [[unlikely]] return; }
L_0053F4FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));  goto L_0053F570; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F544; }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F524u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F524u) [[unlikely]] return; }
L_0053F524:
    set32(c.r[25], ld32((c.r[21].w[0] + 300u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F538u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F538u) [[unlikely]] return; }
L_0053F538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0053F564; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F560; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F560u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F560u) [[unlikely]] return; }
L_0053F560:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0053F564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 1;
L_0053F570:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053F4C8u | kUnwind; return; } goto L_0053F4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F774; } }
    c.budget -= 1;
L_0053F590:
    set32(c.r[2], ld32((c.r[5].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F5B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F5B0u) [[unlikely]] return; }
L_0053F5B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053F774; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F5F8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F5D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F5D8u) [[unlikely]] return; }
L_0053F5D8:
    set32(c.r[25], ld32((c.r[21].w[0] + 300u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F5ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F5ECu) [[unlikely]] return; }
L_0053F5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0053F618; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F614; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F614u) [[unlikely]] return; }
L_0053F614:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0053F618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
    c.r[2].d[0] = c.r[17].d[0] & 8192ull;
    c.budget -= 1;
L_0053F624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F774; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F648; } }
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F678; } }
L_0053F648:
    set32(c.r[4], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[29].w[0] + 652u)));  if (t) { goto L_0053F680; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0053F680; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_0053F680; } }
    c.budget -= 1;
L_0053F678:
    set32(c.r[16], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 2;
L_0053F680:
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F694u); set32(c.r[7], c.r[29].w[0] + 18312u);  if (depth < kMaxDepth) unit_010D(c, 215u, depth + 1u); else { c.pc = 0x00536C60u; return; } if (c.pc != 0x0053F694u) [[unlikely]] return; }
L_0053F694:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 18312u)));  goto L_0053F724; }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0053F720; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0053FB4C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F6FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F6DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F6DCu) [[unlikely]] return; }
L_0053F6DC:
    set32(c.r[25], ld32((c.r[21].w[0] + 300u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F6F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F6F0u) [[unlikely]] return; }
L_0053F6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F714; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053F714; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F714u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053F714u) [[unlikely]] return; }
L_0053F714:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F720:
    set32(c.r[5], ld32((c.r[29].w[0] + 18312u)));
    c.budget -= 1;
L_0053F724:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_0053F748; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 44u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053F748; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0053F748:
    set32(c.r[4], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010C(c, 173u, depth + 1u); else { c.pc = 0x00532780u; return; } if (c.pc != 0x0053F754u) [[unlikely]] return; }
L_0053F754:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053F774; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0053F774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F774:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0053F798; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18316u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 7;
L_0053F798:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 4;
L_0053F7A8:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0053F7BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0053F7BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0053F7BC:
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053F7F0; } }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0053F7E0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F7DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_0053F7E0:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053ED88u | kUnwind; return; } goto L_0053ED88; }
    c.budget -= 1;
L_0053F7F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F868; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18348u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0053F830; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_0053F830; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053F830; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F868; } }
L_0053F830:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F840u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 195u, depth + 1u); else { c.pc = 0x0052B3F0u; return; } if (c.pc != 0x0053F840u) [[unlikely]] return; }
L_0053F840:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3479u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F860u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053F860u) [[unlikely]] return; }
L_0053F860:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F864:
    st32((c.r[2].w[0] + 224u), 0u);
    c.budget -= 1;
L_0053F868:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 18316u)));  goto L_0053F880; }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[21].w[0]);  if (t) { goto L_0053F888; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 18316u)));
    c.budget -= 1;
L_0053F880:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0053F888:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F898u); set32(c.r[4], ld32((c.r[28].w[0] - 21900u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0053F898u) [[unlikely]] return; }
L_0053F898:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[20].w[0] + 24u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F8C0u); set32(c.r[4], ld32((c.r[28].w[0] - 21900u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0053F8C0u) [[unlikely]] return; }
L_0053F8C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0053F8F8; }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0053F8F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0053FB4C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB4C; } }
L_0053F8F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0053F8F8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 319u));  goto L_0053FB24; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0053F924; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F930; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_0053F924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FB20; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F930:
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0053F9FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F950u); set32(c.r[7], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_010B(c, 115u, depth + 1u); else { c.pc = 0x0052DB20u; return; } if (c.pc != 0x0053F950u) [[unlikely]] return; }
L_0053F950:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));  goto L_0053F9A0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F968u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053F968u) [[unlikely]] return; }
L_0053F968:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[6], c.r[6].w[0] - 20872u);
    set32(c.r[7], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F994u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 95u, depth + 1u); else { c.pc = 0x0052D690u; return; } if (c.pc != 0x0053F994u) [[unlikely]] return; }
L_0053F994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053F9FC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.budget -= 1;
L_0053F9A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 20864u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F9B8u); set32(c.r[7], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_010B(c, 115u, depth + 1u); else { c.pc = 0x0052DB20u; return; } if (c.pc != 0x0053F9B8u) [[unlikely]] return; }
L_0053F9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053F9FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F9D0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053F9D0u) [[unlikely]] return; }
L_0053F9D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 18348u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[6], c.r[6].w[0] - 20864u);
    set32(c.r[7], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053F9FCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 95u, depth + 1u); else { c.pc = 0x0052D690u; return; } if (c.pc != 0x0053F9FCu) [[unlikely]] return; }
L_0053F9FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0053FB20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FB20; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053FB20; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0053FAB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FA38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 6u, depth + 1u); else { c.pc = 0x00538090u; return; } if (c.pc != 0x0053FA38u) [[unlikely]] return; }
L_0053FA38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0053FA80; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 47u);
    set32(c.r[4], 0u + 92u);
    c.budget -= 5;
L_0053FA54:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0053FA68; } }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0053FA74; }
L_0053FA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0053FA80; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0053FA74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053FA54u | kUnwind; return; } goto L_0053FA54; } }
    c.budget -= 1;
L_0053FA80:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 1);  goto L_0053FA90; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 2;
L_0053FA90:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FAA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_010E(c, 4u, depth + 1u); else { c.pc = 0x00538050u; return; } if (c.pc != 0x0053FAA4u) [[unlikely]] return; }
L_0053FAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FB20; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053FAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FAB8u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0053FAB8u) [[unlikely]] return; }
L_0053FAB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0053FB00; } }
    set32(c.r[4], 0u + 47u);
    set32(c.r[5], 0u + 92u);
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 3;
L_0053FACC:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0053FAE8; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0053FAF4; }
    c.budget -= 1;
L_0053FAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0053FB00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0053FAF4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053FACCu | kUnwind; return; } goto L_0053FACC; }
    c.budget -= 1;
L_0053FB00:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 348u)));  goto L_0053FB10; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 2;
L_0053FB10:
    set32(c.r[6], 0u + 256u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FB20u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053FB20u) [[unlikely]] return; }
L_0053FB20:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 319u));
    c.budget -= 1;
L_0053FB24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 18340u);  goto L_0053FB34; }
    st32((c.r[17].w[0] + 264u), 0u);
    set32(c.r[4], c.r[29].w[0] + 18340u);
    c.budget -= 2;
L_0053FB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FB3Cu);  if (depth < kMaxDepth) unit_010B(c, 85u, depth + 1u); else { c.pc = 0x0052D490u; return; } if (c.pc != 0x0053FB3Cu) [[unlikely]] return; }
L_0053FB3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0053FB4C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 18352u);  c.pc = t; return; }
L_0053FB80:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 188u), c.r[7].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0053FBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FBD0:
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[19].d[0] & 96ull;  goto L_0053FBE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FBE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] & 64ull;  goto L_0053FC6C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[18].w[0] + 256u)));
    c.r[4].d[0] = c.r[4].d[0] & 120ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[19].d[0] | c.r[4].d[0];  if (t) { goto L_0053FC0C; } }
    c.r[19].d[0] = c.r[19].d[0] | 64ull;
    c.budget -= 1;
L_0053FC0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 508u);
    set32(c.r[6], c.r[29].w[0] + 504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FC20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 366u, depth + 1u); else { c.pc = 0x0053BE90u; return; } if (c.pc != 0x0053FC20u) [[unlikely]] return; }
L_0053FC20:
    c.r[2].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053FC68; } }
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 508u)));  goto L_0053FC54; }
    set32(c.r[2], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FC68; } }
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] | 64ull;  if (t) { goto L_0053FC68; } }
L_0053FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FC68; } }
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 3;
L_0053FC68:
    c.r[2].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 1;
L_0053FC6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] | 32ull;  goto L_0053FC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FC7C:
    c.r[2].d[0] = c.r[19].d[0] & 24ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 1232u)));  if (t) { goto L_0053FC94; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 24ull;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_0053FC94:
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] | 8ull;  goto L_0053FCA8; }
    set32(c.r[2], 0u - 9u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_0053FCA8:
    c.r[2].d[0] = c.r[19].d[0] & 7ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] & 2ull;  goto L_0053FCC4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 4;
L_0053FCC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 4ull;  goto L_0053FCDC; }
    set32(c.r[2], 0u - 6u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_0053FCF0; } }
L_0053FCDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] | 1ull;  goto L_0053FCF0; }
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 3;
L_0053FCF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], ld32((c.r[18].w[0] + 260u)));  goto L_0053FD10; }
    c.r[3].d[0] = c.r[19].d[0] | 512ull;
    set32(c.r[2], 0u - 257u);
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[22], ld32((c.r[18].w[0] + 260u)));
    c.budget -= 4;
L_0053FD10:
    c.r[1].d[0] = c.r[22].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;  goto L_0053FD58; }
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0053FD40; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053FD34; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0053FD34:
    set32(c.r[6], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FD40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053FD40u) [[unlikely]] return; }
L_0053FD40:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053FD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 75u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FD54:
    c.r[1].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0053FD58:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], 0u + 1u);  goto L_0053FEE8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0053FD84; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053FD78; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0053FD78:
    set32(c.r[6], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FD84u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053FD84u) [[unlikely]] return; }
L_0053FD84:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0053FEE4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[21].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0053FDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053FDDC; } }
L_0053FDA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 316u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 1725u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FDC8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053FDC8u) [[unlikely]] return; }
L_0053FDC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0053FDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FDD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 101u, depth + 1u); else { c.pc = 0x00531490u; return; } if (c.pc != 0x0053FDD8u) [[unlikely]] return; }
L_0053FDD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053FDDC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0] + 160u), c.r[22].w[0]);  goto L_0053FDEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FDEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FE38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053FE38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 1736u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FE28u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053FE28u) [[unlikely]] return; }
L_0053FE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053FE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FE38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 264u));  goto L_0053FE50; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FE4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0053FE4Cu) [[unlikely]] return; }
L_0053FE4C:
    c.f[0] = ld32((c.r[18].w[0] + 264u));
    c.budget -= 1;
L_0053FE50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 19u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 2320u);
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], c.r[6].w[0] - 20880u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 272u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 240u), c.r[20].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FECCu); st32((c.r[16].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_010B(c, 93u, depth + 1u); else { c.pc = 0x0052D640u; return; } if (c.pc != 0x0053FECCu) [[unlikely]] return; }
L_0053FECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_0053FEDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_0053FEE8; } }
L_0053FEE4:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_0053FEE8:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; c.r[23].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0110(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[30].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 4;
L_0053FF00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053FF14; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0053FF14:
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FF28u); set32(c.r[6], 0u + 296u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0053FF28u) [[unlikely]] return; }
L_0053FF28:
    st32((c.r[29].w[0] + 452u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053FF68; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053FF48; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 2;
L_0053FF48:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FF58u); set32(c.r[7], c.r[29].w[0] + 500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053FF58u) [[unlikely]] return; }
L_0053FF58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 2188u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0053FF70; } }
    c.budget -= 1;
L_0053FF68:
    set32(c.r[2], 0u + 49u);
    c.budget -= 2;
L_0053FF70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;  goto L_0053FF80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0110(c, 5u, depth); } }
L_0053FF80:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0053FF98; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[2], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0053FFE4; } }
L_0053FF98:
    set32(c.r[16], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 500u)));  goto L_0053FFE8; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053FFE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 1825u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FFD4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053FFD4u) [[unlikely]] return; }
L_0053FFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0053FFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0110(c, 4u, depth); } }
L_0053FFE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 1;
L_0053FFE8:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0110(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053FFFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0053FFFCu) [[unlikely]] return; }
L_0053FFFC:
    c.budget -= 1;
    [[clang::musttail]] return unit_0110(c, 1u, depth);
}

}
