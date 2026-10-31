#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0,
    0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307,
    0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC010;
    case 3u: goto L_001BC020;
    case 4u: goto L_001BC03C;
    case 5u: goto L_001BC050;
    case 6u: goto L_001BC060;
    case 7u: goto L_001BC068;
    case 8u: goto L_001BC08C;
    case 9u: goto L_001BC0AC;
    case 10u: goto L_001BC0BC;
    case 11u: goto L_001BC0D8;
    case 12u: goto L_001BC0EC;
    case 13u: goto L_001BC0FC;
    case 14u: goto L_001BC100;
    case 15u: goto L_001BC118;
    case 16u: goto L_001BC134;
    case 17u: goto L_001BC15C;
    case 18u: goto L_001BC1A0;
    case 19u: goto L_001BC214;
    case 20u: goto L_001BC2B0;
    case 21u: goto L_001BC410;
    case 22u: goto L_001BC448;
    case 23u: goto L_001BC458;
    case 24u: goto L_001BC474;
    case 25u: goto L_001BC488;
    case 26u: goto L_001BC498;
    case 27u: goto L_001BC4C0;
    case 28u: goto L_001BC4E8;
    case 29u: goto L_001BC4FC;
    case 30u: goto L_001BC520;
    case 31u: goto L_001BC540;
    case 32u: goto L_001BC580;
    case 33u: goto L_001BC590;
    case 34u: goto L_001BC5A0;
    case 35u: goto L_001BC5D8;
    case 36u: goto L_001BC5F0;
    case 37u: goto L_001BC884;
    case 38u: goto L_001BC8A0;
    case 39u: goto L_001BCAFC;
    case 40u: goto L_001BCB18;
    case 41u: goto L_001BCD5C;
    case 42u: goto L_001BCD90;
    case 43u: goto L_001BCDAC;
    case 44u: goto L_001BCDE0;
    case 45u: goto L_001BCE00;
    case 46u: goto L_001BCE0C;
    case 47u: goto L_001BCEA4;
    case 48u: goto L_001BCF70;
    case 49u: goto L_001BCFB8;
    case 50u: goto L_001BCFE0;
    case 51u: goto L_001BD020;
    case 52u: goto L_001BD098;
    case 53u: goto L_001BD0A0;
    case 54u: goto L_001BD0EC;
    case 55u: goto L_001BD124;
    case 56u: goto L_001BD168;
    case 57u: goto L_001BD1CC;
    case 58u: goto L_001BD1F0;
    case 59u: goto L_001BD234;
    case 60u: goto L_001BD25C;
    case 61u: goto L_001BD280;
    case 62u: goto L_001BD288;
    case 63u: goto L_001BD2A4;
    case 64u: goto L_001BD2DC;
    case 65u: goto L_001BD310;
    case 66u: goto L_001BD388;
    case 67u: goto L_001BD3B0;
    case 68u: goto L_001BD400;
    case 69u: goto L_001BD408;
    case 70u: goto L_001BD41C;
    case 71u: goto L_001BD440;
    case 72u: goto L_001BD448;
    case 73u: goto L_001BD464;
    case 74u: goto L_001BD4DC;
    case 75u: goto L_001BD500;
    case 76u: goto L_001BD524;
    case 77u: goto L_001BD538;
    case 78u: goto L_001BD550;
    case 79u: goto L_001BD570;
    case 80u: goto L_001BD580;
    case 81u: goto L_001BD5B4;
    case 82u: goto L_001BD5C4;
    case 83u: goto L_001BD5E0;
    case 84u: goto L_001BD5FC;
    case 85u: goto L_001BD620;
    case 86u: goto L_001BD644;
    case 87u: goto L_001BD660;
    case 88u: goto L_001BD680;
    case 89u: goto L_001BD6C0;
    case 90u: goto L_001BD6D0;
    case 91u: goto L_001BD6EC;
    case 92u: goto L_001BD704;
    case 93u: goto L_001BD720;
    case 94u: goto L_001BD7D0;
    case 95u: goto L_001BD800;
    case 96u: goto L_001BD818;
    case 97u: goto L_001BD828;
    case 98u: goto L_001BD840;
    case 99u: goto L_001BD858;
    case 100u: goto L_001BD868;
    case 101u: goto L_001BD880;
    case 102u: goto L_001BD898;
    case 103u: goto L_001BD8A8;
    case 104u: goto L_001BD8C0;
    case 105u: goto L_001BD910;
    case 106u: goto L_001BD950;
    case 107u: goto L_001BD9CC;
    case 108u: goto L_001BD9E4;
    case 109u: goto L_001BDA00;
    case 110u: goto L_001BDA20;
    case 111u: goto L_001BDA6C;
    case 112u: goto L_001BDA80;
    case 113u: goto L_001BDAA0;
    case 114u: goto L_001BDAEC;
    case 115u: goto L_001BDB00;
    case 116u: goto L_001BDB34;
    case 117u: goto L_001BDB94;
    case 118u: goto L_001BDBC0;
    case 119u: goto L_001BDBD0;
    case 120u: goto L_001BDBF4;
    case 121u: goto L_001BDC08;
    case 122u: goto L_001BDC10;
    case 123u: goto L_001BDC1C;
    case 124u: goto L_001BDC3C;
    case 125u: goto L_001BDC4C;
    case 126u: goto L_001BDC58;
    case 127u: goto L_001BDC64;
    case 128u: goto L_001BDC74;
    case 129u: goto L_001BDC88;
    case 130u: goto L_001BDCAC;
    case 131u: goto L_001BDCBC;
    case 132u: goto L_001BDCD8;
    case 133u: goto L_001BDCEC;
    case 134u: goto L_001BDCFC;
    case 135u: goto L_001BDD08;
    case 136u: goto L_001BDD34;
    case 137u: goto L_001BDD94;
    case 138u: goto L_001BDDB0;
    case 139u: goto L_001BDE00;
    case 140u: goto L_001BDE10;
    case 141u: goto L_001BDE60;
    case 142u: goto L_001BDE80;
    case 143u: goto L_001BDEB0;
    case 144u: goto L_001BDECC;
    case 145u: goto L_001BDEF0;
    case 146u: goto L_001BDF24;
    case 147u: goto L_001BDF34;
    case 148u: goto L_001BDF50;
    case 149u: goto L_001BDF6C;
    case 150u: goto L_001BDF90;
    case 151u: goto L_001BDFBC;
    case 152u: goto L_001BDFDC;
    case 153u: goto L_001BDFEC;
    case 154u: goto L_001BE008;
    case 155u: goto L_001BE01C;
    case 156u: goto L_001BE02C;
    case 157u: goto L_001BE080;
    case 158u: goto L_001BE098;
    case 159u: goto L_001BE0C0;
    case 160u: goto L_001BE0D8;
    case 161u: goto L_001BE0F8;
    case 162u: goto L_001BE184;
    case 163u: goto L_001BE1A0;
    case 164u: goto L_001BE1C8;
    case 165u: goto L_001BE1D8;
    case 166u: goto L_001BE1F0;
    case 167u: goto L_001BE2B0;
    case 168u: goto L_001BE2E4;
    case 169u: goto L_001BE2F4;
    case 170u: goto L_001BE310;
    case 171u: goto L_001BE32C;
    case 172u: goto L_001BE350;
    case 173u: goto L_001BE384;
    case 174u: goto L_001BE394;
    case 175u: goto L_001BE3B0;
    case 176u: goto L_001BE3CC;
    case 177u: goto L_001BE3F0;
    case 178u: goto L_001BE400;
    case 179u: goto L_001BE420;
    case 180u: goto L_001BE450;
    case 181u: goto L_001BE480;
    case 182u: goto L_001BE4B0;
    case 183u: goto L_001BE4E0;
    case 184u: goto L_001BE4F4;
    case 185u: goto L_001BE520;
    case 186u: goto L_001BE530;
    case 187u: goto L_001BE564;
    case 188u: goto L_001BE574;
    case 189u: goto L_001BE590;
    case 190u: goto L_001BE5AC;
    case 191u: goto L_001BE5D0;
    case 192u: goto L_001BE604;
    case 193u: goto L_001BE614;
    case 194u: goto L_001BE630;
    case 195u: goto L_001BE64C;
    case 196u: goto L_001BE670;
    case 197u: goto L_001BE690;
    case 198u: goto L_001BE6A0;
    case 199u: goto L_001BE6D8;
    case 200u: goto L_001BE6E8;
    case 201u: goto L_001BE700;
    case 202u: goto L_001BE734;
    case 203u: goto L_001BE744;
    case 204u: goto L_001BE760;
    case 205u: goto L_001BE77C;
    case 206u: goto L_001BE7A0;
    case 207u: goto L_001BE810;
    case 208u: goto L_001BE844;
    case 209u: goto L_001BE854;
    case 210u: goto L_001BE870;
    case 211u: goto L_001BE88C;
    case 212u: goto L_001BE8B0;
    case 213u: goto L_001BE8E0;
    case 214u: goto L_001BE8F0;
    case 215u: goto L_001BE900;
    case 216u: goto L_001BE930;
    case 217u: goto L_001BE940;
    case 218u: goto L_001BE95C;
    case 219u: goto L_001BE970;
    case 220u: goto L_001BE980;
    case 221u: goto L_001BE994;
    case 222u: goto L_001BE9A4;
    case 223u: goto L_001BE9C0;
    case 224u: goto L_001BEA24;
    case 225u: goto L_001BEA3C;
    case 226u: goto L_001BEA60;
    case 227u: goto L_001BEAB4;
    case 228u: goto L_001BEAD0;
    case 229u: goto L_001BEAF0;
    case 230u: goto L_001BEB34;
    case 231u: goto L_001BEB50;
    case 232u: goto L_001BEB70;
    case 233u: goto L_001BEB80;
    case 234u: goto L_001BEB90;
    case 235u: goto L_001BEBD0;
    case 236u: goto L_001BEBFC;
    case 237u: goto L_001BEC20;
    case 238u: goto L_001BEC64;
    case 239u: goto L_001BEC88;
    case 240u: goto L_001BECAC;
    case 241u: goto L_001BECC8;
    case 242u: goto L_001BECD8;
    case 243u: goto L_001BECF4;
    case 244u: goto L_001BED0C;
    case 245u: goto L_001BED30;
    case 246u: goto L_001BED60;
    case 247u: goto L_001BEF00;
    case 248u: goto L_001BEF10;
    case 249u: goto L_001BEF4C;
    case 250u: goto L_001BEF58;
    case 251u: goto L_001BEF90;
    case 252u: goto L_001BEF98;
    case 253u: goto L_001BEFCC;
    case 254u: goto L_001BF010;
    case 255u: goto L_001BF070;
    case 256u: goto L_001BF090;
    case 257u: goto L_001BF0AC;
    case 258u: goto L_001BF0C0;
    case 259u: goto L_001BF100;
    case 260u: goto L_001BF110;
    case 261u: goto L_001BF12C;
    case 262u: goto L_001BF140;
    case 263u: goto L_001BF150;
    case 264u: goto L_001BF16C;
    case 265u: goto L_001BF180;
    case 266u: goto L_001BF1A0;
    case 267u: goto L_001BF1AC;
    case 268u: goto L_001BF1B4;
    case 269u: goto L_001BF1BC;
    case 270u: goto L_001BF1D4;
    case 271u: goto L_001BF1E8;
    case 272u: goto L_001BF200;
    case 273u: goto L_001BF280;
    case 274u: goto L_001BF2B4;
    case 275u: goto L_001BF2E8;
    case 276u: goto L_001BF31C;
    case 277u: goto L_001BF35C;
    case 278u: goto L_001BF364;
    case 279u: goto L_001BF378;
    case 280u: goto L_001BF384;
    case 281u: goto L_001BF398;
    case 282u: goto L_001BF420;
    case 283u: goto L_001BF448;
    case 284u: goto L_001BF470;
    case 285u: goto L_001BF498;
    case 286u: goto L_001BF4D8;
    case 287u: goto L_001BF4F0;
    case 288u: goto L_001BF62C;
    case 289u: goto L_001BF65C;
    case 290u: goto L_001BF6C0;
    case 291u: goto L_001BF6F8;
    case 292u: goto L_001BF708;
    case 293u: goto L_001BF744;
    case 294u: goto L_001BF754;
    case 295u: goto L_001BF770;
    case 296u: goto L_001BF784;
    case 297u: goto L_001BF794;
    case 298u: goto L_001BF7D0;
    case 299u: goto L_001BF844;
    case 300u: goto L_001BF858;
    case 301u: goto L_001BF868;
    case 302u: goto L_001BF898;
    case 303u: goto L_001BF8A8;
    case 304u: goto L_001BF8C4;
    case 305u: goto L_001BF8DC;
    case 306u: goto L_001BF8EC;
    case 307u: goto L_001BF8FC;
    case 308u: goto L_001BF90C;
    case 309u: goto L_001BF91C;
    case 310u: goto L_001BF950;
    case 311u: goto L_001BF978;
    case 312u: goto L_001BF988;
    case 313u: goto L_001BF9D0;
    case 314u: goto L_001BFA30;
    case 315u: goto L_001BFA38;
    case 316u: goto L_001BFA88;
    case 317u: goto L_001BFAD0;
    case 318u: goto L_001BFB2C;
    case 319u: goto L_001BFBA8;
    case 320u: goto L_001BFBD8;
    case 321u: goto L_001BFC34;
    case 322u: goto L_001BFC68;
    case 323u: goto L_001BFC90;
    case 324u: goto L_001BFCD8;
    case 325u: goto L_001BFD1C;
    case 326u: goto L_001BFDC4;
    case 327u: goto L_001BFDF0;
    case 328u: goto L_001BFE38;
    case 329u: goto L_001BFE60;
    case 330u: goto L_001BFF08;
    case 331u: goto L_001BFF20;
    case 332u: goto L_001BFF80;
    case 333u: goto L_001BFF88;
    case 334u: goto L_001BFFD4;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 84u), c.r[16].w[0]);  goto L_001BC040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC010u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC010u) [[unlikely]] return; }
L_001BC010:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC020u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC020u) [[unlikely]] return; }
L_001BC020:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC03C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC03Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC03Cu) [[unlikely]] return; }
L_001BC03C:
    st32((c.r[20].w[0] + 84u), c.r[16].w[0]);
    c.budget -= 1;
L_001BC040:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BC0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC050u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC050u) [[unlikely]] return; }
L_001BC050:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC060u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC060u) [[unlikely]] return; }
L_001BC060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC0FC; } }
L_001BC068:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 136u), c.r[11].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 136u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC08Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0072(c, 328u, depth + 1u); else { c.pc = 0x002CAC60u; return; } if (c.pc != 0x001BC08Cu) [[unlikely]] return; }
L_001BC08C:
    set32(c.r[17], ld32((c.r[20].w[0] + 84u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_001BC0FC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 84u), c.r[16].w[0]);  goto L_001BC0DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC0ACu) [[unlikely]] return; }
L_001BC0AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC0BCu) [[unlikely]] return; }
L_001BC0BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC0D8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC0D8u) [[unlikely]] return; }
L_001BC0D8:
    st32((c.r[20].w[0] + 84u), c.r[16].w[0]);
    c.budget -= 1;
L_001BC0DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BC0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC0ECu) [[unlikely]] return; }
L_001BC0EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC0FCu) [[unlikely]] return; }
L_001BC0FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_001BC100:
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[20].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC118u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC118u) [[unlikely]] return; }
L_001BC118:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 84u)));  goto L_001BC164; }
    set32(c.r[16], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC134u); st32((c.r[20].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004C(c, 225u, depth + 1u); else { c.pc = 0x00233040u; return; } if (c.pc != 0x001BC134u) [[unlikely]] return; }
L_001BC134:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 141u));
    st8((c.r[20].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC15Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC15Cu) [[unlikely]] return; }
L_001BC15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 92u)));  if (t) { goto L_001BC1B8; } }
L_001BC164:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 88u)));  if (t) { goto L_001BC1A0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));  goto L_001BC188; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 194u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] + 104u);  goto L_001BC1A4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));
    c.budget -= 1;
L_001BC188:
    set32(c.r[7], c.r[29].w[0] + 156u);
    set32(c.r[5], ld32((c.r[28].w[0] - 28780u)));
    set32(c.r[8], c.r[29].w[0] + 152u);
    set32(c.r[6], ld32((c.r[2].w[0] + 892u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1A0u); set32(c.r[9], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0049(c, 46u, depth + 1u); else { c.pc = 0x00225960u; return; } if (c.pc != 0x001BC1A0u) [[unlikely]] return; }
L_001BC1A0:
    set32(c.r[3], c.r[16].w[0] + 104u);
    c.budget -= 1;
L_001BC1A4:
    st32((c.r[20].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 96u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 200u));
    st8((c.r[20].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 5;
L_001BC1B8:
    set32(c.r[5], c.r[19].w[0] - 1u);
    set32(c.r[4], c.r[18].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[20].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[20].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 88u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 93u));
    st32((c.r[20].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 96u)));
    st32((c.r[20].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 100u)));
    st32((c.r[20].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 40u), 0u);
    st32((c.r[20].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 81u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001BC2FC; } }
L_001BC214:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[20].w[0] + 84u);
    set32(c.r[5], c.r[17].w[0] + 84u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 56u));
    st64((c.r[20].w[0] + 56u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 64u));
    st64((c.r[20].w[0] + 64u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 72u));
    st64((c.r[20].w[0] + 72u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 80u));
    st8((c.r[20].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 81u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2B0u); st8((c.r[20].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002F(c, 21u, depth + 1u); else { c.pc = 0x001BC410u; return; } if (c.pc != 0x001BC2B0u) [[unlikely]] return; }
L_001BC2B0:
    set32(c.r[7], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 88u), c.r[7].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[20].w[0] + 92u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[20].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[20].w[0]), c.r[19].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 40u), c.r[22].w[0]);
    st32((c.r[20].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[5].w[0]);
    st8((c.r[20].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 19;
L_001BC2FC:
    st32((c.r[20].w[0] + 8u), 0u);
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_001BC3E8; }
    set32(c.r[3], c.r[4].w[0] >> 5);
    c.r[6].d[0] = ld32((c.r[20].w[0] + 20u));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 24u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 8u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[20].w[0] + 64u), c.r[4].d[0]);
    c.r[4].d[0] = ld32((c.r[20].w[0] + 20u));
    c.r[6].d[0] = ld32((c.r[20].w[0] + 24u));
    c.r[8].d[0] = ld32((c.r[20].w[0] + 16u));
    c.r[7].d[0] = c.r[4].d[0] << 14;
    c.r[5].d[0] = ld32((c.r[20].w[0] + 28u));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 32u));
    c.r[6].d[0] = c.r[6].d[0] << 20;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[9], ld32((c.r[20].w[0] + 96u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 26;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 30;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = ld8((c.r[20].w[0] + 80u));
    c.r[4].d[0] = c.r[4].d[0] << 34;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 31;
    { const bool t = c.r[9].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_001BC394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[9].w[0] + 24u)));  if (t) { goto L_001BC398; } }
L_001BC394:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BC398:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] << 37;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[20].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[20].w[0] + 72u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 20;
L_001BC3E8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BC410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BC498; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_001BC478; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC448u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC448u) [[unlikely]] return; }
L_001BC448:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC458u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC458u) [[unlikely]] return; }
L_001BC458:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC474; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC474u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC474u) [[unlikely]] return; }
L_001BC474:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001BC478:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_001BC498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC488u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BC488u) [[unlikely]] return; }
L_001BC488:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC498u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BC498u) [[unlikely]] return; }
L_001BC498:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC4C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4E8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC4E8u) [[unlikely]] return; }
L_001BC4E8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC4FCu) [[unlikely]] return; }
L_001BC4FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC520u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x001BC520u) [[unlikely]] return; }
L_001BC520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001BC580; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));  goto L_001BC568; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 194u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001BC584; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));
    c.budget -= 1;
L_001BC568:
    set32(c.r[7], c.r[29].w[0] + 28u);
    set32(c.r[5], ld32((c.r[28].w[0] - 28780u)));
    set32(c.r[8], c.r[29].w[0] + 24u);
    set32(c.r[6], ld32((c.r[2].w[0] + 892u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC580u); set32(c.r[9], c.r[29].w[0] + 20u);  if (depth < kMaxDepth) unit_0049(c, 46u, depth + 1u); else { c.pc = 0x00225960u; return; } if (c.pc != 0x001BC580u) [[unlikely]] return; }
L_001BC580:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BC584:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 6608u);  c.pc = t; return; }
L_001BC5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28764u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28764u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001BC5DC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC5D8u) [[unlikely]] return; }
L_001BC5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BC5DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BC5F0:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], 0u + 10u);
    set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28768u), c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 152u);
    set32(c.r[6], ld32((c.r[3].w[0] + 576u)));
    set32(c.r[2], c.r[3].w[0] + 204u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28780u), c.r[6].w[0]);
    st32((c.r[28].w[0] - 28776u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28772u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], ld32((c.r[3].w[0] + 2744u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    st32((c.r[24].w[0] + 6736u), c.r[17].w[0]);
    set32(c.r[18], c.r[17].w[0] - 1u);
    set32(c.r[17], ld32((c.r[3].w[0] + 2748u)));
    st32((c.r[4].w[0] + 6740u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2732u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 596u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    st32((c.r[16].w[0] + 6752u), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 2744u)));
    set32(c.r[16], c.r[16].w[0] >> 6);
    st32((c.r[15].w[0] + 6756u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2752u)));
    st32((c.r[8].w[0] + 6780u), c.r[18].w[0]);
    st32((c.r[7].w[0] + 6784u), c.r[17].w[0]);
    st32((c.r[14].w[0] + 6760u), c.r[3].w[0]);
    st32((c.r[13].w[0] + 6764u), c.r[25].w[0]);
    st32((c.r[12].w[0] + 6768u), c.r[25].w[0]);
    st8((c.r[11].w[0] + 6816u), static_cast<std::uint8_t>(0u));
    st32((c.r[10].w[0] + 6772u), 0u);
    st32((c.r[9].w[0] + 6776u), 0u);
    st32((c.r[6].w[0] + 6824u), 0u);
    st32((c.r[5].w[0] + 6828u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 60;
    if (c.r[3].d[0] == c.r[5].d[0]) { st32((c.r[2].w[0] + 24u), c.r[4].w[0]);  goto L_001BC74C; }
    set32(c.r[5], 0u + 36u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_001BC718; }
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001BC714; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_001BC70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), 0u);  if (t) { goto L_001BC71C; } }
L_001BC70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_001BC71C; } }
L_001BC714:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_001BC718:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_001BC71C:
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 91u));
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld32((c.r[2].w[0] + 44u));  goto L_001BC734; }
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.r[5].d[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 2;
L_001BC734:
    c.r[3].d[0] = ld32((c.r[2].w[0] + 56u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 32u), c.r[3].d[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 6;
L_001BC74C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 6752u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].d[0] = ld32((c.r[3].w[0] + 6756u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[8].w[0] >> 5);
    c.r[9].d[0] = ld32((c.r[2].w[0] + 6760u));
    c.r[10].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] >> 32;
    c.r[3].d[0] = c.r[11].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    set32(c.r[12], ld32((c.r[4].w[0] + 2736u)));
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[3].d[0] = c.r[11].d[0] << 14;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[5].w[0] + 6744u), c.r[12].w[0]);
    c.r[3].d[0] = c.r[9].d[0] << 24;
    c.r[10].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[11], ld32((c.r[4].w[0] + 2740u)));
    c.r[3].d[0] = c.r[9].d[0] << 20;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].d[0] = c.r[3].d[0] | c.r[8].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 6832u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[7].w[0] + 6748u), c.r[11].w[0]);
    c.r[8].d[0] = ld32((c.r[3].w[0] + 6764u));
    c.r[7].d[0] = ld32((c.r[5].w[0] + 6768u));
    st64((c.r[6].w[0] + 6800u), c.r[10].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].d[0] = c.r[8].d[0] << 26;
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6816u));
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 34;
    c.r[6].d[0] = c.r[7].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 48;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_001BC814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_001BC818; } }
L_001BC814:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BC818:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 6792u), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 6744u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 6748u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 6808u), c.r[3].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC884u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC884u) [[unlikely]] return; }
L_001BC884:
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 6608u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BC8A0u) [[unlikely]] return; }
L_001BC8A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28768u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 6612u), c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2732u)));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[25], 0u + 10u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 596u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[5].w[0] + 6624u), c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 604u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 6608u)));
    st32((c.r[16].w[0] + 6628u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[24], c.r[2].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 6992u);
    st32((c.r[9].w[0] + 6652u), c.r[24].w[0]);
    st32((c.r[8].w[0] + 6656u), c.r[17].w[0]);
    st32((c.r[15].w[0] + 6632u), c.r[3].w[0]);
    st32((c.r[14].w[0] + 6636u), c.r[25].w[0]);
    st32((c.r[13].w[0] + 6640u), c.r[25].w[0]);
    st8((c.r[12].w[0] + 6688u), static_cast<std::uint8_t>(0u));
    st32((c.r[11].w[0] + 6644u), 0u);
    st32((c.r[10].w[0] + 6648u), 0u);
    st8((c.r[7].w[0] + 6689u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 6696u), 0u);
    st32((c.r[5].w[0] + 6700u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 46;
    if (c.r[3].d[0] == c.r[5].d[0]) { st32((c.r[2].w[0] + 24u), c.r[4].w[0]);  goto L_001BC9C4; }
    set32(c.r[5], 0u + 36u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 3u);  goto L_001BC990; }
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001BC98C; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_001BC984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), 0u);  if (t) { goto L_001BC994; } }
L_001BC984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_001BC994; } }
L_001BC98C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_001BC990:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_001BC994:
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 91u));
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld32((c.r[2].w[0] + 44u));  goto L_001BC9AC; }
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.r[5].d[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 2;
L_001BC9AC:
    c.r[3].d[0] = ld32((c.r[2].w[0] + 56u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 32u), c.r[3].d[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 6;
L_001BC9C4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 6624u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[11].d[0] = ld32((c.r[3].w[0] + 6628u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[8].w[0] >> 5);
    c.r[9].d[0] = ld32((c.r[2].w[0] + 6632u));
    c.r[10].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] >> 32;
    c.r[3].d[0] = c.r[11].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    set32(c.r[12], ld32((c.r[4].w[0] + 2736u)));
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[3].d[0] = c.r[11].d[0] << 14;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[5].w[0] + 6616u), c.r[12].w[0]);
    c.r[3].d[0] = c.r[9].d[0] << 24;
    c.r[10].d[0] = c.r[3].d[0] | c.r[10].d[0];
    set32(c.r[11], ld32((c.r[4].w[0] + 2740u)));
    c.r[3].d[0] = c.r[9].d[0] << 20;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].d[0] = c.r[3].d[0] | c.r[8].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 6704u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[7].w[0] + 6620u), c.r[11].w[0]);
    c.r[8].d[0] = ld32((c.r[3].w[0] + 6636u));
    c.r[7].d[0] = ld32((c.r[5].w[0] + 6640u));
    st64((c.r[6].w[0] + 6672u), c.r[10].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].d[0] = c.r[8].d[0] << 26;
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6688u));
    set32(c.r[6], 0u + 8u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 34;
    c.r[6].d[0] = c.r[7].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 48;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_001BCA8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_001BCA90; } }
L_001BCA8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BCA90:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 6664u), c.r[5].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 6616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 6620u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 6680u), c.r[3].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BCAFCu) [[unlikely]] return; }
L_001BCAFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 6864u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BCB18u) [[unlikely]] return; }
L_001BCB18:
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 6868u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 888u)));
    set32(c.r[3], 0u + 10u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 6880u), c.r[5].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 896u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 6608u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[6].w[0] + 6884u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 892u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 6612u)));
    set32(c.r[24], c.r[7].w[0] - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[10].w[0] + 6908u), c.r[24].w[0]);
    set32(c.r[17], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 6888u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[9].w[0] + 6912u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 7216u);
    st32((c.r[15].w[0] + 6892u), c.r[3].w[0]);
    st32((c.r[14].w[0] + 6896u), c.r[3].w[0]);
    st8((c.r[13].w[0] + 6944u), static_cast<std::uint8_t>(0u));
    st32((c.r[12].w[0] + 6900u), 0u);
    st32((c.r[11].w[0] + 6904u), 0u);
    st8((c.r[8].w[0] + 6945u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] + 6952u), 0u);
    st32((c.r[6].w[0] + 6956u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 45;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[2].w[0] + 24u), c.r[5].w[0]);  goto L_001BCC38; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001BCC04; }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001BCC00; } }
    set32(c.r[3], 0u + 27u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001BCBF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), 0u);  if (t) { goto L_001BCC08; } }
L_001BCBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_001BCC08; } }
L_001BCC00:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001BCC04:
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_001BCC08:
    st32((c.r[2].w[0] + 52u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 91u));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld32((c.r[2].w[0] + 44u));  goto L_001BCC20; }
    st32((c.r[2].w[0] + 56u), c.r[4].w[0]);
    c.r[4].d[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 2;
L_001BCC20:
    c.r[3].d[0] = ld32((c.r[2].w[0] + 56u));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 32u), c.r[3].d[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
L_001BCC38:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 6876u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 6872u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 6880u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[4].w[0] >> 5);
    c.r[7].d[0] = ld32((c.r[2].w[0] + 6884u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[7].d[0] << 16;
    c.r[6].d[0] = ld32((c.r[2].w[0] + 6888u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 14;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 24;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 20;
    st64((c.r[2].w[0] + 6928u), c.r[5].d[0]);
    c.r[7].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = ld32((c.r[2].w[0] + 6892u));
    set32(c.r[8], ld32((c.r[3].w[0] + 6960u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6944u));
    c.r[5].d[0] = ld32((c.r[3].w[0] + 6896u));
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 26;
    c.r[6].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 30;
    c.r[5].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[4].d[0] << 34;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 45;
    { const bool t = c.r[8].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_001BCCF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[8].w[0] + 24u)));  if (t) { goto L_001BCCF8; } }
L_001BCCF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BCCF8:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[3].w[0] + 6920u), c.r[4].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 6872u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 6876u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[2].w[0] + 6936u), c.r[3].d[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 25;
L_001BCD5C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCD5Cu | kUnwind; return; } goto L_001BCD5C; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001BCD90u) [[unlikely]] return; }
L_001BCD90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 28776u)));  goto L_001BCDB0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDACu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x001BCDACu) [[unlikely]] return; }
L_001BCDAC:
    set32(c.r[16], ld32((c.r[28].w[0] - 28776u)));
    c.budget -= 1;
L_001BCDB0:
    st32((c.r[28].w[0] - 28764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_001BCE84; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001BCE1C; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001BCDE0u) [[unlikely]] return; }
L_001BCDE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001BCE14; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE00u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001BCE00u) [[unlikely]] return; }
L_001BCE00:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001BCE0Cu) [[unlikely]] return; }
L_001BCE0C:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001BCE14:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001BCE1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_001BCE40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_001BCE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 17;
L_001BCE84:
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEA4u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001BCEA4u) [[unlikely]] return; }
L_001BCEA4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], 0u + 79u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[7], c.r[4], c.r[2]);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], 0u + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 28776u)));
    mmi::pcpyld(c.r[6], c.r[3], c.r[2]);
    set32(c.r[2], 0u + 75u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 28776u)));
    mmi::pcpyld(c.r[7], c.r[2], c.r[7]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], 0u + 59u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    mmi::pcpyld(c.r[6], c.r[3], c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF70u); c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x001BCF70u) [[unlikely]] return; }
L_001BCF70:
    set32(c.r[3], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001BCF90; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001BCF90:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BCFF8; } }
L_001BCFB8:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31788u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCFE0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001BCFE0u) [[unlikely]] return; }
L_001BCFE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7312u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 6;
L_001BCFF8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCFB8u | kUnwind; return; } goto L_001BCFB8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_001BD020:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001BD388; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD080; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  goto L_001BD0A4; }
L_001BD080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD098u); set32(c.r[5], c.r[5].w[0] - 28240u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BD098u) [[unlikely]] return; }
L_001BD098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0A0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BD0A0u) [[unlikely]] return; }
L_001BD0A0:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001BD0A4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st32((c.r[29].w[0] + 112u), 0u);  goto L_001BD214; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001BD0D8; } }
    set32(c.r[4], c.r[4].w[0] + 15u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.budget -= 2;
L_001BD0D8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] << 4);  goto L_001BD15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001BD110; } }
L_001BD0EC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001BD100; }
    ld128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
L_001BD100:
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001BD110:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD0ECu | kUnwind; return; } goto L_001BD0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BD148; } }
L_001BD124:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001BD138; }
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
L_001BD138:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001BD148:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD124u | kUnwind; return; } goto L_001BD124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD1E8; } }
L_001BD15C:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_001BD18C; } }
L_001BD168:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001BD17C; }
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
L_001BD17C:
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001BD18C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD168u | kUnwind; return; } goto L_001BD168; } }
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_001BD1DC; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD1C0; } }
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001BD1C0:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD1DC; } }
L_001BD1CC:
    set32(c.r[5], c.r[5].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.budget -= 4;
L_001BD1DC:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD1CCu | kUnwind; return; } goto L_001BD1CC; } }
L_001BD1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD204; } }
L_001BD1F0:
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st128((c.r[18].w[0]) & ~15u, c.r[3]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 5;
L_001BD204:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD1F0u | kUnwind; return; } goto L_001BD1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001BD38C; } }
L_001BD214:
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_001BD228; }
L_001BD228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_001BD248; } }
L_001BD234:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[21].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[21].d[0] = c.r[2].d[0] + 0ull;  goto L_001BD248; }
    set32(c.r[21], c.r[21].w[0] << 1);
    c.budget -= 1;
L_001BD248:
    c.r[1].d[0] = c.r[21].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x07FF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD234u | kUnwind; return; } goto L_001BD234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD25Cu); set32(c.r[4], c.r[21].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x001BD25Cu) [[unlikely]] return; }
L_001BD25C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { st32((c.r[29].w[0] + 112u), c.r[21].w[0]);  goto L_001BD28C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD280u); set32(c.r[5], c.r[5].w[0] - 28272u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BD280u) [[unlikely]] return; }
L_001BD280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD288u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BD288u) [[unlikely]] return; }
L_001BD288:
    st32((c.r[29].w[0] + 112u), c.r[21].w[0]);
    c.budget -= 1;
L_001BD28C:
    st32((c.r[29].w[0] + 120u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001BD2C8; } }
L_001BD2A4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001BD2B8; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
L_001BD2B8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 4;
L_001BD2C8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD2A4u | kUnwind; return; } goto L_001BD2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD300; } }
L_001BD2DC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001BD2F0; }
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
L_001BD2F0:
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 4;
L_001BD300:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD2DCu | kUnwind; return; } goto L_001BD2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001BD338; } }
L_001BD310:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001BD324; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
L_001BD324:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_001BD338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD310u | kUnwind; return; } goto L_001BD310; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_001BD380; }
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 13;
L_001BD380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD388u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x001BD388u) [[unlikely]] return; }
L_001BD388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001BD38C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BD3B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BD4DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] << 4);  goto L_001BD40C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD400u); set32(c.r[5], c.r[5].w[0] - 28211u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BD400u) [[unlikely]] return; }
L_001BD400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD408u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BD408u) [[unlikely]] return; }
L_001BD408:
    set32(c.r[4], c.r[17].w[0] << 4);
    c.budget -= 1;
L_001BD40C:
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD41Cu); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x001BD41Cu) [[unlikely]] return; }
L_001BD41C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { st32((c.r[29].w[0] + 64u), c.r[17].w[0]);  goto L_001BD44C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD440u); set32(c.r[5], c.r[5].w[0] - 28272u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BD440u) [[unlikely]] return; }
L_001BD440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD448u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BD448u) [[unlikely]] return; }
L_001BD448:
    st32((c.r[29].w[0] + 64u), c.r[17].w[0]);
    c.budget -= 1;
L_001BD44C:
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001BD488; } }
L_001BD464:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_001BD478; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
L_001BD478:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_001BD488:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD464u | kUnwind; return; } goto L_001BD464; } }
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001BD4D4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 13;
L_001BD4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x001BD4DCu) [[unlikely]] return; }
L_001BD4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BD500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BD550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD524u);  if (depth < kMaxDepth) unit_002F(c, 79u, depth + 1u); else { c.pc = 0x001BD570u; return; } if (c.pc != 0x001BD524u) [[unlikely]] return; }
L_001BD524:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001BD53C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD538u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BD538u) [[unlikely]] return; }
L_001BD538:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001BD53C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BD554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD550u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BD550u) [[unlikely]] return; }
L_001BD550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BD554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BD570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_001BD580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BD5FC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BD5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BD5B4u) [[unlikely]] return; }
L_001BD5B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5C4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BD5C4u) [[unlikely]] return; }
L_001BD5C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD5E0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BD5E0u) [[unlikely]] return; }
L_001BD5E0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BD5E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BD600; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5FCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BD5FCu) [[unlikely]] return; }
L_001BD5FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BD600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BD620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BD660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD644u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x001BD644u) [[unlikely]] return; }
L_001BD644:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BD664; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD660u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BD660u) [[unlikely]] return; }
L_001BD660:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BD664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BD680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BD704; } }
    set32(c.r[2], c.r[16].w[0] + 84u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BD6F0; }
    set32(c.r[17], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BD6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BD6C0u) [[unlikely]] return; }
L_001BD6C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BD6D0u) [[unlikely]] return; }
L_001BD6D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD6EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BD6ECu) [[unlikely]] return; }
L_001BD6EC:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BD6F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BD708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BD704u) [[unlikely]] return; }
L_001BD704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BD708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BD720:
    c.f[0] = c.r[7].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.f[4] = c.r[4].w[0];
    fpu_div(c, 3u, c.f[4], c.f[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[4], c.f[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 308u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 312u), c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    st32((c.r[7].w[0] + 316u), c.f[2]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 320u), c.f[0]);  c.pc = t; return; }
L_001BD7D0:
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[1]);  c.pc = t; return; }
L_001BD800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD818u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 52u, depth + 1u); else { c.pc = 0x0014C640u; return; } if (c.pc != 0x001BD818u) [[unlikely]] return; }
L_001BD818:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD828u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_002F(c, 104u, depth + 1u); else { c.pc = 0x001BD8C0u; return; } if (c.pc != 0x001BD828u) [[unlikely]] return; }
L_001BD828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD858u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 51u, depth + 1u); else { c.pc = 0x0014C620u; return; } if (c.pc != 0x001BD858u) [[unlikely]] return; }
L_001BD858:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD868u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_002F(c, 104u, depth + 1u); else { c.pc = 0x001BD8C0u; return; } if (c.pc != 0x001BD868u) [[unlikely]] return; }
L_001BD868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD898u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 50u, depth + 1u); else { c.pc = 0x0014C600u; return; } if (c.pc != 0x001BD898u) [[unlikely]] return; }
L_001BD898:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8A8u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_002F(c, 104u, depth + 1u); else { c.pc = 0x001BD8C0u; return; } if (c.pc != 0x001BD8A8u) [[unlikely]] return; }
L_001BD8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD8C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 12u);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[16], c.r[19].w[0] + 24u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 96u), c.f[0]);
    st32((c.r[5].w[0] + 100u), c.f[1]);
    st32((c.r[5].w[0] + 104u), c.f[2]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD910u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BD910u) [[unlikely]] return; }
L_001BD910:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[6], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD950u); st32((c.r[29].w[0] + 144u), c.f[2]);  if (depth < kMaxDepth) unit_0062(c, 119u, depth + 1u); else { c.pc = 0x00288FE0u; return; } if (c.pc != 0x001BD950u) [[unlikely]] return; }
L_001BD950:
    c.f[0] = ld32((c.r[18].w[0] + 272u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 276u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 280u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 284u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 288u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 292u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 296u));
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[29].w[0] + 152u), c.f[2]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9CCu); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BD9CCu) [[unlikely]] return; }
L_001BD9CC:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[18].w[0] + 324u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BD9E4u) [[unlikely]] return; }
L_001BD9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BDA00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA20u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 49u, depth + 1u); else { c.pc = 0x0014C5F0u; return; } if (c.pc != 0x001BDA20u) [[unlikely]] return; }
L_001BDA20:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA6Cu); st32((c.r[29].w[0] + 64u), c.f[20]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDA6Cu) [[unlikely]] return; }
L_001BDA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BDA80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAA0u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 48u, depth + 1u); else { c.pc = 0x0014C5E0u; return; } if (c.pc != 0x001BDAA0u) [[unlikely]] return; }
L_001BDAA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAECu); st32((c.r[29].w[0] + 68u), c.f[20]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDAECu) [[unlikely]] return; }
L_001BDAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BDB00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    st32((c.r[29].w[0] + 88u), c.f[21]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB34u); st32((c.r[29].w[0] + 92u), c.f[20]);  if (depth < kMaxDepth) unit_0013(c, 47u, depth + 1u); else { c.pc = 0x0014C5C0u; return; } if (c.pc != 0x001BDB34u) [[unlikely]] return; }
L_001BDB34:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.f[1] = c.f[21] ^ fp::kSign;
    c.f[0] = c.f[20] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 60u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[20]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB94u); st32((c.r[29].w[0] + 52u), c.f[21]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDB94u) [[unlikely]] return; }
L_001BDB94:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 324u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BDBC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_001BDBD0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 481u, depth + 1u); else { c.pc = 0x00137F50u; return; } if (c.pc != 0x001BDBF4u) [[unlikely]] return; }
L_001BDBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 24128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC08u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 53u, depth + 1u); else { c.pc = 0x0014C660u; return; } if (c.pc != 0x001BDC08u) [[unlikely]] return; }
L_001BDC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001BDC10u) [[unlikely]] return; }
L_001BDC10:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001BDC1Cu) [[unlikely]] return; }
L_001BDC1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001BDC50; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001BDC4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BDC3Cu) [[unlikely]] return; }
L_001BDC3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BDC4Cu) [[unlikely]] return; }
L_001BDC4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BDC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC58u); st32((c.r[17].w[0] + 32u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001BDC58u) [[unlikely]] return; }
L_001BDC58:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001BDC64u) [[unlikely]] return; }
L_001BDC64:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[4], 0u + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001BDC74u) [[unlikely]] return; }
L_001BDC74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 32u)));  goto L_001BDC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 142u, depth + 1u); else { c.pc = 0x002893C0u; return; } if (c.pc != 0x001BDC88u) [[unlikely]] return; }
L_001BDC88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 2;
L_001BDC90:
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  goto L_001BDD00; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[16].w[0]);  goto L_001BDCDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BDCACu) [[unlikely]] return; }
L_001BDCAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCBCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BDCBCu) [[unlikely]] return; }
L_001BDCBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDCD8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCD8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BDCD8u) [[unlikely]] return; }
L_001BDCD8:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_001BDCDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BDCFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BDCECu) [[unlikely]] return; }
L_001BDCEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCFCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BDCFCu) [[unlikely]] return; }
L_001BDCFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_001BDD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD08u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001BDD08u) [[unlikely]] return; }
L_001BDD08:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD34u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 47u, depth + 1u); else { c.pc = 0x0014C5C0u; return; } if (c.pc != 0x001BDD34u) [[unlikely]] return; }
L_001BDD34:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 168u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD94u); st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDD94u) [[unlikely]] return; }
L_001BDD94:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDB0u); st32((c.r[2].w[0] + 324u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 49u, depth + 1u); else { c.pc = 0x0014C5F0u; return; } if (c.pc != 0x001BDDB0u) [[unlikely]] return; }
L_001BDDB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE00u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDE00u) [[unlikely]] return; }
L_001BDE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE10u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0013(c, 48u, depth + 1u); else { c.pc = 0x0014C5E0u; return; } if (c.pc != 0x001BDE10u) [[unlikely]] return; }
L_001BDE10:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 272u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 276u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 296u));
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE60u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x001BDE60u) [[unlikely]] return; }
L_001BDE60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001BDE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BDECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEB0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x001BDEB0u) [[unlikely]] return; }
L_001BDEB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BDED0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDECCu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BDECCu) [[unlikely]] return; }
L_001BDECC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BDED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BDEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BDF6C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BDF54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BDF24u) [[unlikely]] return; }
L_001BDF24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF34u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BDF34u) [[unlikely]] return; }
L_001BDF34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDF50; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BDF50u) [[unlikely]] return; }
L_001BDF50:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BDF54:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BDF70; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF6Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BDF6Cu) [[unlikely]] return; }
L_001BDF6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BDF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BDF90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFBCu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BDFBCu) [[unlikely]] return; }
L_001BDFBC:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BE02C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_001BE00C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BDFDCu) [[unlikely]] return; }
L_001BDFDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BDFECu) [[unlikely]] return; }
L_001BDFEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE008; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE008u) [[unlikely]] return; }
L_001BE008:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001BE00C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  if (t) { goto L_001BE02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE01Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE01Cu) [[unlikely]] return; }
L_001BE01C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE02Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE02Cu) [[unlikely]] return; }
L_001BE02C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[16].w[0]);  goto L_001BE048; }
    st32((c.r[3].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001BE048:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BE080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE098u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x001BE098u) [[unlikely]] return; }
L_001BE098:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_001BE164; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0C0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001BE0C0u) [[unlikely]] return; }
L_001BE0C0:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0D8u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001BE0D8u) [[unlikely]] return; }
L_001BE0D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_001BE0F8:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE0F8u | kUnwind; return; } goto L_001BE0F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_001BE14C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_001BE154; } }
L_001BE14C:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_001BE154:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_001BE164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE184u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x001BE184u) [[unlikely]] return; }
L_001BE184:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001BE1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE1C8u) [[unlikely]] return; }
L_001BE1C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE1D8u) [[unlikely]] return; }
L_001BE1D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE1F0:
    c.f[7] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[11] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::mul(c.f[5], c.f[7]);
    c.f[6] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[3] = fp::mul(c.f[5], c.f[11]);
    c.f[10] = fp::mul(c.f[4], c.f[0]);
    c.f[9] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::mul(c.f[3], c.f[7]);
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[8] = fp::mul(c.f[6], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[11]);
    c.f[0] = fp::add(c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = fp::add(c.f[4], c.f[3]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[4] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[5], c.f[8]);
    c.f[7] = fp::mul(c.f[6], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[11]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[1] = fp::sub(c.f[7], c.f[9]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[5] = fp::sub(c.f[5], c.f[8]);
    st32((c.r[5].w[0] + 16u), c.f[5]);
    c.f[3] = fp::add(c.f[6], c.f[10]);
    st32((c.r[5].w[0] + 20u), c.f[4]);
    st32((c.r[5].w[0] + 24u), c.f[3]);
    c.f[2] = fp::add(c.f[7], c.f[9]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[1] = fp::sub(c.f[6], c.f[10]);
    st32((c.r[5].w[0] + 32u), c.f[2]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[0]);
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 44u), 0u);  c.pc = t; return; }
L_001BE2B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE32C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE2E4u) [[unlikely]] return; }
L_001BE2E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE2F4u) [[unlikely]] return; }
L_001BE2F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE310; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE310u) [[unlikely]] return; }
L_001BE310:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE314:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE330; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE32Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE32Cu) [[unlikely]] return; }
L_001BE32C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE3CC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE3B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE384u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE384u) [[unlikely]] return; }
L_001BE384:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE394u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE394u) [[unlikely]] return; }
L_001BE394:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE3B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE3B0u) [[unlikely]] return; }
L_001BE3B0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE3B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE3D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3CCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE3CCu) [[unlikely]] return; }
L_001BE3CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001BE400:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 7169u);
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001BE420:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));  goto L_001BE438; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001BE440; } }
L_001BE438:
    c.r[3].d[0] = c.r[3].d[0] & 65023ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001BE440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE450:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], 0u - 481u);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001BE480:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], 0u - 31u);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001BE4B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));  goto L_001BE4C8; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001BE4D0; } }
L_001BE4C8:
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001BE4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x001BE4F4u) [[unlikely]] return; }
L_001BE4F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13520u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23872u);  c.pc = t; return; }
L_001BE530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE5AC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE564u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE564u) [[unlikely]] return; }
L_001BE564:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE574u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE574u) [[unlikely]] return; }
L_001BE574:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE590; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE590u) [[unlikely]] return; }
L_001BE590:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE594:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE5B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5ACu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE5ACu) [[unlikely]] return; }
L_001BE5AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE64C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE604u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE604u) [[unlikely]] return; }
L_001BE604:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE614u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE614u) [[unlikely]] return; }
L_001BE614:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE630; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE630u) [[unlikely]] return; }
L_001BE630:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE634:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE650; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE64Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE64Cu) [[unlikely]] return; }
L_001BE64C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE670:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_001BE690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001BE6A0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_001BE6B0; }
L_001BE6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001BE6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE6D8u) [[unlikely]] return; }
L_001BE6D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE6E8u) [[unlikely]] return; }
L_001BE6E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE77C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE734u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE734u) [[unlikely]] return; }
L_001BE734:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE744u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE744u) [[unlikely]] return; }
L_001BE744:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE760; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE760u) [[unlikely]] return; }
L_001BE760:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE764:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE780; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE77Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE77Cu) [[unlikely]] return; }
L_001BE77C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE7A0:
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[6], c.f[4]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_001BE810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE88C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE844u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE844u) [[unlikely]] return; }
L_001BE844:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE854u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE854u) [[unlikely]] return; }
L_001BE854:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE870; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE870u) [[unlikely]] return; }
L_001BE870:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE874:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE890; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE88Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BE88Cu) [[unlikely]] return; }
L_001BE88C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BE8B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BEA3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BE9C8; } }
L_001BE8E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_001BE900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE8F0u) [[unlikely]] return; }
L_001BE8F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE900u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE900u) [[unlikely]] return; }
L_001BE900:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 108u)));  goto L_001BE984; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 108u)));  goto L_001BE960; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE930u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE930u) [[unlikely]] return; }
L_001BE930:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE940u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE940u) [[unlikely]] return; }
L_001BE940:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE95C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE95Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE95Cu) [[unlikely]] return; }
L_001BE95C:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_001BE960:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_001BE980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE970u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE970u) [[unlikely]] return; }
L_001BE970:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE980u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE980u) [[unlikely]] return; }
L_001BE980:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_001BE984:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_001BE9C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE994u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BE994u) [[unlikely]] return; }
L_001BE994:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9A4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BE9A4u) [[unlikely]] return; }
L_001BE9A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE9C0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE9C0u) [[unlikely]] return; }
L_001BE9C0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BE9C4:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001BE9C8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 14u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE8E0u | kUnwind; return; } goto L_001BE8E0; }
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001BEA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15664u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001BEA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 15680u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6128u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA24u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001BEA24u) [[unlikely]] return; }
L_001BEA24:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001BEA40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BEA3Cu) [[unlikely]] return; }
L_001BEA3C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001BEA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BEA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BEAD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15664u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001BEAB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 15680u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6128u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAB4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001BEAB4u) [[unlikely]] return; }
L_001BEAB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BEAD4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAD0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BEAD0u) [[unlikely]] return; }
L_001BEAD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BEAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BEB50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 15680u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6128u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB34u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001BEB34u) [[unlikely]] return; }
L_001BEB34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BEB54; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB50u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001BEB50u) [[unlikely]] return; }
L_001BEB50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BEB54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEB70:
    set32(c.r[4], ld32((c.r[28].w[0] - 28760u)));
    c.budget -= 3;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE8B0u | kUnwind; return; } goto L_001BE8B0; }
L_001BEB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BEB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BEBFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 15648u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 5088u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBD0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x001BEBD0u) [[unlikely]] return; }
L_001BEBD0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001BEBE8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_001BEBE8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BEC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BEBFCu) [[unlikely]] return; }
L_001BEBFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BEC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BED0C; } }
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 20u);  goto L_001BEC68; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEC64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 46u, depth + 1u); else { c.pc = 0x001C0A60u; return; } if (c.pc != 0x001BEC64u) [[unlikely]] return; }
L_001BEC64:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_001BEC68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_001BEC8C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEC88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 42u, depth + 1u); else { c.pc = 0x001C09E0u; return; } if (c.pc != 0x001BEC88u) [[unlikely]] return; }
L_001BEC88:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001BEC8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BECAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BECAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BECAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 38u, depth + 1u); else { c.pc = 0x001C0960u; return; } if (c.pc != 0x001BECACu) [[unlikely]] return; }
L_001BECAC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BECF8; }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BECF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BECC8u) [[unlikely]] return; }
L_001BECC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECD8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BECD8u) [[unlikely]] return; }
L_001BECD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BECF4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BECF4u) [[unlikely]] return; }
L_001BECF4:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BECF8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BED10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001BED0Cu) [[unlikely]] return; }
L_001BED0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BED10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BED30:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[28].w[0] - 30816u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[28].w[0] - 30820u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001BED4C; } }
    set32(c.r[3], 0u + 16383u);
    st16((c.r[28].w[0] - 30820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001BED4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BED60:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BED8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[13]));  if (t) { goto L_001BED90; } }
L_001BED8C:
    c.f[0] = 0u;
    c.budget -= 1;
L_001BED90:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_001BEDA8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_001BEDB0; } }
L_001BEDA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001BEDB0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_001BEDDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[13]));  if (t) { goto L_001BEDE4; } }
L_001BEDDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001BEDE4:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_001BEDFC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_001BEE00; } }
L_001BEDFC:
    c.f[0] = 0u;
    c.budget -= 1;
L_001BEE00:
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::sub(c.f[1], c.f[0]);  goto L_001BEE1C; }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_001BEE1C:
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001BEE40; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BEE40:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_001BEE90; }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::sub(c.f[1], c.f[0]);  goto L_001BEE64; }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_001BEE64:
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001BEE88; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BEE88:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001BEE90:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_001BEF00:
    c.f[0] = c.f[12] & fp::kAbs;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 204u), c.f[0]);  c.pc = t; return; }
L_001BEF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[21] = ld32((c.r[5].w[0] + 8u));
    c.f[12] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF4Cu); c.f[22] = c.f[13];  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x001BEF4Cu) [[unlikely]] return; }
L_001BEF4C:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF58u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x001BEF58u) [[unlikely]] return; }
L_001BEF58:
    c.f[1] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = fp::mul(c.f[22], c.f[20]);
    st32((c.r[17].w[0] + 192u), c.f[1]);
    st32((c.r[17].w[0] + 196u), c.f[0]);
    st32((c.r[17].w[0] + 200u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BEF90:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[8].w[0] << 1);
    c.budget -= 2;
L_001BEF98:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 72u);  if (t) { goto L_001BEFF4; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_001BEFEC; } }
L_001BEFCC:
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 8;
L_001BEFEC:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEFCCu | kUnwind; return; } goto L_001BEFCC; }
L_001BEFF4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEF98u | kUnwind; return; } goto L_001BEF98; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF010:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 24;
L_001BF070:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001BF098; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF090u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x001BF090u) [[unlikely]] return; }
L_001BF090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BF0C8; } }
L_001BF098:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 344u), 0u);  if (t) { goto L_001BF0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF0ACu) [[unlikely]] return; }
L_001BF0AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0C0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF0C0u) [[unlikely]] return; }
L_001BF0C0:
    set32(c.r[19], 0u + 1u);
    set32(c.r[18], c.r[29].w[0] + 344u);
    c.budget -= 2;
L_001BF0C8:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[16].w[0] + 28u);  if (t) { goto L_001BF150; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_001BF130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF100u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF100u) [[unlikely]] return; }
L_001BF100:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF110u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF110u) [[unlikely]] return; }
L_001BF110:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF12C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF12Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF12Cu) [[unlikely]] return; }
L_001BF12C:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001BF130:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[22].w[0]), c.r[17].w[0]);  if (t) { goto L_001BF150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF140u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF140u) [[unlikely]] return; }
L_001BF140:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF150u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF150u) [[unlikely]] return; }
L_001BF150:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 32u);  goto L_001BF1A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF16Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF16Cu) [[unlikely]] return; }
L_001BF16C:
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF180u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF180u) [[unlikely]] return; }
L_001BF180:
    set32(c.r[4], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF1A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF1A0u) [[unlikely]] return; }
L_001BF1A0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001BF1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1ACu);  if (depth < kMaxDepth) unit_0030(c, 37u, depth + 1u); else { c.pc = 0x001C0950u; return; } if (c.pc != 0x001BF1ACu) [[unlikely]] return; }
L_001BF1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1B4u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0030(c, 41u, depth + 1u); else { c.pc = 0x001C09D0u; return; } if (c.pc != 0x001BF1B4u) [[unlikely]] return; }
L_001BF1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1BCu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0030(c, 45u, depth + 1u); else { c.pc = 0x001C0A50u; return; } if (c.pc != 0x001BF1BCu) [[unlikely]] return; }
L_001BF1BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF070u | kUnwind; return; } goto L_001BF070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001BF660; } }
L_001BF1D4:
    set32(c.r[18], c.r[20].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1E8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x001BF1E8u) [[unlikely]] return; }
L_001BF1E8:
    c.f[25] = fp::mul(c.f[22], c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF200u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x001BF200u) [[unlikely]] return; }
L_001BF200:
    c.f[24] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[29].w[0] + 312u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[17], c.r[30].w[0] + c.r[2].w[0]);
    c.f[1] = 0u;
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.facc = fp::add(c.f[1], c.f[25]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 312u), c.f[25]);
    st32((c.r[29].w[0] + 320u), 0u);
    st32((c.r[29].w[0] + 316u), c.f[24]);
    set32(c.r[16], c.r[17].w[0] + 44u);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[22], c.f[2]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.facc = fp::add(c.f[1], c.f[24]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[21], c.f[0]));
    set32(c.r[22], c.r[17].w[0] + 40u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF280u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 313u, depth + 1u); else { c.pc = 0x001BF9D0u; return; } if (c.pc != 0x001BF280u) [[unlikely]] return; }
L_001BF280:
    st32((c.r[29].w[0] + 296u), c.f[25]);
    st32((c.r[29].w[0] + 304u), 0u);
    st32((c.r[29].w[0] + 300u), c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 296u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2B4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 313u, depth + 1u); else { c.pc = 0x001BF9D0u; return; } if (c.pc != 0x001BF2B4u) [[unlikely]] return; }
L_001BF2B4:
    st32((c.r[29].w[0] + 284u), c.f[20]);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 280u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2E8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 313u, depth + 1u); else { c.pc = 0x001BF9D0u; return; } if (c.pc != 0x001BF2E8u) [[unlikely]] return; }
L_001BF2E8:
    st32((c.r[29].w[0] + 264u), c.f[23]);
    st32((c.r[29].w[0] + 272u), 0u);
    st32((c.r[29].w[0] + 268u), c.f[24]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 264u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF31Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 313u, depth + 1u); else { c.pc = 0x001BF9D0u; return; } if (c.pc != 0x001BF31Cu) [[unlikely]] return; }
L_001BF31C:
    st32((c.r[29].w[0] + 364u), 0u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 360u), 0u);
    set32(c.r[7], c.r[29].w[0] + 364u);
    st32((c.r[29].w[0] + 356u), 0u);
    set32(c.r[8], c.r[29].w[0] + 360u);
    st32((c.r[29].w[0] + 352u), 0u);
    set32(c.r[9], c.r[29].w[0] + 356u);
    st32((c.r[29].w[0] + 348u), 0u);
    set32(c.r[10], c.r[29].w[0] + 352u);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 16u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 18u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF35Cu); set32(c.r[11], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_0013(c, 82u, depth + 1u); else { c.pc = 0x0014CAC0u; return; } if (c.pc != 0x001BF35Cu) [[unlikely]] return; }
L_001BF35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF364u); set32(c.r[4], ld32((c.r[29].w[0] + 364u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x001BF364u) [[unlikely]] return; }
L_001BF364:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF378u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF378u) [[unlikely]] return; }
L_001BF378:
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF384u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x001BF384u) [[unlikely]] return; }
L_001BF384:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF398u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF398u) [[unlikely]] return; }
L_001BF398:
    c.f[3] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[19], c.r[17].w[0] + 48u);
    c.f[0] = c.r[16].w[0];
    set32(c.r[22], c.r[17].w[0] + 56u);
    c.f[4] = fp::cvt_s_w(c.f[0]);
    set32(c.r[16], c.r[17].w[0] + 60u);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 256u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 20u, c.f[3], c.f[4]);
    c.f[2] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 256u), c.f[20]);
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 25u, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[25]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    fpu_div(c, 24u, c.f[1], c.f[4]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 23u, c.f[0], c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF420u);  if (depth < kMaxDepth) unit_002F(c, 331u, depth + 1u); else { c.pc = 0x001BFF20u; return; } if (c.pc != 0x001BF420u) [[unlikely]] return; }
L_001BF420:
    st32((c.r[29].w[0] + 248u), c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 252u), c.f[23]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[7], c.r[29].w[0] + 248u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF448u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 331u, depth + 1u); else { c.pc = 0x001BFF20u; return; } if (c.pc != 0x001BF448u) [[unlikely]] return; }
L_001BF448:
    st32((c.r[29].w[0] + 244u), c.f[23]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[24]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF470u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 331u, depth + 1u); else { c.pc = 0x001BFF20u; return; } if (c.pc != 0x001BF470u) [[unlikely]] return; }
L_001BF470:
    st32((c.r[29].w[0] + 232u), c.f[24]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 236u), c.f[25]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[7], c.r[29].w[0] + 232u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF498u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 331u, depth + 1u); else { c.pc = 0x001BFF20u; return; } if (c.pc != 0x001BF498u) [[unlikely]] return; }
L_001BF498:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 56u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  goto L_001BF4E0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4D8u); set32(c.r[7], c.r[7].w[0] + 18144u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C03F0u; return; } if (c.pc != 0x001BF4D8u) [[unlikely]] return; }
L_001BF4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_001BF660; } }
L_001BF4E0:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4F0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x001BF4F0u) [[unlikely]] return; }
L_001BF4F0:
    set32(c.r[2], c.r[16].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001BF50C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BF524; } }
L_001BF50C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001BF524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[16].w[0] >> 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 192u), c.f[0]);  if (t) { goto L_001BF554; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BF570; } }
L_001BF554:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001BF570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 196u), c.f[0]);  if (t) { goto L_001BF5A0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BF5BC; } }
L_001BF5A0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001BF5BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[16].w[0] >> 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 200u), c.f[0]);  if (t) { goto L_001BF5EC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BF608; } }
L_001BF5EC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001BF608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF62Cu); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x001BF62Cu) [[unlikely]] return; }
L_001BF62C:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF65Cu); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C03F0u; return; } if (c.pc != 0x001BF65Cu) [[unlikely]] return; }
L_001BF65C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001BF660:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF1D4u | kUnwind; return; } goto L_001BF1D4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001BF6C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BF798; } }
L_001BF6F8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF708u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x001BF708u) [[unlikely]] return; }
L_001BF708:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[22], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; set32(c.r[21], c.r[4].w[0] + 28u);  if (t) { goto L_001BF794; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[20], ld32((c.r[20].w[0])));  goto L_001BF774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF744u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF744u) [[unlikely]] return; }
L_001BF744:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF754u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF754u) [[unlikely]] return; }
L_001BF754:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BF770; } }
    set32(c.r[25], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF770u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF770u) [[unlikely]] return; }
L_001BF770:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001BF774:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[21].w[0]), c.r[20].w[0]);  if (t) { goto L_001BF794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF784u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF784u) [[unlikely]] return; }
L_001BF784:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF794u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF794u) [[unlikely]] return; }
L_001BF794:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BF798:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF6F8u | kUnwind; return; } goto L_001BF6F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BF7D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], 0u + 52u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] - 5088u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15648u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[20].w[0] + 28u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF844u); set32(c.r[5], c.r[5].w[0] - 1712u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x001BF844u) [[unlikely]] return; }
L_001BF844:
    st32((c.r[20].w[0] + 156u), 0u);
    set32(c.r[4], c.r[20].w[0] + 144u);
    st32((c.r[20].w[0] + 172u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF858u); st32((c.r[20].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x001BF858u) [[unlikely]] return; }
L_001BF858:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_001BF930; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 2;
L_001BF868:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);  goto L_001BF8F0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);  goto L_001BF8C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF898u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF898u) [[unlikely]] return; }
L_001BF898:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8A8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF8A8u) [[unlikely]] return; }
L_001BF8A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF8C4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF8C4u) [[unlikely]] return; }
L_001BF8C4:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001BF8C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_001BF8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF8DCu) [[unlikely]] return; }
L_001BF8DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF8ECu) [[unlikely]] return; }
L_001BF8EC:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001BF8F0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8FCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_002F(c, 327u, depth + 1u); else { c.pc = 0x001BFDF0u; return; } if (c.pc != 0x001BF8FCu) [[unlikely]] return; }
L_001BF8FC:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF90Cu); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0030(c, 15u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x001BF90Cu) [[unlikely]] return; }
L_001BF90C:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF91Cu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C0820u; return; } if (c.pc != 0x001BF91Cu) [[unlikely]] return; }
L_001BF91C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF868u | kUnwind; return; } goto L_001BF868; }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001BF930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BF950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001BF988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF978u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001BF978u) [[unlikely]] return; }
L_001BF978:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF988u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001BF988u) [[unlikely]] return; }
L_001BF988:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF9D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001BFDC4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_001BFA3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA30u); set32(c.r[5], c.r[5].w[0] - 28176u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BFA30u) [[unlikely]] return; }
L_001BFA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA38u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BFA38u) [[unlikely]] return; }
L_001BFA38:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001BFA3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_001BFC04; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[19].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] << 1);  goto L_001BFB18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001BFABC; } }
L_001BFA88:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_001BFAAC; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_001BFAAC:
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001BFABC:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFA88u | kUnwind; return; } goto L_001BFA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BFB04; } }
L_001BFAD0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_001BFAF4; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_001BFAF4:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001BFB04:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFAD0u | kUnwind; return; } goto L_001BFAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFBD0; } }
L_001BFB18:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_001BFB60; } }
L_001BFB2C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_001BFB50; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_001BFB50:
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001BFB60:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFB2Cu | kUnwind; return; } goto L_001BFB2C; } }
    set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);  goto L_001BFBC4; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BFB9C; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001BFB9C:
    set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFBC4; } }
L_001BFBA8:
    set32(c.r[3], c.r[3].w[0] - 12u);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_001BFBC4:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFBA8u | kUnwind; return; } goto L_001BFBA8; }
L_001BFBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFBF4; } }
L_001BFBD8:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 7;
L_001BFBF4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFBD8u | kUnwind; return; } goto L_001BFBD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001BFDC8; } }
L_001BFC04:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001BFC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BFC2C; } }
L_001BFC24:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001BFC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_001BFC4C; } }
L_001BFC34:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_001BFC48; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001BFC48:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001BFC4C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFC34u | kUnwind; return; } goto L_001BFC34; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC68u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001BFC68u) [[unlikely]] return; }
L_001BFC68:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001BFCC4; } }
L_001BFC90:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001BFCB4; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_001BFCB4:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_001BFCC4:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFC90u | kUnwind; return; } goto L_001BFC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFD0C; } }
L_001BFCD8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001BFCFC; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_001BFCFC:
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_001BFD0C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFCD8u | kUnwind; return; } goto L_001BFCD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_001BFD54; } }
L_001BFD1C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001BFD40; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_001BFD40:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_001BFD54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFD1Cu | kUnwind; return; } goto L_001BFD1C; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_001BFDAC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_001BFDAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_001BFDC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BFDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDC4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001BFDC4u) [[unlikely]] return; }
L_001BFDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001BFDC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BFDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BFF08; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE38u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001BFE38u) [[unlikely]] return; }
L_001BFE38:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001BFE94; } }
L_001BFE60:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_001BFE84; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 7;
L_001BFE84:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_001BFE94:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFE60u | kUnwind; return; } goto L_001BFE60; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_001BFEF0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 17;
L_001BFEF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_001BFF08; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001BFF0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF08u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001BFF08u) [[unlikely]] return; }
L_001BFF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BFF0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BFF20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 14u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_001BFF8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF80u); set32(c.r[5], c.r[5].w[0] - 28176u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001BFF80u) [[unlikely]] return; }
L_001BFF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF88u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001BFF88u) [[unlikely]] return; }
L_001BFF88:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001BFF8C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  [[clang::musttail]] return unit_0030(c, 8u, depth); }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001BFFC0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_001BFFC0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  [[clang::musttail]] return unit_0030(c, 4u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 1u, depth); } }
L_001BFFD4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_001BFFF0; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_001BFFF0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0030(c, 1u, depth);
}

}
