#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00FA[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0,
    0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00FA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004E8000;
    case 2u: goto L_004E8004;
    case 3u: goto L_004E8020;
    case 4u: goto L_004E8068;
    case 5u: goto L_004E8078;
    case 6u: goto L_004E809C;
    case 7u: goto L_004E80BC;
    case 8u: goto L_004E80DC;
    case 9u: goto L_004E80F4;
    case 10u: goto L_004E8110;
    case 11u: goto L_004E8198;
    case 12u: goto L_004E8210;
    case 13u: goto L_004E8228;
    case 14u: goto L_004E8264;
    case 15u: goto L_004E8270;
    case 16u: goto L_004E8284;
    case 17u: goto L_004E8298;
    case 18u: goto L_004E8304;
    case 19u: goto L_004E8338;
    case 20u: goto L_004E8364;
    case 21u: goto L_004E8610;
    case 22u: goto L_004E870C;
    case 23u: goto L_004E8740;
    case 24u: goto L_004E87E4;
    case 25u: goto L_004E87FC;
    case 26u: goto L_004E8814;
    case 27u: goto L_004E883C;
    case 28u: goto L_004E8860;
    case 29u: goto L_004E88B0;
    case 30u: goto L_004E88D8;
    case 31u: goto L_004E88E0;
    case 32u: goto L_004E88F4;
    case 33u: goto L_004E896C;
    case 34u: goto L_004E8988;
    case 35u: goto L_004E89B0;
    case 36u: goto L_004E8A08;
    case 37u: goto L_004E8A24;
    case 38u: goto L_004E8A34;
    case 39u: goto L_004E8A40;
    case 40u: goto L_004E8A68;
    case 41u: goto L_004E8B28;
    case 42u: goto L_004E8C28;
    case 43u: goto L_004E8C30;
    case 44u: goto L_004E8C74;
    case 45u: goto L_004E8CB4;
    case 46u: goto L_004E8CFC;
    case 47u: goto L_004E8D18;
    case 48u: goto L_004E8D40;
    case 49u: goto L_004E8EFC;
    case 50u: goto L_004E8F9C;
    case 51u: goto L_004E9098;
    case 52u: goto L_004E90C4;
    case 53u: goto L_004E9124;
    case 54u: goto L_004E9168;
    case 55u: goto L_004E919C;
    case 56u: goto L_004E92F0;
    case 57u: goto L_004E9348;
    case 58u: goto L_004E9360;
    case 59u: goto L_004E936C;
    case 60u: goto L_004E93E8;
    case 61u: goto L_004E946C;
    case 62u: goto L_004E9478;
    case 63u: goto L_004E948C;
    case 64u: goto L_004E94C8;
    case 65u: goto L_004E94D4;
    case 66u: goto L_004E94E0;
    case 67u: goto L_004E9624;
    case 68u: goto L_004E96F4;
    case 69u: goto L_004E9708;
    case 70u: goto L_004E9720;
    case 71u: goto L_004E975C;
    case 72u: goto L_004E97A0;
    case 73u: goto L_004E98B0;
    case 74u: goto L_004E98F0;
    case 75u: goto L_004E9910;
    case 76u: goto L_004E9958;
    case 77u: goto L_004E9968;
    case 78u: goto L_004E9984;
    case 79u: goto L_004E9994;
    case 80u: goto L_004E99B0;
    case 81u: goto L_004E99C4;
    case 82u: goto L_004E99D4;
    case 83u: goto L_004E99F8;
    case 84u: goto L_004E9A08;
    case 85u: goto L_004E9A24;
    case 86u: goto L_004E9A38;
    case 87u: goto L_004E9A48;
    case 88u: goto L_004E9A78;
    case 89u: goto L_004E9A88;
    case 90u: goto L_004E9AA4;
    case 91u: goto L_004E9AB8;
    case 92u: goto L_004E9AC8;
    case 93u: goto L_004E9AEC;
    case 94u: goto L_004E9B04;
    case 95u: goto L_004E9B24;
    case 96u: goto L_004E9B34;
    case 97u: goto L_004E9B50;
    case 98u: goto L_004E9B64;
    case 99u: goto L_004E9B74;
    case 100u: goto L_004E9BA0;
    case 101u: goto L_004E9BB0;
    case 102u: goto L_004E9BD0;
    case 103u: goto L_004E9BF8;
    case 104u: goto L_004E9C08;
    case 105u: goto L_004E9C34;
    case 106u: goto L_004E9C4C;
    case 107u: goto L_004E9C70;
    case 108u: goto L_004E9C80;
    case 109u: goto L_004E9C9C;
    case 110u: goto L_004E9CB0;
    case 111u: goto L_004E9CC0;
    case 112u: goto L_004E9CE4;
    case 113u: goto L_004E9CF4;
    case 114u: goto L_004E9D14;
    case 115u: goto L_004E9D34;
    case 116u: goto L_004E9D50;
    case 117u: goto L_004E9D6C;
    case 118u: goto L_004E9D84;
    case 119u: goto L_004E9D9C;
    case 120u: goto L_004E9DE4;
    case 121u: goto L_004E9DF8;
    case 122u: goto L_004E9E00;
    case 123u: goto L_004E9E10;
    case 124u: goto L_004E9E40;
    case 125u: goto L_004E9E58;
    case 126u: goto L_004E9E80;
    case 127u: goto L_004E9EAC;
    case 128u: goto L_004E9EB8;
    case 129u: goto L_004E9EC8;
    case 130u: goto L_004E9EE0;
    case 131u: goto L_004E9F00;
    case 132u: goto L_004E9F10;
    case 133u: goto L_004E9F2C;
    case 134u: goto L_004E9F40;
    case 135u: goto L_004E9F50;
    case 136u: goto L_004E9F60;
    case 137u: goto L_004E9F74;
    case 138u: goto L_004E9FA4;
    case 139u: goto L_004E9FB4;
    case 140u: goto L_004E9FE0;
    case 141u: goto L_004E9FF0;
    case 142u: goto L_004EA000;
    case 143u: goto L_004EA010;
    case 144u: goto L_004EA01C;
    case 145u: goto L_004EA028;
    case 146u: goto L_004EA034;
    case 147u: goto L_004EA044;
    case 148u: goto L_004EA0B4;
    case 149u: goto L_004EA0C4;
    case 150u: goto L_004EA144;
    case 151u: goto L_004EA154;
    case 152u: goto L_004EA170;
    case 153u: goto L_004EA17C;
    case 154u: goto L_004EA188;
    case 155u: goto L_004EA194;
    case 156u: goto L_004EA1A0;
    case 157u: goto L_004EA1AC;
    case 158u: goto L_004EA220;
    case 159u: goto L_004EA230;
    case 160u: goto L_004EA238;
    case 161u: goto L_004EA24C;
    case 162u: goto L_004EA25C;
    case 163u: goto L_004EA268;
    case 164u: goto L_004EA27C;
    case 165u: goto L_004EA29C;
    case 166u: goto L_004EA2AC;
    case 167u: goto L_004EA2C8;
    case 168u: goto L_004EA2DC;
    case 169u: goto L_004EA2EC;
    case 170u: goto L_004EA30C;
    case 171u: goto L_004EA31C;
    case 172u: goto L_004EA3A8;
    case 173u: goto L_004EA3B8;
    case 174u: goto L_004EA3D4;
    case 175u: goto L_004EA3E8;
    case 176u: goto L_004EA3F8;
    case 177u: goto L_004EA430;
    case 178u: goto L_004EA440;
    case 179u: goto L_004EA4D4;
    case 180u: goto L_004EA4E0;
    case 181u: goto L_004EA4EC;
    case 182u: goto L_004EA4FC;
    case 183u: goto L_004EA508;
    case 184u: goto L_004EA514;
    case 185u: goto L_004EA524;
    case 186u: goto L_004EA530;
    case 187u: goto L_004EA53C;
    case 188u: goto L_004EA54C;
    case 189u: goto L_004EA558;
    case 190u: goto L_004EA564;
    case 191u: goto L_004EA56C;
    case 192u: goto L_004EA584;
    case 193u: goto L_004EA598;
    case 194u: goto L_004EA5A8;
    case 195u: goto L_004EA5C4;
    case 196u: goto L_004EA5D0;
    case 197u: goto L_004EA600;
    case 198u: goto L_004EA634;
    case 199u: goto L_004EA640;
    case 200u: goto L_004EA65C;
    case 201u: goto L_004EA6AC;
    case 202u: goto L_004EA6B8;
    case 203u: goto L_004EA6CC;
    case 204u: goto L_004EA6E0;
    case 205u: goto L_004EA6F4;
    case 206u: goto L_004EA878;
    case 207u: goto L_004EA884;
    case 208u: goto L_004EA8F8;
    case 209u: goto L_004EA930;
    case 210u: goto L_004EA980;
    case 211u: goto L_004EA990;
    case 212u: goto L_004EA9AC;
    case 213u: goto L_004EA9C4;
    case 214u: goto L_004EA9D4;
    case 215u: goto L_004EA9EC;
    case 216u: goto L_004EA9F4;
    case 217u: goto L_004EAA34;
    case 218u: goto L_004EAA70;
    case 219u: goto L_004EAAA8;
    case 220u: goto L_004EAAC4;
    case 221u: goto L_004EAAE0;
    case 222u: goto L_004EAAFC;
    case 223u: goto L_004EAB2C;
    case 224u: goto L_004EAB60;
    case 225u: goto L_004EAB74;
    case 226u: goto L_004EAB90;
    case 227u: goto L_004EABA4;
    case 228u: goto L_004EABB4;
    case 229u: goto L_004EABD0;
    case 230u: goto L_004EABDC;
    case 231u: goto L_004EAC00;
    case 232u: goto L_004EAC18;
    case 233u: goto L_004EAC44;
    case 234u: goto L_004EAC64;
    case 235u: goto L_004EAC74;
    case 236u: goto L_004EAC90;
    case 237u: goto L_004EACB0;
    case 238u: goto L_004EACC0;
    case 239u: goto L_004EACDC;
    case 240u: goto L_004EACFC;
    case 241u: goto L_004EAD0C;
    case 242u: goto L_004EAD28;
    case 243u: goto L_004EAD48;
    case 244u: goto L_004EAD58;
    case 245u: goto L_004EAD74;
    case 246u: goto L_004EAD94;
    case 247u: goto L_004EADA4;
    case 248u: goto L_004EADC0;
    case 249u: goto L_004EADEC;
    case 250u: goto L_004EAE10;
    case 251u: goto L_004EAE70;
    case 252u: goto L_004EAE80;
    case 253u: goto L_004EAE94;
    case 254u: goto L_004EAEA4;
    case 255u: goto L_004EAEB8;
    case 256u: goto L_004EAEC8;
    case 257u: goto L_004EAEDC;
    case 258u: goto L_004EAEEC;
    case 259u: goto L_004EAF08;
    case 260u: goto L_004EAF18;
    case 261u: goto L_004EAF28;
    case 262u: goto L_004EAF34;
    case 263u: goto L_004EAF40;
    case 264u: goto L_004EAF7C;
    case 265u: goto L_004EAF84;
    case 266u: goto L_004EAF98;
    case 267u: goto L_004EAFAC;
    case 268u: goto L_004EAFC0;
    case 269u: goto L_004EAFEC;
    case 270u: goto L_004EB020;
    case 271u: goto L_004EB048;
    case 272u: goto L_004EB058;
    case 273u: goto L_004EB070;
    case 274u: goto L_004EB088;
    case 275u: goto L_004EB094;
    case 276u: goto L_004EB09C;
    case 277u: goto L_004EB0B0;
    case 278u: goto L_004EB0C0;
    case 279u: goto L_004EB0D0;
    case 280u: goto L_004EB0E0;
    case 281u: goto L_004EB0F8;
    case 282u: goto L_004EB110;
    case 283u: goto L_004EB128;
    case 284u: goto L_004EB140;
    case 285u: goto L_004EB178;
    case 286u: goto L_004EB18C;
    case 287u: goto L_004EB1B0;
    case 288u: goto L_004EB1C4;
    case 289u: goto L_004EB1D8;
    case 290u: goto L_004EB1F8;
    case 291u: goto L_004EB228;
    case 292u: goto L_004EB240;
    case 293u: goto L_004EB264;
    case 294u: goto L_004EB280;
    case 295u: goto L_004EB298;
    case 296u: goto L_004EB2B0;
    case 297u: goto L_004EB2E0;
    case 298u: goto L_004EB2F8;
    case 299u: goto L_004EB320;
    case 300u: goto L_004EB330;
    case 301u: goto L_004EB33C;
    case 302u: goto L_004EB348;
    case 303u: goto L_004EB354;
    case 304u: goto L_004EB368;
    case 305u: goto L_004EB388;
    case 306u: goto L_004EB3A8;
    case 307u: goto L_004EB3B4;
    case 308u: goto L_004EB3E0;
    case 309u: goto L_004EB458;
    case 310u: goto L_004EB474;
    case 311u: goto L_004EB484;
    case 312u: goto L_004EB4A0;
    case 313u: goto L_004EB4B4;
    case 314u: goto L_004EB4C4;
    case 315u: goto L_004EB4E4;
    case 316u: goto L_004EB500;
    case 317u: goto L_004EB510;
    case 318u: goto L_004EB52C;
    case 319u: goto L_004EB590;
    case 320u: goto L_004EB600;
    case 321u: goto L_004EB608;
    case 322u: goto L_004EB654;
    case 323u: goto L_004EB670;
    case 324u: goto L_004EB680;
    case 325u: goto L_004EB6A8;
    case 326u: goto L_004EB6C4;
    case 327u: goto L_004EB6D4;
    case 328u: goto L_004EB70C;
    case 329u: goto L_004EB728;
    case 330u: goto L_004EB738;
    case 331u: goto L_004EB790;
    case 332u: goto L_004EB7B4;
    case 333u: goto L_004EB7C4;
    case 334u: goto L_004EB7E0;
    case 335u: goto L_004EB7F4;
    case 336u: goto L_004EB804;
    case 337u: goto L_004EB818;
    case 338u: goto L_004EB834;
    case 339u: goto L_004EB844;
    case 340u: goto L_004EB860;
    case 341u: goto L_004EB874;
    case 342u: goto L_004EB884;
    case 343u: goto L_004EB8CC;
    case 344u: goto L_004EB8F8;
    case 345u: goto L_004EB918;
    case 346u: goto L_004EB934;
    case 347u: goto L_004EB944;
    case 348u: goto L_004EB96C;
    case 349u: goto L_004EB988;
    case 350u: goto L_004EB998;
    case 351u: goto L_004EB9BC;
    case 352u: goto L_004EB9D8;
    case 353u: goto L_004EB9E8;
    case 354u: goto L_004EBA68;
    case 355u: goto L_004EBA84;
    case 356u: goto L_004EBA94;
    case 357u: goto L_004EBAB0;
    case 358u: goto L_004EBAD8;
    case 359u: goto L_004EBB10;
    case 360u: goto L_004EBB40;
    case 361u: goto L_004EBB5C;
    case 362u: goto L_004EBB6C;
    case 363u: goto L_004EBB88;
    case 364u: goto L_004EBBC0;
    case 365u: goto L_004EBC44;
    case 366u: goto L_004EBCD0;
    case 367u: goto L_004EBCD8;
    case 368u: goto L_004EBCE8;
    case 369u: goto L_004EBDE4;
    case 370u: goto L_004EBE0C;
    case 371u: goto L_004EBE48;
    case 372u: goto L_004EBE54;
    case 373u: goto L_004EBE60;
    case 374u: goto L_004EBE6C;
    case 375u: goto L_004EBE78;
    case 376u: goto L_004EBE84;
    case 377u: goto L_004EBE90;
    case 378u: goto L_004EBEA4;
    case 379u: goto L_004EBEB0;
    case 380u: goto L_004EBEB8;
    case 381u: goto L_004EBF80;
    default: bad_entry(c, 0x004E8000u); return;
    }
L_004E8000:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E8004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E8020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23696u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_004E8078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8068u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E8068u) [[unlikely]] return; }
L_004E8068:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8078u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E8078u) [[unlikely]] return; }
L_004E8078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], c.r[5].w[0] - 6496u);
    set32(c.r[6], c.r[6].w[0] - 6864u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 7u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E809Cu); st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004E809Cu) [[unlikely]] return; }
L_004E809C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    set32(c.r[5], c.r[5].w[0] - 10688u);
    set32(c.r[6], c.r[6].w[0] - 4096u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E80BCu); set32(c.r[8], 0u + 7u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004E80BCu) [[unlikely]] return; }
L_004E80BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 10704u);
    set32(c.r[6], c.r[6].w[0] - 7344u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E80DCu); set32(c.r[8], 0u + 7u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004E80DCu) [[unlikely]] return; }
L_004E80DC:
    st8((c.r[17].w[0] + 124u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E80F4u); st8((c.r[17].w[0] + 125u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00F9(c, 390u, depth + 1u); else { c.pc = 0x004E7570u; return; } if (c.pc != 0x004E80F4u) [[unlikely]] return; }
L_004E80F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E8110:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E8154; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[20].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
L_004E8154:
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_004E835C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 412u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    c.f[12] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8198u); set32(c.r[7], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004E8198u) [[unlikely]] return; }
L_004E8198:
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[6], c.r[20].w[0] + 160u);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[20].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[20].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[20].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[20].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[20].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[20].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.f[12] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8210u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 105u, depth + 1u); else { c.pc = 0x00464F90u; return; } if (c.pc != 0x004E8210u) [[unlikely]] return; }
L_004E8210:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.f[12] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[6], c.r[20].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8228u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 99u, depth + 1u); else { c.pc = 0x00464E30u; return; } if (c.pc != 0x004E8228u) [[unlikely]] return; }
L_004E8228:
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 10;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 64u)));  goto L_004E82E8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8264u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x004E8264u) [[unlikely]] return; }
L_004E8264:
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8270u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004E8270u) [[unlikely]] return; }
L_004E8270:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_004E82B0; } }
    set32(c.r[21], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8284u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004E8284u) [[unlikely]] return; }
L_004E8284:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[20].w[0] + 80u));  goto L_004E82B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8298u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004E8298u) [[unlikely]] return; }
L_004E8298:
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E82B0; } }
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.budget -= 2;
L_004E82B0:
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.budget -= 1;
L_004E82B4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[20].w[0] + 76u), c.f[0]);  if (t) { goto L_004E82E4; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 10;
L_004E82E4:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_004E82E8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 306u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004E82FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), 0u);  if (t) { goto L_004E8588; } }
L_004E82FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8304u);  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x004E8304u) [[unlikely]] return; }
L_004E8304:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32640u));  goto L_004E8354; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 306u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32640u));  goto L_004E834C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E8348; } }
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8338u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x004E8338u) [[unlikely]] return; }
L_004E8338:
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.f[0]);  if (t) { goto L_004E8588; } }
L_004E8348:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 1;
L_004E834C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.f[0]);  if (t) { goto L_004E8588; } }
L_004E8354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 204u), c.f[0]);  if (t) { goto L_004E8588; } }
L_004E835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8364u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E8364u) [[unlikely]] return; }
L_004E8364:
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[20].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[20].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[20].w[0] + 92u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    st32((c.r[20].w[0] + 108u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 100u));
    st32((c.r[20].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    st32((c.r[20].w[0] + 116u), c.f[1]);
    c.f[3] = ld32((c.r[20].w[0] + 108u));
    c.f[2] = ld32((c.r[20].w[0] + 112u));
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x41000000u);
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[20].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[20].w[0] + 116u), c.f[1]);
    set32(c.r[24], ld32((c.r[19].w[0] + 124u)));
    c.f[1] = ld32((c.r[24].w[0] + 384u));
    c.f[3] = ld32((c.r[24].w[0] + 388u));
    c.f[2] = ld32((c.r[24].w[0] + 392u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    st32((c.r[20].w[0] + 96u), c.f[1]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[20].w[0] + 100u), c.f[3]);
    st32((c.r[20].w[0] + 104u), c.f[2]);
    c.f[7] = ld32((c.r[20].w[0] + 116u));
    c.f[4] = ld32((c.r[20].w[0] + 100u));
    c.f[2] = ld32((c.r[20].w[0] + 104u));
    c.f[3] = ld32((c.r[20].w[0] + 112u));
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.f[5] = ld32((c.r[20].w[0] + 108u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[6] = ld32((c.r[20].w[0] + 96u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[6], c.f[7]));
    st32((c.r[20].w[0] + 120u), c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    st32((c.r[20].w[0] + 124u), c.f[2]);
    st32((c.r[20].w[0] + 128u), c.f[1]);
    st32((c.r[20].w[0] + 164u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 160u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 172u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 168u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] - 7040u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] - 7036u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] - 7032u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] - 7028u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] - 7024u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] - 7020u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] - 7016u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] - 7012u));
    st32((c.r[20].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] - 7008u));
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] - 7004u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 7000u));
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] - 6996u));
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] - 6992u));
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] - 6988u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6984u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 6980u));
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 88u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 92u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.f[2] = ld32((c.r[20].w[0] + 124u));
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 96u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.budget -= 137;
L_004E8588:
    c.f[5] = ld32((c.r[17].w[0] + 432u));
    c.f[2] = ld32((c.r[17].w[0] + 368u));
    c.f[4] = ld32((c.r[17].w[0] + 436u));
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[3] = ld32((c.r[17].w[0] + 440u));
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[20].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 804u));
    st32((c.r[20].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 808u));
    st32((c.r[20].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 812u));
    st32((c.r[20].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    st32((c.r[20].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 140u));
    st32((c.r[20].w[0] + 152u), c.f[0]);
    c.f[5] = ld32((c.r[20].w[0] + 144u));
    c.f[2] = ld32((c.r[17].w[0] + 816u));
    c.f[4] = ld32((c.r[20].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0] + 820u));
    c.f[3] = ld32((c.r[20].w[0] + 152u));
    c.f[0] = ld32((c.r[17].w[0] + 824u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8610u); st32((c.r[20].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E8610u) [[unlikely]] return; }
L_004E8610:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = ld32((c.r[20].w[0] + 92u));
    c.f[7] = ld32((c.r[20].w[0] + 120u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[6] = ld32((c.r[20].w[0] + 124u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[20].w[0] + 128u));
    c.facc = fp::mul(c.f[7], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 192u), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 160u));
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[20].w[0] + 176u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 164u));
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[20].w[0] + 180u), c.f[1]);
    st32((c.r[20].w[0] + 248u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 828u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004E8694; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E8694:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_004E86B8; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_004E86B8:
    c.f[0] = ld32((c.r[28].w[0] - 32112u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32108u));
    c.f[2] = fp::min(c.f[0], c.f[1]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 168u));
    c.f[0] = ld32((c.r[20].w[0] + 196u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 184u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 172u));
    c.f[0] = ld32((c.r[20].w[0] + 196u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E870Cu); st32((c.r[20].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_00CB(c, 36u, depth + 1u); else { c.pc = 0x0042C330u; return; } if (c.pc != 0x004E870Cu) [[unlikely]] return; }
L_004E870C:
    st32((c.r[20].w[0] + 216u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004E8740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31728u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[17], c.r[16].w[0] + 224u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 208u), c.f[0]);
    st32((c.r[4].w[0] + 212u), 0u);
    st32((c.r[4].w[0] + 216u), 0u);
    c.budget -= 39;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st32((c.r[4].w[0] + 220u), 0u);  if (t) { goto L_004E8818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E87E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004E87E4u) [[unlikely]] return; }
L_004E87E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004E8804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E87FCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004E87FCu) [[unlikely]] return; }
L_004E87FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004E8804:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0]), c.r[5].w[0]);  goto L_004E881C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8814u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004E8814u) [[unlikely]] return; }
L_004E8814:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E8818:
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_004E881C:
    set32(c.r[4], c.r[16].w[0] + 224u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E883Cu); st32((c.r[16].w[0] + 244u), 0u);  if (depth < kMaxDepth) unit_00FA(c, 28u, depth + 1u); else { c.pc = 0x004E8860u; return; } if (c.pc != 0x004E883Cu) [[unlikely]] return; }
L_004E883C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E8860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E8988; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E88B0u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004E88B0u) [[unlikely]] return; }
L_004E88B0:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004E8908; } }
L_004E88D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E88E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x004E88E0u) [[unlikely]] return; }
L_004E88E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_004E88F8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E88F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 138u, depth + 1u); else { c.pc = 0x00401DB0u; return; } if (c.pc != 0x004E88F4u) [[unlikely]] return; }
L_004E88F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004E88F8:
    set32(c.r[17], c.r[17].w[0] + 68u);
    set32(c.r[18], c.r[18].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_004E8908:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E88D8u | kUnwind; return; } goto L_004E88D8; }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004E8964; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_004E8964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E896Cu);  if (depth < kMaxDepth) unit_00C0(c, 177u, depth + 1u); else { c.pc = 0x00402790u; return; } if (c.pc != 0x004E896Cu) [[unlikely]] return; }
L_004E896C:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004E898C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E8988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8988u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E8988u) [[unlikely]] return; }
L_004E8988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004E898C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E89B0:
    set32(c.r[29], c.r[29].w[0] - 720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 10636u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8A08u); st32((c.r[29].w[0] + 716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E8A08u) [[unlikely]] return; }
L_004E8A08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 712u);  goto L_004E8A1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E8A44; } }
L_004E8A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8A24u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E8A24u) [[unlikely]] return; }
L_004E8A24:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 708u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8A34u); set32(c.r[6], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E8A34u) [[unlikely]] return; }
L_004E8A34:
    set32(c.r[4], c.r[29].w[0] + 712u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8A40u); set32(c.r[5], c.r[29].w[0] + 708u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E8A40u) [[unlikely]] return; }
L_004E8A40:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E8A44:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_004E92A4; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E92A0; } }
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8A68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 56u, depth + 1u); else { c.pc = 0x004E92F0u; return; } if (c.pc != 0x004E8A68u) [[unlikely]] return; }
L_004E8A68:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 1166u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[23].w[0] + 1052u)));  goto L_004E8A90; }
    set32(c.r[2], ld32((c.r[23].w[0] + 1052u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[23].w[0] + 1052u)));
    c.budget -= 4;
L_004E8A90:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E8AB8; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E8AB8; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004E8AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E8AD0; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 1252u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E8AD0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E8AD0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.f[2] = ld32((c.r[23].w[0] + 348u));  goto L_004E8AEC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E8AE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E8AE8:
    c.f[2] = ld32((c.r[23].w[0] + 348u));
    c.budget -= 1;
L_004E8AEC:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.f[1] = ld32((c.r[23].w[0] + 1424u));
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.f[0] = 0u;
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::min(c.f[1], c.f[0]);
    set32(c.r[2], c.r[20].w[0] + 40u);
    st16((c.r[29].w[0] + 528u), static_cast<std::uint16_t>(0u));
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 528u));
    c.budget -= 15;
L_004E8B28:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[23].w[0] + c.r[30].w[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1964u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);  if (t) { goto L_004E8B50; } }
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E8B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E8B60; } }
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E8B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[29].w[0] + 528u));  goto L_004E8B70; }
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[29].w[0] + 528u));
    c.budget -= 2;
L_004E8B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[9], ld32((c.r[20].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] >> 7);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.r[9].d[0] & 127ull;
    set32(c.r[7], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[4], 0u - 16u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[5], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[18].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[3].w[0] + 15u);
    c.r[17].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8C28u); st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004E8C28u) [[unlikely]] return; }
L_004E8C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8C30u);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x004E8C30u) [[unlikely]] return; }
L_004E8C30:
    set32(c.r[2], c.r[17].w[0] >> 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 257u);
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] - 11232u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 11248u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 11136u), 0u);
    st32((c.r[3].w[0] - 11264u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8C74u); set32(c.r[17], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x004E8C74u) [[unlikely]] return; }
L_004E8C74:
    set32(c.r[2], c.r[18].w[0] >> 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 257u);
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] - 11232u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 11248u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 11136u), c.r[17].w[0]);
    st32((c.r[3].w[0] - 11264u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8CB4u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x004E8CB4u) [[unlikely]] return; }
L_004E8CB4:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 257u);
    set32(c.r[5], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] - 11232u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 11248u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 11136u), c.r[17].w[0]);
    st32((c.r[3].w[0] - 11264u), c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8CFCu);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x004E8CFCu) [[unlikely]] return; }
L_004E8CFC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[29].w[0] + 608u);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8D18u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E8D18u) [[unlikely]] return; }
L_004E8D18:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 624u)));
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 612u)));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_004E9114; } }
L_004E8D40:
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.r[1].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_004E8DF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.f[3] = ld32((c.r[28].w[0] - 32076u));  if (t) { goto L_004E8D78; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E8D94; } }
L_004E8D78:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_004E8D94:
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[19].sd[0] < 0; c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));  if (t) { goto L_004E8DC0; } }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E8DDC; } }
L_004E8DC0:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004E8DDC:
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[24] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004E8E40; } }
L_004E8DF8:
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[3], c.r[19].w[0] >> 1);  goto L_004E8E0C; }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E8E24; } }
L_004E8E0C:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_004E8E24:
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
L_004E8E40:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = c.r[30].d[0] == 0ull; c.f[4] = fp::min(c.f[1], c.f[0]);  if (t) { goto L_004E8E68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[30].d[0] != c.r[2].d[0]) { c.f[23] = ld32((c.r[28].w[0] - 32316u));  goto L_004E8E6C; }
L_004E8E68:
    c.f[23] = ld32((c.r[28].w[0] - 31680u));
    c.budget -= 1;
L_004E8E6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.f[2] = ld32((c.r[28].w[0] - 31676u));
    c.f[0] = ld32((c.r[28].w[0] - 31672u));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[22].w[0] << 3);
    c.f[1] = c.r[4].w[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = c.r[4].w[0];
    set32(c.r[2], c.r[30].w[0] + c.r[18].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 64u));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E8ED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[0], c.f[4]);  if (t) { goto L_004E8ED4; } }
L_004E8ED0:
    c.f[20] = 0u;
    c.budget -= 1;
L_004E8ED4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 512u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);  goto L_004E8EE8; }
    set32(c.r[22], c.r[22].w[0] - 2u);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    c.budget -= 2;
L_004E8EE8:
    c.f[21] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 680u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8EFCu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004E8EFCu) [[unlikely]] return; }
L_004E8EFC:
    c.f[3] = ld32((c.r[29].w[0] + 680u));
    set32(c.r[2], c.r[22].w[0] << 1);
    c.f[4] = ld32((c.r[29].w[0] + 684u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 688u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[3] = fp::mul(c.f[21], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[29].w[0] + 664u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[5] = fp::mul(c.f[21], c.f[5]);
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[24]);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 700u), c.f[1]);
    st32((c.r[29].w[0] + 704u), c.f[2]);
    st32((c.r[29].w[0] + 696u), c.f[0]);
    c.f[21] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8F9Cu); set32(c.r[6], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004E8F9Cu) [[unlikely]] return; }
L_004E8F9C:
    c.f[3] = ld32((c.r[29].w[0] + 664u));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[5]);
    c.f[4] = ld32((c.r[29].w[0] + 668u));
    set32(c.r[7], c.r[22].w[0] << 3);
    c.f[5] = ld32((c.r[29].w[0] + 672u));
    set32(c.r[6], c.r[22].w[0] << 4);
    c.f[3] = fp::mul(c.f[21], c.f[3]);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[5]);
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[3], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] + 20u);
    set32(c.r[7], c.r[8].w[0] + 8u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 512u));
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[5] = fp::mul(c.f[21], c.f[5]);
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[20]);
    c.budget -= 33;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[6].w[0] + 28u), c.f[20]);  if (t) { goto L_004E907C; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[5]);
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);  goto L_004E9080; }
    c.f[0] = ld32((c.r[17].w[0]));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[5]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[5]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[8].w[0] + 24u), c.f[0]);
    st32((c.r[6].w[0] + 44u), c.f[20]);
    st32((c.r[6].w[0] + 60u), c.f[20]);
    c.budget -= 20;
L_004E907C:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.budget -= 1;
L_004E9080:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 1u);  goto L_004E90C8; }
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9098u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9098u) [[unlikely]] return; }
L_004E9098:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_004E90C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.f[12] = c.f[22];
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E90C4u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00FD(c, 565u, depth + 1u); else { c.pc = 0x004F79E0u; return; } if (c.pc != 0x004E90C4u) [[unlikely]] return; }
L_004E90C4:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004E90C8:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 5;
    if (c.r[21].d[0] != c.r[2].d[0]) { st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(0u));  goto L_004E9114; }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  goto L_004E9104; }
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 3;
L_004E9104:
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[21].w[0] + 512u);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_004E9114:
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9124u); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9124u) [[unlikely]] return; }
L_004E9124:
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[5].d[0] = ld16((c.r[20].w[0] + 74u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E8D40u | kUnwind; return; } goto L_004E8D40; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[4], 0u + 257u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] - 12256u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 12272u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 12160u), 0u);
    st32((c.r[3].w[0] - 12288u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9168u); set32(c.r[17], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004E9168u) [[unlikely]] return; }
L_004E9168:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[4], 0u + 257u);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] - 12256u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 12272u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 12160u), c.r[17].w[0]);
    st32((c.r[3].w[0] - 12288u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E919Cu); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004E919Cu) [[unlikely]] return; }
L_004E919C:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[5], 0u + 257u);
    set32(c.r[6], ld32((c.r[3].w[0] + 44u)));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] - 12256u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 12272u), c.r[6].w[0]);
    st32((c.r[4].w[0] - 12160u), c.r[17].w[0]);
    st32((c.r[4].w[0] - 12288u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[29].w[0] + 528u));  goto L_004E9288; }
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[1].w[0]);
    c.f[1] = ld32((c.r[5].w[0] - 4u));
    c.f[0] = c.r[3].w[0];
    c.f[7] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[5] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[5].w[0] - 8u));
    c.f[6] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[5].w[0] - 12u));
    c.f[3] = fp::add(c.f[7], c.f[3]);
    c.f[4] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[6], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.f[7], c.f[4]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    st32((c.r[29].w[0] + 640u), c.f[3]);
    c.f[3] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 644u), c.f[4]);
    st32((c.r[29].w[0] + 648u), c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 640u));
    c.f[1] = ld32((c.r[29].w[0] + 644u));
    c.f[0] = ld32((c.r[29].w[0] + 648u));
    st32((c.r[3].w[0] + 16u), c.f[2]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 13ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 528u));
    c.budget -= 46;
L_004E9288:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 528u));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 528u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E8B28u | kUnwind; return; } goto L_004E8B28; }
L_004E92A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_004E92A4:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_004E92F0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[20] = c.f[12];
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[3].w[0] + 112u);  if (t) { goto L_004E93FC; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9348u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9348u) [[unlikely]] return; }
L_004E9348:
    set32(c.r[21], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 304u)));  if (t) { goto L_004E93D8; } }
L_004E9360:
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_004E936C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E936Cu | kUnwind; return; } goto L_004E936C; } }
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    st32((c.r[6].w[0] + 48u), c.f[2]);
    st32((c.r[6].w[0] + 52u), c.f[1]);
    st32((c.r[6].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[6].w[0] + 60u), c.f[0]);
    st32((c.r[6].w[0] + 68u), c.f[20]);
    st32((c.r[6].w[0] + 72u), 0u);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; st32((c.r[6].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_004E93D8; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[22].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004E93D4; }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004E93D4:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004E93D8:
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E93E8u); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E93E8u) [[unlikely]] return; }
L_004E93E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9360u | kUnwind; return; } goto L_004E9360; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004E93FC:
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_004E9480; }
    set32(c.r[5], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[20].w[0] + 36u);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[7], c.r[2].w[0] >> 7);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E946Cu); st32((c.r[29].w[0] + 396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 103u, depth + 1u); else { c.pc = 0x00124DC0u; return; } if (c.pc != 0x004E946Cu) [[unlikely]] return; }
L_004E946C:
    set32(c.r[4], c.r[20].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9478u); set32(c.r[5], c.r[29].w[0] + 396u);  if (depth < kMaxDepth) unit_00DB(c, 113u, depth + 1u); else { c.pc = 0x0046D9A0u; return; } if (c.pc != 0x004E9478u) [[unlikely]] return; }
L_004E9478:
    st32((c.r[20].w[0] + 80u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 2;
L_004E9480:
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E948Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E948Cu) [[unlikely]] return; }
L_004E948C:
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 336u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 348u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E94C8u); st32((c.r[29].w[0] + 356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FA(c, 73u, depth + 1u); else { c.pc = 0x004E98B0u; return; } if (c.pc != 0x004E94C8u) [[unlikely]] return; }
L_004E94C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E94D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00FA(c, 72u, depth + 1u); else { c.pc = 0x004E97A0u; return; } if (c.pc != 0x004E94D4u) [[unlikely]] return; }
L_004E94D4:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E94E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 73u, depth + 1u); else { c.pc = 0x004E98B0u; return; } if (c.pc != 0x004E94E0u) [[unlikely]] return; }
L_004E94E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.f[5] = ld32((c.r[19].w[0] + 48u));
    c.f[3] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.f[4] = ld32((c.r[7].w[0] + 48u));
    c.f[2] = ld32((c.r[7].w[0] + 52u));
    c.f[0] = ld32((c.r[7].w[0] + 56u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = fp::sqrt(c.f[6]);
    set32(c.r[6], ld32((c.r[5].w[0] + 124u)));
    c.f[4] = ld32((c.r[5].w[0] + 120u));
    c.f[2] = ld32((c.r[6].w[0] + 1424u));
    c.f[1] = c.r[3].w[0];
    c.f[3] = 0u;
    fpu_div(c, 2u, c.f[4], c.f[2]);
    c.f[5] = ld32((c.r[28].w[0] - 32620u));
    c.f[0] = c.r[4].w[0];
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = fp::max(c.f[0], c.f[5]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1964u));
    c.f[1] = fp::mul(c.f[6], c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[7].w[0] + 72u));
    c.f[2] = ld32((c.r[20].w[0] + 84u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.budget -= 40;
    { const bool t = c.r[4].d[0] != 0ull; c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));  if (t) { goto L_004E958C; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1966u));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 1052u)));  goto L_004E9594; }
L_004E958C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E95DC; } }
L_004E9594:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004E95AC; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E95AC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004E95AC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_004E95DC; }
    set32(c.r[4], ld32((c.r[6].w[0] + 1252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004E95D8; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1185u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004E95D8; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 60u)));  goto L_004E95E0; }
L_004E95D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004E95DC:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_004E95E0:
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], ld32((c.r[20].w[0] + 52u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[9], c.r[4].w[0] >> 7);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 17;
L_004E9624:
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9624u | kUnwind; return; } goto L_004E9624; } }
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = c.r[4].w[0];
    st32((c.r[8].w[0] + 48u), c.f[3]);
    st32((c.r[8].w[0] + 52u), c.f[2]);
    st32((c.r[8].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[8].w[0] + 60u), c.f[1]);
    st32((c.r[8].w[0] + 68u), c.f[20]);
    st32((c.r[8].w[0] + 72u), c.f[4]);
    st32((c.r[8].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[6].w[0] - 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[6], c.r[7].w[0] >> 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 36;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004E976C; }
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E96F4u); c.f[12] = ld32((c.r[2].w[0] + 72u));  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x004E96F4u) [[unlikely]] return; }
L_004E96F4:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9708u) [[unlikely]] return; }
L_004E9708:
    set32(c.r[17], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_004E974C; } }
L_004E9720:
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[21].d[0]; st32((c.r[2].w[0] + 72u), c.f[0]);  if (t) { goto L_004E974C; } }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[16].d[0]) { set32(c.r[19], ld32((c.r[18].w[0])));  goto L_004E9748; }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_004E9748:
    set32(c.r[21], c.r[19].w[0] + 512u);
    c.budget -= 1;
L_004E974C:
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E975Cu); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E975Cu) [[unlikely]] return; }
L_004E975C:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9720u | kUnwind; return; } goto L_004E9720; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004E976C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_004E97A0:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004E97C0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004E97C0:
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] < 0) { set32(c.r[2], 0u + 127u);  goto L_004E97E8; }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 7));  if (t) { goto L_004E9800; } }
    set32(c.r[2], c.r[8].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E9800; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_004E97E8:
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));  if (t) { goto L_004E9800; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 2;
L_004E9800:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_004E9898; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004E9824; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004E9824:
    set32(c.r[3], c.r[9].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004E9838; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004E9838:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_004E9850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_004E985C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004E9850:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_004E9860; }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_004E985C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_004E9860:
    set32(c.r[2], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_004E98A4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_004E9898:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_004E98A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004E98B0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004E98F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E9904; } }
    st32((c.r[4].w[0] + 80u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004E9904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E9910:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9958u); st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004E9958u) [[unlikely]] return; }
L_004E9958:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9968u); st32((c.r[29].w[0] + 212u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E9968u) [[unlikely]] return; }
L_004E9968:
    set32(c.r[16], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_004E99D4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[18].w[0]);  goto L_004E99B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9984u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9984u) [[unlikely]] return; }
L_004E9984:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9994u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9994u) [[unlikely]] return; }
L_004E9994:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E99B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E99B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E99B0u) [[unlikely]] return; }
L_004E99B0:
    st32((c.r[20].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_004E99B4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E99D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E99C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E99C4u) [[unlikely]] return; }
L_004E99C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E99D4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E99D4u) [[unlikely]] return; }
L_004E99D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004E9A50; }
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_004E9AC8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[17].w[0]);  goto L_004E9A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E99F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E99F8u) [[unlikely]] return; }
L_004E99F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A08u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9A08u) [[unlikely]] return; }
L_004E9A08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E9A24; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9A24u) [[unlikely]] return; }
L_004E9A24:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004E9A28:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9A38u) [[unlikely]] return; }
L_004E9A38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A48u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9A48u) [[unlikely]] return; }
L_004E9A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E9AC8; } }
L_004E9A50:
    set32(c.r[17], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_004E9AC8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[16].w[0]);  goto L_004E9AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9A78u) [[unlikely]] return; }
L_004E9A78:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9A88u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9A88u) [[unlikely]] return; }
L_004E9A88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E9AA4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9AA4u) [[unlikely]] return; }
L_004E9AA4:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_004E9AA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9AB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9AB8u) [[unlikely]] return; }
L_004E9AB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9AC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9AC8u) [[unlikely]] return; }
L_004E9AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 10656u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[20].w[0] + 20u), c.r[21].w[0]);  if (t) { goto L_004E9AE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004E9AEC; } }
L_004E9AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9AECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004E9AECu) [[unlikely]] return; }
L_004E9AEC:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B04u); set32(c.r[5], c.r[29].w[0] + 220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9B04u) [[unlikely]] return; }
L_004E9B04:
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_004E9B74; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), c.r[16].w[0]);  goto L_004E9B54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9B24u) [[unlikely]] return; }
L_004E9B24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B34u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9B34u) [[unlikely]] return; }
L_004E9B34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E9B50; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9B50u) [[unlikely]] return; }
L_004E9B50:
    st32((c.r[20].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_004E9B54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E9B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9B64u) [[unlikely]] return; }
L_004E9B64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9B74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9B74u) [[unlikely]] return; }
L_004E9B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_004E9BD4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9BA0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9BA0u) [[unlikely]] return; }
L_004E9BA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9BB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9BB0u) [[unlikely]] return; }
L_004E9BB0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004E9BD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9BD0u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004E9BD0u) [[unlikely]] return; }
L_004E9BD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_004E9BD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  goto L_004E9BF0; }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 220u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_004E9C00; }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_004E9BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9BF8u); st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E9BF8u) [[unlikely]] return; }
L_004E9BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004E9E14; } }
L_004E9C00:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 2;
L_004E9C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[21], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32560u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004E9C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_004E9C34; } }
L_004E9C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9C34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004E9C34u) [[unlikely]] return; }
L_004E9C34:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9C4Cu); set32(c.r[5], c.r[29].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9C4Cu) [[unlikely]] return; }
L_004E9C4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  goto L_004E9CC4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);  goto L_004E9CA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9C70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9C70u) [[unlikely]] return; }
L_004E9C70:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9C80u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9C80u) [[unlikely]] return; }
L_004E9C80:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E9C9C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9C9Cu) [[unlikely]] return; }
L_004E9C9C:
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_004E9CA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 88u), c.r[16].w[0]);  if (t) { goto L_004E9CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9CB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9CB0u) [[unlikely]] return; }
L_004E9CB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9CC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9CC0u) [[unlikely]] return; }
L_004E9CC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004E9CC4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004E9D18; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9CE4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9CE4u) [[unlikely]] return; }
L_004E9CE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9CF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9CF4u) [[unlikely]] return; }
L_004E9CF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004E9D14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9D14u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004E9D14u) [[unlikely]] return; }
L_004E9D14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004E9D18:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9C08u | kUnwind; return; } goto L_004E9C08; } }
    st16((c.r[20].w[0] + 74u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[5].d[0] = ld16((c.r[20].w[0] + 74u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9D34u); set32(c.r[4], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_00FA(c, 296u, depth + 1u); else { c.pc = 0x004EB2B0u; return; } if (c.pc != 0x004E9D34u) [[unlikely]] return; }
L_004E9D34:
    c.r[16].d[0] = ld16((c.r[20].w[0] + 74u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9D50u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004E9D50u) [[unlikely]] return; }
L_004E9D50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25024u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9D6Cu); set32(c.r[7], 0u + 80u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004E9D6Cu) [[unlikely]] return; }
L_004E9D6C:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9D84u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9D84u) [[unlikely]] return; }
L_004E9D84:
    set32(c.r[16], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_004E9DD4; } }
L_004E9D9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[19].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_004E9DD4; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[22].d[0]) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_004E9DD0; }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004E9DD0:
    set32(c.r[19], c.r[18].w[0] + 512u);
    c.budget -= 1;
L_004E9DD4:
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9DE4u); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004E9DE4u) [[unlikely]] return; }
L_004E9DE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9D9Cu | kUnwind; return; } goto L_004E9D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9DF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 126u, depth + 1u); else { c.pc = 0x004E9E80u; return; } if (c.pc != 0x004E9DF8u) [[unlikely]] return; }
L_004E9DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9E00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 197u, depth + 1u); else { c.pc = 0x004EA600u; return; } if (c.pc != 0x004E9E00u) [[unlikely]] return; }
L_004E9E00:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9E10u); st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E9E10u) [[unlikely]] return; }
L_004E9E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004E9E14:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004E9E40:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
L_004E9E58:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E9E58u | kUnwind; return; } goto L_004E9E58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004E9E80:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9EACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004E9EACu) [[unlikely]] return; }
L_004E9EAC:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9EB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E9EB8u) [[unlikely]] return; }
L_004E9EB8:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9EC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E9EC8u) [[unlikely]] return; }
L_004E9EC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 16u)));  goto L_004E9EE8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9EE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004E9EE0u) [[unlikely]] return; }
L_004E9EE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 2;
L_004E9EE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_004E9F50; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 16u), c.r[17].w[0]);  goto L_004E9F30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9F00u) [[unlikely]] return; }
L_004E9F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F10u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9F10u) [[unlikely]] return; }
L_004E9F10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E9F2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E9F2Cu) [[unlikely]] return; }
L_004E9F2C:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_004E9F30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E9F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9F40u) [[unlikely]] return; }
L_004E9F40:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F50u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9F50u) [[unlikely]] return; }
L_004E9F50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F60u); set32(c.r[5], c.r[5].w[0] + 10671u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004E9F60u) [[unlikely]] return; }
L_004E9F60:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9F74u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004E9F74u) [[unlikely]] return; }
L_004E9F74:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_004E9F88; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004E9F88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004E9F9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004E9FA4; } }
L_004E9F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9FA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004E9FA4u) [[unlikely]] return; }
L_004E9FA4:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9FB4u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004E9FB4u) [[unlikely]] return; }
L_004E9FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004EA014; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9FE0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E9FE0u) [[unlikely]] return; }
L_004E9FE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E9FF0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E9FF0u) [[unlikely]] return; }
L_004E9FF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004EA010; } }
L_004EA000:
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA010u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004EA010u) [[unlikely]] return; }
L_004EA010:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004EA014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004EA01Cu) [[unlikely]] return; }
L_004EA01C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA028u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004EA028u) [[unlikely]] return; }
L_004EA028:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA034u) [[unlikely]] return; }
L_004EA034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EA084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA044u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004EA044u) [[unlikely]] return; }
L_004EA044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004EA084:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA0B4u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA0B4u) [[unlikely]] return; }
L_004EA0B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EA10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA0C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004EA0C4u) [[unlikely]] return; }
L_004EA0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004EA10C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA144u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA144u) [[unlikely]] return; }
L_004EA144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EA1B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA154u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004EA154u) [[unlikely]] return; }
L_004EA154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA170u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004EA170u) [[unlikely]] return; }
L_004EA170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA17Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004EA17Cu) [[unlikely]] return; }
L_004EA17C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA188u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004EA188u) [[unlikely]] return; }
L_004EA188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004EA194u) [[unlikely]] return; }
L_004EA194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA1A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004EA1A0u) [[unlikely]] return; }
L_004EA1A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA1ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004EA1ACu) [[unlikely]] return; }
L_004EA1AC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004EA1B4:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + 10683u);
    c.r[5].d[0] = c.r[5].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA220u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004EA220u) [[unlikely]] return; }
L_004EA220:
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004EA230u) [[unlikely]] return; }
L_004EA230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA238u); set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004EA238u) [[unlikely]] return; }
L_004EA238:
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[20].w[0]);  if (t) { goto L_004EA25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA24Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA24Cu) [[unlikely]] return; }
L_004EA24C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA25Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA25Cu) [[unlikely]] return; }
L_004EA25C:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA268u) [[unlikely]] return; }
L_004EA268:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 32u)));  goto L_004EA284; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA27Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004EA27Cu) [[unlikely]] return; }
L_004EA27C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 2;
L_004EA284:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[20], ld32((c.r[19].w[0] + 32u)));  goto L_004EA2F0; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 32u), c.r[21].w[0]);  goto L_004EA2CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA29Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA29Cu) [[unlikely]] return; }
L_004EA29C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA2ACu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA2ACu) [[unlikely]] return; }
L_004EA2AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EA2C8; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA2C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA2C8u) [[unlikely]] return; }
L_004EA2C8:
    st32((c.r[19].w[0] + 32u), c.r[21].w[0]);
    c.budget -= 1;
L_004EA2CC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004EA2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA2DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA2DCu) [[unlikely]] return; }
L_004EA2DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA2ECu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA2ECu) [[unlikely]] return; }
L_004EA2EC:
    set32(c.r[20], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_004EA2F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_004EA38C; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA30Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA30Cu) [[unlikely]] return; }
L_004EA30C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));  goto L_004EA320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA31Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EA31Cu) [[unlikely]] return; }
L_004EA31C:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));
    c.budget -= 1;
L_004EA320:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EA344; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[20].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA384; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA384; } }
L_004EA344:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004EA36C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004EA388; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA384; } }
L_004EA36C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EA384; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EA384:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_004EA388:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004EA38C:
    set32(c.r[20], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 32u)));  goto L_004EA3FC; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  goto L_004EA3D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA3A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA3A8u) [[unlikely]] return; }
L_004EA3A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA3B8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA3B8u) [[unlikely]] return; }
L_004EA3B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EA3D4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA3D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA3D4u) [[unlikely]] return; }
L_004EA3D4:
    st32((c.r[22].w[0] + 8u), c.r[21].w[0]);
    c.budget -= 1;
L_004EA3D8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004EA3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA3E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA3E8u) [[unlikely]] return; }
L_004EA3E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA3F8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA3F8u) [[unlikely]] return; }
L_004EA3F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_004EA3FC:
    set32(c.r[2], 0u - 15u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[20], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_004EA4B4; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA430u) [[unlikely]] return; }
L_004EA430:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));  goto L_004EA444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA440u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EA440u) [[unlikely]] return; }
L_004EA440:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));
    c.budget -= 1;
L_004EA444:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EA468; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[20].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA4A8; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA4A8; } }
L_004EA468:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004EA490; }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004EA4AC; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EA4A8; } }
L_004EA490:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EA4A8; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EA4A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_004EA4AC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004EA4B4:
    set32(c.r[3], 0u - 12289u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA4D4u); set32(c.r[4], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EA4D4u) [[unlikely]] return; }
L_004EA4D4:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA4E0u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EA4E0u) [[unlikely]] return; }
L_004EA4E0:
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA4ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EA4ECu) [[unlikely]] return; }
L_004EA4EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA4FCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EA4FCu) [[unlikely]] return; }
L_004EA4FC:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA508u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EA508u) [[unlikely]] return; }
L_004EA508:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA514u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EA514u) [[unlikely]] return; }
L_004EA514:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA524u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EA524u) [[unlikely]] return; }
L_004EA524:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA530u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EA530u) [[unlikely]] return; }
L_004EA530:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA53Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EA53Cu) [[unlikely]] return; }
L_004EA53C:
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA54Cu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EA54Cu) [[unlikely]] return; }
L_004EA54C:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA558u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EA558u) [[unlikely]] return; }
L_004EA558:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA564u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EA564u) [[unlikely]] return; }
L_004EA564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA56Cu); set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004EA56Cu) [[unlikely]] return; }
L_004EA56C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA584u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA584u) [[unlikely]] return; }
L_004EA584:
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  goto L_004EA5C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA598u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA598u) [[unlikely]] return; }
L_004EA598:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA5A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA5A8u) [[unlikely]] return; }
L_004EA5A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EA5C4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA5C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA5C4u) [[unlikely]] return; }
L_004EA5C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_004EA5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA5D0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EA5D0u) [[unlikely]] return; }
L_004EA5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004EA600:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA634u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EA634u) [[unlikely]] return; }
L_004EA634:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA640u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EA640u) [[unlikely]] return; }
L_004EA640:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 74u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA65Cu); c.r[20].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00FA(c, 284u, depth + 1u); else { c.pc = 0x004EB140u; return; } if (c.pc != 0x004EA65Cu) [[unlikely]] return; }
L_004EA65C:
    c.r[6].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], 0u - 16u);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[16], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[30].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_004EAA00; } }
L_004EA6AC:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA6B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x004EA6B8u) [[unlikely]] return; }
L_004EA6B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA6CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x004EA6CCu) [[unlikely]] return; }
L_004EA6CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA6E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x004EA6E0u) [[unlikely]] return; }
L_004EA6E0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_004EA858; } }
L_004EA6F4:
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[9], c.r[18].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[22].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[4], c.r[5].w[0] << 1);
    st32((c.r[9].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[9].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] << 4);
    st32((c.r[9].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0] + 16u), 0u);
    st32((c.r[9].w[0] + 20u), 0u);
    st32((c.r[9].w[0] + 24u), 0u);
    st32((c.r[9].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 12u), 0u);
    st32((c.r[8].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 28u), 0u);
    st32((c.r[8].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 44u), 0u);
    st32((c.r[8].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 32;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[8].w[0] + 60u), 0u);  if (t) { goto L_004EA780; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EA79C; } }
L_004EA780:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004EA79C:
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[7].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[7].w[0] + 8u), 0u);  if (t) { goto L_004EA7B8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EA7D4; } }
L_004EA7B8:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004EA7D4:
    st32((c.r[7].w[0] + 12u), c.f[0]);
    st32((c.r[7].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[7].w[0] + 20u), 0u);  if (t) { goto L_004EA7F0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EA80C; } }
L_004EA7F0:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004EA80C:
    st32((c.r[7].w[0] + 24u), c.f[0]);
    st32((c.r[7].w[0] + 28u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[7].w[0] + 32u), 0u);  if (t) { goto L_004EA828; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EA844; } }
L_004EA828:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004EA844:
    st32((c.r[7].w[0] + 36u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 40u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[7].w[0] + 44u), 0u);
    c.budget -= 5;
L_004EA858:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 74u));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[7], c.r[5].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EA6F4u | kUnwind; return; } goto L_004EA6F4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA878u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004EA878u) [[unlikely]] return; }
L_004EA878:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004EA8D8; } }
L_004EA884:
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[7].w[0] + 3u);
    set32(c.r[6], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 2u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], c.r[8].w[0] + 1u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 18u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[6].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 21;
L_004EA8D8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 74u));
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EA884u | kUnwind; return; } goto L_004EA884; }
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA8F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EA8F8u) [[unlikely]] return; }
L_004EA8F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 220u)));  goto L_004EA938; }
    st64((c.r[29].w[0]), c.r[20].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA930u); st64((c.r[29].w[0] + 8u), c.r[23].d[0]);  if (depth < kMaxDepth) unit_0087(c, 344u, depth + 1u); else { c.pc = 0x0031F1F0u; return; } if (c.pc != 0x004EA930u) [[unlikely]] return; }
L_004EA930:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 2;
L_004EA938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 14;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 16u)));  goto L_004EA9D8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_004EA9B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA980u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA980u) [[unlikely]] return; }
L_004EA980:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA990u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA990u) [[unlikely]] return; }
L_004EA990:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EA9AC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA9ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA9ACu) [[unlikely]] return; }
L_004EA9AC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_004EA9B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[17].w[0]);  if (t) { goto L_004EA9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA9C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EA9C4u) [[unlikely]] return; }
L_004EA9C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA9D4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EA9D4u) [[unlikely]] return; }
L_004EA9D4:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_004EA9D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA9ECu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EA9ECu) [[unlikely]] return; }
L_004EA9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EA9F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004EA9F4u) [[unlikely]] return; }
L_004EA9F4:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004EAA00:
    set32(c.r[4], ld32((c.r[21].w[0] + 112u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EA6ACu | kUnwind; return; } goto L_004EA6AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAA34u); set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EAA34u) [[unlikely]] return; }
L_004EAA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004EAA70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004EADEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 23664u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_004EAB30; } }
L_004EAAA8:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAAC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x004EAAC4u) [[unlikely]] return; }
L_004EAAC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAAE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x004EAAE0u) [[unlikely]] return; }
L_004EAAE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAAFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x004EAAFCu) [[unlikely]] return; }
L_004EAAFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAB2Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 436u, depth + 1u); else { c.pc = 0x002A78D0u; return; } if (c.pc != 0x004EAB2Cu) [[unlikely]] return; }
L_004EAB2C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004EAB30:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EAAA8u | kUnwind; return; } goto L_004EAAA8; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 24u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 104u);  goto L_004EABE0; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EABDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAB60u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004EAB60u) [[unlikely]] return; }
L_004EAB60:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), 0u);  goto L_004EAB78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAB74u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004EAB74u) [[unlikely]] return; }
L_004EAB74:
    st32((c.r[19].w[0] + 68u), 0u);
    c.budget -= 1;
L_004EAB78:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAB90u); set32(c.r[4], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EAB90u) [[unlikely]] return; }
L_004EAB90:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  goto L_004EABD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EABA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EABA4u) [[unlikely]] return; }
L_004EABA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EABB4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EABB4u) [[unlikely]] return; }
L_004EABB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EABD0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EABD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EABD0u) [[unlikely]] return; }
L_004EABD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_004EABD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EABDCu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004EABDCu) [[unlikely]] return; }
L_004EABDC:
    set32(c.r[4], c.r[19].w[0] + 104u);
    c.budget -= 1;
L_004EABE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[19].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004EAC00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EAC00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EAC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 292u, depth + 1u); else { c.pc = 0x004EB240u; return; } if (c.pc != 0x004EAC00u) [[unlikely]] return; }
L_004EAC00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[19].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] + 23504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC18u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004EAC18u) [[unlikely]] return; }
L_004EAC18:
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 32u);  goto L_004EAC48; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EAC44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EAC44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EAC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004EAC44u) [[unlikely]] return; }
L_004EAC44:
    set32(c.r[2], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_004EAC48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 16u);  goto L_004EAC94; }
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EAC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAC64u) [[unlikely]] return; }
L_004EAC64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAC74u) [[unlikely]] return; }
L_004EAC74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EAC90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAC90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EAC90u) [[unlikely]] return; }
L_004EAC90:
    set32(c.r[2], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_004EAC94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004EACE0; }
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EACDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EACB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EACB0u) [[unlikely]] return; }
L_004EACB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EACC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EACC0u) [[unlikely]] return; }
L_004EACC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EACDC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EACDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EACDCu) [[unlikely]] return; }
L_004EACDC:
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004EACE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 8u);  goto L_004EAD2C; }
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EAD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EACFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EACFCu) [[unlikely]] return; }
L_004EACFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAD0Cu) [[unlikely]] return; }
L_004EAD0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EAD28; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EAD28u) [[unlikely]] return; }
L_004EAD28:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_004EAD2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 4u);  goto L_004EAD78; }
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EAD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAD48u) [[unlikely]] return; }
L_004EAD48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAD58u) [[unlikely]] return; }
L_004EAD58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EAD74; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EAD74u) [[unlikely]] return; }
L_004EAD74:
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_004EAD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EADC0; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EADC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAD94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAD94u) [[unlikely]] return; }
L_004EAD94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EADA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EADA4u) [[unlikely]] return; }
L_004EADA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EADC0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EADC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EADC0u) [[unlikely]] return; }
L_004EADC0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004EADD8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 4;
L_004EADD8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_004EADF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EADECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004EADECu) [[unlikely]] return; }
L_004EADEC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004EADF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EAE10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + 22384u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 23664u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_004EAE80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAE70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAE70u) [[unlikely]] return; }
L_004EAE70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAE80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAE80u) [[unlikely]] return; }
L_004EAE80:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_004EAEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAE94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAE94u) [[unlikely]] return; }
L_004EAE94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAEA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAEA4u) [[unlikely]] return; }
L_004EAEA4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_004EAEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAEB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAEB8u) [[unlikely]] return; }
L_004EAEB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAEC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAEC8u) [[unlikely]] return; }
L_004EAEC8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 16u), 0u);  if (t) { goto L_004EAEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAEDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAEDCu) [[unlikely]] return; }
L_004EAEDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAEECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAEECu) [[unlikely]] return; }
L_004EAEEC:
    st32((c.r[20].w[0] + 20u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 32u), 0u);  if (t) { goto L_004EAF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EAF08u) [[unlikely]] return; }
L_004EAF08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EAF18u) [[unlikely]] return; }
L_004EAF18:
    set32(c.r[16], c.r[20].w[0] + 36u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 280u, depth + 1u); else { c.pc = 0x004EB0E0u; return; } if (c.pc != 0x004EAF28u) [[unlikely]] return; }
L_004EAF28:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 279u, depth + 1u); else { c.pc = 0x004EB0D0u; return; } if (c.pc != 0x004EAF34u) [[unlikely]] return; }
L_004EAF34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF40u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 273u, depth + 1u); else { c.pc = 0x004EB070u; return; } if (c.pc != 0x004EAF40u) [[unlikely]] return; }
L_004EAF40:
    c.f[1] = ld32((c.r[28].w[0] - 31832u));
    st32((c.r[20].w[0] + 68u), 0u);
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st32((c.r[20].w[0] + 76u), c.f[1]);
    set32(c.r[7], 0u + 4u);
    st32((c.r[20].w[0] + 80u), 0u);
    set32(c.r[4], c.r[20].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] - 20448u);
    set32(c.r[6], c.r[6].w[0] + 23504u);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF7Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004EAF7Cu) [[unlikely]] return; }
L_004EAF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF84u); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EAF84u) [[unlikely]] return; }
L_004EAF84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[20].w[0] + 104u);  if (t) { goto L_004EAFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAF98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004EAF98u) [[unlikely]] return; }
L_004EAF98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004EAFB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAFACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004EAFACu) [[unlikely]] return; }
L_004EAFAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004EAFB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004EAFC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAFC0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004EAFC0u) [[unlikely]] return; }
L_004EAFC0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004EAFC4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EAFECu); st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00FA(c, 75u, depth + 1u); else { c.pc = 0x004E9910u; return; } if (c.pc != 0x004EAFECu) [[unlikely]] return; }
L_004EAFEC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004EB020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_004EB058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB048u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB048u) [[unlikely]] return; }
L_004EB048:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB058u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB058u) [[unlikely]] return; }
L_004EB058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EB070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB088u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00FA(c, 278u, depth + 1u); else { c.pc = 0x004EB0C0u; return; } if (c.pc != 0x004EB088u) [[unlikely]] return; }
L_004EB088:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004EB094u) [[unlikely]] return; }
L_004EB094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB09Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004EB09Cu) [[unlikely]] return; }
L_004EB09C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EB0B0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004EB0C0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004EB0D0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004EB0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004EB12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB0F8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004EB0F8u) [[unlikely]] return; }
L_004EB0F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004EB118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB110u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004EB110u) [[unlikely]] return; }
L_004EB110:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004EB118:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004EB130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB128u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004EB128u) [[unlikely]] return; }
L_004EB128:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004EB12C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004EB130:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004EB140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004EB200; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_004EB18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB178u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB178u) [[unlikely]] return; }
L_004EB178:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB18Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB18Cu) [[unlikely]] return; }
L_004EB18C:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB1B0u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00FA(c, 319u, depth + 1u); else { c.pc = 0x004EB590u; return; } if (c.pc != 0x004EB1B0u) [[unlikely]] return; }
L_004EB1B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004EB22C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB1C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB1C4u) [[unlikely]] return; }
L_004EB1C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB1D8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB1D8u) [[unlikely]] return; }
L_004EB1D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EB228; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB1F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EB1F8u) [[unlikely]] return; }
L_004EB1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB228; } }
L_004EB200:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EB228; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB228u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FA(c, 308u, depth + 1u); else { c.pc = 0x004EB3E0u; return; } if (c.pc != 0x004EB228u) [[unlikely]] return; }
L_004EB228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004EB22C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004EB240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EB298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB264u);  if (depth < kMaxDepth) unit_00FA(c, 359u, depth + 1u); else { c.pc = 0x004EBB10u; return; } if (c.pc != 0x004EB264u) [[unlikely]] return; }
L_004EB264:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004EB284; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EB280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB280u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004EB280u) [[unlikely]] return; }
L_004EB280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004EB284:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004EB29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004EB298u) [[unlikely]] return; }
L_004EB298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004EB29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EB2B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004EB300; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB2E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EB2E0u) [[unlikely]] return; }
L_004EB2E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[28].w[0] - 29420u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB2F8u); set32(c.r[6], c.r[17].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FA(c, 364u, depth + 1u); else { c.pc = 0x004EBBC0u; return; } if (c.pc != 0x004EB2F8u) [[unlikely]] return; }
L_004EB2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004EB3D0; } }
L_004EB300:
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EB3CC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_004EB370; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB320u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EB320u) [[unlikely]] return; }
L_004EB320:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB330u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EB330u) [[unlikely]] return; }
L_004EB330:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB33Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EB33Cu) [[unlikely]] return; }
L_004EB33C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB348u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x004EB348u) [[unlikely]] return; }
L_004EB348:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB354u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EB354u) [[unlikely]] return; }
L_004EB354:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB368u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00DB(c, 45u, depth + 1u); else { c.pc = 0x0046C890u; return; } if (c.pc != 0x004EB368u) [[unlikely]] return; }
L_004EB368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB3CC; } }
L_004EB370:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_004EB3CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_004EB3B8; } }
L_004EB388:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_004EB3AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB3A8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004EB3A8u) [[unlikely]] return; }
L_004EB3A8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004EB3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB3B4u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x004EB3B4u) [[unlikely]] return; }
L_004EB3B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004EB3B8:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB388u | kUnwind; return; } goto L_004EB388; }
    set32(c.r[3], 0u + 64u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_004EB3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004EB3D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004EB3E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
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
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004EB420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004EB560; } }
L_004EB420:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004EB444; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EB444:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], c.r[23].w[0] << 2);  goto L_004EB4DC; }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004EB4CC; } }
L_004EB458:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004EB4C8; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[17].w[0])));  goto L_004EB4A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB474u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB474u) [[unlikely]] return; }
L_004EB474:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB484u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB484u) [[unlikely]] return; }
L_004EB484:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EB4A0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB4A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EB4A0u) [[unlikely]] return; }
L_004EB4A0:
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004EB4A4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0]), c.r[21].w[0]);  if (t) { goto L_004EB4C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB4B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB4B4u) [[unlikely]] return; }
L_004EB4B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB4C4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB4C4u) [[unlikely]] return; }
L_004EB4C4:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004EB4C8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004EB4CC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB458u | kUnwind; return; } goto L_004EB458; }
    set32(c.r[2], c.r[23].w[0] << 2);
    c.budget -= 1;
L_004EB4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_004EB530; } }
L_004EB4E4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004EB530; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EB52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB500u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB500u) [[unlikely]] return; }
L_004EB500:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB510u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB510u) [[unlikely]] return; }
L_004EB510:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EB52C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB52Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EB52Cu) [[unlikely]] return; }
L_004EB52C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004EB530:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB4E4u | kUnwind; return; } goto L_004EB4E4; } }
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004EB550; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EB550:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004EB590:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004EBAD8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_004EB60C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB600u); set32(c.r[5], c.r[5].w[0] + 10848u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004EB600u) [[unlikely]] return; }
L_004EB600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB608u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004EB608u) [[unlikely]] return; }
L_004EB608:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004EB60C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_004EB89C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EB640; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EB640:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_004EB6FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004EB694; } }
L_004EB654:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004EB684; }
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[22].w[0]), c.r[21].w[0]);  if (t) { goto L_004EB680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB670u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB670u) [[unlikely]] return; }
L_004EB670:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB680u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB680u) [[unlikely]] return; }
L_004EB680:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004EB684:
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB694:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB654u | kUnwind; return; } goto L_004EB654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004EB6E8; } }
L_004EB6A8:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004EB6D8; }
    set32(c.r[23], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[22].w[0]), c.r[23].w[0]);  if (t) { goto L_004EB6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB6C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB6C4u) [[unlikely]] return; }
L_004EB6C4:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB6D4u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB6D4u) [[unlikely]] return; }
L_004EB6D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004EB6D8:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB6E8:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB6A8u | kUnwind; return; } goto L_004EB6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB810; } }
L_004EB6FC:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[3].w[0]);  if (t) { goto L_004EB74C; } }
L_004EB70C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004EB73C; }
    set32(c.r[23], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[21].w[0]), c.r[23].w[0]);  if (t) { goto L_004EB738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB728u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB728u) [[unlikely]] return; }
L_004EB728:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB738u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB738u) [[unlikely]] return; }
L_004EB738:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004EB73C:
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB74C:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB70Cu | kUnwind; return; } goto L_004EB70C; } }
    set32(c.r[3], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);  goto L_004EB804; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EB784; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_004EB784:
    set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB804; } }
L_004EB790:
    set32(c.r[20], c.r[20].w[0] - 4u);
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_004EB804; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0])));  goto L_004EB7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB7B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB7B4u) [[unlikely]] return; }
L_004EB7B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB7C4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB7C4u) [[unlikely]] return; }
L_004EB7C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EB7E0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB7E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EB7E0u) [[unlikely]] return; }
L_004EB7E0:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_004EB7E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_004EB804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB7F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB7F4u) [[unlikely]] return; }
L_004EB7F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB804u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB804u) [[unlikely]] return; }
L_004EB804:
    c.r[1].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB790u | kUnwind; return; } goto L_004EB790; }
L_004EB810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB88C; } }
L_004EB818:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_004EB888; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0])));  goto L_004EB864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB834u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB834u) [[unlikely]] return; }
L_004EB834:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB844u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB844u) [[unlikely]] return; }
L_004EB844:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EB860; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB860u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EB860u) [[unlikely]] return; }
L_004EB860:
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004EB864:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0]), c.r[19].w[0]);  if (t) { goto L_004EB884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB874u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB874u) [[unlikely]] return; }
L_004EB874:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB884u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB884u) [[unlikely]] return; }
L_004EB884:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_004EB888:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004EB88C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[19], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB818u | kUnwind; return; } goto L_004EB818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004EBADC; } }
L_004EB89C:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_004EB8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004EB8C4; } }
L_004EB8BC:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004EB8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_004EB8E4; } }
L_004EB8CC:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_004EB8E0; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_004EB8E0:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004EB8E4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB8CCu | kUnwind; return; } goto L_004EB8CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB8F8u); set32(c.r[4], c.r[20].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EB8F8u) [[unlikely]] return; }
L_004EB8F8:
    st32((c.r[29].w[0] + 180u), c.r[20].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 188u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_004EB958; } }
L_004EB918:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_004EB948; }
    set32(c.r[22], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[21].w[0]), c.r[22].w[0]);  if (t) { goto L_004EB944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB934u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB934u) [[unlikely]] return; }
L_004EB934:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB944u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB944u) [[unlikely]] return; }
L_004EB944:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004EB948:
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB958:
    c.r[3].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB918u | kUnwind; return; } goto L_004EB918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EB9AC; } }
L_004EB96C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_004EB99C; }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[21].w[0]), c.r[18].w[0]);  if (t) { goto L_004EB998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB988u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB988u) [[unlikely]] return; }
L_004EB988:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB998u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB998u) [[unlikely]] return; }
L_004EB998:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004EB99C:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 4;
L_004EB9AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB96Cu | kUnwind; return; } goto L_004EB96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] < c.r[23].d[0] ? 1ull : 0ull;  if (t) { goto L_004EBA00; } }
L_004EB9BC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_004EB9EC; }
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[21].w[0]), c.r[16].w[0]);  if (t) { goto L_004EB9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB9D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EB9D8u) [[unlikely]] return; }
L_004EB9D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EB9E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EB9E8u) [[unlikely]] return; }
L_004EB9E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004EB9EC:
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004EBA00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EB9BCu | kUnwind; return; } goto L_004EB9BC; } }
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_004EBA58; }
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 17;
L_004EBA58:
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004EBAB0; } }
L_004EBA68:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_004EBAB4; }
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004EBAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBA84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EBA84u) [[unlikely]] return; }
L_004EBA84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBA94u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EBA94u) [[unlikely]] return; }
L_004EBA94:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EBAB0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBAB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EBAB0u) [[unlikely]] return; }
L_004EBAB0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004EBAB4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EBA68u | kUnwind; return; } goto L_004EBA68; }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 184u), 0u);  if (t) { goto L_004EBAD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EBAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBAD8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004EBAD8u) [[unlikely]] return; }
L_004EBAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004EBADC:
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
L_004EBB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004EBB88; } }
L_004EBB40:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_004EBB8C; }
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004EBB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBB5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EBB5Cu) [[unlikely]] return; }
L_004EBB5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBB6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EBB6Cu) [[unlikely]] return; }
L_004EBB6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EBB88; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBB88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EBB88u) [[unlikely]] return; }
L_004EBB88:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004EBB8C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EBB40u | kUnwind; return; } goto L_004EBB40; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EBBC0:
    set32(c.r[29], c.r[29].w[0] - 576u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004EBC04; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  [[clang::musttail]] return unit_00FB(c, 16u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29212u)));  if (t) { goto L_004EBC50; } }
L_004EBC04:
    set32(c.r[8], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 352u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[29].w[0] + 364u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBC44u); st32((c.r[29].w[0] + 372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 77u, depth + 1u); else { c.pc = 0x0046D040u; return; } if (c.pc != 0x004EBC44u) [[unlikely]] return; }
L_004EBC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00FB(c, 15u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29212u)));
    c.budget -= 1;
L_004EBC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EBC68; } }
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u - 256u);
    st32((c.r[2].w[0] - 9416u), c.r[3].w[0]);
    c.budget -= 4;
L_004EBC68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 9416u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004EBCB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EBC9C; } }
    set32(c.r[3], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] - 9416u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_004EBC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 9416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 544u);  goto L_004EBCDC; }
L_004EBCB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBCD0u); set32(c.r[5], c.r[5].w[0] + 10906u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004EBCD0u) [[unlikely]] return; }
L_004EBCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBCD8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004EBCD8u) [[unlikely]] return; }
L_004EBCD8:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 1;
L_004EBCDC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBCE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EBCE8u) [[unlikely]] return; }
L_004EBCE8:
    set32(c.r[5], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EBD08; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EBD08:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;  goto L_004EBD48; }
    c.r[1].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_004EBD74; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_004EBD3C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EBD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_004EBD70; } }
    c.r[3].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004EBD48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EBD70; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_004EBD6C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EBD6C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_004EBD70:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_004EBD74:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EBD8C; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EBD8C:
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[3], ld32((c.r[29].w[0] + 564u)));
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EBDB0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EBDB0:
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[19], c.r[2].w[0] - c.r[20].w[0]);
    c.r[1].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_004EBFC0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_004EBDE8; }
    set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBDE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 46u, depth + 1u); else { c.pc = 0x004EC7C0u; return; } if (c.pc != 0x004EBDE4u) [[unlikely]] return; }
L_004EBDE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_004EBDE8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE0Cu); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EBE0Cu) [[unlikely]] return; }
L_004EBE0C:
    set32(c.r[6], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[29].w[0] + 544u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 548u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 552u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[29].w[0] + 556u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE48u); st32((c.r[29].w[0] + 564u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EBE48u) [[unlikely]] return; }
L_004EBE48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x004EBE54u) [[unlikely]] return; }
L_004EBE54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE60u); set32(c.r[4], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EBE60u) [[unlikely]] return; }
L_004EBE60:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE6Cu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EBE6Cu) [[unlikely]] return; }
L_004EBE6C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x004EBE78u) [[unlikely]] return; }
L_004EBE78:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBE84u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EBE84u) [[unlikely]] return; }
L_004EBE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - c.r[17].w[0]);  if (t) { goto L_004EBF54; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 1;
L_004EBE90:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 528u)));  goto L_004EBEC0; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBEA4u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EBEA4u) [[unlikely]] return; }
L_004EBEA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBEB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x004EBEB0u) [[unlikely]] return; }
L_004EBEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EBEB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x004EBEB8u) [[unlikely]] return; }
L_004EBEB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 2;
L_004EBEC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 528u), c.r[4].w[0]);  if (t) { goto L_004EBF10; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 524u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 512u), c.r[4].w[0]);  if (t) { goto L_004EBEFC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 516u)));
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    c.budget -= 2;
L_004EBEFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 528u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    c.budget -= 5;
L_004EBF10:
    set32(c.r[4], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 564u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 560u), c.r[4].w[0]);  if (t) { goto L_004EBF54; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 544u), c.r[4].w[0]);  if (t) { goto L_004EBF40; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    st32((c.r[29].w[0] + 544u), c.r[3].w[0]);
    c.budget -= 2;
L_004EBF40:
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 564u), c.r[3].w[0]);
    c.budget -= 5;
L_004EBF54:
    set32(c.r[4], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 560u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EBE90u | kUnwind; return; } goto L_004EBE90; }
    set32(c.r[5], ld32((c.r[29].w[0] + 548u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 544u)));  if (t) { goto L_004EBFAC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004EBF80:
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[8].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_004EBFAC; }
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[7], ld32((c.r[6].w[0])));  goto L_004EBFA4; }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_004EBFA4:
    set32(c.r[8], c.r[7].w[0] + 512u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_004EBFAC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EBF80u | kUnwind; return; } goto L_004EBF80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00FB(c, 15u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004EBFC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_004EBFD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004EBFD8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_004EBFD4:
    set32(c.r[4], c.r[2].w[0] << 7);
    c.budget -= 1;
L_004EBFD8:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  [[clang::musttail]] return unit_00FB(c, 2u, depth); }
    set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 17u, depth + 1u); else { c.pc = 0x004EC250u; return; } if (c.pc != 0x004EC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00FB(c, 1u, depth);
}

}
