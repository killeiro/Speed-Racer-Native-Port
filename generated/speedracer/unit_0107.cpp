#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0107[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0,
    114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130,
    0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0,
    184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0107(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0051C000;
    case 2u: goto L_0051C008;
    case 3u: goto L_0051C034;
    case 4u: goto L_0051C058;
    case 5u: goto L_0051C06C;
    case 6u: goto L_0051C094;
    case 7u: goto L_0051C0F0;
    case 8u: goto L_0051C100;
    case 9u: goto L_0051C110;
    case 10u: goto L_0051C130;
    case 11u: goto L_0051C178;
    case 12u: goto L_0051C190;
    case 13u: goto L_0051C1A4;
    case 14u: goto L_0051C1B8;
    case 15u: goto L_0051C1C8;
    case 16u: goto L_0051C1D0;
    case 17u: goto L_0051C1E8;
    case 18u: goto L_0051C1F8;
    case 19u: goto L_0051C200;
    case 20u: goto L_0051C214;
    case 21u: goto L_0051C21C;
    case 22u: goto L_0051C250;
    case 23u: goto L_0051C264;
    case 24u: goto L_0051C29C;
    case 25u: goto L_0051C2AC;
    case 26u: goto L_0051C2F0;
    case 27u: goto L_0051C338;
    case 28u: goto L_0051C350;
    case 29u: goto L_0051C364;
    case 30u: goto L_0051C378;
    case 31u: goto L_0051C388;
    case 32u: goto L_0051C390;
    case 33u: goto L_0051C3A8;
    case 34u: goto L_0051C3B8;
    case 35u: goto L_0051C3C0;
    case 36u: goto L_0051C3D4;
    case 37u: goto L_0051C3DC;
    case 38u: goto L_0051C410;
    case 39u: goto L_0051C424;
    case 40u: goto L_0051C45C;
    case 41u: goto L_0051C46C;
    case 42u: goto L_0051C4B0;
    case 43u: goto L_0051C540;
    case 44u: goto L_0051C548;
    case 45u: goto L_0051C574;
    case 46u: goto L_0051C584;
    case 47u: goto L_0051C598;
    case 48u: goto L_0051C5D0;
    case 49u: goto L_0051C680;
    case 50u: goto L_0051C6A0;
    case 51u: goto L_0051C700;
    case 52u: goto L_0051C738;
    case 53u: goto L_0051C770;
    case 54u: goto L_0051C780;
    case 55u: goto L_0051C788;
    case 56u: goto L_0051C790;
    case 57u: goto L_0051C7A8;
    case 58u: goto L_0051C7B8;
    case 59u: goto L_0051C7C0;
    case 60u: goto L_0051C7D0;
    case 61u: goto L_0051C7DC;
    case 62u: goto L_0051C7E4;
    case 63u: goto L_0051C818;
    case 64u: goto L_0051C828;
    case 65u: goto L_0051C834;
    case 66u: goto L_0051C86C;
    case 67u: goto L_0051C878;
    case 68u: goto L_0051C884;
    case 69u: goto L_0051C8C0;
    case 70u: goto L_0051C8F0;
    case 71u: goto L_0051C910;
    case 72u: goto L_0051C980;
    case 73u: goto L_0051C988;
    case 74u: goto L_0051C9B4;
    case 75u: goto L_0051C9C0;
    case 76u: goto L_0051C9D0;
    case 77u: goto L_0051CA00;
    case 78u: goto L_0051CA44;
    case 79u: goto L_0051CA60;
    case 80u: goto L_0051CAA0;
    case 81u: goto L_0051CAAC;
    case 82u: goto L_0051CAE8;
    case 83u: goto L_0051CB08;
    case 84u: goto L_0051CB34;
    case 85u: goto L_0051CB50;
    case 86u: goto L_0051CB70;
    case 87u: goto L_0051CB80;
    case 88u: goto L_0051CBB0;
    case 89u: goto L_0051CC10;
    case 90u: goto L_0051CC30;
    case 91u: goto L_0051CC58;
    case 92u: goto L_0051CC70;
    case 93u: goto L_0051CCA0;
    case 94u: goto L_0051CCC0;
    case 95u: goto L_0051CCD0;
    case 96u: goto L_0051CDA4;
    case 97u: goto L_0051CDAC;
    case 98u: goto L_0051CDB4;
    case 99u: goto L_0051CDBC;
    case 100u: goto L_0051CDC4;
    case 101u: goto L_0051CDCC;
    case 102u: goto L_0051CDD4;
    case 103u: goto L_0051CDDC;
    case 104u: goto L_0051CDE4;
    case 105u: goto L_0051CDEC;
    case 106u: goto L_0051D040;
    case 107u: goto L_0051D048;
    case 108u: goto L_0051D050;
    case 109u: goto L_0051D058;
    case 110u: goto L_0051D060;
    case 111u: goto L_0051D068;
    case 112u: goto L_0051D070;
    case 113u: goto L_0051D078;
    case 114u: goto L_0051D080;
    case 115u: goto L_0051D088;
    case 116u: goto L_0051D280;
    case 117u: goto L_0051D38C;
    case 118u: goto L_0051D394;
    case 119u: goto L_0051D39C;
    case 120u: goto L_0051D3A4;
    case 121u: goto L_0051D3AC;
    case 122u: goto L_0051D3B4;
    case 123u: goto L_0051D3BC;
    case 124u: goto L_0051D3C4;
    case 125u: goto L_0051D3CC;
    case 126u: goto L_0051D3D4;
    case 127u: goto L_0051D3F4;
    case 128u: goto L_0051D56C;
    case 129u: goto L_0051D574;
    case 130u: goto L_0051D57C;
    case 131u: goto L_0051D584;
    case 132u: goto L_0051D58C;
    case 133u: goto L_0051D594;
    case 134u: goto L_0051D59C;
    case 135u: goto L_0051D5A4;
    case 136u: goto L_0051D5AC;
    case 137u: goto L_0051D5B4;
    case 138u: goto L_0051D5D4;
    case 139u: goto L_0051D720;
    case 140u: goto L_0051D738;
    case 141u: goto L_0051D790;
    case 142u: goto L_0051D7D8;
    case 143u: goto L_0051D7EC;
    case 144u: goto L_0051D840;
    case 145u: goto L_0051D870;
    case 146u: goto L_0051D8C0;
    case 147u: goto L_0051D8D4;
    case 148u: goto L_0051D93C;
    case 149u: goto L_0051D98C;
    case 150u: goto L_0051D9A8;
    case 151u: goto L_0051D9C8;
    case 152u: goto L_0051DA10;
    case 153u: goto L_0051DA48;
    case 154u: goto L_0051DA78;
    case 155u: goto L_0051DA98;
    case 156u: goto L_0051DB0C;
    case 157u: goto L_0051DB54;
    case 158u: goto L_0051DB7C;
    case 159u: goto L_0051DB98;
    case 160u: goto L_0051DBE0;
    case 161u: goto L_0051DC28;
    case 162u: goto L_0051DC44;
    case 163u: goto L_0051DC90;
    case 164u: goto L_0051DCA4;
    case 165u: goto L_0051DCCC;
    case 166u: goto L_0051DCE8;
    case 167u: goto L_0051DD00;
    case 168u: goto L_0051DD40;
    case 169u: goto L_0051DD60;
    case 170u: goto L_0051DDB0;
    case 171u: goto L_0051DDE0;
    case 172u: goto L_0051DE00;
    case 173u: goto L_0051DE40;
    case 174u: goto L_0051DEE4;
    case 175u: goto L_0051DF60;
    case 176u: goto L_0051E040;
    case 177u: goto L_0051E048;
    case 178u: goto L_0051E050;
    case 179u: goto L_0051E058;
    case 180u: goto L_0051E060;
    case 181u: goto L_0051E068;
    case 182u: goto L_0051E070;
    case 183u: goto L_0051E078;
    case 184u: goto L_0051E080;
    case 185u: goto L_0051E088;
    case 186u: goto L_0051E0A8;
    case 187u: goto L_0051E168;
    case 188u: goto L_0051E19C;
    case 189u: goto L_0051E1D0;
    case 190u: goto L_0051E210;
    case 191u: goto L_0051E244;
    case 192u: goto L_0051E35C;
    case 193u: goto L_0051E364;
    case 194u: goto L_0051E36C;
    case 195u: goto L_0051E374;
    case 196u: goto L_0051E37C;
    case 197u: goto L_0051E384;
    case 198u: goto L_0051E38C;
    case 199u: goto L_0051E394;
    case 200u: goto L_0051E39C;
    case 201u: goto L_0051E3A4;
    case 202u: goto L_0051E3C4;
    case 203u: goto L_0051E468;
    case 204u: goto L_0051E4B4;
    case 205u: goto L_0051E4FC;
    case 206u: goto L_0051E550;
    case 207u: goto L_0051E568;
    case 208u: goto L_0051E5A4;
    case 209u: goto L_0051E5D0;
    case 210u: goto L_0051E664;
    case 211u: goto L_0051E68C;
    case 212u: goto L_0051E6B0;
    case 213u: goto L_0051E6F0;
    case 214u: goto L_0051E790;
    case 215u: goto L_0051E7C8;
    case 216u: goto L_0051E7E0;
    case 217u: goto L_0051E870;
    case 218u: goto L_0051E884;
    case 219u: goto L_0051E980;
    case 220u: goto L_0051E990;
    case 221u: goto L_0051EAB0;
    case 222u: goto L_0051EAC4;
    case 223u: goto L_0051EAF0;
    case 224u: goto L_0051EB08;
    case 225u: goto L_0051EB44;
    case 226u: goto L_0051EB64;
    case 227u: goto L_0051EB80;
    case 228u: goto L_0051EBB0;
    case 229u: goto L_0051EBE8;
    case 230u: goto L_0051EC0C;
    case 231u: goto L_0051EC24;
    case 232u: goto L_0051EC4C;
    case 233u: goto L_0051EC70;
    case 234u: goto L_0051ECB8;
    case 235u: goto L_0051ECCC;
    case 236u: goto L_0051ED20;
    case 237u: goto L_0051ED68;
    case 238u: goto L_0051ED7C;
    case 239u: goto L_0051EDD0;
    case 240u: goto L_0051EE40;
    case 241u: goto L_0051EEE8;
    case 242u: goto L_0051EF00;
    case 243u: goto L_0051EF80;
    case 244u: goto L_0051EFE0;
    case 245u: goto L_0051F0E4;
    case 246u: goto L_0051F0FC;
    case 247u: goto L_0051F128;
    case 248u: goto L_0051F150;
    case 249u: goto L_0051F1C0;
    case 250u: goto L_0051F250;
    case 251u: goto L_0051F32C;
    case 252u: goto L_0051F348;
    case 253u: goto L_0051F35C;
    case 254u: goto L_0051F370;
    case 255u: goto L_0051F3D0;
    case 256u: goto L_0051F510;
    case 257u: goto L_0051F524;
    case 258u: goto L_0051F570;
    case 259u: goto L_0051F5CC;
    case 260u: goto L_0051F614;
    case 261u: goto L_0051F62C;
    case 262u: goto L_0051F670;
    case 263u: goto L_0051F6A0;
    case 264u: goto L_0051F6E0;
    case 265u: goto L_0051F74C;
    case 266u: goto L_0051F768;
    case 267u: goto L_0051F7A0;
    case 268u: goto L_0051F7D0;
    case 269u: goto L_0051F7F0;
    case 270u: goto L_0051F820;
    case 271u: goto L_0051F8AC;
    case 272u: goto L_0051FA0C;
    case 273u: goto L_0051FA88;
    case 274u: goto L_0051FACC;
    case 275u: goto L_0051FB00;
    case 276u: goto L_0051FB9C;
    case 277u: goto L_0051FBAC;
    case 278u: goto L_0051FBC8;
    case 279u: goto L_0051FC20;
    case 280u: goto L_0051FC60;
    case 281u: goto L_0051FCAC;
    case 282u: goto L_0051FCC0;
    case 283u: goto L_0051FCD0;
    case 284u: goto L_0051FCEC;
    case 285u: goto L_0051FD1C;
    case 286u: goto L_0051FDB4;
    case 287u: goto L_0051FDD0;
    case 288u: goto L_0051FE20;
    default: bad_entry(c, 0x0051C000u); return;
    }
L_0051C000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C048; } }
L_0051C008:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = c.f[27];
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.f[26];
    c.f[14] = c.f[25];
    c.f[15] = c.f[24];
    c.f[16] = c.f[23];
    c.f[17] = c.f[22];
    c.f[18] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C034u); c.f[19] = c.f[20];  if (depth < kMaxDepth) unit_0107(c, 288u, depth + 1u); else { c.pc = 0x0051FE20u; return; } if (c.pc != 0x0051C034u) [[unlikely]] return; }
L_0051C034:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C008u | kUnwind; return; } goto L_0051C008; } }
    c.budget -= 1;
L_0051C048:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051BF04u | kUnwind; return; } [[clang::musttail]] return unit_0106(c, 284u, depth); }
L_0051C058:
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C0A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0051C06C:
    c.f[12] = c.f[27];
    c.f[13] = c.f[26];
    set32(c.r[5], 0u + 1u);
    c.f[14] = c.f[25];
    c.f[15] = c.f[24];
    c.f[16] = c.f[23];
    c.f[17] = c.f[22];
    c.f[18] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C094u); c.f[19] = c.f[20];  if (depth < kMaxDepth) unit_0107(c, 288u, depth + 1u); else { c.pc = 0x0051FE20u; return; } if (c.pc != 0x0051C094u) [[unlikely]] return; }
L_0051C094:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C06Cu | kUnwind; return; } goto L_0051C06C; }
    c.budget -= 1;
L_0051C0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0051C0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0051C100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0051C110:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 88u));  goto L_0051C120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051C128; } }
L_0051C120:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0051C128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051C130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0051C15C; } }
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0051C15C:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C288; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C288; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0051C178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C240; } }
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0051C240; } }
    c.budget -= 1;
L_0051C190:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0051C1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C1A4u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C1A4u) [[unlikely]] return; }
L_0051C1A4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C1E0; } }
    c.budget -= 1;
L_0051C1B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C1C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0107(c, 10u, depth + 1u); else { c.pc = 0x0051C130u; return; } if (c.pc != 0x0051C1C8u) [[unlikely]] return; }
L_0051C1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C1D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C1D0u) [[unlikely]] return; }
L_0051C1D0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C1B8u | kUnwind; return; } goto L_0051C1B8; } }
L_0051C1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C1E8u); set32(c.r[4], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C1E8u) [[unlikely]] return; }
L_0051C1E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C230; } }
L_0051C1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C200u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 7u, depth + 1u); else { c.pc = 0x0051C0F0u; return; } if (c.pc != 0x0051C200u) [[unlikely]] return; }
L_0051C200:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C214u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0107(c, 258u, depth + 1u); else { c.pc = 0x0051F570u; return; } if (c.pc != 0x0051C214u) [[unlikely]] return; }
L_0051C214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C21Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C21Cu) [[unlikely]] return; }
L_0051C21C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C1F8u | kUnwind; return; } goto L_0051C1F8; } }
    c.budget -= 1;
L_0051C230:
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C190u | kUnwind; return; } goto L_0051C190; } }
L_0051C240:
    set32(c.r[19], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C278; } }
L_0051C250:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C264u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0107(c, 258u, depth + 1u); else { c.pc = 0x0051F570u; return; } if (c.pc != 0x0051C264u) [[unlikely]] return; }
L_0051C264:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C250u | kUnwind; return; } goto L_0051C250; } }
    c.budget -= 1;
L_0051C278:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C178u | kUnwind; return; } goto L_0051C178; }
L_0051C288:
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C2C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0051C29C:
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C2ACu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0107(c, 258u, depth + 1u); else { c.pc = 0x0051F570u; return; } if (c.pc != 0x0051C2ACu) [[unlikely]] return; }
L_0051C2AC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C29Cu | kUnwind; return; } goto L_0051C29C; }
    c.budget -= 1;
L_0051C2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051C2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0051C31C; } }
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0051C31C:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C448; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C448; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0051C338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C400; } }
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0051C400; } }
    c.budget -= 1;
L_0051C350:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0051C3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C364u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C364u) [[unlikely]] return; }
L_0051C364:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C3A0; } }
    c.budget -= 1;
L_0051C378:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C388u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0107(c, 26u, depth + 1u); else { c.pc = 0x0051C2F0u; return; } if (c.pc != 0x0051C388u) [[unlikely]] return; }
L_0051C388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C390u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C390u) [[unlikely]] return; }
L_0051C390:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C378u | kUnwind; return; } goto L_0051C378; } }
L_0051C3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C3A8u); set32(c.r[4], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C3A8u) [[unlikely]] return; }
L_0051C3A8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C3F0; } }
L_0051C3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C3C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 7u, depth + 1u); else { c.pc = 0x0051C0F0u; return; } if (c.pc != 0x0051C3C0u) [[unlikely]] return; }
L_0051C3C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C3D4u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0108(c, 27u, depth + 1u); else { c.pc = 0x005206E0u; return; } if (c.pc != 0x0051C3D4u) [[unlikely]] return; }
L_0051C3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C3DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C3DCu) [[unlikely]] return; }
L_0051C3DC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C3B8u | kUnwind; return; } goto L_0051C3B8; } }
    c.budget -= 1;
L_0051C3F0:
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C350u | kUnwind; return; } goto L_0051C350; } }
L_0051C400:
    set32(c.r[19], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C438; } }
L_0051C410:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C424u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0108(c, 27u, depth + 1u); else { c.pc = 0x005206E0u; return; } if (c.pc != 0x0051C424u) [[unlikely]] return; }
L_0051C424:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C410u | kUnwind; return; } goto L_0051C410; } }
    c.budget -= 1;
L_0051C438:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C338u | kUnwind; return; } goto L_0051C338; }
L_0051C448:
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C480; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0051C45C:
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C46Cu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0108(c, 27u, depth + 1u); else { c.pc = 0x005206E0u; return; } if (c.pc != 0x0051C46Cu) [[unlikely]] return; }
L_0051C46C:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C45Cu | kUnwind; return; } goto L_0051C45C; }
    c.budget -= 1;
L_0051C480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051C4B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0051C4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 72u));  if (t) { goto L_0051C4E0; } }
L_0051C4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_0051C4E0:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C50C; } }
    c.f[2] = ld32((c.r[2].w[0] + 76u));
    c.budget -= 1;
L_0051C50C:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C560; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051C560; } }
L_0051C540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 42u, depth + 1u); else { c.pc = 0x0051C4B0u; return; } if (c.pc != 0x0051C548u) [[unlikely]] return; }
L_0051C548:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C540u | kUnwind; return; } goto L_0051C540; } }
    c.budget -= 1;
L_0051C560:
    set32(c.r[18], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0051C5A8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0051C574:
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 243u, depth + 1u); else { c.pc = 0x0051EF80u; return; } if (c.pc != 0x0051C584u) [[unlikely]] return; }
L_0051C584:
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0107(c, 244u, depth + 1u); else { c.pc = 0x0051EFE0u; return; } if (c.pc != 0x0051C598u) [[unlikely]] return; }
L_0051C598:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C574u | kUnwind; return; } goto L_0051C574; }
L_0051C5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051C5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0051C5F0; } }
    c.f[0] = c.f[12];
    c.budget -= 1;
L_0051C5F0:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051C60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0051C628; } }
L_0051C60C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[0];  goto L_0051C620; }
L_0051C620:
    c.f[2] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0051C628:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051C640; } }
    c.f[1] = c.f[13];
    c.budget -= 1;
L_0051C640:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051C65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[2]);  if (t) { goto L_0051C678; } }
L_0051C65C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[13] = c.f[0];  goto L_0051C670; }
L_0051C670:
    c.f[0] = c.f[13];
    st32((c.r[4].w[0] + 64u), c.f[2]);
    c.budget -= 2;
L_0051C678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C680u); st32((c.r[4].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0107(c, 42u, depth + 1u); else { c.pc = 0x0051C4B0u; return; } if (c.pc != 0x0051C680u) [[unlikely]] return; }
L_0051C680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051C688; }
L_0051C688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051C6A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0051C6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 84u));  if (t) { goto L_0051C6D8; } }
L_0051C6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_0051C6D8:
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C858; } }
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0051C858; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0051C700:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051C710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 84u));  if (t) { goto L_0051C714; } }
L_0051C710:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_0051C714:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C808; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051C808; } }
L_0051C738:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051C74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 84u));  if (t) { goto L_0051C750; } }
L_0051C74C:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_0051C750:
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0051C7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C770u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C770u) [[unlikely]] return; }
L_0051C770:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C7A0; } }
L_0051C780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 50u, depth + 1u); else { c.pc = 0x0051C6A0u; return; } if (c.pc != 0x0051C788u) [[unlikely]] return; }
L_0051C788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C790u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C790u) [[unlikely]] return; }
L_0051C790:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C780u | kUnwind; return; } goto L_0051C780; } }
L_0051C7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C7A8u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C7A8u) [[unlikely]] return; }
L_0051C7A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051C7F8; } }
L_0051C7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C7C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 7u, depth + 1u); else { c.pc = 0x0051C0F0u; return; } if (c.pc != 0x0051C7C0u) [[unlikely]] return; }
L_0051C7C0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C7D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 14u, depth + 1u); else { c.pc = 0x00520380u; return; } if (c.pc != 0x0051C7D0u) [[unlikely]] return; }
L_0051C7D0:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C7DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 15u, depth + 1u); else { c.pc = 0x005203B0u; return; } if (c.pc != 0x0051C7DCu) [[unlikely]] return; }
L_0051C7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C7E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 8u, depth + 1u); else { c.pc = 0x0051C100u; return; } if (c.pc != 0x0051C7E4u) [[unlikely]] return; }
L_0051C7E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C7B8u | kUnwind; return; } goto L_0051C7B8; } }
    c.budget -= 1;
L_0051C7F8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C738u | kUnwind; return; } goto L_0051C738; } }
L_0051C808:
    set32(c.r[17], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051C848; } }
L_0051C818:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 14u, depth + 1u); else { c.pc = 0x00520380u; return; } if (c.pc != 0x0051C828u) [[unlikely]] return; }
L_0051C828:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 15u, depth + 1u); else { c.pc = 0x005203B0u; return; } if (c.pc != 0x0051C834u) [[unlikely]] return; }
L_0051C834:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C818u | kUnwind; return; } goto L_0051C818; } }
    c.budget -= 1;
L_0051C848:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C700u | kUnwind; return; } goto L_0051C700; }
L_0051C858:
    set32(c.r[17], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[19].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051C898; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0051C86C:
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 14u, depth + 1u); else { c.pc = 0x00520380u; return; } if (c.pc != 0x0051C878u) [[unlikely]] return; }
L_0051C878:
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C884u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 15u, depth + 1u); else { c.pc = 0x005203B0u; return; } if (c.pc != 0x0051C884u) [[unlikely]] return; }
L_0051C884:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + 36u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C86Cu | kUnwind; return; } goto L_0051C86C; }
    c.budget -= 1;
L_0051C898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0051C8C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 80u), c.f[12]);  goto L_0051C8DC; }
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 80u), c.f[12]);
    c.budget -= 2;
L_0051C8DC:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C6A0u | kUnwind; return; } goto L_0051C6A0; }
L_0051C8F0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 56u));  goto L_0051C900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051C908; } }
L_0051C900:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0051C908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051C910:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051C940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_0051C948; } }
L_0051C940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_0051C948:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[17].w[0] + 60u), c.f[1]);  goto L_0051C968; }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 60u), c.f[1]);
    c.budget -= 2;
L_0051C968:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051C9A0; } }
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0051C9A0; } }
L_0051C980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C988u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 71u, depth + 1u); else { c.pc = 0x0051C910u; return; } if (c.pc != 0x0051C988u) [[unlikely]] return; }
L_0051C988:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C980u | kUnwind; return; } goto L_0051C980; } }
    c.budget -= 1;
L_0051C9A0:
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051C9E0; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0051C9B4:
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C9C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 19u, depth + 1u); else { c.pc = 0x005204F0u; return; } if (c.pc != 0x0051C9C0u) [[unlikely]] return; }
L_0051C9C0:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051C9D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051C9D0u) [[unlikely]] return; }
L_0051C9D0:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051C9B4u | kUnwind; return; } goto L_0051C9B4; }
L_0051C9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051CA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0051CA1C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0051CA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 56u), c.f[12]);  goto L_0051CA3C; }
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 56u), c.f[12]);
    c.budget -= 2;
L_0051CA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CA44u);  if (depth < kMaxDepth) unit_0107(c, 71u, depth + 1u); else { c.pc = 0x0051C910u; return; } if (c.pc != 0x0051CA44u) [[unlikely]] return; }
L_0051CA44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051CA4C; }
L_0051CA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051CA60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0051CAC0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051CAC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0051CAC0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0051CAA0:
    set32(c.r[5], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CAACu); set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (depth < kMaxDepth) unit_0107(c, 219u, depth + 1u); else { c.pc = 0x0051E980u; return; } if (c.pc != 0x0051CAACu) [[unlikely]] return; }
L_0051CAAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051CAA0u | kUnwind; return; } goto L_0051CAA0; }
    c.budget -= 1;
L_0051CAC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_0051CAF0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0051CAEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CAE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051CAE8u) [[unlikely]] return; }
L_0051CAE8:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0051CAEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0051CAF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 52u)));  goto L_0051CB10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CB08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051CB08u) [[unlikely]] return; }
L_0051CB08:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0051CB10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  goto L_0051CB38; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 23408u);
    set32(c.r[7], 0u + 118u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CB34u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0051CB34u) [[unlikely]] return; }
L_0051CB34:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_0051CB38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0051CBB4; }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CB50u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_010E(c, 143u, depth + 1u); else { c.pc = 0x00539170u; return; } if (c.pc != 0x0051CB50u) [[unlikely]] return; }
L_0051CB50:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051CB90; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0051CB90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051CB90; } }
L_0051CB70:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CB80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0106(c, 275u, depth + 1u); else { c.pc = 0x0051BCD0u; return; } if (c.pc != 0x0051CB80u) [[unlikely]] return; }
L_0051CB80:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051CB70u | kUnwind; return; } goto L_0051CB70; } }
    c.budget -= 1;
L_0051CB90:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] - 23408u);
    set32(c.r[7], 0u + 143u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CBB0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0051CBB0u) [[unlikely]] return; }
L_0051CBB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0051CBB4:
    set32(c.r[2], ld32((c.r[2].w[0] + 1232u)));
    set32(c.r[3], c.r[2].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0051CBD0; }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0051CBD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23408u);
    set32(c.r[7], 0u + 153u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[17].w[0]), c.r[17].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CC10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0051CC10u) [[unlikely]] return; }
L_0051CC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051CC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0051CC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051CC58; } }
L_0051CC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051CC58u);  if (depth < kMaxDepth) unit_0107(c, 79u, depth + 1u); else { c.pc = 0x0051CA60u; return; } if (c.pc != 0x0051CC58u) [[unlikely]] return; }
L_0051CC58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051CC70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0051CC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051CC94; } }
L_0051CC80:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[5].w[0]), c.r[4].w[0]);  goto L_0051CC90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051CC94; } }
L_0051CC90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051CC94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051CCA0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 32u)));  goto L_0051CCB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051CCB8; } }
L_0051CCB0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0051CCB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051CCC0:
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0051CCD0:
    set32(c.r[9], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0051CCE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051D270; } }
L_0051CCE4:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051CD08; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0051CD04; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 25u);  goto L_0051D270; }
L_0051CD04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0051CD08:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[9].w[0] + 88u)));  goto L_0051CD38; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0051CD34; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0051CD34; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D270; } }
L_0051CD34:
    set32(c.r[2], ld32((c.r[9].w[0] + 88u)));
    c.budget -= 1;
L_0051CD38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 156u)));  goto L_0051CD48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051D270; } }
L_0051CD48:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051CFD8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0051CD68; }
    set32(c.r[2], ld32((c.r[9].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0051CFD8; } }
L_0051CD68:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051CF40; }
    set32(c.r[11], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[10], ld32((c.r[9].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0051CDEC; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] - 23328u);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051CDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 8u);  if (t) { goto L_0051CDEC; } }
L_0051CDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 16u);  if (t) { goto L_0051CDEC; } }
L_0051CDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 24u);  if (t) { goto L_0051CDEC; } }
L_0051CDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 32u);  if (t) { goto L_0051CDEC; } }
L_0051CDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 32u);  if (t) { goto L_0051CDEC; } }
L_0051CDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051CDEC; } }
L_0051CDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051CDEC; } }
L_0051CDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051CDEC; } }
L_0051CDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051CDEC; } }
L_0051CDEC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0051CE34; } }
    c.r[9].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = c.r[12].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 1, c.r[9].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[9].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    mmi::pextlw(c.r[9], c.r[9], c.r[10]);
    c.r[6].d[0] = c.r[6].d[0] + c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 3;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0051CF30; } }
L_0051CE34:
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0051CF30; }
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[6].d[0]) { st32((c.r[5].w[0]), c.r[10].w[0]);  goto L_0051CFD8; }
    set32(c.r[6], 0u + 9u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[6].d[0]) { st32((c.r[5].w[0]), c.r[10].w[0]);  goto L_0051CFD8; }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[6].d[0]) { set32(c.r[11], c.r[10].w[0] + 27u);  goto L_0051CEE8; }
    set32(c.r[6], 0u + 7u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[6].d[0]) { set32(c.r[6], c.r[10].w[0] + 63u);  goto L_0051CECC; }
    set32(c.r[6], 0u + 6u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[6].d[0]) { set32(c.r[11], c.r[10].w[0] + 13u);  goto L_0051CE80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051CFD8; } }
L_0051CE80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[10].d[0] = c.r[6].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[10].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[11].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] >> 3);
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    mmi::multu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 3);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0051CF30; } }
L_0051CECC:
    set32(c.r[9], c.r[6].w[0] >> 6);
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] >> 6);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0051CF30; } }
L_0051CEE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[10].d[0] = c.r[6].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[10].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[11].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] >> 4);
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 6);
    mmi::multu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 4);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 18;
L_0051CF30:
    set32(c.r[6], ld32((c.r[5].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0051CFD8; } }
L_0051CF40:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0051CFD8; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[6], c.r[2].w[0] >> 1);  goto L_0051CF60; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051CF78; } }
L_0051CF60:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0051CF78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051CFC0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0051CFD8; } }
L_0051CFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_0051CFD8:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051D270; }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[4].w[0] - 1u);  if (t) { goto L_0051D004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[6].w[0]);  if (t) { goto L_0051D26C; } }
L_0051D004:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051D1DC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0051D088; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23376u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051D040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 8u);  if (t) { goto L_0051D088; } }
L_0051D048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 16u);  if (t) { goto L_0051D088; } }
L_0051D050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 24u);  if (t) { goto L_0051D088; } }
L_0051D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 32u);  if (t) { goto L_0051D088; } }
L_0051D060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 32u);  if (t) { goto L_0051D088; } }
L_0051D068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D088; } }
L_0051D070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D088; } }
L_0051D078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D088; } }
L_0051D080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D088; } }
L_0051D088:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0051D0D0; } }
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[8].d[0] << 32;
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
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0051D1CC; } }
L_0051D0D0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[7].w[0]), 0u);  goto L_0051D1CC; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[7].w[0]), c.r[6].w[0]);  goto L_0051D26C; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[7].w[0]), c.r[6].w[0]);  goto L_0051D26C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);  goto L_0051D184; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[6].w[0] + 63u);  goto L_0051D168; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);  goto L_0051D11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D26C; } }
L_0051D11C:
    set32(c.r[6], c.r[6].w[0] + 13u);
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
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0051D1CC; } }
L_0051D168:
    set32(c.r[4], c.r[3].w[0] >> 6);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0051D1CC; } }
L_0051D184:
    set32(c.r[6], c.r[6].w[0] + 27u);
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
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
L_0051D1CC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[2].w[0]);  if (t) { goto L_0051D26C; } }
L_0051D1DC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_0051D26C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], c.r[6].w[0] >> 1);  goto L_0051D200; }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051D218; } }
L_0051D200:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0051D218:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051D254; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0051D26C; } }
L_0051D254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0051D26C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051D270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051D280:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0051D2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051D764; } }
L_0051D2D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051D2F8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0051D2F4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 25u);  goto L_0051D764; }
L_0051D2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0051D2F8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 88u)));  goto L_0051D328; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051D324; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051D324; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D764; } }
L_0051D324:
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 1;
L_0051D328:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], ld32((c.r[2].w[0] + 156u)));  goto L_0051D338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051D764; } }
L_0051D338:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0051D34C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0051D518; } }
L_0051D34C:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051D490; }
    set32(c.r[23], ld32((c.r[22].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0051D518; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051D3D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051D38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0051D3D4; } }
L_0051D394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0051D3D4; } }
L_0051D39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 24u);  if (t) { goto L_0051D3D4; } }
L_0051D3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0051D3D4; } }
L_0051D3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_0051D3D4; } }
L_0051D3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D3D4; } }
L_0051D3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D3D4; } }
L_0051D3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D3D4; } }
L_0051D3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D3D4; } }
L_0051D3D4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0051D400; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] << 3;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D3F4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0051D3F4u) [[unlikely]] return; }
L_0051D3F4:
    c.r[20].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);  if (t) { goto L_0051D480; } }
L_0051D400:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0051D480; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[20].d[0] = c.r[5].d[0] + 0ull;  goto L_0051D518; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[20].d[0] = c.r[5].d[0] + 0ull;  goto L_0051D518; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_0051D474; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0051D45C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_0051D44C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0051D51C; } }
L_0051D44C:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] >> 3);  if (t) { goto L_0051D480; } }
L_0051D45C:
    set32(c.r[3], c.r[5].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] >> 3);  if (t) { goto L_0051D480; } }
L_0051D474:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] >> 4);
    c.budget -= 3;
L_0051D480:
    mmi::divu(c, 0, c.r[20].w[0], c.r[23].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D518; } }
L_0051D490:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0051D518; } }
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], c.r[5].w[0] >> 1);  goto L_0051D4AC; }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051D4C4; } }
L_0051D4AC:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0051D4C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051D504; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[20], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D518; } }
L_0051D504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.r[20].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0051D518:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0051D51C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0051D52C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0051D6F8; } }
L_0051D52C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0051D670; }
    set32(c.r[16], ld32((c.r[22].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0051D6F8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051D5B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051D56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0051D5B4; } }
L_0051D574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0051D5B4; } }
L_0051D57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0051D5B4; } }
L_0051D584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051D5B4; } }
L_0051D58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051D5B4; } }
L_0051D594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D5B4; } }
L_0051D59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D5B4; } }
L_0051D5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D5B4; } }
L_0051D5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D5B4; } }
L_0051D5B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051D5E0; } }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D5D4u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0051D5D4u) [[unlikely]] return; }
L_0051D5D4:
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { goto L_0051D660; } }
L_0051D5E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0051D660; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0051D6F8; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0051D6F8; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051D654; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0051D63C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051D62C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_0051D6FC; } }
L_0051D62C:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] >> 3);  if (t) { goto L_0051D660; } }
L_0051D63C:
    set32(c.r[3], c.r[17].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] >> 3);  if (t) { goto L_0051D660; } }
L_0051D654:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] >> 4);
    c.budget -= 3;
L_0051D660:
    mmi::divu(c, 0, c.r[19].w[0], c.r[16].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D6F8; } }
L_0051D670:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0051D6F8; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_0051D68C; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051D6A4; } }
L_0051D68C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0051D6A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = ld32((c.r[22].w[0] + 68u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051D6E4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[19], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051D6F8; } }
L_0051D6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0051D6F8:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0051D6FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] - c.r[20].w[0]);  goto L_0051D70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051D764; } }
L_0051D70C:
    set32(c.r[19], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051D760; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0051D720:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D738u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051D738u) [[unlikely]] return; }
L_0051D738:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0051D748; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0051D748:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051D720u | kUnwind; return; } goto L_0051D720; } }
    c.budget -= 1;
L_0051D760:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0051D764:
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
L_0051D790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051D7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051D814; } }
L_0051D7C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051D810; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0051D7D8:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D7ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051D7ECu) [[unlikely]] return; }
L_0051D7EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0051D7F8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051D7F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051D7D8u | kUnwind; return; } goto L_0051D7D8; } }
    c.budget -= 1;
L_0051D810:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051D814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051D840:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0051D850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051D868; } }
L_0051D850:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 96u)));  goto L_0051D860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051D868; } }
L_0051D860:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0051D868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051D870:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0051D8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051DBAC; } }
L_0051D8AC:
    set32(c.r[16], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0051D8F8; } }
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0051D8C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D8D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051D8D4u) [[unlikely]] return; }
L_0051D8D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 44u)));  goto L_0051D8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0051DBB0; } }
L_0051D8E4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051D8C0u | kUnwind; return; } goto L_0051D8C0; } }
    c.budget -= 1;
L_0051D8F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 16ull;  goto L_0051DB1C; }
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] & 16ull;  goto L_0051DABC; }
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DAB8; } }
    c.f[12] = ld32((c.r[21].w[0] + 184u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D93Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051D93Cu) [[unlikely]] return; }
L_0051D93C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 48u)));  goto L_0051D94C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBAC; } }
L_0051D94C:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[22].d[0] << 44;  goto L_0051D964; }
    set32(c.r[22], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[22].d[0] << 44;
    c.budget -= 3;
L_0051D964:
    c.r[2].d[0] = c.r[2].d[0] >> 44;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 120u));  goto L_0051D9F8; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[17], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1256u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0051DBA8; } }
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0051D98C:
    c.r[2].d[0] = c.r[22].d[0] & c.r[17].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051D9D8; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D9A8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0051D9A8u) [[unlikely]] return; }
L_0051D9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051D9C8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0107(c, 275u, depth + 1u); else { c.pc = 0x0051FB00u; return; } if (c.pc != 0x0051D9C8u) [[unlikely]] return; }
L_0051D9C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_0051DBA8; } }
L_0051D9D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1256u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051D98Cu | kUnwind; return; } goto L_0051D98C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051DBAC; } }
L_0051D9F8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0051DA18; }
    c.f[12] = ld32((c.r[21].w[0] + 192u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DA10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 11u, depth + 1u); else { c.pc = 0x00520200u; return; } if (c.pc != 0x0051DA10u) [[unlikely]] return; }
L_0051DA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBA8; } }
L_0051DA18:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0051DA50; }
    c.f[12] = ld32((c.r[21].w[0] + 196u));
    c.f[13] = ld32((c.r[21].w[0] + 200u));
    c.f[14] = ld32((c.r[21].w[0] + 204u));
    c.f[15] = ld32((c.r[21].w[0] + 208u));
    c.f[16] = ld32((c.r[21].w[0] + 212u));
    c.f[17] = ld32((c.r[21].w[0] + 216u));
    c.f[18] = ld32((c.r[21].w[0] + 220u));
    c.f[19] = ld32((c.r[21].w[0] + 224u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DA48u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 288u, depth + 1u); else { c.pc = 0x0051FE20u; return; } if (c.pc != 0x0051DA48u) [[unlikely]] return; }
L_0051DA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBA8; } }
L_0051DA50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0051DBA8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1256u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051DBA8; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0051DA78:
    set32(c.r[7], ld32((c.r[4].w[0] + 1252u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DA98u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0107(c, 275u, depth + 1u); else { c.pc = 0x0051FB00u; return; } if (c.pc != 0x0051DA98u) [[unlikely]] return; }
L_0051DA98:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1256u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051DA78u | kUnwind; return; } goto L_0051DA78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBA8; } }
L_0051DAB8:
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 1;
L_0051DABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051DBA8; } }
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    c.f[3] = ld32((c.r[21].w[0] + 312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[21].w[0] + 316u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[21].w[0] + 320u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[21].w[0] + 324u);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.f[1] = ld32((c.r[21].w[0] + 312u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DB0Cu); st32((c.r[21].w[0] + 312u), c.f[0]);  if (depth < kMaxDepth) unit_0107(c, 255u, depth + 1u); else { c.pc = 0x0051F3D0u; return; } if (c.pc != 0x0051DB0Cu) [[unlikely]] return; }
L_0051DB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBAC; } }
L_0051DB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04300000u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0051DB48; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1752u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0051DB48:
    set32(c.r[5], c.r[21].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DB54u); set32(c.r[6], c.r[21].w[0] + 324u);  if (depth < kMaxDepth) unit_0107(c, 255u, depth + 1u); else { c.pc = 0x0051F3D0u; return; } if (c.pc != 0x0051DB54u) [[unlikely]] return; }
L_0051DB54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 116u)));  goto L_0051DB64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBAC; } }
L_0051DB64:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DB7Cu); st32((c.r[21].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0108(c, 52u, depth + 1u); else { c.pc = 0x00520E50u; return; } if (c.pc != 0x0051DB7Cu) [[unlikely]] return; }
L_0051DB7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[21].w[0] + 184u));  goto L_0051DB8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBAC; } }
L_0051DB8C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DB98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051DB98u) [[unlikely]] return; }
L_0051DB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DBAC; } }
L_0051DBA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051DBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0051DBB0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0051DBE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0051DC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051DD94; } }
L_0051DC08:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 144u)));  goto L_0051DC1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051DC28; } }
L_0051DC1C:
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DC28u); set32(c.r[5], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DC28u) [[unlikely]] return; }
L_0051DC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_0051DC38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0051DD98; } }
L_0051DC38:
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DC44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 17u, depth + 1u); else { c.pc = 0x005281B0u; return; } if (c.pc != 0x0051DC44u) [[unlikely]] return; }
L_0051DC44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_0051DC54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DD94; } }
L_0051DC54:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 240u)));  goto L_0051DC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_0051DD94; } }
L_0051DC68:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_0051DC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0051DD94; } }
L_0051DC7C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DC90u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 144u, depth + 1u); else { c.pc = 0x0052A140u; return; } if (c.pc != 0x0051DC90u) [[unlikely]] return; }
L_0051DC90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 72u), 0u);  goto L_0051DCB4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DCA4u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_010A(c, 20u, depth + 1u); else { c.pc = 0x005281E0u; return; } if (c.pc != 0x0051DCA4u) [[unlikely]] return; }
L_0051DCA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_0051DCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DD94; } }
L_0051DCB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_0051DCB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DCCCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DCCCu) [[unlikely]] return; }
L_0051DCCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_0051DCDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DD94; } }
L_0051DCDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 20u)));  goto L_0051DD54; }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0051DCE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DD00u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 144u, depth + 1u); else { c.pc = 0x0052A140u; return; } if (c.pc != 0x0051DD00u) [[unlikely]] return; }
L_0051DD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051DD28; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051DCE8u | kUnwind; return; } goto L_0051DCE8; } }
    c.budget -= 1;
L_0051DD28:
    set32(c.r[25], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DD40u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DD40u) [[unlikely]] return; }
L_0051DD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051DD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DD94; } }
L_0051DD50:
    set32(c.r[25], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0051DD54:
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DD60u) [[unlikely]] return; }
L_0051DD60:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_0051DD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051DD94; } }
L_0051DD84:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_0051DD94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0051DD98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051DDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0051DDC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051DDE8; } }
L_0051DDC4:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 36u);  goto L_0051DDE8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DDE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DDE0u) [[unlikely]] return; }
L_0051DDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DDE8; } }
L_0051DDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051DE00:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0051DE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E5A4; } }
    goto L_0051DE44;
L_0051DE40:
    set32(c.r[2], 0u + 36u);
    c.budget -= 1;
L_0051DE44:
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E540; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 148u)));  goto L_0051DE88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051DE84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0051DE84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0] + 300u)));  goto L_0051E234; }
L_0051DE84:
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 1;
L_0051DE88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  goto L_0051DE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E5A4; } }
L_0051DE98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0051DEC4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 1048u), c.r[17].w[0]);  goto L_0051DEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E5A4; } }
L_0051DEB8:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051DEF4; } }
L_0051DEC4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 144u)));  goto L_0051DED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051DEE4; } }
L_0051DED4:
    set32(c.r[5], c.r[29].w[0] + 1048u);
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DEE4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DEE4u) [[unlikely]] return; }
L_0051DEE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 1048u)));  goto L_0051DEF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0051E5A8; } }
L_0051DEF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 1048u)));
    c.budget -= 1;
L_0051DEF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_0051DF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0051DF38; } }
L_0051DF18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);  goto L_0051DF2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0051DF38; } }
L_0051DF2C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 128u)));  goto L_0051DF3C; }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_0051DF38:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 1;
L_0051DF3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 124u)));  goto L_0051E148; }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0051DF54; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0051DF54:
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051DF60u); set32(c.r[6], c.r[29].w[0] + 752u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051DF60u) [[unlikely]] return; }
L_0051DF60:
    set32(c.r[3], ld32((c.r[29].w[0] + 1024u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 1052u), c.r[3].w[0]);  if (t) { goto L_0051DFFC; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_0051DF84; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051DF9C; } }
L_0051DF84:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0051DF9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = ld32((c.r[29].w[0] + 1016u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051DFE0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051DFF4; } }
L_0051DFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0051DFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0051E140; } }
L_0051DFFC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0051E13C; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 1012u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 1008u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0051E13C; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051E088; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051E040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0051E088; } }
L_0051E048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0051E088; } }
L_0051E050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0051E088; } }
L_0051E058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051E088; } }
L_0051E060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051E088; } }
L_0051E068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E088; } }
L_0051E070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E088; } }
L_0051E078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E088; } }
L_0051E080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E088; } }
L_0051E088:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051E0B4; } }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E0A8u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0051E0A8u) [[unlikely]] return; }
L_0051E0A8:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { goto L_0051E134; } }
L_0051E0B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0051E134; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0051E13C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0051E13C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051E128; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0051E110; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051E100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E13C; } }
L_0051E100:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] >> 3);  if (t) { goto L_0051E134; } }
L_0051E110:
    set32(c.r[3], c.r[17].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] >> 3);  if (t) { goto L_0051E134; } }
L_0051E128:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] >> 4);
    c.budget -= 3;
L_0051E134:
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0051E13C:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0051E140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 1052u)));  if (t) { goto L_0051E17C; } }
L_0051E148:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 1052u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E168u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E168u) [[unlikely]] return; }
L_0051E168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E5A4; } }
L_0051E178:
    set32(c.r[2], ld32((c.r[29].w[0] + 1052u)));
    c.budget -= 1;
L_0051E17C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1048u)));  goto L_0051E190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E5A4; } }
L_0051E190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0051E268; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E19C:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E1E0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0051E1B8; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0051E1B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E1D0u); set32(c.r[6], c.r[29].w[0] + 448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E1D0u) [[unlikely]] return; }
L_0051E1D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1052u), c.r[2].w[0]);  if (t) { goto L_0051E210; } }
    c.budget -= 1;
L_0051E1E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 1052u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E210u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E210u) [[unlikely]] return; }
L_0051E210:
    set32(c.r[2], ld32((c.r[29].w[0] + 1048u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 1052u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051E19Cu | kUnwind; return; } goto L_0051E19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 124u)));  if (t) { goto L_0051E26C; } }
L_0051E234:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E244u); set32(c.r[5], c.r[29].w[0] + 1052u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E244u) [[unlikely]] return; }
L_0051E244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1052u)));  goto L_0051E254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E5A4; } }
L_0051E254:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051E268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E5A4; } }
L_0051E268:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 1;
L_0051E26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E540; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E540; } }
    set32(c.r[2], 0u + 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[22].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0051E318; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_0051E2A4; }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0051E2BC; } }
L_0051E2A4:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0051E2BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0051E2FC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[22], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E310; } }
L_0051E2FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[0]);
    c.r[22].d[0] = c.r[22].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_0051E310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 152u)));  if (t) { goto L_0051E45C; } }
L_0051E318:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0051E458; } }
    set32(c.r[21], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0051E458; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051E3A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23184u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051E35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0051E3A4; } }
L_0051E364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0051E3A4; } }
L_0051E36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0051E3A4; } }
L_0051E374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051E3A4; } }
L_0051E37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0051E3A4; } }
L_0051E384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E3A4; } }
L_0051E38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E3A4; } }
L_0051E394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E3A4; } }
L_0051E39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E3A4; } }
L_0051E3A4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051E3D0; } }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E3C4u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0051E3C4u) [[unlikely]] return; }
L_0051E3C4:
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);  if (t) { goto L_0051E450; } }
L_0051E3D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_0051E450; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[17].d[0] + 0ull;  goto L_0051E458; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[17].d[0] + 0ull;  goto L_0051E458; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051E444; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  goto L_0051E42C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_0051E41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E458; } }
L_0051E41C:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] >> 3);  if (t) { goto L_0051E450; } }
L_0051E42C:
    set32(c.r[3], c.r[17].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] >> 3);  if (t) { goto L_0051E450; } }
L_0051E444:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[22], c.r[2].w[0] >> 4);
    c.budget -= 3;
L_0051E450:
    mmi::divu(c, 0, c.r[22].w[0], c.r[21].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 2;
L_0051E458:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 1;
L_0051E45C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0051E540; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E468:
    set32(c.r[3], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0051E528; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E4C8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0051E4A8; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0051E4A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E4B4u); set32(c.r[6], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E4B4u) [[unlikely]] return; }
L_0051E4B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 416u)));  goto L_0051E4D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E5A4; } }
    c.budget -= 1;
L_0051E4C8:
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 2;
L_0051E4D0:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);  goto L_0051E524; }
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051E520; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0051E540; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0051E4FC:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 140u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051E4FCu | kUnwind; return; } goto L_0051E4FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E540; } }
L_0051E520:
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0051E524:
    c.budget -= 1;
L_0051E528:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051E468u | kUnwind; return; } goto L_0051E468; } }
    c.budget -= 1;
L_0051E540:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0051E598; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0051E550:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E568u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E568u) [[unlikely]] return; }
L_0051E568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0051E588; }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0051E584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E5A4; } }
L_0051E584:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_0051E588:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051E550u | kUnwind; return; } goto L_0051E550; } }
L_0051E598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E5A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 60u, depth + 1u); else { c.pc = 0x00521010u; return; } if (c.pc != 0x0051E5A4u) [[unlikely]] return; }
L_0051E5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0051E5A8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0051E5D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0051E600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E690; } }
L_0051E600:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_0051E614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E690; } }
L_0051E614:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 412u), c.r[6].w[0]);
    set32(c.r[19], c.r[3].w[0] + 412u);
    st32((c.r[3].w[0] + 424u), c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[3].w[0] + 424u);  if (t) { goto L_0051E68C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 416u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051E690; }
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 144u)));  goto L_0051E658; }
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E664; } }
L_0051E658:
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E664u); set32(c.r[5], c.r[29].w[0] + 95u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E664u) [[unlikely]] return; }
L_0051E664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_0051E674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0051E694; } }
L_0051E674:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[7].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E68Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E68Cu) [[unlikely]] return; }
L_0051E68C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0051E694:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051E6B0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0051E6C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E6E8; } }
L_0051E6C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 88u)));  goto L_0051E6D4; }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E6E8; } }
L_0051E6D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0051E6E4; }
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0051E6E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E6E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051E6F0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0051E700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E780; } }
L_0051E700:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 96u)));  goto L_0051E710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E780; } }
L_0051E710:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 140u)));  goto L_0051E764; }
    c.f[3] = ld32((c.r[4].w[0] + 184u));
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.f[2] = ld32((c.r[4].w[0] + 304u));
    c.f[1] = ld32((c.r[4].w[0] + 348u));
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 156u));
    c.f[1] = ld32((c.r[2].w[0] + 72u));
    c.f[0] = ld32((c.r[4].w[0] + 300u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0051E77C; } }
L_0051E764:
    c.f[2] = ld32((c.r[4].w[0] + 184u));
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    c.f[1] = ld32((c.r[2].w[0] + 60u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 6;
L_0051E77C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051E790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0051E7A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E7C8; } }
L_0051E7A4:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 144u)));  goto L_0051E7BC; }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E7C8; } }
L_0051E7BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E7C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E7C8u) [[unlikely]] return; }
L_0051E7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051E7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0051E808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051E95C; } }
L_0051E808:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 11u);  goto L_0051E82C; }
    set32(c.r[2], c.r[18].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051E82C; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_0051E82C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 48u)));  goto L_0051E83C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0051E960; } }
L_0051E83C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 100u)));  goto L_0051E84C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051E95C; } }
L_0051E84C:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0051E864; }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051E95C; } }
L_0051E864:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051E8B8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_0051E870:
    set32(c.r[5], c.r[29].w[0] + 79u);
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051E884u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051E884u) [[unlikely]] return; }
L_0051E884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));  goto L_0051E894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051E95C; } }
L_0051E894:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0051E8A8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0051E8B8; } }
L_0051E8A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051E870u | kUnwind; return; } goto L_0051E870; }
L_0051E8B8:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0051E8EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E8EC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 1024ull;
    st32((c.r[18].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0051E95C; } }
L_0051E8EC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051E95C; }
    set32(c.r[4], 0u - 1u);
    st32((c.r[18].w[0] + 128u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051E958; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[18].w[0] + 12u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1220u)));
    set32(c.r[3], c.r[4].w[0] + 1216u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1220u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[18].w[0]);
    c.budget -= 20;
L_0051E958:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0051E960:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051E980:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  goto L_0051E990; }
L_0051E990:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051EA24; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], c.r[18].w[0] + 144u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051E9E4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0051E9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0051E9E4; } }
L_0051E9E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051E9E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  goto L_0051E9F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051EC50; } }
L_0051E9F4:
    set32(c.r[2], c.r[18].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 152u), 0u);
    c.budget -= 12;
L_0051EA24:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[18].w[0] + 140u), c.r[5].w[0]);  goto L_0051EA38; }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 2192u)));
    st32((c.r[18].w[0] + 140u), c.r[5].w[0]);
    c.budget -= 3;
L_0051EA38:
    set32(c.r[4], c.r[5].w[0] + 36u);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[3], c.r[18].w[0] + 144u);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 152u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051EA84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EC50; } }
L_0051EA84:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051EC50; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 120u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0051EAE0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0051EAE0; } }
    set32(c.r[19], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0051EAB0:
    set32(c.r[7], ld32((c.r[3].w[0] + 1252u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EAC4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 270u, depth + 1u); else { c.pc = 0x0051F820u; return; } if (c.pc != 0x0051EAC4u) [[unlikely]] return; }
L_0051EAC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051EAB0u | kUnwind; return; } goto L_0051EAB0; } }
    c.budget -= 1;
L_0051EAE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0051EB30; } }
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0051EAF0:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EB08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051EB08u) [[unlikely]] return; }
L_0051EB08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0051EB18; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0051EB18:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051EAF0u | kUnwind; return; } goto L_0051EAF0; } }
    c.budget -= 1;
L_0051EB30:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EB44u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0107(c, 258u, depth + 1u); else { c.pc = 0x0051F570u; return; } if (c.pc != 0x0051EB44u) [[unlikely]] return; }
L_0051EB44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 116u)));  goto L_0051EB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0051EC54; } }
L_0051EB54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EB64u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0108(c, 27u, depth + 1u); else { c.pc = 0x005206E0u; return; } if (c.pc != 0x0051EB64u) [[unlikely]] return; }
L_0051EB64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[18].w[0] + 184u));  goto L_0051EB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EC50; } }
L_0051EB74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EB80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051EB80u) [[unlikely]] return; }
L_0051EB80:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051EC40; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 120u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0051EBB8; }
    c.f[12] = ld32((c.r[18].w[0] + 192u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EBB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 11u, depth + 1u); else { c.pc = 0x00520200u; return; } if (c.pc != 0x0051EBB0u) [[unlikely]] return; }
L_0051EBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EC40; } }
L_0051EBB8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0051EBF0; }
    c.f[12] = ld32((c.r[18].w[0] + 196u));
    c.f[13] = ld32((c.r[18].w[0] + 200u));
    c.f[14] = ld32((c.r[18].w[0] + 204u));
    c.f[15] = ld32((c.r[18].w[0] + 208u));
    c.f[16] = ld32((c.r[18].w[0] + 212u));
    c.f[17] = ld32((c.r[18].w[0] + 216u));
    c.f[18] = ld32((c.r[18].w[0] + 220u));
    c.f[19] = ld32((c.r[18].w[0] + 224u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EBE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 288u, depth + 1u); else { c.pc = 0x0051FE20u; return; } if (c.pc != 0x0051EBE8u) [[unlikely]] return; }
L_0051EBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EC40; } }
L_0051EBF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0051EC40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051EC40; } }
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0051EC0C:
    set32(c.r[7], ld32((c.r[3].w[0] + 1252u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EC24u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0107(c, 275u, depth + 1u); else { c.pc = 0x0051FB00u; return; } if (c.pc != 0x0051EC24u) [[unlikely]] return; }
L_0051EC24:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051EC0Cu | kUnwind; return; } goto L_0051EC0C; } }
    c.budget -= 1;
L_0051EC40:
    c.f[12] = ld32((c.r[18].w[0] + 188u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EC4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 15u, depth + 1u); else { c.pc = 0x005203B0u; return; } if (c.pc != 0x0051EC4Cu) [[unlikely]] return; }
L_0051EC4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051EC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0051EC54:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0051EC70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051ECA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051ECF4; } }
L_0051ECA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051ECF0; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0051ECB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051ECCCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051ECCCu) [[unlikely]] return; }
L_0051ECCC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0051ECD8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051ECD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051ECB8u | kUnwind; return; } goto L_0051ECB8; } }
    c.budget -= 1;
L_0051ECF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051ECF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051ED20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051ED58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EDA4; } }
L_0051ED58:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051EDA0; } }
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0051ED68:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051ED7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051ED7Cu) [[unlikely]] return; }
L_0051ED7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0051ED88; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051ED88:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051ED68u | kUnwind; return; } goto L_0051ED68; } }
    c.budget -= 1;
L_0051EDA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051EDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051EDD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 96u)));  goto L_0051EDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EE34; } }
L_0051EDE4:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051EDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051EE34; } }
L_0051EDF8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0051EE34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 408u), c.f[12]);  goto L_0051EE30; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EE34; } }
L_0051EE30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051EE34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051EE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 96u)));  goto L_0051EE5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EEF4; } }
L_0051EE5C:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_0051EE70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051EEF4; } }
L_0051EE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051EE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_0051EEF4; } }
L_0051EE80:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0051EEF4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 404u), c.f[12]);  goto L_0051EEB8; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EEF4; } }
L_0051EEB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051EEF4; }
    c.f[0] = ld32((c.r[4].w[0] + 404u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051EEF0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051EEE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 52u, depth + 1u); else { c.pc = 0x00520E50u; return; } if (c.pc != 0x0051EEE8u) [[unlikely]] return; }
L_0051EEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EEF4; } }
L_0051EEF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051EEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051EF00:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 96u)));  goto L_0051EF14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EF74; } }
L_0051EF14:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_0051EF28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051EF74; } }
L_0051EF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051EF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_0051EF74; } }
L_0051EF38:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0051EF74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 400u), c.f[12]);  goto L_0051EF70; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051EF74; } }
L_0051EF70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051EF74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051EF80:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 96u)));  goto L_0051EF94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051EFCC; } }
L_0051EF94:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051EFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051EFCC; } }
L_0051EFA8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051EFB8; } }
    c.f[0] = ld32((c.r[4].w[0] + 376u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0051EFB8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0051EFCC; }
    c.f[0] = ld32((c.r[4].w[0] + 380u));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0051EFCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051EFE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[21] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_0051F020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F128; } }
L_0051F020:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051F038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051F128; } }
L_0051F038:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051F050; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0051F050:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051F06C; }
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0051F06C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051F088; }
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0051F088:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[17].w[0] + 376u), c.f[21]);  goto L_0051F0A4; }
    c.f[20] = c.f[0];
    st32((c.r[17].w[0] + 376u), c.f[21]);
    c.budget -= 2;
L_0051F0A4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[17].w[0] + 380u), c.f[20]);  if (t) { goto L_0051F0BC; } }
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    st32((c.r[17].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 380u));
    st32((c.r[17].w[0] + 388u), c.f[0]);
    c.budget -= 4;
L_0051F0BC:
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 296u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0051F120; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051F0E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F0FCu); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051F0FCu) [[unlikely]] return; }
L_0051F0FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0051F108; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051F108:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F0E4u | kUnwind; return; } goto L_0051F0E4; } }
    c.budget -= 1;
L_0051F120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F128u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 164u, depth + 1u); else { c.pc = 0x005230A0u; return; } if (c.pc != 0x0051F128u) [[unlikely]] return; }
L_0051F128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0051F150:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 96u)));  goto L_0051F164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F1AC; } }
L_0051F164:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051F178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051F1AC; } }
L_0051F178:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[5].w[0]));  goto L_0051F188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051F1AC; } }
L_0051F188:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 372u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 9;
L_0051F1AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051F1C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 96u)));  goto L_0051F1D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F248; } }
L_0051F1D4:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051F1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051F248; } }
L_0051F1E8:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0051F1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051F248; } }
L_0051F1FC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0051F214; } }
    c.f[14] = c.f[0];
    c.budget -= 1;
L_0051F214:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 352u), c.f[12]);  goto L_0051F230; }
    c.f[14] = c.f[0];
    st32((c.r[4].w[0] + 352u), c.f[12]);
    c.budget -= 2;
L_0051F230:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 356u), c.f[13]);
    st32((c.r[4].w[0] + 360u), c.f[14]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 6;
L_0051F248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0051F250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051F280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F3A8; } }
L_0051F280:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051F298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051F3A8; } }
L_0051F298:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0051F3A8; }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0051F2C4; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[12]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 340u));  goto L_0051F2D0; }
L_0051F2C4:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051F3A8; } }
L_0051F2D0:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x04300000u);  goto L_0051F2F0; }
    c.f[0] = ld32((c.r[17].w[0] + 344u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0051F3A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04300000u);
    c.budget -= 1;
L_0051F2F0:
    st32((c.r[17].w[0] + 340u), c.f[12]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 344u), c.f[13]);  if (t) { goto L_0051F310; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1752u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_0051F350; }
L_0051F310:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F32Cu); st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0108(c, 52u, depth + 1u); else { c.pc = 0x00520E50u; return; } if (c.pc != 0x0051F32Cu) [[unlikely]] return; }
L_0051F32C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[17].w[0] + 184u));  goto L_0051F33C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051F3A8; } }
L_0051F33C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051F348u) [[unlikely]] return; }
L_0051F348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051F3A8; } }
L_0051F350:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0051F398; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051F35C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F370u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051F370u) [[unlikely]] return; }
L_0051F370:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0051F380; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0051F380:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F35Cu | kUnwind; return; } goto L_0051F35C; } }
    c.budget -= 1;
L_0051F398:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0051F3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051F3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051F400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F54C; } }
L_0051F400:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051F418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0051F54C; } }
L_0051F418:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0051F480; } }
    c.f[1] = ld32((c.r[17].w[0] + 312u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_0051F460; }
    c.f[1] = ld32((c.r[17].w[0] + 316u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051F45C; } }
    c.f[1] = ld32((c.r[17].w[0] + 320u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[5].w[0]));  goto L_0051F46C; }
L_0051F45C:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_0051F460:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
L_0051F46C:
    st32((c.r[17].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[17].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.budget -= 5;
L_0051F480:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  goto L_0051F4EC; }
    c.f[1] = ld32((c.r[17].w[0] + 324u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_0051F4C8; }
    c.f[1] = ld32((c.r[17].w[0] + 328u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051F4C4; } }
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[6].w[0]));  goto L_0051F4D4; }
L_0051F4C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_0051F4C8:
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
L_0051F4D4:
    st32((c.r[17].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[17].w[0] + 332u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
L_0051F4EC:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_0051F504; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051F54C; } }
L_0051F504:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0051F548; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051F510:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051F524u) [[unlikely]] return; }
L_0051F524:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0051F530; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051F530:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F510u | kUnwind; return; } goto L_0051F510; } }
    c.budget -= 1;
L_0051F548:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0051F54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051F570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0051F5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051F678; } }
L_0051F5A0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 116u)));  goto L_0051F5B8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0051F5C4; } }
L_0051F5B8:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
L_0051F5C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 140u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 88u));
    c.budget -= 2;
L_0051F5CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  goto L_0051F5E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0051F5F0; } }
L_0051F5E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 88u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F5CCu | kUnwind; return; } goto L_0051F5CC; }
    c.budget -= 1;
L_0051F5F0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 116u)));  goto L_0051F654; }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051F674; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0051F614:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F62Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051F62Cu) [[unlikely]] return; }
L_0051F62C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0051F638; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051F638:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F614u | kUnwind; return; } goto L_0051F614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0051F678; } }
L_0051F654:
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[18].w[0] + 184u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051F670u) [[unlikely]] return; }
L_0051F670:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0051F674:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051F678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0051F6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0051F6C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 75u);  if (t) { goto L_0051F80C; } }
L_0051F6C4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0051F6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051F80C; } }
L_0051F6D4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0051F710; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0051F6E0:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0051F6F8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0051F6F8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 228u), c.f[1]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F6E0u | kUnwind; return; } goto L_0051F6E0; } }
L_0051F710:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 116u)));  goto L_0051F734; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051F730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051F80C; } }
L_0051F730:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_0051F734:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F74Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 20u, depth + 1u); else { c.pc = 0x00520520u; return; } if (c.pc != 0x0051F74Cu) [[unlikely]] return; }
L_0051F74C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 120u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0051F770; }
    c.f[12] = ld32((c.r[17].w[0] + 192u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F768u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 11u, depth + 1u); else { c.pc = 0x00520200u; return; } if (c.pc != 0x0051F768u) [[unlikely]] return; }
L_0051F768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051F808; } }
L_0051F770:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0051F7A8; }
    c.f[12] = ld32((c.r[17].w[0] + 196u));
    c.f[13] = ld32((c.r[17].w[0] + 200u));
    c.f[14] = ld32((c.r[17].w[0] + 204u));
    c.f[15] = ld32((c.r[17].w[0] + 208u));
    c.f[16] = ld32((c.r[17].w[0] + 212u));
    c.f[17] = ld32((c.r[17].w[0] + 216u));
    c.f[18] = ld32((c.r[17].w[0] + 220u));
    c.f[19] = ld32((c.r[17].w[0] + 224u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F7A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0107(c, 288u, depth + 1u); else { c.pc = 0x0051FE20u; return; } if (c.pc != 0x0051F7A0u) [[unlikely]] return; }
L_0051F7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051F808; } }
L_0051F7A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0051F808; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051F808; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1256u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051F808; } }
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0051F7D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 1252u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051F7F0u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0107(c, 275u, depth + 1u); else { c.pc = 0x0051FB00u; return; } if (c.pc != 0x0051F7F0u) [[unlikely]] return; }
L_0051F7F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1256u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F7D0u | kUnwind; return; } goto L_0051F7D0; }
L_0051F808:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051F80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0051F820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0051F834; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_0051F83C; }
L_0051F834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051FAEC; } }
L_0051F83C:
    set32(c.r[2], ld32((c.r[2].w[0] + 1256u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_0051F854; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051FAEC; } }
L_0051F854:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 292u)));  goto L_0051F864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_0051FAEC; } }
L_0051F864:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0051FA48; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0051FAE8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] - 8u);  if (t) { goto L_0051F9F8; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0051F8A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051F8A0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0051F8A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0051F9F8; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0051F8AC:
    set32(c.r[10], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[25], c.r[8].w[0] + 1u);
    set32(c.r[9], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[24], c.r[8].w[0] + 2u);
    set32(c.r[15], c.r[8].w[0] + 3u);
    set32(c.r[14], c.r[8].w[0] + 4u);
    set32(c.r[10], ld32((c.r[10].w[0] + 1252u)));
    set32(c.r[13], c.r[8].w[0] + 5u);
    set32(c.r[12], c.r[8].w[0] + 6u);
    set32(c.r[11], c.r[8].w[0] + 7u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[5].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.r[9].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 1252u)));
    mmi::mult(c, 1, c.r[16].w[0], c.r[5].w[0]);
    c.r[16].d[0] = c.lo.d[1];
    set32(c.r[25], c.r[25].w[0] + c.r[16].w[0]);
    set32(c.r[25], c.r[25].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[25].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 1252u)));
    mmi::mult(c, 0, c.r[25].w[0], c.r[5].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], c.r[24].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[24].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[24], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[24], ld32((c.r[24].w[0] + 1252u)));
    mmi::mult(c, 1, c.r[24].w[0], c.r[5].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[15].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[15], ld32((c.r[15].w[0] + 1252u)));
    mmi::mult(c, 0, c.r[15].w[0], c.r[5].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[14].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[14], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[14], ld32((c.r[14].w[0] + 1252u)));
    mmi::mult(c, 1, c.r[14].w[0], c.r[5].w[0]);
    c.r[14].d[0] = c.lo.d[1];
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[13], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[13], ld32((c.r[13].w[0] + 1252u)));
    mmi::mult(c, 0, c.r[13].w[0], c.r[5].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[12], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[12], ld32((c.r[12].w[0] + 1252u)));
    mmi::mult(c, 1, c.r[12].w[0], c.r[5].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.budget -= 83;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051F8ACu | kUnwind; return; } goto L_0051F8AC; } }
L_0051F9F8:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051FAE8; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0051FA0C:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1252u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051FA0Cu | kUnwind; return; } goto L_0051FA0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FAE8; } }
L_0051FA48:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0051FAE8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - 8u);  if (t) { goto L_0051FAB8; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051FA7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051FA7C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0051FA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051FAB8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0051FA88:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051FA88u | kUnwind; return; } goto L_0051FA88; } }
L_0051FAB8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0051FAE8; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0051FACC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051FACCu | kUnwind; return; } goto L_0051FACC; } }
L_0051FAE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051FAEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0051FB00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0051FB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051FDFC; } }
L_0051FB44:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1252u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));  goto L_0051FB60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 75u);  if (t) { goto L_0051FDFC; } }
L_0051FB60:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2368u)));  goto L_0051FB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0051FDFC; } }
L_0051FB74:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0051FCC4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0051C000u < 16384u) { entry = entries_0107[(t - 0x0051C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0051FB9C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FBAC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FBC8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0051FC00; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FBFC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FBFC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FBFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FBFC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0051FC00:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0051FC10; }
    set32(c.r[19], 0u + 2u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 2;
L_0051FC10:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 3u);  if (t) { goto L_0051FCC0; } }
L_0051FC20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FC60:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FCAC:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0051FCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0051FDFC; } }
L_0051FCC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0051FCC4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051FCD0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0051FCD0u) [[unlikely]] return; }
L_0051FCD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0051FD04; }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], c.r[20].w[0] + 292u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0051FCECu); set32(c.r[4], c.r[2].w[0] + 2352u);  if (depth < kMaxDepth) unit_0110(c, 221u, depth + 1u); else { c.pc = 0x00543B20u; return; } if (c.pc != 0x0051FCECu) [[unlikely]] return; }
L_0051FCEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0051FD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0051FDFC; } }
L_0051FD00:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0051FD04:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0051FD78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    c.budget -= 4;
L_0051FD1C:
    c.f[2] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0051FD30; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0051FD30:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0051FD40; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0051FD40:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1252u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.f[2]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051FD1Cu | kUnwind; return; } goto L_0051FD1C; } }
L_0051FD78:
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0051FD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0051FDFC; } }
L_0051FD9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0051FDF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051FDF8; } }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0051FDB4:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0051FDD0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0051FDD0u) [[unlikely]] return; }
L_0051FDD0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0051FDE0; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0051FDE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0051FDB4u | kUnwind; return; } goto L_0051FDB4; } }
    c.budget -= 1;
L_0051FDF8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0051FDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0051FE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0051FE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { [[clang::musttail]] return unit_0108(c, 5u, depth); } }
L_0051FE50:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FE6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 196u), c.f[0]);  if (t) { goto L_0051FE8C; } }
L_0051FE6C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[12];  goto L_0051FE88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FE88; } }
L_0051FE88:
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.budget -= 1;
L_0051FE8C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FEA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.f[0]);  if (t) { goto L_0051FEC8; } }
L_0051FEA8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[13];  goto L_0051FEC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FEC4; } }
L_0051FEC4:
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.budget -= 1;
L_0051FEC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FEE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), c.f[0]);  if (t) { goto L_0051FF04; } }
L_0051FEE4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[14];  goto L_0051FF00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FF00; } }
L_0051FF00:
    st32((c.r[17].w[0] + 204u), c.f[0]);
    c.budget -= 1;
L_0051FF04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[15]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FF20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 208u), c.f[0]);  if (t) { goto L_0051FF40; } }
L_0051FF20:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[15]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[15];  goto L_0051FF3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FF3C; } }
L_0051FF3C:
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.budget -= 1;
L_0051FF40:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[16]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FF5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_0051FF7C; } }
L_0051FF5C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[16]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[16];  goto L_0051FF78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FF78; } }
L_0051FF78:
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 1;
L_0051FF7C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[17]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.f[0]);  if (t) { goto L_0051FFB8; } }
L_0051FF98:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[17]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[17];  goto L_0051FFB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FFB4; } }
L_0051FFB4:
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 1;
L_0051FFB8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[18]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0051FFD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 220u), c.f[0]);  if (t) { goto L_0051FFF4; } }
L_0051FFD4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[18]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[18];  goto L_0051FFF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0051FFF0; } }
L_0051FFF0:
    st32((c.r[17].w[0] + 220u), c.f[0]);
    c.budget -= 1;
L_0051FFF4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[19]) < fp::key(c.f[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_0108(c, 1u, depth);
}

}
