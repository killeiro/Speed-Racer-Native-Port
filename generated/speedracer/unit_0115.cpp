#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0115[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 26, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54,
    0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0,
    271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
};

void unit_0115(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00554000;
    case 2u: goto L_00554004;
    case 3u: goto L_00554018;
    case 4u: goto L_00554024;
    case 5u: goto L_00554034;
    case 6u: goto L_00554048;
    case 7u: goto L_00554050;
    case 8u: goto L_00554074;
    case 9u: goto L_00554080;
    case 10u: goto L_00554090;
    case 11u: goto L_005540A4;
    case 12u: goto L_005540C4;
    case 13u: goto L_005540D0;
    case 14u: goto L_005540E0;
    case 15u: goto L_005540F4;
    case 16u: goto L_00554100;
    case 17u: goto L_00554134;
    case 18u: goto L_00554190;
    case 19u: goto L_005541B8;
    case 20u: goto L_005541F4;
    case 21u: goto L_00554204;
    case 22u: goto L_00554208;
    case 23u: goto L_00554228;
    case 24u: goto L_0055423C;
    case 25u: goto L_00554248;
    case 26u: goto L_0055424C;
    case 27u: goto L_00554250;
    case 28u: goto L_00554270;
    case 29u: goto L_005542A8;
    case 30u: goto L_005542C4;
    case 31u: goto L_005542FC;
    case 32u: goto L_00554330;
    case 33u: goto L_00554388;
    case 34u: goto L_005543A0;
    case 35u: goto L_005543C0;
    case 36u: goto L_005543E0;
    case 37u: goto L_00554400;
    case 38u: goto L_00554530;
    case 39u: goto L_00554564;
    case 40u: goto L_00554588;
    case 41u: goto L_005545A0;
    case 42u: goto L_0055460C;
    case 43u: goto L_00554644;
    case 44u: goto L_00554678;
    case 45u: goto L_005546C0;
    case 46u: goto L_005546CC;
    case 47u: goto L_005546DC;
    case 48u: goto L_005546F0;
    case 49u: goto L_00554718;
    case 50u: goto L_00554724;
    case 51u: goto L_00554734;
    case 52u: goto L_00554748;
    case 53u: goto L_00554770;
    case 54u: goto L_0055477C;
    case 55u: goto L_0055478C;
    case 56u: goto L_005547A0;
    case 57u: goto L_005547C8;
    case 58u: goto L_005547D4;
    case 59u: goto L_005547E4;
    case 60u: goto L_005547F8;
    case 61u: goto L_00554820;
    case 62u: goto L_0055482C;
    case 63u: goto L_0055483C;
    case 64u: goto L_00554850;
    case 65u: goto L_0055487C;
    case 66u: goto L_00554888;
    case 67u: goto L_00554898;
    case 68u: goto L_005548AC;
    case 69u: goto L_005548CC;
    case 70u: goto L_005548D8;
    case 71u: goto L_005548E8;
    case 72u: goto L_005548FC;
    case 73u: goto L_0055493C;
    case 74u: goto L_00554998;
    case 75u: goto L_005549FC;
    case 76u: goto L_00554A40;
    case 77u: goto L_00554AC0;
    case 78u: goto L_00554AD0;
    case 79u: goto L_00554B1C;
    case 80u: goto L_00554B74;
    case 81u: goto L_00554BE8;
    case 82u: goto L_00554C48;
    case 83u: goto L_00554C90;
    case 84u: goto L_00554C9C;
    case 85u: goto L_00554CAC;
    case 86u: goto L_00554CC0;
    case 87u: goto L_00554CE8;
    case 88u: goto L_00554CF4;
    case 89u: goto L_00554D04;
    case 90u: goto L_00554D18;
    case 91u: goto L_00554D40;
    case 92u: goto L_00554D4C;
    case 93u: goto L_00554D5C;
    case 94u: goto L_00554D70;
    case 95u: goto L_00554D98;
    case 96u: goto L_00554DA4;
    case 97u: goto L_00554DB4;
    case 98u: goto L_00554DC8;
    case 99u: goto L_00554DF0;
    case 100u: goto L_00554DFC;
    case 101u: goto L_00554E0C;
    case 102u: goto L_00554E20;
    case 103u: goto L_00554E4C;
    case 104u: goto L_00554E58;
    case 105u: goto L_00554E68;
    case 106u: goto L_00554E7C;
    case 107u: goto L_00554E9C;
    case 108u: goto L_00554EA8;
    case 109u: goto L_00554EB8;
    case 110u: goto L_00554ECC;
    case 111u: goto L_00554F0C;
    case 112u: goto L_00554F68;
    case 113u: goto L_00554FCC;
    case 114u: goto L_00555020;
    case 115u: goto L_005550AC;
    case 116u: goto L_00555144;
    case 117u: goto L_00555168;
    case 118u: goto L_00555190;
    case 119u: goto L_005551E0;
    case 120u: goto L_005551F8;
    case 121u: goto L_00555228;
    case 122u: goto L_00555290;
    case 123u: goto L_005552A8;
    case 124u: goto L_005552B8;
    case 125u: goto L_005552E4;
    case 126u: goto L_00555300;
    case 127u: goto L_0055532C;
    case 128u: goto L_00555368;
    case 129u: goto L_00555380;
    case 130u: goto L_005553E0;
    case 131u: goto L_00555420;
    case 132u: goto L_00555440;
    case 133u: goto L_00555460;
    case 134u: goto L_00555470;
    case 135u: goto L_0055548C;
    case 136u: goto L_005554A0;
    case 137u: goto L_005554BC;
    case 138u: goto L_005554D0;
    case 139u: goto L_005554EC;
    case 140u: goto L_00555500;
    case 141u: goto L_0055551C;
    case 142u: goto L_00555530;
    case 143u: goto L_0055554C;
    case 144u: goto L_00555560;
    case 145u: goto L_0055557C;
    case 146u: goto L_00555590;
    case 147u: goto L_005555B4;
    case 148u: goto L_005555FC;
    case 149u: goto L_00555610;
    case 150u: goto L_00555620;
    case 151u: goto L_00555660;
    case 152u: goto L_00555698;
    case 153u: goto L_005556B0;
    case 154u: goto L_00555710;
    case 155u: goto L_00555724;
    case 156u: goto L_00555740;
    case 157u: goto L_0055578C;
    case 158u: goto L_005557A4;
    case 159u: goto L_005557D4;
    case 160u: goto L_005557F0;
    case 161u: goto L_005558A0;
    case 162u: goto L_005558D0;
    case 163u: goto L_00555918;
    case 164u: goto L_00555930;
    case 165u: goto L_00555974;
    case 166u: goto L_005559C0;
    case 167u: goto L_005559F4;
    case 168u: goto L_00555A0C;
    case 169u: goto L_00555A44;
    case 170u: goto L_00555AC0;
    case 171u: goto L_00555B10;
    case 172u: goto L_00555B70;
    case 173u: goto L_00555BC0;
    case 174u: goto L_00555C30;
    case 175u: goto L_00555C6C;
    case 176u: goto L_00555CE0;
    case 177u: goto L_00555D30;
    case 178u: goto L_00555D4C;
    case 179u: goto L_00555D70;
    case 180u: goto L_00555DE0;
    case 181u: goto L_00555EA8;
    case 182u: goto L_00555EE4;
    case 183u: goto L_00555F08;
    case 184u: goto L_00555FBC;
    case 185u: goto L_00555FDC;
    case 186u: goto L_00556018;
    case 187u: goto L_00556050;
    case 188u: goto L_0055609C;
    case 189u: goto L_005560E8;
    case 190u: goto L_00556120;
    case 191u: goto L_00556160;
    case 192u: goto L_00556180;
    case 193u: goto L_005561DC;
    case 194u: goto L_00556208;
    case 195u: goto L_00556228;
    case 196u: goto L_00556244;
    case 197u: goto L_00556294;
    case 198u: goto L_0055630C;
    case 199u: goto L_00556344;
    case 200u: goto L_005563B4;
    case 201u: goto L_00556400;
    case 202u: goto L_00556418;
    case 203u: goto L_0055646C;
    case 204u: goto L_0055648C;
    case 205u: goto L_005564B0;
    case 206u: goto L_005564B8;
    case 207u: goto L_005564F8;
    case 208u: goto L_0055652C;
    case 209u: goto L_00556550;
    case 210u: goto L_005565F0;
    case 211u: goto L_00556624;
    case 212u: goto L_00556640;
    case 213u: goto L_005566B4;
    case 214u: goto L_005566F8;
    case 215u: goto L_00556778;
    case 216u: goto L_00556828;
    case 217u: goto L_00556838;
    case 218u: goto L_00556854;
    case 219u: goto L_005569A0;
    case 220u: goto L_005569E0;
    case 221u: goto L_00556A30;
    case 222u: goto L_00556A8C;
    case 223u: goto L_00556A9C;
    case 224u: goto L_00556AE0;
    case 225u: goto L_00556B10;
    case 226u: goto L_00556B44;
    case 227u: goto L_00556B7C;
    case 228u: goto L_00556BA0;
    case 229u: goto L_00556BC0;
    case 230u: goto L_00556BF0;
    case 231u: goto L_00556C20;
    case 232u: goto L_00556C4C;
    case 233u: goto L_00556C70;
    case 234u: goto L_00556C90;
    case 235u: goto L_00556CB0;
    case 236u: goto L_00556CD8;
    case 237u: goto L_00556D38;
    case 238u: goto L_00556D84;
    case 239u: goto L_00556D90;
    case 240u: goto L_00556DF8;
    case 241u: goto L_00556E20;
    case 242u: goto L_00556E48;
    case 243u: goto L_00556E50;
    case 244u: goto L_00556E74;
    case 245u: goto L_00556E88;
    case 246u: goto L_00556EA0;
    case 247u: goto L_00556ECC;
    case 248u: goto L_00556EF0;
    case 249u: goto L_00556F1C;
    case 250u: goto L_00556F34;
    case 251u: goto L_00556F50;
    case 252u: goto L_00556F6C;
    case 253u: goto L_00556F84;
    case 254u: goto L_00556FF8;
    case 255u: goto L_00557028;
    case 256u: goto L_00557080;
    case 257u: goto L_005570C0;
    case 258u: goto L_005570C8;
    case 259u: goto L_005570D0;
    case 260u: goto L_005570D8;
    case 261u: goto L_005570E0;
    case 262u: goto L_00557128;
    case 263u: goto L_00557130;
    case 264u: goto L_00557148;
    case 265u: goto L_00557154;
    case 266u: goto L_00557174;
    case 267u: goto L_005571A4;
    case 268u: goto L_005571D8;
    case 269u: goto L_005571F0;
    case 270u: goto L_005571F8;
    case 271u: goto L_00557200;
    case 272u: goto L_00557208;
    case 273u: goto L_00557210;
    case 274u: goto L_00557258;
    case 275u: goto L_00557260;
    case 276u: goto L_00557270;
    case 277u: goto L_00557298;
    case 278u: goto L_005572AC;
    case 279u: goto L_005572CC;
    case 280u: goto L_00557308;
    case 281u: goto L_00557364;
    case 282u: goto L_00557390;
    case 283u: goto L_0055740C;
    case 284u: goto L_00557460;
    case 285u: goto L_00557468;
    case 286u: goto L_00557490;
    case 287u: goto L_005574C8;
    case 288u: goto L_005574DC;
    case 289u: goto L_0055750C;
    case 290u: goto L_00557558;
    case 291u: goto L_005575AC;
    case 292u: goto L_005575D4;
    case 293u: goto L_005575EC;
    case 294u: goto L_00557654;
    case 295u: goto L_00557678;
    case 296u: goto L_00557694;
    case 297u: goto L_005576C4;
    case 298u: goto L_005576E8;
    case 299u: goto L_005576FC;
    case 300u: goto L_0055774C;
    case 301u: goto L_00557770;
    case 302u: goto L_00557784;
    case 303u: goto L_005577A4;
    case 304u: goto L_005577C4;
    case 305u: goto L_005577FC;
    case 306u: goto L_0055781C;
    case 307u: goto L_0055783C;
    case 308u: goto L_0055785C;
    case 309u: goto L_00557878;
    case 310u: goto L_0055788C;
    case 311u: goto L_005578AC;
    case 312u: goto L_0055790C;
    case 313u: goto L_00557928;
    case 314u: goto L_0055794C;
    case 315u: goto L_005579C8;
    case 316u: goto L_00557A00;
    case 317u: goto L_00557A38;
    case 318u: goto L_00557A40;
    case 319u: goto L_00557A48;
    case 320u: goto L_00557A50;
    case 321u: goto L_00557A58;
    case 322u: goto L_00557AA0;
    case 323u: goto L_00557AA8;
    case 324u: goto L_00557AD4;
    case 325u: goto L_00557AF0;
    case 326u: goto L_00557B30;
    case 327u: goto L_00557B60;
    case 328u: goto L_00557B84;
    case 329u: goto L_00557BA0;
    case 330u: goto L_00557BC4;
    case 331u: goto L_00557BE4;
    case 332u: goto L_00557C18;
    case 333u: goto L_00557C38;
    case 334u: goto L_00557C58;
    case 335u: goto L_00557C78;
    case 336u: goto L_00557CAC;
    case 337u: goto L_00557CCC;
    case 338u: goto L_00557CE8;
    case 339u: goto L_00557D1C;
    case 340u: goto L_00557D3C;
    case 341u: goto L_00557D70;
    case 342u: goto L_00557D88;
    case 343u: goto L_00557DB0;
    case 344u: goto L_00557E3C;
    case 345u: goto L_00557E44;
    case 346u: goto L_00557E6C;
    case 347u: goto L_00557EA4;
    case 348u: goto L_00557EB8;
    case 349u: goto L_00557ED0;
    case 350u: goto L_00557F00;
    case 351u: goto L_00557F40;
    case 352u: goto L_00557F80;
    case 353u: goto L_00557FC0;
    case 354u: goto L_00557FF4;
    default: bad_entry(c, 0x00554000u); return;
    }
L_00554000:
    c.budget -= 1;
L_00554004:
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005541B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554018u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554018u) [[unlikely]] return; }
L_00554018:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554024u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554024u) [[unlikely]] return; }
L_00554024:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554034u); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554034u) [[unlikely]] return; }
L_00554034:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554048u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554048u) [[unlikely]] return; }
L_00554048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005541B8; } }
L_00554050:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554100; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005540B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554074u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554074u) [[unlikely]] return; }
L_00554074:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554080u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554080u) [[unlikely]] return; }
L_00554080:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554090u); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554090u) [[unlikely]] return; }
L_00554090:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005540A4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005540A4u) [[unlikely]] return; }
L_005540A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005541B8; } }
    c.budget -= 1;
L_005540B0:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005541B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005540C4u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005540C4u) [[unlikely]] return; }
L_005540C4:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005540D0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005540D0u) [[unlikely]] return; }
L_005540D0:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005540E0u); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005540E0u) [[unlikely]] return; }
L_005540E0:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005540F4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005540F4u) [[unlikely]] return; }
L_005540F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005541B8; } }
    c.budget -= 1;
L_00554100:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00554160; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005541B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].d[0] = c.r[2].d[0] | 43195ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554134u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554134u) [[unlikely]] return; }
L_00554134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 7686ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_005541B8; } }
    c.budget -= 1;
L_00554160:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005541B8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005541B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B90000u);
    c.r[2].d[0] = c.r[2].d[0] | 11054ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554190u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554190u) [[unlikely]] return; }
L_00554190:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E9D0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 39188ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
L_005541B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005541E0; } }
    c.f[3] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 8;
L_005541E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005541F4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0109(c, 256u, depth + 1u); else { c.pc = 0x00527FC0u; return; } if (c.pc != 0x005541F4u) [[unlikely]] return; }
L_005541F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055424C; } }
L_00554204:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00554208:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554238; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00554238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554228u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 6u, depth + 1u); else { c.pc = 0x00528080u; return; } if (c.pc != 0x00554228u) [[unlikely]] return; }
L_00554228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055424C; } }
L_00554238:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0055423C:
    set32(c.r[2], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553DE8u | kUnwind; return; } [[clang::musttail]] return unit_0114(c, 240u, depth); } }
L_00554248:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055424C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00554250:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00554270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00554294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00554310; } }
L_00554294:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_005542E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_005542A8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_005542D8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005542D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005542C4u);  if (depth < kMaxDepth) unit_010A(c, 14u, depth + 1u); else { c.pc = 0x00528170u; return; } if (c.pc != 0x005542C4u) [[unlikely]] return; }
L_005542C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005542D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00554314; } }
L_005542D4:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_005542D8:
    set32(c.r[2], c.r[17].w[0] + 96u);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005542A8u | kUnwind; return; } goto L_005542A8; }
L_005542E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00554310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005542FCu);  if (depth < kMaxDepth) unit_0106(c, 255u, depth + 1u); else { c.pc = 0x0051B9A0u; return; } if (c.pc != 0x005542FCu) [[unlikely]] return; }
L_005542FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), 0u);  goto L_0055430C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554310; } }
L_0055430C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00554310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00554314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00554330:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00554364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00554A24; } }
L_00554364:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00554378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00554A24; } }
L_00554378:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554388u); set32(c.r[6], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_010E(c, 33u, depth + 1u); else { c.pc = 0x00538390u; return; } if (c.pc != 0x00554388u) [[unlikely]] return; }
L_00554388:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_00554398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00554A28; } }
L_00554398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005543A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x005543A0u) [[unlikely]] return; }
L_005543A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_005543B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_005543B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005543C0u);  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x005543C0u) [[unlikely]] return; }
L_005543C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_005543D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_005543D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005543E0u);  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x005543E0u) [[unlikely]] return; }
L_005543E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 96u)));  goto L_005543F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_005543F0:
    set32(c.r[2], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00554A20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_00554400:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00554414; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00554414:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00554430; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00554434; } }
L_00554430:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00554434:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00554450; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00554454; } }
L_00554450:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00554454:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.r[4].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_00554A10; }
    c.r[4].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554A0C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_005545F0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554530u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0106(c, 219u, depth + 1u); else { c.pc = 0x0051B5F0u; return; } if (c.pc != 0x00554530u) [[unlikely]] return; }
L_00554530:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_00554540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_00554540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005545E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00554564u); set32(c.r[6], c.r[17].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00554564u) [[unlikely]] return; }
L_00554564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00554A0C; } }
    c.budget -= 1;
L_00554578:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554588u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0106(c, 216u, depth + 1u); else { c.pc = 0x0051B5A0u; return; } if (c.pc != 0x00554588u) [[unlikely]] return; }
L_00554588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00554598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_00554598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005545A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 6u, depth + 1u); else { c.pc = 0x00528080u; return; } if (c.pc != 0x005545A0u) [[unlikely]] return; }
L_005545A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_005545B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_005545B0:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005545D8; } }
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_005545F8; } }
    c.budget -= 1;
L_005545D8:
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_005545F8; } }
    c.budget -= 1;
L_005545E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_00554A24; } }
L_005545F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_005545F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00554A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055460Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0109(c, 250u, depth + 1u); else { c.pc = 0x00527EC0u; return; } if (c.pc != 0x0055460Cu) [[unlikely]] return; }
L_0055460C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00554630; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00554A0C; } }
L_00554630:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554644u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00554644u) [[unlikely]] return; }
L_00554644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_00554654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_00554654:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[10], c.r[29].w[0] + 88u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554678u); set32(c.r[11], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0109(c, 253u, depth + 1u); else { c.pc = 0x00527F10u; return; } if (c.pc != 0x00554678u) [[unlikely]] return; }
L_00554678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  goto L_00554688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_00554688:
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005549C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005546F8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005546C0u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005546C0u) [[unlikely]] return; }
L_005546C0:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005546CCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005546CCu) [[unlikely]] return; }
L_005546CC:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005546DCu); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005546DCu) [[unlikely]] return; }
L_005546DC:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005546F0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005546F0u) [[unlikely]] return; }
L_005546F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
L_005546F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554750; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554718u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554718u) [[unlikely]] return; }
L_00554718:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554724u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554724u) [[unlikely]] return; }
L_00554724:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554734u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554734u) [[unlikely]] return; }
L_00554734:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554748u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554748u) [[unlikely]] return; }
L_00554748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
L_00554750:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005547A8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554770u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554770u) [[unlikely]] return; }
L_00554770:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055477Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x0055477Cu) [[unlikely]] return; }
L_0055477C:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055478Cu); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x0055478Cu) [[unlikely]] return; }
L_0055478C:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005547A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005547A0u) [[unlikely]] return; }
L_005547A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
L_005547A8:
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554800; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005547C8u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005547C8u) [[unlikely]] return; }
L_005547C8:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005547D4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005547D4u) [[unlikely]] return; }
L_005547D4:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005547E4u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005547E4u) [[unlikely]] return; }
L_005547E4:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005547F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005547F8u) [[unlikely]] return; }
L_005547F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
L_00554800:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554858; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554820u); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554820u) [[unlikely]] return; }
L_00554820:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055482Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x0055482Cu) [[unlikely]] return; }
L_0055482C:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055483Cu); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x0055483Cu) [[unlikely]] return; }
L_0055483C:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554850u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554850u) [[unlikely]] return; }
L_00554850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
L_00554858:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554908; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005548B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055487Cu); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x0055487Cu) [[unlikely]] return; }
L_0055487C:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554888u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554888u) [[unlikely]] return; }
L_00554888:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554898u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554898u) [[unlikely]] return; }
L_00554898:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005548ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005548ACu) [[unlikely]] return; }
L_005548AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
    c.budget -= 1;
L_005548B8:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005549C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005548CCu); c.f[12] = ld32((c.r[29].w[0] + 84u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005548CCu) [[unlikely]] return; }
L_005548CC:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005548D8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005548D8u) [[unlikely]] return; }
L_005548D8:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005548E8u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x005548E8u) [[unlikely]] return; }
L_005548E8:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005548FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x005548FCu) [[unlikely]] return; }
L_005548FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005549C0; } }
    c.budget -= 1;
L_00554908:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00554968; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].d[0] = c.r[2].d[0] | 43195ull;
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055493Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x0055493Cu) [[unlikely]] return; }
L_0055493C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 7686ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_005549C0; } }
    c.budget -= 1;
L_00554968:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005549C0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005549C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B90000u);
    c.r[2].d[0] = c.r[2].d[0] | 11054ull;
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554998u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554998u) [[unlikely]] return; }
L_00554998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E9D0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 39188ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
L_005549C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005549E8; } }
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 8;
L_005549E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005549FCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0109(c, 256u, depth + 1u); else { c.pc = 0x00527FC0u; return; } if (c.pc != 0x005549FCu) [[unlikely]] return; }
L_005549FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00554A24; } }
L_00554A0C:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00554A10:
    set32(c.r[2], c.r[16].w[0] + 96u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00554400u | kUnwind; return; } goto L_00554400; }
    c.budget -= 1;
L_00554A20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00554A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00554A28:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00554A40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[23] = c.r[3].w[0];
    c.f[21] = 0u;
    c.f[22] = c.f[23];
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[21];  if (t) { goto L_00554AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005551A4; } }
L_00554AAC:
    set32(c.r[16], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00555120; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00554AC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554AD0u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00554AD0u) [[unlikely]] return; }
L_00554AD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_00554AE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_005551A8; } }
L_00554AE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00554FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554BB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554B60; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554B1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 4u, depth + 1u); else { c.pc = 0x00528020u; return; } if (c.pc != 0x00554B1Cu) [[unlikely]] return; }
L_00554B1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00554B2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00554B2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554B50; } }
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00554BB8; } }
    c.budget -= 1;
L_00554B50:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00554BB8; } }
L_00554B60:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554B74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 4u, depth + 1u); else { c.pc = 0x00528020u; return; } if (c.pc != 0x00554B74u) [[unlikely]] return; }
L_00554B74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00554B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00554B84:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00554BA8; } }
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00554BB8; } }
    c.budget -= 1;
L_00554BA8:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00554BB8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555110; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555110; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554BE8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0109(c, 250u, depth + 1u); else { c.pc = 0x00527EC0u; return; } if (c.pc != 0x00554BE8u) [[unlikely]] return; }
L_00554BE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00554C20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00554C20; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00555110; } }
    c.budget -= 1;
L_00554C20:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[29].w[0] + 136u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554C48u); set32(c.r[11], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0109(c, 253u, depth + 1u); else { c.pc = 0x00527F10u; return; } if (c.pc != 0x00554C48u) [[unlikely]] return; }
L_00554C48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_00554C58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00554C58:
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00554F90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554CC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554C90u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554C90u) [[unlikely]] return; }
L_00554C90:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554C9Cu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554C9Cu) [[unlikely]] return; }
L_00554C9C:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554CACu); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554CACu) [[unlikely]] return; }
L_00554CAC:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554CC0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554CC0u) [[unlikely]] return; }
L_00554CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
L_00554CC8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554D20; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554CE8u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554CE8u) [[unlikely]] return; }
L_00554CE8:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554CF4u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554CF4u) [[unlikely]] return; }
L_00554CF4:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D04u); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554D04u) [[unlikely]] return; }
L_00554D04:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D18u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554D18u) [[unlikely]] return; }
L_00554D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
L_00554D20:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554D78; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D40u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554D40u) [[unlikely]] return; }
L_00554D40:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D4Cu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554D4Cu) [[unlikely]] return; }
L_00554D4C:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D5Cu); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554D5Cu) [[unlikely]] return; }
L_00554D5C:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D70u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554D70u) [[unlikely]] return; }
L_00554D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
L_00554D78:
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554DD0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554D98u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554D98u) [[unlikely]] return; }
L_00554D98:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554DA4u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554DA4u) [[unlikely]] return; }
L_00554DA4:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554DB4u); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554DB4u) [[unlikely]] return; }
L_00554DB4:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554DC8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554DC8u) [[unlikely]] return; }
L_00554DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
L_00554DD0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554E28; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554DF0u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554DF0u) [[unlikely]] return; }
L_00554DF0:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554DFCu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554DFCu) [[unlikely]] return; }
L_00554DFC:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E0Cu); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554E0Cu) [[unlikely]] return; }
L_00554E0C:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E20u); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554E20u) [[unlikely]] return; }
L_00554E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
L_00554E28:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554ED8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E4Cu); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554E4Cu) [[unlikely]] return; }
L_00554E4C:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E58u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554E58u) [[unlikely]] return; }
L_00554E58:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E68u); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554E68u) [[unlikely]] return; }
L_00554E68:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E7Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554E7Cu) [[unlikely]] return; }
L_00554E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
    c.budget -= 1;
L_00554E88:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00554F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554E9Cu); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554E9Cu) [[unlikely]] return; }
L_00554E9C:
    c.f[12] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554EA8u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554EA8u) [[unlikely]] return; }
L_00554EA8:
    c.f[25] = fp::sub(c.f[24], c.f[0]);
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554EB8u); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00554EB8u) [[unlikely]] return; }
L_00554EB8:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554ECCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[24], c.f[25]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554ECCu) [[unlikely]] return; }
L_00554ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00554F90; } }
    c.budget -= 1;
L_00554ED8:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00554F38; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].d[0] = c.r[2].d[0] | 43195ull;
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554F0Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554F0Cu) [[unlikely]] return; }
L_00554F0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 7686ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00554F90; } }
    c.budget -= 1;
L_00554F38:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00554F90; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00554F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B90000u);
    c.r[2].d[0] = c.r[2].d[0] | 11054ull;
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554F68u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00554F68u) [[unlikely]] return; }
L_00554F68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E9D0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 39188ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
L_00554F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00554FB8; } }
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 8;
L_00554FB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00554FCCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0109(c, 256u, depth + 1u); else { c.pc = 0x00527FC0u; return; } if (c.pc != 0x00554FCCu) [[unlikely]] return; }
L_00554FCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));  goto L_00554FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00554FDC:
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00555110; } }
L_00554FE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555110; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B90000u);
    c.r[2].d[0] = c.r[2].d[0] | 11054ull;
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555020u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00555020u) [[unlikely]] return; }
L_00555020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E9D0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 39188ull;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 28u), c.f[0]);  if (t) { goto L_00555110; } }
L_00555048:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555078; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = fp::mul(c.f[22], c.f[0]);  if (t) { goto L_00555110; } }
    c.r[2].d[0] = c.r[3].d[0] & 65534ull;
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00555110; } }
L_00555078:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005550D0; } }
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005550ACu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x005550ACu) [[unlikely]] return; }
L_005550AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[23] = fp::mul(c.f[23], c.f[0]);  if (t) { goto L_00555110; } }
    c.r[2].d[0] = c.r[3].d[0] & 65534ull;
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00555110; } }
    c.budget -= 1;
L_005550D0:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555110; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005550F8; } }
    c.f[21] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00555110; } }
    c.budget -= 1;
L_005550F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00555110; } }
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_00555110:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00554AC0u | kUnwind; return; } goto L_00554AC0; }
L_00555120:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555178; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00555154; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555144u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x00555144u) [[unlikely]] return; }
L_00555144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00555154:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00555178; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555168u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x00555168u) [[unlikely]] return; }
L_00555168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_00555178:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005551A4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555190u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0106(c, 243u, depth + 1u); else { c.pc = 0x0051B890u; return; } if (c.pc != 0x00555190u) [[unlikely]] return; }
L_00555190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005551A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005551A4; } }
L_005551A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005551A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_005551A8:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_005551E0:
    set32(c.r[9], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], c.r[4].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_00555280; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 2;
L_005551F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00555218; } }
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_00555270; } }
    c.budget -= 1;
L_00555218:
    set32(c.r[8], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00555230; } }
    c.budget -= 1;
L_00555228:
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00555230:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00555248; } }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00555228u | kUnwind; return; } goto L_00555228; } }
    c.budget -= 1;
L_00555248:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00555268; } }
    st32((c.r[9].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00555270; } }
    c.budget -= 1;
L_00555268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_00555284; } }
L_00555270:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[6].d[0]) { set32(c.r[2], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005551F8u | kUnwind; return; } goto L_005551F8; }
    c.budget -= 1;
L_00555280:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00555284:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00555290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005552A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0115(c, 28u, depth + 1u); else { c.pc = 0x00554270u; return; } if (c.pc != 0x005552A8u) [[unlikely]] return; }
L_005552A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_005552F0; } }
L_005552B8:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005552E4u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0115(c, 201u, depth + 1u); else { c.pc = 0x00556400u; return; } if (c.pc != 0x005552E4u) [[unlikely]] return; }
L_005552E4:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005552B8u | kUnwind; return; } goto L_005552B8; } }
L_005552F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00555338; } }
L_00555300:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055532Cu); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0115(c, 221u, depth + 1u); else { c.pc = 0x00556A30u; return; } if (c.pc != 0x0055532Cu) [[unlikely]] return; }
L_0055532C:
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00555300u | kUnwind; return; } goto L_00555300; } }
L_00555338:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 416u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0055536C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 3945u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555368u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00555368u) [[unlikely]] return; }
L_00555368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0055536C:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00555380:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_005553E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 84u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 96u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555420u); st32((c.r[4].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0115(c, 129u, depth + 1u); else { c.pc = 0x00555380u; return; } if (c.pc != 0x00555420u) [[unlikely]] return; }
L_00555420:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00555440:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 156u)));  goto L_00555450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00555458; } }
L_00555450:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00555458:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00555460:
    st32((c.r[4].w[0] + 156u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00555470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_0055548C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055548Cu);  if (depth < kMaxDepth) unit_0110(c, 194u, depth + 1u); else { c.pc = 0x00543800u; return; } if (c.pc != 0x0055548Cu) [[unlikely]] return; }
L_0055548C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005554A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_005554BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005554BCu);  if (depth < kMaxDepth) unit_0110(c, 197u, depth + 1u); else { c.pc = 0x00543840u; return; } if (c.pc != 0x005554BCu) [[unlikely]] return; }
L_005554BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005554D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_005554EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005554ECu);  if (depth < kMaxDepth) unit_0110(c, 206u, depth + 1u); else { c.pc = 0x00543900u; return; } if (c.pc != 0x005554ECu) [[unlikely]] return; }
L_005554EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00555500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_0055551C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055551Cu);  if (depth < kMaxDepth) unit_0110(c, 209u, depth + 1u); else { c.pc = 0x00543960u; return; } if (c.pc != 0x0055551Cu) [[unlikely]] return; }
L_0055551C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00555530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_0055554C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055554Cu);  if (depth < kMaxDepth) unit_0110(c, 200u, depth + 1u); else { c.pc = 0x00543880u; return; } if (c.pc != 0x0055554Cu) [[unlikely]] return; }
L_0055554C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00555560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_0055557C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055557Cu);  if (depth < kMaxDepth) unit_0110(c, 203u, depth + 1u); else { c.pc = 0x005438C0u; return; } if (c.pc != 0x0055557Cu) [[unlikely]] return; }
L_0055557C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00555590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_005555B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005555B4u);  if (depth < kMaxDepth) unit_0110(c, 212u, depth + 1u); else { c.pc = 0x005439C0u; return; } if (c.pc != 0x005555B4u) [[unlikely]] return; }
L_005555B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_005555B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 3753u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005555FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005555FCu) [[unlikely]] return; }
L_005555FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00555610:
    st32((c.r[4].w[0] + 152u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00555620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19248u);
    set32(c.r[3], c.r[3].w[0] - 19200u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 152u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), 0u);  c.pc = t; return; }
L_00555660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0055569C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 19248u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00555698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555698u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00555698u) [[unlikely]] return; }
L_00555698:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055569C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005556B0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[5].d[0] | 32ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  c.pc = t; return; }
L_00555710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 153u, depth + 1u); else { c.pc = 0x005556B0u; return; } if (c.pc != 0x00555724u) [[unlikely]] return; }
L_00555724:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00555740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[19].w[0] + 120u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00555774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055587C; } }
L_00555774:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00555878; } }
L_0055578C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 140u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005557A4u); set32(c.r[7], 0u + 3519u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x005557A4u) [[unlikely]] return; }
L_005557A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005557D8; } }
    st32((c.r[2].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 120u);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005557D4u); st32((c.r[2].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0115(c, 209u, depth + 1u); else { c.pc = 0x00556550u; return; } if (c.pc != 0x005557D4u) [[unlikely]] return; }
L_005557D4:
    c.budget -= 1;
L_005557D8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 12u)));  goto L_005557E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055587C; } }
L_005557E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005557F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 209u, depth + 1u); else { c.pc = 0x00556550u; return; } if (c.pc != 0x005557F0u) [[unlikely]] return; }
L_005557F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  goto L_00555800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00555880; } }
L_00555800:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555838; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00555838:
    st32((c.r[16].w[0] + 76u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[19].w[0] + 120u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 124u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055578Cu | kUnwind; return; } goto L_0055578C; } }
L_00555878:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055587C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00555880:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005558A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00555B60; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005558F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005558D0u);  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x005558D0u) [[unlikely]] return; }
L_005558D0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00555A70; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00555A70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00555C14; } }
L_005558F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 136u)));  goto L_005559A8; }
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555918u); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x00555918u) [[unlikely]] return; }
L_00555918:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555A70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555930u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x00555930u) [[unlikely]] return; }
L_00555930:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_0055595C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00555958; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555958:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0055595C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00555A70; }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555974u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 192u, depth + 1u); else { c.pc = 0x00516110u; return; } if (c.pc != 0x00555974u) [[unlikely]] return; }
L_00555974:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055599C; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055599C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055599C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_0055599C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555A70; } }
L_005559A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005559FC; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005559C0u);  if (depth < kMaxDepth) unit_0105(c, 261u, depth + 1u); else { c.pc = 0x00516850u; return; } if (c.pc != 0x005559C0u) [[unlikely]] return; }
L_005559C0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[17].w[0] + 136u);  goto L_005559EC; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005559E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005559E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_005559E8:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 1;
L_005559EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005559F4u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x005559F4u) [[unlikely]] return; }
L_005559F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 136u)));  if (t) { goto L_00555A2C; } }
L_005559FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00555A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555A0Cu); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x00555A0Cu) [[unlikely]] return; }
L_00555A0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555A28; } }
    st32((c.r[17].w[0] + 136u), 0u);
    c.budget -= 1;
L_00555A28:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_00555A2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_00555A3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00555A70; } }
L_00555A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555A44u);  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x00555A44u) [[unlikely]] return; }
L_00555A44:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00555A70; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00555A6C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555A6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555A6C:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00555A70:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00555C10; }
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00555AB0; }
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 8;
L_00555AB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  goto L_00555B58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555AC0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_010C(c, 162u, depth + 1u); else { c.pc = 0x00532610u; return; } if (c.pc != 0x00555AC0u) [[unlikely]] return; }
L_00555AC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 64u)));  goto L_00555AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555AD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00555B54; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00555B54; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00555AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00555B44; } }
L_00555AFC:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00555B40; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_00555B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00555B28; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00555B34; }
L_00555B28:
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00555B44; } }
L_00555B34:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00555B10u | kUnwind; return; } goto L_00555B10; }
    c.budget -= 1;
L_00555B40:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_00555B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555B54:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00555B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00555C0C; } }
L_00555B60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  goto L_00555C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555B70u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010C(c, 162u, depth + 1u); else { c.pc = 0x00532610u; return; } if (c.pc != 0x00555B70u) [[unlikely]] return; }
L_00555B70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  goto L_00555B80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555B80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00555C04; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00555C04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00555BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00555BF4; } }
L_00555BAC:
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00555BF0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_00555BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00555BD8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00555BE4; }
L_00555BD8:
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00555BF4; } }
L_00555BE4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00555BC0u | kUnwind; return; } goto L_00555BC0; }
    c.budget -= 1;
L_00555BF0:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_00555BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555C10; } }
L_00555C04:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00555C08:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_00555C0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00555C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00555C14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00555C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00555C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00555C60; } }
L_00555C58:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 2;
L_00555C60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555C6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0115(c, 161u, depth + 1u); else { c.pc = 0x005558A0u; return; } if (c.pc != 0x00555C6Cu) [[unlikely]] return; }
L_00555C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555C7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00555D58; } }
L_00555C7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_00555D34; }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00555CE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555D30; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 368u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00555CE0u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00555CE0u) [[unlikely]] return; }
L_00555CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00555D30; } }
L_00555CE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00555D30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555D30; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00555D30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555D30; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 368u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00555D30u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00555D30u) [[unlikely]] return; }
L_00555D30:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_00555D34:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00555D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555D4Cu);  if (depth < kMaxDepth) unit_010A(c, 14u, depth + 1u); else { c.pc = 0x00528170u; return; } if (c.pc != 0x00555D4Cu) [[unlikely]] return; }
L_00555D4C:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00555D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00555D58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00555D70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 15;
    { const bool t = c.r[22].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00555DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & 120ull;  if (t) { goto L_00555DBC; } }
L_00555DB4:
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] & 120ull;
    c.budget -= 2;
L_00555DBC:
    c.r[2].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[22].w[0] + 44u)));  goto L_00555E2C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555DE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 48u, depth + 1u); else { c.pc = 0x00538560u; return; } if (c.pc != 0x00555DE0u) [[unlikely]] return; }
L_00555DE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] & 16ull;  goto L_00555DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_005563CC; } }
L_00555DF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 188u)));  goto L_00555E14; }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555E28; } }
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] | 64ull;  if (t) { goto L_00555E28; } }
L_00555E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555E28; } }
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 3;
L_00555E28:
    set32(c.r[3], ld32((c.r[22].w[0] + 44u)));
    c.budget -= 1;
L_00555E2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));  goto L_00555EF8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_00555EDC; }
    st32((c.r[22].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555EF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00555EA8u); set32(c.r[7], c.r[29].w[0] + 180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00555EA8u) [[unlikely]] return; }
L_00555EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00555EF4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00555EF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00555EF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00555EF4; } }
L_00555EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555EE4u); set32(c.r[6], c.r[22].w[0] + 44u);  if (depth < kMaxDepth) unit_0117(c, 292u, depth + 1u); else { c.pc = 0x0055F3E0u; return; } if (c.pc != 0x00555EE4u) [[unlikely]] return; }
L_00555EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555EF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00555EF4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.budget -= 1;
L_00555EF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[22].w[0] + 44u)));  goto L_00555F1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555F08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 174u, depth + 1u); else { c.pc = 0x00555C30u; return; } if (c.pc != 0x00555F08u) [[unlikely]] return; }
L_00555F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00555F18:
    set32(c.r[3], ld32((c.r[22].w[0] + 44u)));
    c.budget -= 1;
L_00555F1C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] << 1);  goto L_00555F34; }
    st32((c.r[22].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005563C8; } }
L_00555F34:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00555F54; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00555F54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_005561EC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));  goto L_00555FFC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555FF8; } }
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005561C0; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00555FBCu); set32(c.r[7], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00555FBCu) [[unlikely]] return; }
L_00555FBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  goto L_00555FCC; }
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 2;
L_00555FCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_00555FF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00555FDCu); c.r[5].d[0] = c.r[17].d[0] & 24ull;  if (depth < kMaxDepth) unit_010B(c, 227u, depth + 1u); else { c.pc = 0x0052F340u; return; } if (c.pc != 0x00555FDCu) [[unlikely]] return; }
L_00555FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00555FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00555FEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_00555FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_005561C0; } }
L_00555FF8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.budget -= 1;
L_00555FFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00556048; }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556018u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00556018u) [[unlikely]] return; }
L_00556018:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  goto L_00556028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556028:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));  goto L_005561C0; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_005563C8; }
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005561C0; } }
L_00556048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556050u); set32(c.r[6], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_0116(c, 84u, depth + 1u); else { c.pc = 0x00558E10u; return; } if (c.pc != 0x00556050u) [[unlikely]] return; }
L_00556050:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 54u);  goto L_00556064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00556074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556074:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_00556084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556084:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 12u)));  goto L_00556094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_005563C8; } }
L_00556094:
    c.r[23].d[0] = c.r[17].d[0] & 64ull;
    set32(c.r[19], c.r[21].w[0] << 2);
    c.budget -= 2;
L_0055609C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 124u)));  goto L_005560B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 85u);  if (t) { goto L_005563C8; } }
L_005560B8:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_005560D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_005563C8; } }
L_005560D0:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 300u)));  goto L_00556110; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005560E8u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_010C(c, 162u, depth + 1u); else { c.pc = 0x00532610u; return; } if (c.pc != 0x005560E8u) [[unlikely]] return; }
L_005560E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 164u)));  goto L_005560F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_005560F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0055610C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 85u);  if (t) { goto L_005563C8; } }
L_0055610C:
    set32(c.r[25], ld32((c.r[20].w[0] + 300u)));
    c.budget -= 1;
L_00556110:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00556120u); set32(c.r[5], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00556120u) [[unlikely]] return; }
L_00556120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 172u)));  goto L_00556130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556130:
    c.r[3].d[0] = c.r[2].d[0] & 120ull;
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_00556148; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00556150; } }
L_00556148:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_005561B4; }
L_00556150:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556160u); set32(c.r[6], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00556160u) [[unlikely]] return; }
L_00556160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00556170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556170:
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556180u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00556180u) [[unlikely]] return; }
L_00556180:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  goto L_00556190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556190:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005561C0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_005561C0; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_005563C8; } }
L_005561B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055609Cu | kUnwind; return; } goto L_0055609C; } }
    c.budget -= 1;
L_005561C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_005561D4; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_005561D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005561DCu); set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (depth < kMaxDepth) unit_010B(c, 227u, depth + 1u); else { c.pc = 0x0052F340u; return; } if (c.pc != 0x005561DCu) [[unlikely]] return; }
L_005561DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 24u)));  goto L_0055637C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_005561EC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00556254; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556208u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_010E(c, 39u, depth + 1u); else { c.pc = 0x00538430u; return; } if (c.pc != 0x00556208u) [[unlikely]] return; }
L_00556208:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 8u));  goto L_00556218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556218:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556228u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0109(c, 256u, depth + 1u); else { c.pc = 0x00527FC0u; return; } if (c.pc != 0x00556228u) [[unlikely]] return; }
L_00556228:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[16].w[0] + 12u));  goto L_00556238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556238:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556244u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0109(c, 256u, depth + 1u); else { c.pc = 0x00527FC0u; return; } if (c.pc != 0x00556244u) [[unlikely]] return; }
L_00556244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00556378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556254:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0055626C; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 24u), 0u);  if (t) { goto L_00556378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00556378; } }
L_0055626C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 37u);  goto L_005563C8; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), 0u);  goto L_005562C4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556294u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00556294u) [[unlikely]] return; }
L_00556294:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 160u)));  goto L_005562A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_005562A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));  goto L_00556378; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_005563C8; }
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00556378; } }
L_005562C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00556378; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055630Cu); set32(c.r[7], c.r[29].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055630Cu) [[unlikely]] return; }
L_0055630C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  goto L_0055632C; }
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 156u), 0u);  if (t) { goto L_00556328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556328:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_0055632C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_00556378; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556344u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00556344u) [[unlikely]] return; }
L_00556344:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 160u)));  goto L_00556354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005563C8; } }
L_00556354:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00556378; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00556378; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 54u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_005563C8; } }
L_00556378:
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0055637C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[22].w[0] + 44u)));  goto L_005563B8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005563B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005563B4u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005563B4u) [[unlikely]] return; }
L_005563B4:
    set32(c.r[4], ld32((c.r[22].w[0] + 44u)));
    c.budget -= 1;
L_005563B8:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[22].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
L_005563C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_005563CC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00556400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556418u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 174u, depth + 1u); else { c.pc = 0x00555C30u; return; } if (c.pc != 0x00556418u) [[unlikely]] return; }
L_00556418:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00556428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00556534; } }
L_00556428:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_005564A4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_005564A0; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00556470; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 3700u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055646Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055646Cu) [[unlikely]] return; }
L_0055646C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_00556470:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 3703u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055648Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055648Cu) [[unlikely]] return; }
L_0055648C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005564A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00556530; } }
L_005564A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_005564A4:
    set32(c.r[2], c.r[16].w[0] + 120u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_005564D0; } }
L_005564B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005564B8u); set32(c.r[17], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0115(c, 201u, depth + 1u); else { c.pc = 0x00556400u; return; } if (c.pc != 0x005564B8u) [[unlikely]] return; }
L_005564B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 120u);  goto L_005564C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00556530; } }
L_005564C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005564B0u | kUnwind; return; } goto L_005564B0; } }
L_005564D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_005564FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2830u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005564F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005564F8u) [[unlikely]] return; }
L_005564F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_005564FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 416u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00556530; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2837u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055652Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055652Cu) [[unlikely]] return; }
L_0055652C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00556530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00556534:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00556550:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 666u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4260000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[3], 0u - 666u);
    st32((c.r[4].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[7].w[0]);  c.pc = t; return; }
L_005565F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 120u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556624u); st32((c.r[4].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0115(c, 209u, depth + 1u); else { c.pc = 0x00556550u; return; } if (c.pc != 0x00556624u) [[unlikely]] return; }
L_00556624:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00556640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_005566A0; } }
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], ld32((c.r[17].w[0] + 36u)));  goto L_005566A4; }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00556974; } }
L_005566A0:
    set32(c.r[7], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_005566A4:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_005566D0; } }
L_005566B4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005566B4u | kUnwind; return; } goto L_005566B4; } }
L_005566D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 36u);  goto L_005566EC; }
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00556974; } }
L_005566EC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00556940; } }
    c.f[6] = ld32((c.r[7].w[0] + 12u));
    c.budget -= 1;
L_005566F8:
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[21]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[6].d[0] = c.r[7].d[0] + 0ull;  goto L_00556934; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00556930; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_00556784; }
    c.f[5] = ld32((c.r[6].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.facc = fp::add(c.f[0], c.f[5]);
    c.f[2] = fp::sub(c.f[6], c.f[5]);
    c.f[0] = fp::sub(c.f[21], c.f[5]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[5]);
    c.f[4] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    st32((c.r[29].w[0] + 104u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.f[4]);
    c.f[3] = ld32((c.r[7].w[0] + 16u));
    st32((c.r[29].w[0] + 92u), c.f[4]);
    st32((c.r[29].w[0] + 108u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556778u); st32((c.r[29].w[0] + 96u), c.f[1]);  if (depth < kMaxDepth) unit_0116(c, 158u, depth + 1u); else { c.pc = 0x005599E0u; return; } if (c.pc != 0x00556778u) [[unlikely]] return; }
L_00556778:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00556910; } }
L_00556784:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 4ull;  goto L_005567C4; }
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::sub(c.f[6], c.f[2]);
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00556910; } }
L_005567C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 8ull;  goto L_00556888; }
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.f[20] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::sub(c.f[6], c.f[2]);
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    fpu_div(c, 24u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[23] = fp::sub(c.f[20], c.f[0]);  goto L_00556800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = fp::sub(c.f[0], c.f[20]);  if (t) { goto L_00556814; } }
L_00556800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::sub(c.f[0], c.f[24]);
    c.budget -= 5;
L_00556814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556828u);  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00556828u) [[unlikely]] return; }
L_00556828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556838u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00556838u) [[unlikely]] return; }
L_00556838:
    fpu_div(c, 0u, c.f[22], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556854u); c.f[13] = fp::mul(c.f[0], c.f[24]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00556854u) [[unlikely]] return; }
L_00556854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00556910; } }
L_00556888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00556910; }
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.f[5] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::sub(c.f[6], c.f[2]);
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::sub(c.f[5], c.f[0]);  goto L_005568D0; }
    c.f[4] = fp::sub(c.f[0], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_005568D4; } }
L_005568D0:
    c.f[5] = c.f[0];
    c.budget -= 1;
L_005568D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.facc = fp::add(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 15;
L_00556910:
    st32((c.r[17].w[0]), c.f[21]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00556974; } }
L_00556930:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00556934:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[2].d[0]) { c.f[6] = ld32((c.r[7].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005566F8u | kUnwind; return; } goto L_005566F8; }
L_00556940:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00556950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[6].w[0] + 16u));  if (t) { goto L_00556954; } }
L_00556950:
    c.f[0] = 0u;
    c.budget -= 1;
L_00556954:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.f[21]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
L_00556974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_005569A0:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_005569E0:
    set32(c.r[2], c.r[4].w[0] + 36u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0]), 0u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_00556A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00556B24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00556B24; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 36u)));  goto L_00556A90; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2607u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556A8Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00556A8Cu) [[unlikely]] return; }
L_00556A8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00556A90:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00556AF0; } }
L_00556A9C:
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], 0u + 2620u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[5].w[0]), c.r[5].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556AE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00556AE0u) [[unlikely]] return; }
L_00556AE0:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00556A9Cu | kUnwind; return; } goto L_00556A9C; } }
    c.budget -= 1;
L_00556AF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2623u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556B10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00556B10u) [[unlikely]] return; }
L_00556B10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_00556B28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00556B84; } }
L_00556B24:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_00556B28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 20u), 0u);  goto L_00556B48; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00556B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556B44u);  if (depth < kMaxDepth) unit_010A(c, 14u, depth + 1u); else { c.pc = 0x00528170u; return; } if (c.pc != 0x00556B44u) [[unlikely]] return; }
L_00556B44:
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 1;
L_00556B48:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 416u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00556B80; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2536u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556B7Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00556B7Cu) [[unlikely]] return; }
L_00556B7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00556B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00556B84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00556BA0:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00556BC0:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00556BF0:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00556C20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 21880u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556C4Cu); st32((c.r[28].w[0] - 21880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00556C4Cu) [[unlikely]] return; }
L_00556C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20720u)));
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_00556DF0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[16], c.r[16].w[0] + 20756u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21884u)));
    c.budget -= 3;
L_00556C70:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  goto L_00556C88; }
    set32(c.r[2], 0u + 2u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 21884u), c.r[2].w[0]);  if (t) { goto L_00556DF0; } }
L_00556C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556C90u);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00556C90u) [[unlikely]] return; }
L_00556C90:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00556CB8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556CB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0115(c, 343u, depth + 1u); else { c.pc = 0x00557DB0u; return; } if (c.pc != 0x00556CB0u) [[unlikely]] return; }
L_00556CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00556CE0; } }
L_00556CB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556CD8u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0115(c, 282u, depth + 1u); else { c.pc = 0x00557390u; return; } if (c.pc != 0x00556CD8u) [[unlikely]] return; }
L_00556CD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00556CE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00556D58; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00556D10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00556D58; } }
    c.budget -= 1;
L_00556D10:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00556D58; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00556D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 3;
L_00556D38:
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00556D38u | kUnwind; return; } goto L_00556D38; } }
L_00556D58:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (t) { goto L_00556D70; } }
    st32((c.r[2].w[0] + 320u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
L_00556D70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00556D88; } }
    st32((c.r[4].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556D84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0112(c, 46u, depth + 1u); else { c.pc = 0x005487C0u; return; } if (c.pc != 0x00556D84u) [[unlikely]] return; }
L_00556D84:
    c.budget -= 1;
L_00556D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556D90u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00556D90u) [[unlikely]] return; }
L_00556D90:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 20752u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[18].w[0]), c.r[18].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[2].w[0]), c.r[18].w[0]);  if (t) { goto L_00556DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20720u)));
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 21884u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00556C70u | kUnwind; return; } goto L_00556C70; }
L_00556DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556DF8u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00556DF8u) [[unlikely]] return; }
L_00556DF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 21880u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 21880u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00556E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 21872u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00556ED4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21880u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 21884u), c.r[3].w[0]);  if (t) { goto L_00556E68; } }
L_00556E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556E50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00556E50u) [[unlikely]] return; }
L_00556E50:
    set32(c.r[2], ld32((c.r[28].w[0] - 21880u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00556E48u | kUnwind; return; } goto L_00556E48; } }
    c.budget -= 1;
L_00556E68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556E74u); set32(c.r[4], c.r[4].w[0] + 27680u);  if (depth < kMaxDepth) unit_0105(c, 163u, depth + 1u); else { c.pc = 0x00515D90u; return; } if (c.pc != 0x00556E74u) [[unlikely]] return; }
L_00556E74:
    set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00556E8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556E88u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x00556E88u) [[unlikely]] return; }
L_00556E88:
    st32((c.r[28].w[0] - 21888u), 0u);
    c.budget -= 1;
L_00556E8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 21892u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 21896u)));  goto L_00556EA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556EA0u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x00556EA0u) [[unlikely]] return; }
L_00556EA0:
    st32((c.r[28].w[0] - 21892u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 21896u)));
    c.budget -= 2;
L_00556EA8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st8((c.r[28].w[0] - 21872u), static_cast<std::uint8_t>(0u));  goto L_00556ED4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2375u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556ECCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00556ECCu) [[unlikely]] return; }
L_00556ECC:
    st32((c.r[28].w[0] - 21896u), 0u);
    st8((c.r[28].w[0] - 21872u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00556ED4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00556EF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 21872u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00557070; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 21888u);
    st8((c.r[28].w[0] - 21872u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556F1Cu); st32((c.r[28].w[0] - 21884u), 0u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x00556F1Cu) [[unlikely]] return; }
L_00556F1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[28].w[0] - 21892u);  goto L_00556F2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00557078; } }
L_00556F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556F34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x00556F34u) [[unlikely]] return; }
L_00556F34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);  goto L_00556F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557074; } }
L_00556F44:
    set32(c.r[5], c.r[28].w[0] - 21876u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556F50u); set32(c.r[4], c.r[4].w[0] + 27680u);  if (depth < kMaxDepth) unit_0105(c, 168u, depth + 1u); else { c.pc = 0x00515E60u; return; } if (c.pc != 0x00556F50u) [[unlikely]] return; }
L_00556F50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 16u);  goto L_00556F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557074; } }
L_00556F60:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556F6Cu); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00556F6Cu) [[unlikely]] return; }
L_00556F6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], 0u + 68u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556F84u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_010E(c, 80u, depth + 1u); else { c.pc = 0x00538960u; return; } if (c.pc != 0x00556F84u) [[unlikely]] return; }
L_00556F84:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00556F94; } }
    st32((c.r[28].w[0] - 29348u), c.r[2].w[0]);
    c.budget -= 1;
L_00556F94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 20752u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 20720u);
    st32((c.r[2].w[0] + 20756u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 20760u), 0u);
    set32(c.r[7], 0u + 2328u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 20724u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20720u), c.r[4].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    st32((c.r[2].w[0] + 20728u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29348u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00556FF8u); set32(c.r[5], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x00556FF8u) [[unlikely]] return; }
L_00556FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 21896u), c.r[2].w[0]);  if (t) { goto L_00557008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00557074; } }
L_00557008:
    set32(c.r[2], ld32((c.r[28].w[0] - 29348u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00557070; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20756u);
    set32(c.r[3], c.r[3].w[0] + 20752u);
    c.budget -= 5;
L_00557028:
    set32(c.r[2], ld32((c.r[28].w[0] - 21896u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 21896u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29348u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557028u | kUnwind; return; } goto L_00557028; } }
L_00557070:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00557074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00557078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00557080:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 21892u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_005571B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005570C0u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005570C0u) [[unlikely]] return; }
L_005570C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005570E0; } }
L_005570C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005570D0u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005570D0u) [[unlikely]] return; }
L_005570D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005570D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x005570D8u) [[unlikely]] return; }
L_005570D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005570E0u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005570E0u) [[unlikely]] return; }
L_005570E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00557118; } }
L_00557110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00557118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005570C8u | kUnwind; return; } goto L_005570C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557128u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557128u) [[unlikely]] return; }
L_00557128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557130u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557130u) [[unlikely]] return; }
L_00557130:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00557190; } }
L_00557148:
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557154u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0116(c, 135u, depth + 1u); else { c.pc = 0x005594F0u; return; } if (c.pc != 0x00557154u) [[unlikely]] return; }
L_00557154:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 32u);  goto L_00557184; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0055736C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557174u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557174u) [[unlikely]] return; }
L_00557174:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055736C; } }
L_00557184:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557148u | kUnwind; return; } goto L_00557148; } }
    c.budget -= 1;
L_00557190:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { goto L_005571A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005571A4u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005571A4u) [[unlikely]] return; }
L_005571A4:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_005571A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055736C; } }
L_005571B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));  goto L_005571C8; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  goto L_005571E8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 1;
L_005571C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055736C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005571D8u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005571D8u) [[unlikely]] return; }
L_005571D8:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055736C; } }
L_005571E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005571F0u);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005571F0u) [[unlikely]] return; }
L_005571F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557210; } }
L_005571F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557200u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557200u) [[unlikely]] return; }
L_00557200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557208u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00557208u) [[unlikely]] return; }
L_00557208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557210u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557210u) [[unlikely]] return; }
L_00557210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557240; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00557248; } }
L_00557240:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00557248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005571F8u | kUnwind; return; } goto L_005571F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557258u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557258u) [[unlikely]] return; }
L_00557258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557260u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557260u) [[unlikely]] return; }
L_00557260:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00557350; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 1;
L_00557270:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00557328; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00557328; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_005572F0; } }
L_00557298:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005572E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005572ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 135u, depth + 1u); else { c.pc = 0x005594F0u; return; } if (c.pc != 0x005572ACu) [[unlikely]] return; }
L_005572AC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_005572F0; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0055736C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005572CCu); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005572CCu) [[unlikely]] return; }
L_005572CC:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055736C; } }
    c.budget -= 1;
L_005572E0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557298u | kUnwind; return; } goto L_00557298; } }
    c.budget -= 1;
L_005572F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00557328; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00557328; } }
L_00557308:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557308u | kUnwind; return; } goto L_00557308; } }
    c.budget -= 1;
L_00557328:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00557340; } }
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 2;
L_00557340:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00557270u | kUnwind; return; } goto L_00557270; }
    c.budget -= 1;
L_00557350:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055736C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557364u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557364u) [[unlikely]] return; }
L_00557364:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055736C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00557390:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005573D0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_005573D0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 68u)));  goto L_005573E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_005579D0; } }
L_005573E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 32u)));  goto L_00557400; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_005579D0; } }
L_00557400:
    set32(c.r[2], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00557428; } }
L_0055740C:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055740Cu | kUnwind; return; } goto L_0055740C; } }
L_00557428:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] & 1ull;  goto L_0055744C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_005579D0; } }
L_0055744C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21892u)));  goto L_005574D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557460u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 46u, depth + 1u); else { c.pc = 0x005487C0u; return; } if (c.pc != 0x00557460u) [[unlikely]] return; }
L_00557460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557468u);  if (depth < kMaxDepth) unit_0115(c, 248u, depth + 1u); else { c.pc = 0x00556EF0u; return; } if (c.pc != 0x00557468u) [[unlikely]] return; }
L_00557468:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = c.r[18].d[0] + 0ull;  goto L_00557478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_005579D4; } }
L_00557478:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557490u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0116(c, 73u, depth + 1u); else { c.pc = 0x00558C20u; return; } if (c.pc != 0x00557490u) [[unlikely]] return; }
L_00557490:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_005574B0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005574AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_005574AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_005574B0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 21876u)));  goto L_005574C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005574C8; } }
L_005574C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005574C8u);  if (depth < kMaxDepth) unit_0105(c, 154u, depth + 1u); else { c.pc = 0x00515C80u; return; } if (c.pc != 0x005574C8u) [[unlikely]] return; }
L_005574C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_005574D0:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005574DCu); st32((c.r[29].w[0] + 248u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005574DCu) [[unlikely]] return; }
L_005574DC:
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 36u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    st32((c.r[29].w[0] + 264u), 0u);
    set32(c.r[7], 0u + 2038u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055750Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055750Cu) [[unlikely]] return; }
L_0055750C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055753C; } }
    st32((c.r[2].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 24u);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 10;
L_0055753C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00557568; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557558u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557558u) [[unlikely]] return; }
L_00557558:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_00557568:
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (t) { goto L_00557578; } }
    c.r[22].d[0] = c.r[22].d[0] | 1ull;
    c.budget -= 1;
L_00557578:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 108u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005575ACu); st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x005575ACu) [[unlikely]] return; }
L_005575AC:
    set32(c.r[2], 0u + 108u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], 0u + 23u);
    set32(c.r[16], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 188u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_005575F8; } }
L_005575D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005575F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[29].w[0] + 264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005575ECu); set32(c.r[7], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_0116(c, 191u, depth + 1u); else { c.pc = 0x0055A120u; return; } if (c.pc != 0x005575ECu) [[unlikely]] return; }
L_005575EC:
    c.budget -= 1;
L_005575F0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_005575F8:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00557610; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005575D4u | kUnwind; return; } goto L_005575D4; }
    c.budget -= 1;
L_00557610:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] & 2ull;  goto L_0055765C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], c.r[17].w[0] + 20u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557654u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x00557654u) [[unlikely]] return; }
L_00557654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00557730; } }
L_0055765C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], 0u + 23u);  goto L_00557688; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 24u);  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557678u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557678u) [[unlikely]] return; }
L_00557678:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_00557688:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[29].w[0] + 240u);  if (t) { goto L_00557718; } }
L_00557694:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_00557710; }
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[8], c.r[17].w[0] + 20u);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005576C4u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x005576C4u) [[unlikely]] return; }
L_005576C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0055770C; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0055770C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005576E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0116(c, 135u, depth + 1u); else { c.pc = 0x005594F0u; return; } if (c.pc != 0x005576E8u) [[unlikely]] return; }
L_005576E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005576FCu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005576FCu) [[unlikely]] return; }
L_005576FC:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_0055770C:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_00557710:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00557718:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00557730; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00557694u | kUnwind; return; } goto L_00557694; }
    c.budget -= 1;
L_00557730:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 20u)));  goto L_0055775C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055774Cu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055774Cu) [[unlikely]] return; }
L_0055774C:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_0055775C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 300u)));  goto L_00557794; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0116(c, 135u, depth + 1u); else { c.pc = 0x005594F0u; return; } if (c.pc != 0x00557770u) [[unlikely]] return; }
L_00557770:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557784u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557784u) [[unlikely]] return; }
L_00557784:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_00557794:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005577A4u); set32(c.r[5], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005577A4u) [[unlikely]] return; }
L_005577A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_005577D4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005577C4u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005577C4u) [[unlikely]] return; }
L_005577C4:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_005577D4:
    set32(c.r[2], 0u - 97u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 96ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005577FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010C(c, 163u, depth + 1u); else { c.pc = 0x00532630u; return; } if (c.pc != 0x005577FCu) [[unlikely]] return; }
L_005577FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 300u)));  goto L_0055782C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055781Cu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055781Cu) [[unlikely]] return; }
L_0055781C:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_0055782C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055783Cu); set32(c.r[5], c.r[29].w[0] + 268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055783Cu) [[unlikely]] return; }
L_0055783C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  goto L_0055786C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055785Cu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055785Cu) [[unlikely]] return; }
L_0055785C:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_0055786C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005578D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00557878:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055788Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 163u, depth + 1u); else { c.pc = 0x00532630u; return; } if (c.pc != 0x0055788Cu) [[unlikely]] return; }
L_0055788C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  goto L_005578BC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005578ACu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005578ACu) [[unlikely]] return; }
L_005578AC:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_005578BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557878u | kUnwind; return; } goto L_00557878; } }
    c.budget -= 1;
L_005578D0:
    c.r[2].d[0] = c.r[22].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00557990; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 392u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 2156u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055790Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055790Cu) [[unlikely]] return; }
L_0055790C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_00557938; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_005579D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557928u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557928u) [[unlikely]] return; }
L_00557928:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005579D0; } }
L_00557938:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00557990; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 2;
L_0055794C:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00557978; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 260u)));
    st32((c.r[4].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
L_00557978:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055794Cu | kUnwind; return; } goto L_0055794C; } }
    c.budget -= 1;
L_00557990:
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], c.r[20].w[0] + 32u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_005579CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005579C8u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005579C8u) [[unlikely]] return; }
L_005579C8:
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_005579CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005579D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_005579D4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00557A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00557D8C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21892u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557A38u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557A38u) [[unlikely]] return; }
L_00557A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557A58; } }
L_00557A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557A48u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557A48u) [[unlikely]] return; }
L_00557A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557A50u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00557A50u) [[unlikely]] return; }
L_00557A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557A58u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557A58u) [[unlikely]] return; }
L_00557A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00557A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00557A90; } }
L_00557A88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00557A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557A40u | kUnwind; return; } goto L_00557A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557AA0u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557AA0u) [[unlikely]] return; }
L_00557AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557AA8u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557AA8u) [[unlikely]] return; }
L_00557AA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00557CA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 376u)));  goto L_00557AE4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 33u);  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557AD4u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557AD4u) [[unlikely]] return; }
L_00557AD4:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557AE4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00557B10; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 1;
L_00557AF0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00557B10; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557AF0u | kUnwind; return; } goto L_00557AF0; } }
    c.budget -= 1;
L_00557B10:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 392u)));  goto L_00557B40; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557B30u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557B30u) [[unlikely]] return; }
L_00557B30:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 37u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557B40:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00557CA0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00557B60:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  goto L_00557C8C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557B84u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x00557B84u) [[unlikely]] return; }
L_00557B84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_00557BB0; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 33u);  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557BA0u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557BA0u) [[unlikely]] return; }
L_00557BA0:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557BB0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00557BC4u); set32(c.r[6], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00557BC4u) [[unlikely]] return; }
L_00557BC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_00557BF4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557BE4u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557BE4u) [[unlikely]] return; }
L_00557BE4:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00557C88; } }
    st32((c.r[2].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00557C18u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00557C18u) [[unlikely]] return; }
L_00557C18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_00557C48; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557C38u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557C38u) [[unlikely]] return; }
L_00557C38:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557C48:
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00557C58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00557C58u) [[unlikely]] return; }
L_00557C58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00557C88; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557C78u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557C78u) [[unlikely]] return; }
L_00557C78:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557C88:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00557C8C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00557B60u | kUnwind; return; } goto L_00557B60; }
    c.budget -= 1;
L_00557CA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557CACu); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_010B(c, 242u, depth + 1u); else { c.pc = 0x0052F580u; return; } if (c.pc != 0x00557CACu) [[unlikely]] return; }
L_00557CAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  goto L_00557CDC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557CCCu); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557CCCu) [[unlikely]] return; }
L_00557CCC:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557CDC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00557D08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00557CE8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00557D08; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557CE8u | kUnwind; return; } goto L_00557CE8; } }
    c.budget -= 1;
L_00557D08:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));  goto L_00557D78; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557D1Cu); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x00557D1Cu) [[unlikely]] return; }
L_00557D1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 72u)));  goto L_00557D4C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557D3Cu); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557D3Cu) [[unlikely]] return; }
L_00557D3C:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00557D90; } }
L_00557D4C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 72u), 0u);  goto L_00557D74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 1963u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557D70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00557D70u) [[unlikely]] return; }
L_00557D70:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_00557D74:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 1;
L_00557D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00557D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557D88u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557D88u) [[unlikely]] return; }
L_00557D88:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00557D8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00557D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00557DB0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[30].w[0] + 268u), c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0] + 240u), c.r[7].w[0]);  if (t) { goto L_00557E00; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[30].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 2;
L_00557E00:
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_00557E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557E14:
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] & 1ull;  goto L_00557E28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557E28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21892u)));  goto L_00557EAC; }
    set32(c.r[4], ld32((c.r[30].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557E3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 46u, depth + 1u); else { c.pc = 0x005487C0u; return; } if (c.pc != 0x00557E3Cu) [[unlikely]] return; }
L_00557E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557E44u);  if (depth < kMaxDepth) unit_0115(c, 248u, depth + 1u); else { c.pc = 0x00556EF0u; return; } if (c.pc != 0x00557E44u) [[unlikely]] return; }
L_00557E44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[30].w[0] + 268u)));  goto L_00557E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[30].w[0] + 0u);  if (t) { [[clang::musttail]] return unit_0116(c, 67u, depth); } }
L_00557E54:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[30].w[0] + 240u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557E6Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0116(c, 73u, depth + 1u); else { c.pc = 0x00558C20u; return; } if (c.pc != 0x00557E6Cu) [[unlikely]] return; }
L_00557E6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00557E8C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00557E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557E88:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00557E8C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 21876u)));  goto L_00557E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00557EA4; } }
L_00557E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557EA4u);  if (depth < kMaxDepth) unit_0105(c, 154u, depth + 1u); else { c.pc = 0x00515C80u; return; } if (c.pc != 0x00557EA4u) [[unlikely]] return; }
L_00557EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557EAC:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557EB8u); st32((c.r[30].w[0] + 384u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00557EB8u) [[unlikely]] return; }
L_00557EB8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[30].w[0] + 272u);
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557ED0u); set32(c.r[6], 0u + 108u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00557ED0u) [[unlikely]] return; }
L_00557ED0:
    set32(c.r[3], 0u + 108u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[30].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[30].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 268u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0] + 332u), c.r[3].w[0]);  if (t) { goto L_00557F64; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00557F20; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 380u)));
    c.budget -= 1;
L_00557F00:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00557F20; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557F00u | kUnwind; return; } goto L_00557F00; } }
    c.budget -= 1;
L_00557F20:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 268u)));  goto L_00557F50; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  [[clang::musttail]] return unit_0116(c, 66u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557F40u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557F40u) [[unlikely]] return; }
L_00557F40:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 37u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557F50:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 392u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_00557FE0; } }
L_00557F64:
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00557FE4; }
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00557FA0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 1;
L_00557F80:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00557FA0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557F80u | kUnwind; return; } goto L_00557F80; } }
    c.budget -= 1;
L_00557FA0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 240u)));  goto L_00557FD0; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  [[clang::musttail]] return unit_0116(c, 66u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00557FC0u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00557FC0u) [[unlikely]] return; }
L_00557FC0:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 37u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 66u, depth); } }
L_00557FD0:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00557FE0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00557FE4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0116(c, 2u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00557FF4:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    [[clang::musttail]] return unit_0116(c, 1u, depth);
}

}
