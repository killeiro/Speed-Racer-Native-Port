#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00EF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58,
    0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257,
    0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0,
};

void unit_00EF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004BC000;
    case 2u: goto L_004BC020;
    case 3u: goto L_004BC048;
    case 4u: goto L_004BC0B8;
    case 5u: goto L_004BC23C;
    case 6u: goto L_004BC258;
    case 7u: goto L_004BC25C;
    case 8u: goto L_004BC280;
    case 9u: goto L_004BC2FC;
    case 10u: goto L_004BC330;
    case 11u: goto L_004BC3BC;
    case 12u: goto L_004BC3C4;
    case 13u: goto L_004BC3E0;
    case 14u: goto L_004BC42C;
    case 15u: goto L_004BC444;
    case 16u: goto L_004BC448;
    case 17u: goto L_004BC460;
    case 18u: goto L_004BC4A4;
    case 19u: goto L_004BC4AC;
    case 20u: goto L_004BC4BC;
    case 21u: goto L_004BC4C4;
    case 22u: goto L_004BC4CC;
    case 23u: goto L_004BC5A0;
    case 24u: goto L_004BC5C8;
    case 25u: goto L_004BC65C;
    case 26u: goto L_004BC668;
    case 27u: goto L_004BC6E8;
    case 28u: goto L_004BC704;
    case 29u: goto L_004BC75C;
    case 30u: goto L_004BC7A8;
    case 31u: goto L_004BC818;
    case 32u: goto L_004BC874;
    case 33u: goto L_004BC8C4;
    case 34u: goto L_004BC8D4;
    case 35u: goto L_004BC8DC;
    case 36u: goto L_004BC8F8;
    case 37u: goto L_004BC94C;
    case 38u: goto L_004BC954;
    case 39u: goto L_004BCB04;
    case 40u: goto L_004BCB10;
    case 41u: goto L_004BCB50;
    case 42u: goto L_004BCB90;
    case 43u: goto L_004BCBA0;
    case 44u: goto L_004BCBC0;
    case 45u: goto L_004BCC00;
    case 46u: goto L_004BCC0C;
    case 47u: goto L_004BCC20;
    case 48u: goto L_004BCC40;
    case 49u: goto L_004BCC50;
    case 50u: goto L_004BCC58;
    case 51u: goto L_004BCC60;
    case 52u: goto L_004BCC7C;
    case 53u: goto L_004BCC8C;
    case 54u: goto L_004BCCA8;
    case 55u: goto L_004BCCB0;
    case 56u: goto L_004BCCBC;
    case 57u: goto L_004BCCEC;
    case 58u: goto L_004BCCFC;
    case 59u: goto L_004BCD04;
    case 60u: goto L_004BCD0C;
    case 61u: goto L_004BCDC0;
    case 62u: goto L_004BCE10;
    case 63u: goto L_004BCE24;
    case 64u: goto L_004BCE40;
    case 65u: goto L_004BCE5C;
    case 66u: goto L_004BCE70;
    case 67u: goto L_004BCE98;
    case 68u: goto L_004BCEAC;
    case 69u: goto L_004BCEC0;
    case 70u: goto L_004BCED4;
    case 71u: goto L_004BCEE0;
    case 72u: goto L_004BCEEC;
    case 73u: goto L_004BCEF8;
    case 74u: goto L_004BCF38;
    case 75u: goto L_004BCF88;
    case 76u: goto L_004BCFC8;
    case 77u: goto L_004BCFE4;
    case 78u: goto L_004BD060;
    case 79u: goto L_004BD0C8;
    case 80u: goto L_004BD11C;
    case 81u: goto L_004BD128;
    case 82u: goto L_004BD140;
    case 83u: goto L_004BD14C;
    case 84u: goto L_004BD15C;
    case 85u: goto L_004BD164;
    case 86u: goto L_004BD190;
    case 87u: goto L_004BD1B4;
    case 88u: goto L_004BD1DC;
    case 89u: goto L_004BD1F0;
    case 90u: goto L_004BD228;
    case 91u: goto L_004BD238;
    case 92u: goto L_004BD244;
    case 93u: goto L_004BD264;
    case 94u: goto L_004BD270;
    case 95u: goto L_004BD29C;
    case 96u: goto L_004BD2AC;
    case 97u: goto L_004BD2B8;
    case 98u: goto L_004BD2D8;
    case 99u: goto L_004BD2E4;
    case 100u: goto L_004BD310;
    case 101u: goto L_004BD320;
    case 102u: goto L_004BD32C;
    case 103u: goto L_004BD34C;
    case 104u: goto L_004BD358;
    case 105u: goto L_004BD3A0;
    case 106u: goto L_004BD3B0;
    case 107u: goto L_004BD3BC;
    case 108u: goto L_004BD3DC;
    case 109u: goto L_004BD3E8;
    case 110u: goto L_004BD410;
    case 111u: goto L_004BD420;
    case 112u: goto L_004BD4A0;
    case 113u: goto L_004BD548;
    case 114u: goto L_004BD554;
    case 115u: goto L_004BD56C;
    case 116u: goto L_004BD614;
    case 117u: goto L_004BD6C0;
    case 118u: goto L_004BD6CC;
    case 119u: goto L_004BD6E4;
    case 120u: goto L_004BD78C;
    case 121u: goto L_004BD7C0;
    case 122u: goto L_004BD7F4;
    case 123u: goto L_004BD804;
    case 124u: goto L_004BD820;
    case 125u: goto L_004BD870;
    case 126u: goto L_004BD87C;
    case 127u: goto L_004BD8A8;
    case 128u: goto L_004BD8B4;
    case 129u: goto L_004BD8E4;
    case 130u: goto L_004BD8F0;
    case 131u: goto L_004BD904;
    case 132u: goto L_004BD910;
    case 133u: goto L_004BD928;
    case 134u: goto L_004BD934;
    case 135u: goto L_004BD94C;
    case 136u: goto L_004BD958;
    case 137u: goto L_004BD968;
    case 138u: goto L_004BD974;
    case 139u: goto L_004BD980;
    case 140u: goto L_004BD98C;
    case 141u: goto L_004BD99C;
    case 142u: goto L_004BD9A8;
    case 143u: goto L_004BD9C0;
    case 144u: goto L_004BD9E0;
    case 145u: goto L_004BDA3C;
    case 146u: goto L_004BDA4C;
    case 147u: goto L_004BDA60;
    case 148u: goto L_004BDAE8;
    case 149u: goto L_004BDAF8;
    case 150u: goto L_004BDB10;
    case 151u: goto L_004BDBA0;
    case 152u: goto L_004BDBB0;
    case 153u: goto L_004BDBC4;
    case 154u: goto L_004BDBD0;
    case 155u: goto L_004BDBDC;
    case 156u: goto L_004BDBF8;
    case 157u: goto L_004BDC0C;
    case 158u: goto L_004BDC18;
    case 159u: goto L_004BDC28;
    case 160u: goto L_004BDC40;
    case 161u: goto L_004BDC6C;
    case 162u: goto L_004BDC84;
    case 163u: goto L_004BDCA0;
    case 164u: goto L_004BDCB4;
    case 165u: goto L_004BDCC8;
    case 166u: goto L_004BDCE4;
    case 167u: goto L_004BDD00;
    case 168u: goto L_004BDD68;
    case 169u: goto L_004BDD78;
    case 170u: goto L_004BDD94;
    case 171u: goto L_004BDDB8;
    case 172u: goto L_004BDDD0;
    case 173u: goto L_004BDE00;
    case 174u: goto L_004BDE10;
    case 175u: goto L_004BDE30;
    case 176u: goto L_004BDE68;
    case 177u: goto L_004BDE80;
    case 178u: goto L_004BDEB0;
    case 179u: goto L_004BDEC0;
    case 180u: goto L_004BDEE0;
    case 181u: goto L_004BDF18;
    case 182u: goto L_004BDF30;
    case 183u: goto L_004BDF60;
    case 184u: goto L_004BDF70;
    case 185u: goto L_004BDF90;
    case 186u: goto L_004BDFC8;
    case 187u: goto L_004BDFD4;
    case 188u: goto L_004BDFFC;
    case 189u: goto L_004BE018;
    case 190u: goto L_004BE028;
    case 191u: goto L_004BE034;
    case 192u: goto L_004BE05C;
    case 193u: goto L_004BE064;
    case 194u: goto L_004BE07C;
    case 195u: goto L_004BE25C;
    case 196u: goto L_004BE280;
    case 197u: goto L_004BE460;
    case 198u: goto L_004BE46C;
    case 199u: goto L_004BE498;
    case 200u: goto L_004BE4A8;
    case 201u: goto L_004BE4B0;
    case 202u: goto L_004BE4BC;
    case 203u: goto L_004BE4D8;
    case 204u: goto L_004BE4F4;
    case 205u: goto L_004BE550;
    case 206u: goto L_004BE5F0;
    case 207u: goto L_004BE5F8;
    case 208u: goto L_004BE610;
    case 209u: goto L_004BE654;
    case 210u: goto L_004BE65C;
    case 211u: goto L_004BE66C;
    case 212u: goto L_004BE698;
    case 213u: goto L_004BE6B8;
    case 214u: goto L_004BE6DC;
    case 215u: goto L_004BE6E8;
    case 216u: goto L_004BE6F8;
    case 217u: goto L_004BE720;
    case 218u: goto L_004BE770;
    case 219u: goto L_004BE7AC;
    case 220u: goto L_004BE808;
    case 221u: goto L_004BE818;
    case 222u: goto L_004BE820;
    case 223u: goto L_004BE82C;
    case 224u: goto L_004BE858;
    case 225u: goto L_004BE880;
    case 226u: goto L_004BE8A8;
    case 227u: goto L_004BE8C0;
    case 228u: goto L_004BE8DC;
    case 229u: goto L_004BE8F0;
    case 230u: goto L_004BE904;
    case 231u: goto L_004BE920;
    case 232u: goto L_004BE938;
    case 233u: goto L_004BE954;
    case 234u: goto L_004BE97C;
    case 235u: goto L_004BE990;
    case 236u: goto L_004BE99C;
    case 237u: goto L_004BE9B0;
    case 238u: goto L_004BE9D4;
    case 239u: goto L_004BE9EC;
    case 240u: goto L_004BEA1C;
    case 241u: goto L_004BEA2C;
    case 242u: goto L_004BEA4C;
    case 243u: goto L_004BEA84;
    case 244u: goto L_004BEA9C;
    case 245u: goto L_004BEACC;
    case 246u: goto L_004BEADC;
    case 247u: goto L_004BEAFC;
    case 248u: goto L_004BEB34;
    case 249u: goto L_004BEB4C;
    case 250u: goto L_004BEB7C;
    case 251u: goto L_004BEB8C;
    case 252u: goto L_004BEBAC;
    case 253u: goto L_004BEBD4;
    case 254u: goto L_004BEBE0;
    case 255u: goto L_004BEBEC;
    case 256u: goto L_004BEBF4;
    case 257u: goto L_004BEBFC;
    case 258u: goto L_004BEC04;
    case 259u: goto L_004BEC10;
    case 260u: goto L_004BEC24;
    case 261u: goto L_004BEC98;
    case 262u: goto L_004BECE8;
    case 263u: goto L_004BED10;
    case 264u: goto L_004BED40;
    case 265u: goto L_004BED50;
    case 266u: goto L_004BED5C;
    case 267u: goto L_004BED64;
    case 268u: goto L_004BED74;
    case 269u: goto L_004BED84;
    case 270u: goto L_004BED94;
    case 271u: goto L_004BED9C;
    case 272u: goto L_004BEDCC;
    case 273u: goto L_004BEDD8;
    case 274u: goto L_004BEDFC;
    case 275u: goto L_004BEE24;
    case 276u: goto L_004BEE44;
    case 277u: goto L_004BEE54;
    case 278u: goto L_004BEE70;
    case 279u: goto L_004BEE84;
    case 280u: goto L_004BEE94;
    case 281u: goto L_004BEEA0;
    case 282u: goto L_004BEEBC;
    case 283u: goto L_004BEEC4;
    case 284u: goto L_004BEED4;
    case 285u: goto L_004BEED8;
    case 286u: goto L_004BEF08;
    case 287u: goto L_004BEF10;
    case 288u: goto L_004BEF1C;
    case 289u: goto L_004BEF38;
    case 290u: goto L_004BEF50;
    case 291u: goto L_004BEF68;
    case 292u: goto L_004BEF80;
    case 293u: goto L_004BEF88;
    case 294u: goto L_004BEFEC;
    case 295u: goto L_004BF004;
    case 296u: goto L_004BF034;
    case 297u: goto L_004BF044;
    case 298u: goto L_004BF064;
    case 299u: goto L_004BF078;
    case 300u: goto L_004BF09C;
    case 301u: goto L_004BF0B4;
    case 302u: goto L_004BF0E4;
    case 303u: goto L_004BF0F4;
    case 304u: goto L_004BF114;
    case 305u: goto L_004BF128;
    case 306u: goto L_004BF150;
    case 307u: goto L_004BF168;
    case 308u: goto L_004BF198;
    case 309u: goto L_004BF1A8;
    case 310u: goto L_004BF1C8;
    case 311u: goto L_004BF1DC;
    case 312u: goto L_004BF1E8;
    case 313u: goto L_004BF208;
    case 314u: goto L_004BF218;
    case 315u: goto L_004BF238;
    case 316u: goto L_004BF248;
    case 317u: goto L_004BF260;
    case 318u: goto L_004BF284;
    case 319u: goto L_004BF294;
    case 320u: goto L_004BF2BC;
    case 321u: goto L_004BF2FC;
    case 322u: goto L_004BF318;
    case 323u: goto L_004BF338;
    case 324u: goto L_004BF348;
    case 325u: goto L_004BF358;
    case 326u: goto L_004BF374;
    case 327u: goto L_004BF380;
    case 328u: goto L_004BF38C;
    case 329u: goto L_004BF454;
    case 330u: goto L_004BF480;
    case 331u: goto L_004BF4C0;
    case 332u: goto L_004BF4CC;
    case 333u: goto L_004BF524;
    case 334u: goto L_004BF530;
    case 335u: goto L_004BF568;
    case 336u: goto L_004BF5AC;
    case 337u: goto L_004BF600;
    case 338u: goto L_004BF610;
    case 339u: goto L_004BF650;
    case 340u: goto L_004BF670;
    case 341u: goto L_004BF680;
    case 342u: goto L_004BF6DC;
    case 343u: goto L_004BF6FC;
    case 344u: goto L_004BF748;
    case 345u: goto L_004BF758;
    case 346u: goto L_004BF7A0;
    case 347u: goto L_004BF7CC;
    case 348u: goto L_004BF7DC;
    case 349u: goto L_004BF7F8;
    case 350u: goto L_004BF80C;
    case 351u: goto L_004BF81C;
    case 352u: goto L_004BF82C;
    case 353u: goto L_004BF850;
    case 354u: goto L_004BF860;
    case 355u: goto L_004BF87C;
    case 356u: goto L_004BF890;
    case 357u: goto L_004BF8A0;
    case 358u: goto L_004BF8F8;
    case 359u: goto L_004BF95C;
    case 360u: goto L_004BF9A4;
    case 361u: goto L_004BFA48;
    case 362u: goto L_004BFA6C;
    case 363u: goto L_004BFA7C;
    case 364u: goto L_004BFA98;
    case 365u: goto L_004BFAAC;
    case 366u: goto L_004BFABC;
    case 367u: goto L_004BFACC;
    case 368u: goto L_004BFAF0;
    case 369u: goto L_004BFB00;
    case 370u: goto L_004BFB1C;
    case 371u: goto L_004BFB30;
    case 372u: goto L_004BFB40;
    case 373u: goto L_004BFBA0;
    case 374u: goto L_004BFC04;
    case 375u: goto L_004BFC4C;
    case 376u: goto L_004BFD00;
    case 377u: goto L_004BFD24;
    case 378u: goto L_004BFD34;
    case 379u: goto L_004BFD50;
    case 380u: goto L_004BFD64;
    case 381u: goto L_004BFD74;
    case 382u: goto L_004BFD84;
    case 383u: goto L_004BFDA8;
    case 384u: goto L_004BFDB8;
    case 385u: goto L_004BFDD4;
    case 386u: goto L_004BFDE8;
    case 387u: goto L_004BFDF8;
    case 388u: goto L_004BFE58;
    case 389u: goto L_004BFEBC;
    case 390u: goto L_004BFF04;
    case 391u: goto L_004BFFB8;
    case 392u: goto L_004BFFDC;
    case 393u: goto L_004BFFEC;
    default: bad_entry(c, 0x004BC000u); return;
    }
L_004BC000:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1172u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 396u), 0u);  goto L_004BC240; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22900u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 124u)));  goto L_004BC038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC020u); c.f[12] = ld32((c.r[28].w[0] - 32096u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004BC020u) [[unlikely]] return; }
L_004BC020:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 1016u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 6;
L_004BC038:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC048u); set32(c.r[16], c.r[3].w[0] + 84u);  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BC048u) [[unlikely]] return; }
L_004BC048:
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 124u));
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[2], ld32((c.r[18].w[0] + 412u)));
    c.f[0] = ld32((c.r[18].w[0] + 404u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC0A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC0A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC0B8u); c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BC0B8u) [[unlikely]] return; }
L_004BC0B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004BC0D4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC0D4:
    c.f[4] = ld32((c.r[18].w[0] + 96u));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[3] = ld32((c.r[18].w[0] + 104u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 80u), 0u);  goto L_004BC138; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_004BC144; } }
L_004BC138:
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 3;
L_004BC144:
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004BC194; } }
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC194; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC194:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_004BC1B4; }
    c.f[0] = ld32((c.r[28].w[0] - 32092u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC1B0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004BC1B0:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004BC1B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004BC1D8; } }
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC1D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC1D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 124u)));  goto L_004BC1F8; }
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BC1F4; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004BC1F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_004BC1F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[3].w[0] + 1191u));  if (t) { goto L_004BC218; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 396u));  goto L_004BC21C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004BC218; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 396u), 0u);  goto L_004BC240; }
L_004BC218:
    c.f[0] = ld32((c.r[18].w[0] + 396u));
    c.budget -= 1;
L_004BC21C:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 396u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 400u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BC240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BC240; } }
L_004BC23C:
    st32((c.r[18].w[0] + 396u), 0u);
    c.budget -= 1;
L_004BC240:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004BC258; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC258u); st32((c.r[18].w[0] + 396u), 0u);  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004BC258u) [[unlikely]] return; }
L_004BC258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004BC25C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BC280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_004BC2DC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004BC2D8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004BC2D8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004BC2D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004BC2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004BC324; } }
L_004BC2D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_004BC2DC:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BC320; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 306u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 128u)));  goto L_004BC308; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC2FCu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00EF(c, 47u, depth + 1u); else { c.pc = 0x004BCC20u; return; } if (c.pc != 0x004BC2FCu) [[unlikely]] return; }
L_004BC2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BC320; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_004BC308:
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    set32(c.r[4], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[16].w[0] + 1108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1112u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 1116u), c.f[0]);
    c.budget -= 6;
L_004BC320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BC324:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BC330:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1108u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004BC390; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 412u)));
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    st32((c.r[20].w[0] + 1108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1112u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 1116u), c.f[0]);
    c.budget -= 7;
L_004BC390:
    set32(c.r[16], ld32((c.r[20].w[0] + 1108u)));
    c.f[23] = 0u;
    c.f[20] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[22], ld32((c.r[20].w[0] + 1112u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[21].d[0] = ld8((c.r[16].w[0] + 306u));
    c.budget -= 9;
    { const bool t = c.r[21].d[0] == 0ull; c.f[22] = c.f[23];  if (t) { goto L_004BC408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));  if (t) { goto L_004BC3CC; } }
L_004BC3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC3C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x004BC3C4u) [[unlikely]] return; }
L_004BC3C4:
    st32((c.r[20].w[0] + 1108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.budget -= 2;
L_004BC3CC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 306u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC3BCu | kUnwind; return; } goto L_004BC3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC3E0u); set32(c.r[5], ld32((c.r[20].w[0] + 1112u)));  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004BC3E0u) [[unlikely]] return; }
L_004BC3E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 1448u));
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1116u), c.f[0]);  if (t) { goto L_004BC40C; } }
L_004BC408:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004BC40C:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 328u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC42Cu); st32((c.r[29].w[0] + 332u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 142u, depth + 1u); else { c.pc = 0x00401F00u; return; } if (c.pc != 0x004BC42Cu) [[unlikely]] return; }
L_004BC42C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BC5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_004BC5CC; } }
L_004BC444:
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.budget -= 1;
L_004BC448:
    c.f[12] = ld32((c.r[20].w[0] + 1116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 1112u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC460u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004BC460u) [[unlikely]] return; }
L_004BC460:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BC5F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[20].w[0] + 1108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[20].w[0] + 1112u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[20].w[0] + 1116u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.f[12] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[6], ld32((c.r[20].w[0] + 1112u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC4A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004BC4A4u) [[unlikely]] return; }
L_004BC4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC4ACu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x004BC4ACu) [[unlikely]] return; }
L_004BC4AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC4BCu); set32(c.r[5], c.r[5].w[0] - 2584u);  if (depth < kMaxDepth) unit_0009(c, 360u, depth + 1u); else { c.pc = 0x00127F60u; return; } if (c.pc != 0x004BC4BCu) [[unlikely]] return; }
L_004BC4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC4C4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 43u, depth + 1u); else { c.pc = 0x004BCBA0u; return; } if (c.pc != 0x004BC4C4u) [[unlikely]] return; }
L_004BC4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC4CCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 42u, depth + 1u); else { c.pc = 0x004BCB90u; return; } if (c.pc != 0x004BC4CCu) [[unlikely]] return; }
L_004BC4CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = ld8((c.r[3].w[0] + 306u));  if (t) { goto L_004BC514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004BC538; }
L_004BC514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC58C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BC58C; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004BC538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_004BC55C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC558; } }
    c.f[23] = c.f[21];
    c.budget -= 1;
L_004BC558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_004BC55C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_004BC5B4; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[21];  if (t) { goto L_004BC5B0; } }
L_004BC58C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004BC5B0; } }
    set32(c.r[4], c.r[20].w[0] + 1108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC5A0u); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_00EF(c, 44u, depth + 1u); else { c.pc = 0x004BCBC0u; return; } if (c.pc != 0x004BC5A0u) [[unlikely]] return; }
L_004BC5A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BC5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004BC5F8; } }
L_004BC5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_004BC5B4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC5C8u); c.f[21] = fp::add(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 147u, depth + 1u); else { c.pc = 0x00402040u; return; } if (c.pc != 0x004BC5C8u) [[unlikely]] return; }
L_004BC5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_004BC5CC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC448u | kUnwind; return; } goto L_004BC448; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC444u | kUnwind; return; } goto L_004BC444; } }
L_004BC5F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004BC60C; } }
    st32((c.r[20].w[0] + 1108u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1112u), c.r[22].w[0]);
    st32((c.r[20].w[0] + 1116u), c.f[20]);
    c.budget -= 3;
L_004BC60C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[23] = c.r[2].w[0];
    c.budget -= 2;
L_004BC628:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[22] = c.r[2].w[0];
    c.budget -= 2;
L_004BC644:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));  goto L_004BC750; }
    set32(c.r[16], ld32((c.r[20].w[0] + 1108u)));
    c.f[20] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[17], ld32((c.r[20].w[0] + 1112u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004BC65C:
    set32(c.r[4], c.r[20].w[0] + 1108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC668u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_00EF(c, 44u, depth + 1u); else { c.pc = 0x004BCBC0u; return; } if (c.pc != 0x004BC668u) [[unlikely]] return; }
L_004BC668:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BC690; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 1108u)));
    c.f[20] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[17], ld32((c.r[20].w[0] + 1112u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BC6AC; } }
L_004BC690:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BC6A8; } }
    st32((c.r[20].w[0] + 1108u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1112u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1116u), c.f[20]);  if (t) { goto L_004BC74C; } }
L_004BC6A8:
    c.f[22] = 0u;
    c.budget -= 1;
L_004BC6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 320u);  goto L_004BC6E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC74C; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_004BC6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC6E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 147u, depth + 1u); else { c.pc = 0x00402040u; return; } if (c.pc != 0x004BC6E8u) [[unlikely]] return; }
L_004BC6E8:
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.f[12] = ld32((c.r[20].w[0] + 1116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 1112u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC704u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004BC704u) [[unlikely]] return; }
L_004BC704:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BC74C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 306u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BC74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[20].w[0] + 1108u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[23] = fp::add(c.f[23], c.f[0]);
    st32((c.r[20].w[0] + 1112u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1116u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC65Cu | kUnwind; return; } goto L_004BC65C; } }
L_004BC74C:
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.budget -= 1;
L_004BC750:
    set32(c.r[18], ld32((c.r[4].w[0] + 404u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC75Cu); set32(c.r[5], ld32((c.r[20].w[0] + 1112u)));  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004BC75Cu) [[unlikely]] return; }
L_004BC75C:
    c.f[1] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[5], ld32((c.r[20].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[22] = c.f[0];
    set32(c.r[17], ld32((c.r[20].w[0] + 1108u)));
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 1112u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 6u);
    c.f[2] = ld32((c.r[5].w[0] + 1448u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[20] = ld32((c.r[20].w[0] + 1116u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.f[2] = fp::add(c.f[3], c.f[21]);  if (t) { goto L_004BC84C; } }
L_004BC7A8:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 408u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_004BC84C; }
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[23] = fp::mul(c.f[22], c.f[1]);
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BC848; } }
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BC848; } }
    c.f[0] = fp::add(c.f[23], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[0], c.f[22]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 1116u), c.f[1]);  if (t) { goto L_004BC858; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 1116u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC818u); set32(c.r[5], c.r[20].w[0] + 1112u);  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x004BC818u) [[unlikely]] return; }
L_004BC818:
    st32((c.r[20].w[0] + 1108u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 306u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));  goto L_004BC85C; }
    c.f[0] = fp::sub(c.f[23], c.f[21]);
    st32((c.r[20].w[0] + 1108u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 1112u), c.r[16].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    st32((c.r[20].w[0] + 1116u), c.f[20]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1116u), c.f[0]);  if (t) { goto L_004BC858; } }
L_004BC848:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_004BC84C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 1108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC7A8u | kUnwind; return; } goto L_004BC7A8; }
L_004BC858:
    set32(c.r[4], ld32((c.r[20].w[0] + 1108u)));
    c.budget -= 1;
L_004BC85C:
    c.f[12] = ld32((c.r[20].w[0] + 1116u));
    set32(c.r[5], ld32((c.r[20].w[0] + 1112u)));
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[20] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC874u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 105u, depth + 1u); else { c.pc = 0x00464F90u; return; } if (c.pc != 0x004BC874u) [[unlikely]] return; }
L_004BC874:
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.f[20];
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.f[2] = fp::max(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[2]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22904u)));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[20].w[0] + 1108u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC8C4u); st32((c.r[28].w[0] - 22904u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 201u, depth + 1u); else { c.pc = 0x00462120u; return; } if (c.pc != 0x004BC8C4u) [[unlikely]] return; }
L_004BC8C4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC8D4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00D8(c, 166u, depth + 1u); else { c.pc = 0x00461900u; return; } if (c.pc != 0x004BC8D4u) [[unlikely]] return; }
L_004BC8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004BCABC; } }
L_004BC8DC:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1040u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC8F8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00D8(c, 166u, depth + 1u); else { c.pc = 0x00461900u; return; } if (c.pc != 0x004BC8F8u) [[unlikely]] return; }
L_004BC8F8:
    c.f[5] = ld32((c.r[29].w[0] + 192u));
    c.f[4] = ld32((c.r[19].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[5] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004BCA0C; } }
L_004BC94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BC954u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004BC954u) [[unlikely]] return; }
L_004BC954:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004BCA0C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.f[0] = 0u;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[1], c.f[21]);  if (t) { goto L_004BC990; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC990:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BC9B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC9B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC9B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BCA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC9D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC9D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BC9FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004BC9FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BC9FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BCA08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BCA08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004BCA0C:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BCA2C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC94Cu | kUnwind; return; } goto L_004BC94C; }
L_004BCA2C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004BCABC; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[20] = c.f[21];
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_004BCAC8; } }
L_004BCABC:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BC8DCu | kUnwind; return; } goto L_004BC8DC; }
L_004BCAC8:
    set32(c.r[2], ld32((c.r[20].w[0] + 132u)));
    c.f[0] = ld32((c.r[20].w[0] + 1160u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 1120u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 416u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[20].w[0] + 1124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCB04u); st32((c.r[20].w[0] + 1128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 198u, depth + 1u); else { c.pc = 0x004620B0u; return; } if (c.pc != 0x004BCB04u) [[unlikely]] return; }
L_004BCB04:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 150u, depth + 1u); else { c.pc = 0x004020D0u; return; } if (c.pc != 0x004BCB10u) [[unlikely]] return; }
L_004BCB10:
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004BCB50:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BCB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BCB84; } }
L_004BCB6C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BCB7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BCB7C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004BCB84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004BCB90:
    c.f[0] = ld32((c.r[28].w[0] - 32116u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[0], c.f[12]);  c.pc = t; return; }
L_004BCBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::max(c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.f[12] = fp::min(c.f[12], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF6F8u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 427u, depth); }
L_004BCBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 306u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BCC0C; } }
L_004BCBE8:
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004BCC00u) [[unlikely]] return; }
L_004BCC00:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC0Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00EF(c, 47u, depth + 1u); else { c.pc = 0x004BCC20u; return; } if (c.pc != 0x004BCC0Cu) [[unlikely]] return; }
L_004BCC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BCC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC40u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x00425140u; return; } if (c.pc != 0x004BCC40u) [[unlikely]] return; }
L_004BCC40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC50u); set32(c.r[5], c.r[5].w[0] - 2584u);  if (depth < kMaxDepth) unit_0009(c, 360u, depth + 1u); else { c.pc = 0x00127F60u; return; } if (c.pc != 0x004BCC50u) [[unlikely]] return; }
L_004BCC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC58u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 43u, depth + 1u); else { c.pc = 0x004BCBA0u; return; } if (c.pc != 0x004BCC58u) [[unlikely]] return; }
L_004BCC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC60u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 42u, depth + 1u); else { c.pc = 0x004BCB90u; return; } if (c.pc != 0x004BCC60u) [[unlikely]] return; }
L_004BCC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC7Cu); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_00C9(c, 149u, depth + 1u); else { c.pc = 0x00425130u; return; } if (c.pc != 0x004BCC7Cu) [[unlikely]] return; }
L_004BCC7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCC8Cu); set32(c.r[5], c.r[5].w[0] - 2584u);  if (depth < kMaxDepth) unit_0009(c, 360u, depth + 1u); else { c.pc = 0x00127F60u; return; } if (c.pc != 0x004BCC8Cu) [[unlikely]] return; }
L_004BCC8C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004BCCE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCCA8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 43u, depth + 1u); else { c.pc = 0x004BCBA0u; return; } if (c.pc != 0x004BCCA8u) [[unlikely]] return; }
L_004BCCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCCB0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 42u, depth + 1u); else { c.pc = 0x004BCB90u; return; } if (c.pc != 0x004BCCB0u) [[unlikely]] return; }
L_004BCCB0:
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCCBCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 41u, depth + 1u); else { c.pc = 0x004BCB50u; return; } if (c.pc != 0x004BCCBCu) [[unlikely]] return; }
L_004BCCBC:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
L_004BCCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCCECu);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x004BCCECu) [[unlikely]] return; }
L_004BCCEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCCFCu); set32(c.r[5], c.r[5].w[0] - 2584u);  if (depth < kMaxDepth) unit_0009(c, 360u, depth + 1u); else { c.pc = 0x00127F60u; return; } if (c.pc != 0x004BCCFCu) [[unlikely]] return; }
L_004BCCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCD04u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 43u, depth + 1u); else { c.pc = 0x004BCBA0u; return; } if (c.pc != 0x004BCD04u) [[unlikely]] return; }
L_004BCD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCD0Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00EF(c, 42u, depth + 1u); else { c.pc = 0x004BCB90u; return; } if (c.pc != 0x004BCD0Cu) [[unlikely]] return; }
L_004BCD0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0]));  goto L_004BCD4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BCDA4; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_004BCD4C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_004BCD88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BCDA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BCDA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 1;
L_004BCD88:
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BCDA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BCDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004BCDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[28].w[0] - 29052u));
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004BCE60; }
    set32(c.r[4], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 432u)));  goto L_004BCE14; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCE10u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BCE10u) [[unlikely]] return; }
L_004BCE10:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 1;
L_004BCE14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 436u)));  goto L_004BCE28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCE24u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F1(c, 225u, depth + 1u); else { c.pc = 0x004C5BF0u; return; } if (c.pc != 0x004BCE24u) [[unlikely]] return; }
L_004BCE24:
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 1;
L_004BCE28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 448u)));  goto L_004BCE44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCE40u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BCE40u) [[unlikely]] return; }
L_004BCE40:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 1;
L_004BCE44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004BCE5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCE5Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BCE5Cu) [[unlikely]] return; }
L_004BCE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004BCE60:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BCE70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCE98u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00F8(c, 46u, depth + 1u); else { c.pc = 0x004E1350u; return; } if (c.pc != 0x004BCE98u) [[unlikely]] return; }
L_004BCE98:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 384u));  goto L_004BCEC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCEACu);  if (depth < kMaxDepth) unit_00B0(c, 106u, depth + 1u); else { c.pc = 0x003C0990u; return; } if (c.pc != 0x004BCEACu) [[unlikely]] return; }
L_004BCEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BCEC0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCEC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 276u, depth + 1u); else { c.pc = 0x004BA5B0u; return; } if (c.pc != 0x004BCEC0u) [[unlikely]] return; }
L_004BCEC0:
    c.f[0] = ld32((c.r[16].w[0] + 384u));
    c.budget -= 1;
L_004BCEC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCED4u); st32((c.r[16].w[0] + 384u), c.f[0]);  if (depth < kMaxDepth) unit_00EE(c, 365u, depth + 1u); else { c.pc = 0x004BB850u; return; } if (c.pc != 0x004BCED4u) [[unlikely]] return; }
L_004BCED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCEE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00EF(c, 111u, depth + 1u); else { c.pc = 0x004BD420u; return; } if (c.pc != 0x004BCEE0u) [[unlikely]] return; }
L_004BCEE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCEECu); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BCEECu) [[unlikely]] return; }
L_004BCEEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCEF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004BCEF8u) [[unlikely]] return; }
L_004BCEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_004BCF44; }
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BCF40; } }
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCF38u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 205u, depth + 1u); else { c.pc = 0x004621C0u; return; } if (c.pc != 0x004BCF38u) [[unlikely]] return; }
L_004BCF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1176u), c.f[0]);  if (t) { goto L_004BCF48; } }
L_004BCF40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_004BCF44:
    st32((c.r[16].w[0] + 1176u), c.r[2].w[0]);
    c.budget -= 1;
L_004BCF48:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_004BCF94; }
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BCF90; } }
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCF88u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x004BCF88u) [[unlikely]] return; }
L_004BCF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1172u), c.f[0]);  if (t) { goto L_004BCF98; } }
L_004BCF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_004BCF94:
    st32((c.r[16].w[0] + 1172u), c.r[2].w[0]);
    c.budget -= 1;
L_004BCF98:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 424u)));  goto L_004BCFCC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BCFC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCFC8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F9(c, 190u, depth + 1u); else { c.pc = 0x004E5C20u; return; } if (c.pc != 0x004BCFC8u) [[unlikely]] return; }
L_004BCFC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 1;
L_004BCFCC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004BCFE8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BCFE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F4(c, 51u, depth + 1u); else { c.pc = 0x004D03B0u; return; } if (c.pc != 0x004BCFE4u) [[unlikely]] return; }
L_004BCFE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_004BCFE8:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_004BD028; }
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD024; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    c.f[0] = ld32((c.r[16].w[0] + 1176u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1160u), c.f[0]);  if (t) { goto L_004BD02C; } }
L_004BD024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_004BD028:
    st32((c.r[16].w[0] + 1160u), c.r[2].w[0]);
    c.budget -= 1;
L_004BD02C:
    c.f[21] = ld32((c.r[16].w[0] + 1160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004BD054; }
    st32((c.r[16].w[0] + 1164u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1168u), c.f[0]);  if (t) { goto L_004BD08C; } }
L_004BD054:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD060u); set32(c.r[4], ld32((c.r[2].w[0] + 184u)));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004BD060u) [[unlikely]] return; }
L_004BD060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[21], c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 1164u), c.f[1]);
    c.f[1] = 0u;
    c.f[1] = fp::max(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1168u), c.f[0]);
    c.budget -= 11;
L_004BD08C:
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 424u)));  goto L_004BD0E8; }
    c.f[0] = ld32((c.r[16].w[0] + 1148u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BD0E4; } }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1148u), c.f[0]);  if (t) { goto L_004BD0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD0C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 167u, depth + 1u); else { c.pc = 0x004BDD00u; return; } if (c.pc != 0x004BD0C8u) [[unlikely]] return; }
L_004BD0C8:
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1202u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1202u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_004BD0E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 1;
L_004BD0E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004BD120; }
    c.f[1] = ld32((c.r[16].w[0] + 1132u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1132u), c.f[1]);  if (t) { goto L_004BD11C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD11Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004BD11Cu) [[unlikely]] return; }
L_004BD11C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004BD120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD128u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00EE(c, 389u, depth + 1u); else { c.pc = 0x004BBF90u; return; } if (c.pc != 0x004BD128u) [[unlikely]] return; }
L_004BD128:
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004BD144; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD140u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F8(c, 264u, depth + 1u); else { c.pc = 0x004E38F0u; return; } if (c.pc != 0x004BD140u) [[unlikely]] return; }
L_004BD140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004BD144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD14Cu);  if (depth < kMaxDepth) unit_00EF(c, 8u, depth + 1u); else { c.pc = 0x004BC280u; return; } if (c.pc != 0x004BD14Cu) [[unlikely]] return; }
L_004BD14C:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD15Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 10u, depth + 1u); else { c.pc = 0x004E8110u; return; } if (c.pc != 0x004BD15Cu) [[unlikely]] return; }
L_004BD15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD164u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 288u, depth + 1u); else { c.pc = 0x004BA7D0u; return; } if (c.pc != 0x004BD164u) [[unlikely]] return; }
L_004BD164:
    set32(c.r[3], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 348u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004BD190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD1B4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BD1B4u) [[unlikely]] return; }
L_004BD1B4:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD1DCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F8(c, 116u, depth + 1u); else { c.pc = 0x004E23F0u; return; } if (c.pc != 0x004BD1DCu) [[unlikely]] return; }
L_004BD1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BD1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BD270; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 372u)));  goto L_004BD274; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD228u); set32(c.r[6], c.r[6].w[0] - 446u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BD228u) [[unlikely]] return; }
L_004BD228:
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD238u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x004BD238u) [[unlikely]] return; }
L_004BD238:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD244u) [[unlikely]] return; }
L_004BD244:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD270; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD264u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD264u) [[unlikely]] return; }
L_004BD264:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD270u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD270u) [[unlikely]] return; }
L_004BD270:
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 1;
L_004BD274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 356u)));  goto L_004BD2E8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD2E4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD29Cu); set32(c.r[6], c.r[6].w[0] - 424u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BD29Cu) [[unlikely]] return; }
L_004BD29C:
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD2ACu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x004BD2ACu) [[unlikely]] return; }
L_004BD2AC:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD2B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD2B8u) [[unlikely]] return; }
L_004BD2B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD2E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD2D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD2D8u) [[unlikely]] return; }
L_004BD2D8:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD2E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD2E4u) [[unlikely]] return; }
L_004BD2E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 1;
L_004BD2E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 360u)));  goto L_004BD378; }
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD374; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD310u); set32(c.r[6], c.r[6].w[0] - 386u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BD310u) [[unlikely]] return; }
L_004BD310:
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD320u); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x004BD320u) [[unlikely]] return; }
L_004BD320:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD32Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD32Cu) [[unlikely]] return; }
L_004BD32C:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull & 1ull;  goto L_004BD35C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD34Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD34Cu) [[unlikely]] return; }
L_004BD34C:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD358u) [[unlikely]] return; }
L_004BD358:
    c.r[2].d[0] = 0ull & 1ull;
    c.budget -= 1;
L_004BD35C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004BD374:
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 1;
L_004BD378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  goto L_004BD408; }
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD404; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD3A0u); set32(c.r[6], c.r[6].w[0] - 359u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BD3A0u) [[unlikely]] return; }
L_004BD3A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD3B0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x004BD3B0u) [[unlikely]] return; }
L_004BD3B0:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD3BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD3BCu) [[unlikely]] return; }
L_004BD3BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD404; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD3DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD3DCu) [[unlikely]] return; }
L_004BD3DC:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD3E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD3E8u) [[unlikely]] return; }
L_004BD3E8:
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_004BD404:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 1;
L_004BD408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD410u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 158u, depth + 1u); else { c.pc = 0x003D9BD0u; return; } if (c.pc != 0x004BD410u) [[unlikely]] return; }
L_004BD410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BD420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 124u)));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[5].w[0] + 2228u)));  if (t) { goto L_004BD468; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004BD4A4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004BD4A0; } }
L_004BD468:
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32208u));
    c.f[12] = fp::min(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD4A0u); set32(c.r[4], ld32((c.r[16].w[0] + 368u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004BD4A0u) [[unlikely]] return; }
L_004BD4A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004BD4A4:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004BD808; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1166u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD4D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004BD4D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1201u));  goto L_004BD578; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004BD574; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_004BD618; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD614; } }
    set32(c.r[2], 0u - 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - 782u);
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD548u); set32(c.r[7], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BD548u) [[unlikely]] return; }
L_004BD548:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD554u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD554u) [[unlikely]] return; }
L_004BD554:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD56Cu); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004BD56Cu) [[unlikely]] return; }
L_004BD56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BD614; } }
L_004BD574:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.budget -= 1;
L_004BD578:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD614; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD5A0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD5A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_004BD5E4; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD5C0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD5C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD5D0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD5E0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD5E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004BD5E4:
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD614u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD614u) [[unlikely]] return; }
L_004BD614:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_004BD618:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1191u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004BD634; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1162u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1201u));  goto L_004BD6F0; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004BD634:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD6EC; } }
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BD6EC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004BD790; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD78C; } }
    set32(c.r[2], 0u - 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - 768u);
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD6C0u); set32(c.r[7], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BD6C0u) [[unlikely]] return; }
L_004BD6C0:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD6CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD6CCu) [[unlikely]] return; }
L_004BD6CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD6E4u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004BD6E4u) [[unlikely]] return; }
L_004BD6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BD78C; } }
L_004BD6EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.budget -= 1;
L_004BD6F0:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD78C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD718; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD718:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_004BD75C; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD738; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD748; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BD758; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BD758:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004BD75C:
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1201u));
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 360u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD78Cu); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004BD78Cu) [[unlikely]] return; }
L_004BD78C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004BD790:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BD804; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD7C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x004BD7C0u) [[unlikely]] return; }
L_004BD7C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BD7E0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004BD7E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  goto L_004BD7FC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD7F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B6(c, 158u, depth + 1u); else { c.pc = 0x003D9BD0u; return; } if (c.pc != 0x004BD7F4u) [[unlikely]] return; }
L_004BD7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BD804; } }
L_004BD7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 158u, depth + 1u); else { c.pc = 0x003D9BD0u; return; } if (c.pc != 0x004BD804u) [[unlikely]] return; }
L_004BD804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BD808:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BD820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BD884; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 331u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD870u); set32(c.r[7], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BD870u) [[unlikely]] return; }
L_004BD870:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD87Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD87Cu) [[unlikely]] return; }
L_004BD87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_004BD8B8; } }
L_004BD884:
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 310u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD8A8u); set32(c.r[7], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BD8A8u) [[unlikely]] return; }
L_004BD8A8:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD8B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD8B4u) [[unlikely]] return; }
L_004BD8B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_004BD8B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 372u)));  goto L_004BD914; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD8E4u); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0112(c, 110u, depth + 1u); else { c.pc = 0x00549570u; return; } if (c.pc != 0x004BD8E4u) [[unlikely]] return; }
L_004BD8E4:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD8F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD8F0u) [[unlikely]] return; }
L_004BD8F0:
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD904u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0112(c, 113u, depth + 1u); else { c.pc = 0x005495C0u; return; } if (c.pc != 0x004BD904u) [[unlikely]] return; }
L_004BD904:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD910u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD910u) [[unlikely]] return; }
L_004BD910:
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 1;
L_004BD914:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 290u);
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD928u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0112(c, 125u, depth + 1u); else { c.pc = 0x00549750u; return; } if (c.pc != 0x004BD928u) [[unlikely]] return; }
L_004BD928:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD934u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD934u) [[unlikely]] return; }
L_004BD934:
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 285u);
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD94Cu); set32(c.r[6], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_0112(c, 125u, depth + 1u); else { c.pc = 0x00549750u; return; } if (c.pc != 0x004BD94Cu) [[unlikely]] return; }
L_004BD94C:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD958u) [[unlikely]] return; }
L_004BD958:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD968u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0118(c, 121u, depth + 1u); else { c.pc = 0x00561780u; return; } if (c.pc != 0x004BD968u) [[unlikely]] return; }
L_004BD968:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD974u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD974u) [[unlikely]] return; }
L_004BD974:
    c.f[12] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD980u); set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004BD980u) [[unlikely]] return; }
L_004BD980:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD98Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD98Cu) [[unlikely]] return; }
L_004BD98C:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[6], c.r[16].w[0] + 376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD99Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 121u, depth + 1u); else { c.pc = 0x00561780u; return; } if (c.pc != 0x004BD99Cu) [[unlikely]] return; }
L_004BD99C:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD9A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004BD9A8u) [[unlikely]] return; }
L_004BD9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004BD9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BD9E0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 253u, depth + 1u); else { c.pc = 0x003BE0E0u; return; } if (c.pc != 0x004BD9E0u) [[unlikely]] return; }
L_004BD9E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 172u)));  if (t) { goto L_004BD9F8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004BDA04; } }
L_004BD9F8:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BDA04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 172u)));  if (t) { goto L_004BDA1C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004BDA28; } }
L_004BDA1C:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65407ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BDA28:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004BDA44; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDA3Cu); set32(c.r[4], ld32((c.r[17].w[0] + 368u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004BDA3Cu) [[unlikely]] return; }
L_004BDA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004BDA50; } }
L_004BDA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDA4Cu);  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004BDA4Cu) [[unlikely]] return; }
L_004BDA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004BDA50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BDA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004BDA90; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BDA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BDAD0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BDAB0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BDAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BDAC0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BDAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BDAD0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BDAD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_004BDAEC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[13] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDAE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F9(c, 95u, depth + 1u); else { c.pc = 0x004E5200u; return; } if (c.pc != 0x004BDAE8u) [[unlikely]] return; }
L_004BDAE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_004BDAEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDAF8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F8(c, 78u, depth + 1u); else { c.pc = 0x004E1A70u; return; } if (c.pc != 0x004BDAF8u) [[unlikely]] return; }
L_004BDAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BDB10:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBA0u); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_008F(c, 60u, depth + 1u); else { c.pc = 0x0033D1E0u; return; } if (c.pc != 0x004BDBA0u) [[unlikely]] return; }
L_004BDBA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBB0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00F4(c, 315u, depth + 1u); else { c.pc = 0x004D3C40u; return; } if (c.pc != 0x004BDBB0u) [[unlikely]] return; }
L_004BDBB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDBC4u) [[unlikely]] return; }
L_004BDBC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBD0u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BDBD0u) [[unlikely]] return; }
L_004BDBD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004BDBDCu) [[unlikely]] return; }
L_004BDBDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004BDC2C; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDBF8u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00B0(c, 106u, depth + 1u); else { c.pc = 0x003C0990u; return; } if (c.pc != 0x004BDBF8u) [[unlikely]] return; }
L_004BDBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BDC28; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDC0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 310u, depth + 1u); else { c.pc = 0x004BAB00u; return; } if (c.pc != 0x004BDC0Cu) [[unlikely]] return; }
L_004BDC0C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDC18u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138740u; return; } if (c.pc != 0x004BDC18u) [[unlikely]] return; }
L_004BDC18:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDC28u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AF(c, 472u, depth + 1u); else { c.pc = 0x003BFC60u; return; } if (c.pc != 0x004BDC28u) [[unlikely]] return; }
L_004BDC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BDC2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004BDC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 428u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BDC70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDC6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 553u, depth + 1u); else { c.pc = 0x004F7860u; return; } if (c.pc != 0x004BDC6Cu) [[unlikely]] return; }
L_004BDC6C:
    st32((c.r[16].w[0] + 428u), 0u);
    c.budget -= 1;
L_004BDC70:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 436u)));  goto L_004BDC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDC84u);  if (depth < kMaxDepth) unit_00F1(c, 270u, depth + 1u); else { c.pc = 0x004C6C80u; return; } if (c.pc != 0x004BDC84u) [[unlikely]] return; }
L_004BDC84:
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 1;
L_004BDC88:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 440u)));  goto L_004BDCA4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDCA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDCA0u) [[unlikely]] return; }
L_004BDCA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 1;
L_004BDCA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  goto L_004BDCB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDCB4u);  if (depth < kMaxDepth) unit_00F4(c, 100u, depth + 1u); else { c.pc = 0x004D0E50u; return; } if (c.pc != 0x004BDCB4u) [[unlikely]] return; }
L_004BDCB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 1;
L_004BDCB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 448u)));  goto L_004BDCCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDCC8u);  if (depth < kMaxDepth) unit_00F8(c, 237u, depth + 1u); else { c.pc = 0x004E32F0u; return; } if (c.pc != 0x004BDCC8u) [[unlikely]] return; }
L_004BDCC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 1;
L_004BDCCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004BDCE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDCE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDCE4u) [[unlikely]] return; }
L_004BDCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BDCE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BDD00:
    set32(c.r[29], c.r[29].w[0] - 720u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 428u)));
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BDD6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDD68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 553u, depth + 1u); else { c.pc = 0x004F7860u; return; } if (c.pc != 0x004BDD68u) [[unlikely]] return; }
L_004BDD68:
    st32((c.r[16].w[0] + 428u), 0u);
    c.budget -= 1;
L_004BDD6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDD78u); set32(c.r[5], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00EF(c, 10u, depth + 1u); else { c.pc = 0x004BC330u; return; } if (c.pc != 0x004BDD78u) [[unlikely]] return; }
L_004BDD78:
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 132u)));  goto L_004BDFA8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDD94u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004BDD94u) [[unlikely]] return; }
L_004BDD94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BDDB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BDDB8; } }
L_004BDDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDDB8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BDDB8u) [[unlikely]] return; }
L_004BDDB8:
    st32((c.r[29].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDDD0u); set32(c.r[5], c.r[29].w[0] + 716u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDDD0u) [[unlikely]] return; }
L_004BDDD0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BDE30; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDE00u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BDE00u) [[unlikely]] return; }
L_004BDE00:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDE10u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BDE10u) [[unlikely]] return; }
L_004BDE10:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BDE30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDE30u); set32(c.r[5], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BDE30u) [[unlikely]] return; }
L_004BDE30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BDE44; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BDE44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BDE60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BDE68; } }
L_004BDE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDE68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BDE68u) [[unlikely]] return; }
L_004BDE68:
    st32((c.r[29].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDE80u); set32(c.r[5], c.r[29].w[0] + 712u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDE80u) [[unlikely]] return; }
L_004BDE80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 712u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BDEE0; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDEB0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BDEB0u) [[unlikely]] return; }
L_004BDEB0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDEC0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BDEC0u) [[unlikely]] return; }
L_004BDEC0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BDEE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDEE0u); set32(c.r[5], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BDEE0u) [[unlikely]] return; }
L_004BDEE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BDEF4; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BDEF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BDF10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BDF18; } }
L_004BDF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDF18u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BDF18u) [[unlikely]] return; }
L_004BDF18:
    st32((c.r[29].w[0] + 708u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDF30u); set32(c.r[5], c.r[29].w[0] + 708u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BDF30u) [[unlikely]] return; }
L_004BDF30:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BDF90; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDF60u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BDF60u) [[unlikely]] return; }
L_004BDF60:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDF70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BDF70u) [[unlikely]] return; }
L_004BDF70:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BDF90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDF90u); set32(c.r[5], c.r[29].w[0] + 708u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BDF90u) [[unlikely]] return; }
L_004BDF90:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BDFA4; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BDFA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_004BDFA8:
    c.f[0] = ld32((c.r[16].w[0] + 1160u));
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1108u)));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDFC8u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 71u, depth + 1u); else { c.pc = 0x003ECF40u; return; } if (c.pc != 0x004BDFC8u) [[unlikely]] return; }
L_004BDFC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDFD4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004BDFD4u) [[unlikely]] return; }
L_004BDFD4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[28].w[0] - 32620u));  if (t) { goto L_004BE050; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 466u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BDFFCu); st32((c.r[29].w[0] + 704u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BDFFCu) [[unlikely]] return; }
L_004BDFFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 700u);  goto L_004BE010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BE034; } }
L_004BE010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE018u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BE018u) [[unlikely]] return; }
L_004BE018:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE028u); set32(c.r[6], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BE028u) [[unlikely]] return; }
L_004BE028:
    set32(c.r[4], c.r[29].w[0] + 700u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE034u); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BE034u) [[unlikely]] return; }
L_004BE034:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_004BE054; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_004BE050:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_004BE054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE05Cu);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004BE05Cu) [[unlikely]] return; }
L_004BE05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE064u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004BE064u) [[unlikely]] return; }
L_004BE064:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 276u), c.f[20]);
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE07Cu); st32((c.r[29].w[0] + 280u), 0u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004BE07Cu) [[unlikely]] return; }
L_004BE07C:
    c.f[12] = ld32((c.r[29].w[0] + 504u));
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.f[4] = ld32((c.r[29].w[0] + 624u));
    c.f[18] = ld32((c.r[29].w[0] + 468u));
    st32((c.r[29].w[0] + 216u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 508u));
    c.f[15] = ld32((c.r[29].w[0] + 464u));
    c.f[3] = ld32((c.r[29].w[0] + 640u));
    st32((c.r[29].w[0] + 212u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 608u));
    c.f[17] = ld32((c.r[29].w[0] + 472u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 656u));
    c.f[16] = ld32((c.r[29].w[0] + 476u));
    c.f[8] = ld32((c.r[29].w[0] + 628u));
    c.f[7] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[29].w[0] + 208u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 644u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 660u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 632u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[16], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 616u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 648u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 664u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 636u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 620u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 652u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 668u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 484u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[16], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 480u));
    c.f[16] = ld32((c.r[29].w[0] + 208u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 488u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 492u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    c.f[29] = ld32((c.r[29].w[0] + 208u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 516u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 216u));
    c.f[25] = ld32((c.r[29].w[0] + 512u));
    c.f[23] = ld32((c.r[29].w[0] + 520u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 212u));
    c.f[21] = ld32((c.r[29].w[0] + 524u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 212u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 212u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE25Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x004BE25Cu) [[unlikely]] return; }
L_004BE25C:
    c.f[2] = ld32((c.r[29].w[0] + 576u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    c.f[12] = ld32((c.r[28].w[0] - 32288u));
    st32((c.r[29].w[0] + 680u), c.f[2]);
    st32((c.r[29].w[0] + 684u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE280u); st32((c.r[29].w[0] + 688u), c.f[0]);  if (depth < kMaxDepth) unit_00BF(c, 25u, depth + 1u); else { c.pc = 0x003FC300u; return; } if (c.pc != 0x004BE280u) [[unlikely]] return; }
L_004BE280:
    c.f[12] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[4] = ld32((c.r[29].w[0] + 624u));
    c.f[18] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 204u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 364u));
    c.f[17] = ld32((c.r[29].w[0] + 320u));
    c.f[3] = ld32((c.r[29].w[0] + 640u));
    st32((c.r[29].w[0] + 200u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 608u));
    c.f[16] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 656u));
    c.f[15] = ld32((c.r[29].w[0] + 332u));
    c.f[8] = ld32((c.r[29].w[0] + 628u));
    c.f[7] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[29].w[0] + 196u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 644u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 660u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 632u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 616u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 648u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 664u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 636u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 620u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 652u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 668u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 340u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 336u));
    c.f[16] = ld32((c.r[29].w[0] + 196u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 348u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[29] = ld32((c.r[29].w[0] + 196u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 372u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 204u));
    c.f[25] = ld32((c.r[29].w[0] + 368u));
    c.f[23] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 200u));
    c.f[21] = ld32((c.r[29].w[0] + 380u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 200u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 200u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE460u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x004BE460u) [[unlikely]] return; }
L_004BE460:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE46Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138740u; return; } if (c.pc != 0x004BE46Cu) [[unlikely]] return; }
L_004BE46C:
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    st32((c.r[29].w[0] + 604u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE498u); set32(c.r[5], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004BE498u) [[unlikely]] return; }
L_004BE498:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE4A8u); set32(c.r[6], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_00F4(c, 315u, depth + 1u); else { c.pc = 0x004D3C40u; return; } if (c.pc != 0x004BE4A8u) [[unlikely]] return; }
L_004BE4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE4B0u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 544u, depth + 1u); else { c.pc = 0x004D73B0u; return; } if (c.pc != 0x004BE4B0u) [[unlikely]] return; }
L_004BE4B0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 3;
L_004BE4BC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[13], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[13].w[0] + 528u);
    set32(c.r[5], c.r[13].w[0] + 784u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.budget -= 7;
L_004BE4D8:
    set32(c.r[12], c.r[14].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[12].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { set32(c.r[9], ld32((c.r[12].w[0] + 484u)));  goto L_004BE53C; }
    set32(c.r[7], c.r[9].w[0] + 48u);
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
L_004BE4F4:
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BE4F4u | kUnwind; return; } goto L_004BE4F4; } }
    c.f[2] = ld32((c.r[13].w[0] + 576u));
    c.f[1] = ld32((c.r[13].w[0] + 580u));
    c.f[0] = ld32((c.r[13].w[0] + 584u));
    st32((c.r[9].w[0] + 96u), c.f[2]);
    st32((c.r[9].w[0] + 100u), c.f[1]);
    st32((c.r[9].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 588u));
    st32((c.r[9].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[9].w[0] + 108u), c.f[0]);
    set32(c.r[9], ld32((c.r[12].w[0] + 484u)));
    c.budget -= 11;
L_004BE53C:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_004BE598; }
    set32(c.r[7], c.r[9].w[0] + 48u);
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_004BE550:
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BE550u | kUnwind; return; } goto L_004BE550; } }
    c.f[2] = ld32((c.r[13].w[0] + 832u));
    c.f[1] = ld32((c.r[13].w[0] + 836u));
    c.f[0] = ld32((c.r[13].w[0] + 840u));
    st32((c.r[9].w[0] + 96u), c.f[2]);
    st32((c.r[9].w[0] + 100u), c.f[1]);
    st32((c.r[9].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 844u));
    st32((c.r[9].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[9].w[0] + 108u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
L_004BE598:
    c.r[4].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BE4D8u | kUnwind; return; } goto L_004BE4D8; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BE4BCu | kUnwind; return; } goto L_004BE4BC; }
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 1120u));  goto L_004BE614; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE5F0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004BE5F0u) [[unlikely]] return; }
L_004BE5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE5F8u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004BE5F8u) [[unlikely]] return; }
L_004BE5F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE610u); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004BE610u) [[unlikely]] return; }
L_004BE610:
    c.f[1] = ld32((c.r[16].w[0] + 1120u));
    c.budget -= 1;
L_004BE614:
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_004BE64C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004BE648; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1128u)));
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1124u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 5;
L_004BE648:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_004BE64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE654u);  if (depth < kMaxDepth) unit_00F6(c, 45u, depth + 1u); else { c.pc = 0x004D8910u; return; } if (c.pc != 0x004BE654u) [[unlikely]] return; }
L_004BE654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE65Cu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 60u, depth + 1u); else { c.pc = 0x004DCA00u; return; } if (c.pc != 0x004BE65Cu) [[unlikely]] return; }
L_004BE65C:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE66Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 31u, depth + 1u); else { c.pc = 0x004D8710u; return; } if (c.pc != 0x004BE66Cu) [[unlikely]] return; }
L_004BE66C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004BE69C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BE698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE698u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 448u, depth + 1u); else { c.pc = 0x00437890u; return; } if (c.pc != 0x004BE698u) [[unlikely]] return; }
L_004BE698:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004BE69C:
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_004BE6C0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE6B8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004BE6B8u) [[unlikely]] return; }
L_004BE6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004BE6E0; } }
L_004BE6C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004BE6D4; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004BE6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE6DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004BE6DCu) [[unlikely]] return; }
L_004BE6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004BE6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE6E8u);  if (depth < kMaxDepth) unit_00EE(c, 365u, depth + 1u); else { c.pc = 0x004BB850u; return; } if (c.pc != 0x004BE6E8u) [[unlikely]] return; }
L_004BE6E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE6F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 10u, depth + 1u); else { c.pc = 0x004E8110u; return; } if (c.pc != 0x004BE6F8u) [[unlikely]] return; }
L_004BE6F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 1144u), static_cast<std::uint8_t>(0u));  goto L_004BE724; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE720u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 254u, depth + 1u); else { c.pc = 0x004FE230u; return; } if (c.pc != 0x004BE720u) [[unlikely]] return; }
L_004BE720:
    st8((c.r[16].w[0] + 1144u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004BE724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_004BE770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE7ACu); set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  if (depth < kMaxDepth) unit_00AF(c, 270u, depth + 1u); else { c.pc = 0x003BE3F0u; return; } if (c.pc != 0x004BE7ACu) [[unlikely]] return; }
L_004BE7AC:
    st32((c.r[16].w[0] + 408u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[6], 0u - 2u);
    set32(c.r[2], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u - 17u);
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[16].w[0] + 1201u));
    set32(c.r[5], c.r[16].w[0] + 284u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE808u); st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EF(c, 150u, depth + 1u); else { c.pc = 0x004BDB10u; return; } if (c.pc != 0x004BE808u) [[unlikely]] return; }
L_004BE808:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE818u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004BE818u) [[unlikely]] return; }
L_004BE818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE820u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_00F9(c, 191u, depth + 1u); else { c.pc = 0x004E5CB0u; return; } if (c.pc != 0x004BE820u) [[unlikely]] return; }
L_004BE820:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE82Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 253u, depth + 1u); else { c.pc = 0x003BE0E0u; return; } if (c.pc != 0x004BE82Cu) [[unlikely]] return; }
L_004BE82C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.f[12] = 0u;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE858u); set32(c.r[4], ld32((c.r[16].w[0] + 368u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004BE858u) [[unlikely]] return; }
L_004BE858:
    c.r[2].d[0] = 0ull & 1ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 33u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE880u); st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EE(c, 67u, depth + 1u); else { c.pc = 0x004B8820u; return; } if (c.pc != 0x004BE880u) [[unlikely]] return; }
L_004BE880:
    set32(c.r[2], 0u + 13u);
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 432u)));  goto L_004BE8B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE8A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 553u, depth + 1u); else { c.pc = 0x004F7860u; return; } if (c.pc != 0x004BE8A8u) [[unlikely]] return; }
L_004BE8A8:
    st32((c.r[16].w[0] + 428u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 2;
L_004BE8B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 436u)));  goto L_004BE8C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE8C0u);  if (depth < kMaxDepth) unit_00F1(c, 270u, depth + 1u); else { c.pc = 0x004C6C80u; return; } if (c.pc != 0x004BE8C0u) [[unlikely]] return; }
L_004BE8C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 1;
L_004BE8C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 440u)));  goto L_004BE8E0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE8DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BE8DCu) [[unlikely]] return; }
L_004BE8DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 1;
L_004BE8E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  goto L_004BE8F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE8F0u);  if (depth < kMaxDepth) unit_00F4(c, 100u, depth + 1u); else { c.pc = 0x004D0E50u; return; } if (c.pc != 0x004BE8F0u) [[unlikely]] return; }
L_004BE8F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 1;
L_004BE8F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 448u)));  goto L_004BE908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE904u);  if (depth < kMaxDepth) unit_00F8(c, 237u, depth + 1u); else { c.pc = 0x004E32F0u; return; } if (c.pc != 0x004BE904u) [[unlikely]] return; }
L_004BE904:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 1;
L_004BE908:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 152u)));  goto L_004BE924; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE920u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BE920u) [[unlikely]] return; }
L_004BE920:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_004BE924:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_004BE974; }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE938u); set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));  if (depth < kMaxDepth) unit_00BE(c, 31u, depth + 1u); else { c.pc = 0x003F8880u; return; } if (c.pc != 0x004BE938u) [[unlikely]] return; }
L_004BE938:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_004BE958; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE954u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BE954u) [[unlikely]] return; }
L_004BE954:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_004BE958:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 7;
L_004BE974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE97Cu);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x004BE97Cu) [[unlikely]] return; }
L_004BE97C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004BE994; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 469u, depth + 1u); else { c.pc = 0x003C7C80u; return; } if (c.pc != 0x004BE990u) [[unlikely]] return; }
L_004BE990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004BE994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE99Cu);  if (depth < kMaxDepth) unit_00EE(c, 88u, depth + 1u); else { c.pc = 0x004B8BB0u; return; } if (c.pc != 0x004BE99Cu) [[unlikely]] return; }
L_004BE99C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE9B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BE9B0u) [[unlikely]] return; }
L_004BE9B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BE9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BE9D4; } }
L_004BE9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE9D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BE9D4u) [[unlikely]] return; }
L_004BE9D4:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BE9ECu); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BE9ECu) [[unlikely]] return; }
L_004BE9EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BEA4C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEA1Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BEA1Cu) [[unlikely]] return; }
L_004BEA1C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEA2Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BEA2Cu) [[unlikely]] return; }
L_004BEA2C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BEA4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEA4Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BEA4Cu) [[unlikely]] return; }
L_004BEA4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BEA60; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BEA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BEA7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BEA84; } }
L_004BEA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEA84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BEA84u) [[unlikely]] return; }
L_004BEA84:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEA9Cu); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEA9Cu) [[unlikely]] return; }
L_004BEA9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BEAFC; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEACCu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BEACCu) [[unlikely]] return; }
L_004BEACC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEADCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BEADCu) [[unlikely]] return; }
L_004BEADC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BEAFC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEAFCu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BEAFCu) [[unlikely]] return; }
L_004BEAFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004BEB10; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BEB10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BEB2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BEB34; } }
L_004BEB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEB34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BEB34u) [[unlikely]] return; }
L_004BEB34:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEB4Cu); set32(c.r[5], c.r[29].w[0] + 84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEB4Cu) [[unlikely]] return; }
L_004BEB4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BEBAC; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEB7Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BEB7Cu) [[unlikely]] return; }
L_004BEB7C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEB8Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BEB8Cu) [[unlikely]] return; }
L_004BEB8C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BEBAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBACu); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BEBACu) [[unlikely]] return; }
L_004BEBAC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 412u)));  goto L_004BEBC4; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 4;
L_004BEBC4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEBD4u) [[unlikely]] return; }
L_004BEBD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBE0u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BEBE0u) [[unlikely]] return; }
L_004BEBE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004BEBECu) [[unlikely]] return; }
L_004BEBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBF4u); set32(c.r[4], ld32((c.r[16].w[0] + 416u)));  if (depth < kMaxDepth) unit_00F4(c, 55u, depth + 1u); else { c.pc = 0x004D0580u; return; } if (c.pc != 0x004BEBF4u) [[unlikely]] return; }
L_004BEBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEBFCu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 544u, depth + 1u); else { c.pc = 0x004D73B0u; return; } if (c.pc != 0x004BEBFCu) [[unlikely]] return; }
L_004BEBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEC04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004BEC04u) [[unlikely]] return; }
L_004BEC04:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEC10u); set32(c.r[4], ld32((c.r[16].w[0] + 368u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004BEC10u) [[unlikely]] return; }
L_004BEC10:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 1140u));  goto L_004BEC28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEC24u);  if (depth < kMaxDepth) unit_00B0(c, 118u, depth + 1u); else { c.pc = 0x003C0B30u; return; } if (c.pc != 0x004BEC24u) [[unlikely]] return; }
L_004BEC24:
    c.f[0] = ld32((c.r[16].w[0] + 1140u));
    c.budget -= 1;
L_004BEC28:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    st32((c.r[16].w[0] + 1132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1152u));
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    st32((c.r[16].w[0] + 384u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1202u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1144u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 21;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1156u), 0u);  goto L_004BEC9C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BEC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEC98u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 448u, depth + 1u); else { c.pc = 0x00437890u; return; } if (c.pc != 0x004BEC98u) [[unlikely]] return; }
L_004BEC98:
    st32((c.r[16].w[0] + 1156u), 0u);
    c.budget -= 1;
L_004BEC9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 412u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_004BECCC; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 1108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 1112u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 7;
L_004BECCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1160u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1172u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BECE8u); st32((c.r[16].w[0] + 1176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00EE(c, 356u, depth + 1u); else { c.pc = 0x004BB6A0u; return; } if (c.pc != 0x004BECE8u) [[unlikely]] return; }
L_004BECE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BED10:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED40u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004BED40u) [[unlikely]] return; }
L_004BED40:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED50u); st32((c.r[29].w[0] + 188u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BED50u) [[unlikely]] return; }
L_004BED50:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004BED5Cu) [[unlikely]] return; }
L_004BED5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x004BED64u) [[unlikely]] return; }
L_004BED64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED74u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BED74u) [[unlikely]] return; }
L_004BED74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_004BED88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE570u; return; } if (c.pc != 0x004BED84u) [[unlikely]] return; }
L_004BED84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004BED88:
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 262u, depth + 1u); else { c.pc = 0x003BE2F0u; return; } if (c.pc != 0x004BED94u) [[unlikely]] return; }
L_004BED94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BED9Cu); set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  if (depth < kMaxDepth) unit_00AF(c, 274u, depth + 1u); else { c.pc = 0x003BE490u; return; } if (c.pc != 0x004BED9Cu) [[unlikely]] return; }
L_004BED9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 48u);  if (t) { goto L_004BEDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004BEDC4; } }
L_004BEDC0:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004BEDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEDCCu); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004BEDCCu) [[unlikely]] return; }
L_004BEDCC:
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEDD8u); set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  if (depth < kMaxDepth) unit_00AF(c, 261u, depth + 1u); else { c.pc = 0x003BE2D0u; return; } if (c.pc != 0x004BEDD8u) [[unlikely]] return; }
L_004BEDD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_004BEED8; }
    set32(c.r[7], ld32((c.r[20].w[0] + 92u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEDFCu); set32(c.r[6], c.r[6].w[0] - 281u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004BEDFCu) [[unlikely]] return; }
L_004BEDFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_004BEE10; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004BEE10:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE24u); set32(c.r[7], c.r[7].w[0] - 265u);  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x00425150u; return; } if (c.pc != 0x004BEE24u) [[unlikely]] return; }
L_004BEE24:
    set32(c.r[17], ld32((c.r[20].w[0] + 172u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004BEE98; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 172u), c.r[16].w[0]);  goto L_004BEE74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BEE44u) [[unlikely]] return; }
L_004BEE44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BEE54u) [[unlikely]] return; }
L_004BEE54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BEE70; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEE70u) [[unlikely]] return; }
L_004BEE70:
    st32((c.r[20].w[0] + 172u), c.r[16].w[0]);
    c.budget -= 1;
L_004BEE74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004BEE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BEE84u) [[unlikely]] return; }
L_004BEE84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEE94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BEE94u) [[unlikely]] return; }
L_004BEE94:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_004BEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEEA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004BEEA0u) [[unlikely]] return; }
L_004BEEA0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEEBCu); c.r[7].d[0] = c.r[2].d[0] >> 63;  if (depth < kMaxDepth) unit_00AF(c, 267u, depth + 1u); else { c.pc = 0x003BE390u; return; } if (c.pc != 0x004BEEBCu) [[unlikely]] return; }
L_004BEEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEEC4u); set32(c.r[4], ld32((c.r[20].w[0] + 172u)));  if (depth < kMaxDepth) unit_00C7(c, 122u, depth + 1u); else { c.pc = 0x0041D660u; return; } if (c.pc != 0x004BEEC4u) [[unlikely]] return; }
L_004BEEC4:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEED4u); set32(c.r[5], c.r[5].w[0] - 2944u);  if (depth < kMaxDepth) unit_00F0(c, 115u, depth + 1u); else { c.pc = 0x004C0E60u; return; } if (c.pc != 0x004BEED4u) [[unlikely]] return; }
L_004BEED4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BEED8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 180u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BEED8u | kUnwind; return; } goto L_004BEED8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF08u); set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 553u, depth + 1u); else { c.pc = 0x004D7700u; return; } if (c.pc != 0x004BEF08u) [[unlikely]] return; }
L_004BEF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 124u, depth + 1u); else { c.pc = 0x004BD820u; return; } if (c.pc != 0x004BEF10u) [[unlikely]] return; }
L_004BEF10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF1Cu); st32((c.r[29].w[0] + 180u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BEF1Cu) [[unlikely]] return; }
L_004BEF1C:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF38u); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEF38u) [[unlikely]] return; }
L_004BEF38:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF50u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEF50u) [[unlikely]] return; }
L_004BEF50:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF68u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEF68u) [[unlikely]] return; }
L_004BEF68:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 364u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF80u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BEF80u) [[unlikely]] return; }
L_004BEF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEF88u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BEF88u) [[unlikely]] return; }
L_004BEF88:
    set32(c.r[3], ld32((c.r[20].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 253u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 356u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 360u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 364u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 172u)));  if (t) { goto L_004BEFE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BEFEC; } }
L_004BEFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BEFECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BEFECu) [[unlikely]] return; }
L_004BEFEC:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF004u); set32(c.r[5], c.r[29].w[0] + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF004u) [[unlikely]] return; }
L_004BF004:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BF064; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF034u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF034u) [[unlikely]] return; }
L_004BF034:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF044u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF044u) [[unlikely]] return; }
L_004BF044:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BF064; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF064u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BF064u) [[unlikely]] return; }
L_004BF064:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004BF078; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF078u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_00C9(c, 245u, depth + 1u); else { c.pc = 0x00425BF0u; return; } if (c.pc != 0x004BF078u) [[unlikely]] return; }
L_004BF078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BF094; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BF09C; } }
L_004BF094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF09Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BF09Cu) [[unlikely]] return; }
L_004BF09C:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF0B4u); set32(c.r[5], c.r[29].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF0B4u) [[unlikely]] return; }
L_004BF0B4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BF114; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF0E4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF0E4u) [[unlikely]] return; }
L_004BF0E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF0F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF0F4u) [[unlikely]] return; }
L_004BF0F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BF114; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF114u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BF114u) [[unlikely]] return; }
L_004BF114:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004BF130; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF128u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_00C9(c, 245u, depth + 1u); else { c.pc = 0x00425BF0u; return; } if (c.pc != 0x004BF128u) [[unlikely]] return; }
L_004BF128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 136u);  if (t) { goto L_004BF1E0; } }
L_004BF130:
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004BF148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004BF150; } }
L_004BF148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF150u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004BF150u) [[unlikely]] return; }
L_004BF150:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF168u); set32(c.r[5], c.r[29].w[0] + 196u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF168u) [[unlikely]] return; }
L_004BF168:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BF1C8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF198u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF198u) [[unlikely]] return; }
L_004BF198:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF1A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF1A8u) [[unlikely]] return; }
L_004BF1A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BF1C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF1C8u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004BF1C8u) [[unlikely]] return; }
L_004BF1C8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004BF1DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF1DCu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_00C9(c, 245u, depth + 1u); else { c.pc = 0x00425BF0u; return; } if (c.pc != 0x004BF1DCu) [[unlikely]] return; }
L_004BF1DC:
    set32(c.r[4], 0u + 136u);
    c.budget -= 1;
L_004BF1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF1E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BF1E8u) [[unlikely]] return; }
L_004BF1E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 432u), c.r[2].w[0]);  goto L_004BF20C; }
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF208u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00F2(c, 292u, depth + 1u); else { c.pc = 0x004C9FB0u; return; } if (c.pc != 0x004BF208u) [[unlikely]] return; }
L_004BF208:
    st32((c.r[20].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 1;
L_004BF20C:
    set32(c.r[4], 0u + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF218u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BF218u) [[unlikely]] return; }
L_004BF218:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 436u), c.r[2].w[0]);  goto L_004BF23C; }
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF238u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00FA(c, 250u, depth + 1u); else { c.pc = 0x004EAE10u; return; } if (c.pc != 0x004BF238u) [[unlikely]] return; }
L_004BF238:
    st32((c.r[20].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 1;
L_004BF23C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF248u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BF248u) [[unlikely]] return; }
L_004BF248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 440u), c.r[2].w[0]);  goto L_004BF264; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF260u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 104u, depth + 1u); else { c.pc = 0x004D0ED0u; return; } if (c.pc != 0x004BF260u) [[unlikely]] return; }
L_004BF260:
    st32((c.r[20].w[0] + 440u), c.r[2].w[0]);
    c.budget -= 1;
L_004BF264:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 48u)));  goto L_004BF29C; }
    set32(c.r[4], 0u + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF284u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BF284u) [[unlikely]] return; }
L_004BF284:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 444u), c.r[2].w[0]);  goto L_004BF298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF294u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 30u, depth + 1u); else { c.pc = 0x004E4800u; return; } if (c.pc != 0x004BF294u) [[unlikely]] return; }
L_004BF294:
    st32((c.r[20].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 1;
L_004BF298:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 1;
L_004BF29C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 48u);  if (t) { goto L_004BF2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004BF2B4; } }
L_004BF2B0:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004BF2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF2BCu); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004BF2BCu) [[unlikely]] return; }
L_004BF2BC:
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    st32((c.r[20].w[0] + 88u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 172u)));  goto L_004BF320; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF2FCu); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004BF2FCu) [[unlikely]] return; }
L_004BF2FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 448u), c.r[2].w[0]);  goto L_004BF31C; }
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF318u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 434u, depth + 1u); else { c.pc = 0x004EFBE0u; return; } if (c.pc != 0x004BF318u) [[unlikely]] return; }
L_004BF318:
    st32((c.r[20].w[0] + 448u), c.r[2].w[0]);
    c.budget -= 1;
L_004BF31C:
    set32(c.r[3], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_004BF320:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF338u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 338u, depth + 1u); else { c.pc = 0x004BF610u; return; } if (c.pc != 0x004BF338u) [[unlikely]] return; }
L_004BF338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF348u); set32(c.r[5], c.r[5].w[0] - 242u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004BF348u) [[unlikely]] return; }
L_004BF348:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF358u); set32(c.r[6], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x004BF358u) [[unlikely]] return; }
L_004BF358:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_004BF36C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004BF36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF374u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 239u, depth + 1u); else { c.pc = 0x004BA1D0u; return; } if (c.pc != 0x004BF374u) [[unlikely]] return; }
L_004BF374:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004BF380u) [[unlikely]] return; }
L_004BF380:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF38Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004BF38Cu) [[unlikely]] return; }
L_004BF38C:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 1201u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 17u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[4], 0u - 33u);
    set32(c.r[12], c.r[5].w[0] << 5);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[9], 0u - 9u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[10], c.r[5].w[0] << 3);
    st8((c.r[20].w[0] + 1201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], 0u - 129u);
    c.r[11].d[0] = ld8((c.r[20].w[0] + 1201u));
    set32(c.r[8], c.r[5].w[0] << 7);
    set32(c.r[6], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], 0u - 65u);
    set32(c.r[2], 0u - 3u);
    c.r[11].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    st8((c.r[20].w[0] + 1201u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[20].w[0] + 1088u), 0u);
    st32((c.r[20].w[0] + 1092u), 0u);
    st32((c.r[20].w[0] + 1100u), 0u);
    c.r[11].d[0] = ld8((c.r[20].w[0] + 1201u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[20].w[0] + 1201u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[20].w[0] + 1201u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 1201u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[20].w[0] + 1184u), 0u);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 1201u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 1201u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[20].w[0] + 1180u), 0u);
    st32((c.r[20].w[0] + 1104u), 0u);
    st32((c.r[20].w[0] + 1096u), 0u);
    st32((c.r[20].w[0] + 1192u), 0u);
    st32((c.r[20].w[0] + 1188u), 0u);
    st32((c.r[20].w[0] + 1196u), 0u);
    st32((c.r[20].w[0] + 384u), 0u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1202u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF454u); st8((c.r[20].w[0] + 1202u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BF454u) [[unlikely]] return; }
L_004BF454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004BF480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004BF4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004BF4F8; } }
L_004BF4B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF4C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF4C0u) [[unlikely]] return; }
L_004BF4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_004BF4DC; } }
L_004BF4CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004BF4DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BF4E8; } }
L_004BF4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF4CCu | kUnwind; return; } goto L_004BF4CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BF4E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004BF4F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BF4F8; } }
L_004BF4F8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 288u)));  goto L_004BF508; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BF5D8; } }
L_004BF508:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004BF518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004BF55C; } }
L_004BF518:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF524u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF524u) [[unlikely]] return; }
L_004BF524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 31280u);  if (t) { goto L_004BF540; } }
L_004BF530:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004BF540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BF54C; } }
L_004BF540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF530u | kUnwind; return; } goto L_004BF530; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BF54C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_004BF55C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BF55C; } }
L_004BF55C:
    set32(c.r[17], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004BF5C8; } }
L_004BF568:
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.f[0] = ld32((c.r[28].w[0] - 29556u));
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[20] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004BF590; } }
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 1;
L_004BF590:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  goto L_004BF5B0; }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF5ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 287u, depth + 1u); else { c.pc = 0x002CA6A0u; return; } if (c.pc != 0x004BF5ACu) [[unlikely]] return; }
L_004BF5AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_004BF5B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 6;
L_004BF5C8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF568u | kUnwind; return; } goto L_004BF568; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BF5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BF600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 29556u), c.f[12]);  c.pc = t; return; }
L_004BF610:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 708u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF650u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BF650u) [[unlikely]] return; }
L_004BF650:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[30].d[0] != 0ull) { set32(c.r[25], ld32((c.r[30].w[0])));  goto L_004BF664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004BF6AC; } }
L_004BF664:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF670u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF670u) [[unlikely]] return; }
L_004BF670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_004BF690; } }
L_004BF680:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_004BF690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BF69C; } }
L_004BF690:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF680u | kUnwind; return; } goto L_004BF680; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BF69C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_004BF6AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_004BF6AC; } }
L_004BF6AC:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  [[clang::musttail]] return unit_00F0(c, 18u, depth); }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { st32((c.r[29].w[0] + 288u), 0u);  goto L_004BF6C4; }
    set32(c.r[3], ld32((c.r[22].w[0] + 288u)));
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 2;
L_004BF6C4:
    c.r[3].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);  if (t) { [[clang::musttail]] return unit_00F0(c, 17u, depth); } }
L_004BF6DC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_004BF700; }
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF6FCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF6FCu) [[unlikely]] return; }
L_004BF6FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004BF700:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[18].d[0] = c.r[30].d[0] + 0ull;  goto L_004BF72C; }
    c.r[3].d[0] = ld16((c.r[22].w[0] + 218u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[22].w[0] + 212u)));  goto L_004BF720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004BF72C; } }
L_004BF720:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_004BF72C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_004BF73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004BF784; } }
L_004BF73C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF748u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF748u) [[unlikely]] return; }
L_004BF748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_004BF768; } }
L_004BF758:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_004BF768; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BF774; } }
L_004BF768:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF758u | kUnwind; return; } goto L_004BF758; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BF774:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004BF784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BF784; } }
L_004BF784:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  [[clang::musttail]] return unit_00F0(c, 17u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 219u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF7A0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BF7A0u) [[unlikely]] return; }
L_004BF7A0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[16].w[0] + 452u)));
    set32(c.r[2], c.r[16].w[0] + 452u);
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (t) { goto L_004BF81C; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 452u), c.r[23].w[0]);  goto L_004BF7FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF7CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF7CCu) [[unlikely]] return; }
L_004BF7CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF7DCu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF7DCu) [[unlikely]] return; }
L_004BF7DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BF7F8; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF7F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF7F8u) [[unlikely]] return; }
L_004BF7F8:
    st32((c.r[16].w[0] + 452u), c.r[23].w[0]);
    c.budget -= 1;
L_004BF7FC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_004BF81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF80Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF80Cu) [[unlikely]] return; }
L_004BF80C:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF81Cu); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF81Cu) [[unlikely]] return; }
L_004BF81C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF82Cu); set32(c.r[5], c.r[5].w[0] - 210u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BF82Cu) [[unlikely]] return; }
L_004BF82C:
    set32(c.r[21], ld32((c.r[16].w[0] + 484u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 484u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (t) { goto L_004BF8A0; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 484u), c.r[23].w[0]);  goto L_004BF880; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF850u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF850u) [[unlikely]] return; }
L_004BF850:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF860u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF860u) [[unlikely]] return; }
L_004BF860:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BF87C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF87Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BF87Cu) [[unlikely]] return; }
L_004BF87C:
    st32((c.r[16].w[0] + 484u), c.r[23].w[0]);
    c.budget -= 1;
L_004BF880:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  goto L_004BF8A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF890u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BF890u) [[unlikely]] return; }
L_004BF890:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF8A0u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BF8A0u) [[unlikely]] return; }
L_004BF8A0:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 1;
L_004BF8A4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  goto L_004BF8C0; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 4;
L_004BF8C0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BF8D8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BF8D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004BFA38; } }
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[20].w[0] + 528u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_004BF8F8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF8F8u | kUnwind; return; } goto L_004BF8F8; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[20].w[0] + 576u), c.f[2]);
    st32((c.r[20].w[0] + 580u), c.f[1]);
    st32((c.r[20].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    st32((c.r[20].w[0] + 588u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_004BF948; }
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_004BF948:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 784u);  goto L_004BF99C; }
    set32(c.r[4], c.r[20].w[0] + 784u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_004BF95C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF95Cu | kUnwind; return; } goto L_004BF95C; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[20].w[0] + 832u), c.f[2]);
    st32((c.r[20].w[0] + 836u), c.f[1]);
    st32((c.r[20].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 844u), c.f[0]);  if (t) { goto L_004BF9A4; } }
L_004BF99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BF9A4u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x004BF9A4u) [[unlikely]] return; }
L_004BF9A4:
    c.f[1] = ld32((c.r[20].w[0] + 580u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 1348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 312u), 0u);
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 320u), 0u);
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 328u), 0u);
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[1] = ld32((c.r[20].w[0] + 576u));
    st32((c.r[29].w[0] + 336u), 0u);
    c.f[3] = ld32((c.r[20].w[0] + 584u));
    st32((c.r[29].w[0] + 340u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1352u));
    st32((c.r[29].w[0] + 344u), c.r[4].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 364u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 360u), 0u);
    c.f[2] = ld32((c.r[3].w[0] - 1344u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 1040u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 1044u), c.f[4]);
    st32((c.r[20].w[0] + 1048u), c.f[2]);
    c.budget -= 37;
L_004BFA38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFA48u); set32(c.r[5], c.r[5].w[0] - 204u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BFA48u) [[unlikely]] return; }
L_004BFA48:
    set32(c.r[21], ld32((c.r[16].w[0] + 456u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 456u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_004BFABC; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 456u), c.r[23].w[0]);  goto L_004BFA9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFA6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFA6Cu) [[unlikely]] return; }
L_004BFA6C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFA7Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFA7Cu) [[unlikely]] return; }
L_004BFA7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BFA98; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFA98u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BFA98u) [[unlikely]] return; }
L_004BFA98:
    st32((c.r[16].w[0] + 456u), c.r[23].w[0]);
    c.budget -= 1;
L_004BFA9C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_004BFABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFAACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFAACu) [[unlikely]] return; }
L_004BFAAC:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFABCu); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFABCu) [[unlikely]] return; }
L_004BFABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFACCu); set32(c.r[5], c.r[5].w[0] - 195u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BFACCu) [[unlikely]] return; }
L_004BFACC:
    set32(c.r[21], ld32((c.r[16].w[0] + 488u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 488u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_004BFB40; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 488u), c.r[23].w[0]);  goto L_004BFB20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFAF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFAF0u) [[unlikely]] return; }
L_004BFAF0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFB00u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFB00u) [[unlikely]] return; }
L_004BFB00:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BFB1C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFB1Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BFB1Cu) [[unlikely]] return; }
L_004BFB1C:
    st32((c.r[16].w[0] + 488u), c.r[23].w[0]);
    c.budget -= 1;
L_004BFB20:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  goto L_004BFB44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFB30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFB30u) [[unlikely]] return; }
L_004BFB30:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFB40u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFB40u) [[unlikely]] return; }
L_004BFB40:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 1;
L_004BFB44:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  goto L_004BFB60; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 4;
L_004BFB60:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BFB78; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BFB78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004BFCF0; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[6], c.r[5].w[0] + 48u);
    set32(c.r[21], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 528u);
    c.budget -= 8;
L_004BFBA0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFBA0u | kUnwind; return; } goto L_004BFBA0; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[21].w[0] + 576u), c.f[2]);
    st32((c.r[21].w[0] + 580u), c.f[1]);
    st32((c.r[21].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    st32((c.r[21].w[0] + 588u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_004BFBF0; }
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_004BFBF0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 784u);  goto L_004BFC44; }
    set32(c.r[4], c.r[21].w[0] + 784u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_004BFC04:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFC04u | kUnwind; return; } goto L_004BFC04; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[21].w[0] + 832u), c.f[2]);
    st32((c.r[21].w[0] + 836u), c.f[1]);
    st32((c.r[21].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 844u), c.f[0]);  if (t) { goto L_004BFC4C; } }
L_004BFC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFC4Cu);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x004BFC4Cu) [[unlikely]] return; }
L_004BFC4C:
    c.f[1] = ld32((c.r[21].w[0] + 580u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 1348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 328u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[1] = ld32((c.r[21].w[0] + 576u));
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[3] = ld32((c.r[21].w[0] + 584u));
    st32((c.r[29].w[0] + 336u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1352u));
    st32((c.r[29].w[0] + 340u), 0u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 344u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    c.f[2] = ld32((c.r[3].w[0] - 1344u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 1044u), c.f[4]);
    st32((c.r[4].w[0] + 1048u), c.f[2]);
    c.budget -= 41;
L_004BFCF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD00u); set32(c.r[5], c.r[5].w[0] - 189u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BFD00u) [[unlikely]] return; }
L_004BFD00:
    set32(c.r[21], ld32((c.r[16].w[0] + 460u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 460u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_004BFD74; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 460u), c.r[23].w[0]);  goto L_004BFD54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFD24u) [[unlikely]] return; }
L_004BFD24:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD34u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFD34u) [[unlikely]] return; }
L_004BFD34:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BFD50; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD50u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BFD50u) [[unlikely]] return; }
L_004BFD50:
    st32((c.r[16].w[0] + 460u), c.r[23].w[0]);
    c.budget -= 1;
L_004BFD54:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_004BFD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFD64u) [[unlikely]] return; }
L_004BFD64:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD74u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFD74u) [[unlikely]] return; }
L_004BFD74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFD84u); set32(c.r[5], c.r[5].w[0] - 180u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BFD84u) [[unlikely]] return; }
L_004BFD84:
    set32(c.r[21], ld32((c.r[16].w[0] + 492u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 492u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_004BFDF8; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 492u), c.r[23].w[0]);  goto L_004BFDD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFDA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFDA8u) [[unlikely]] return; }
L_004BFDA8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFDB8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFDB8u) [[unlikely]] return; }
L_004BFDB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BFDD4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFDD4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BFDD4u) [[unlikely]] return; }
L_004BFDD4:
    st32((c.r[16].w[0] + 492u), c.r[23].w[0]);
    c.budget -= 1;
L_004BFDD8:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  goto L_004BFDFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFDE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFDE8u) [[unlikely]] return; }
L_004BFDE8:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFDF8u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFDF8u) [[unlikely]] return; }
L_004BFDF8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 1;
L_004BFDFC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_004BFE18; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 4;
L_004BFE18:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BFE30; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004BFE30:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004BFFA8; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[6], c.r[5].w[0] + 48u);
    set32(c.r[21], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 528u);
    c.budget -= 8;
L_004BFE58:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFE58u | kUnwind; return; } goto L_004BFE58; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[21].w[0] + 576u), c.f[2]);
    st32((c.r[21].w[0] + 580u), c.f[1]);
    st32((c.r[21].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    st32((c.r[21].w[0] + 588u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_004BFEA8; }
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_004BFEA8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 784u);  goto L_004BFEFC; }
    set32(c.r[4], c.r[21].w[0] + 784u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_004BFEBC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFEBCu | kUnwind; return; } goto L_004BFEBC; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[21].w[0] + 832u), c.f[2]);
    st32((c.r[21].w[0] + 836u), c.f[1]);
    st32((c.r[21].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 844u), c.f[0]);  if (t) { goto L_004BFF04; } }
L_004BFEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFF04u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x004BFF04u) [[unlikely]] return; }
L_004BFF04:
    c.f[1] = ld32((c.r[21].w[0] + 580u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 1348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 328u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[1] = ld32((c.r[21].w[0] + 576u));
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[3] = ld32((c.r[21].w[0] + 584u));
    st32((c.r[29].w[0] + 336u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 1352u));
    st32((c.r[29].w[0] + 340u), 0u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 344u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    c.f[2] = ld32((c.r[3].w[0] - 1344u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 1044u), c.f[4]);
    st32((c.r[4].w[0] + 1048u), c.f[2]);
    c.budget -= 41;
L_004BFFA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFFB8u); set32(c.r[5], c.r[5].w[0] - 174u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004BFFB8u) [[unlikely]] return; }
L_004BFFB8:
    set32(c.r[21], ld32((c.r[16].w[0] + 464u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 464u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[23].d[0]; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { [[clang::musttail]] return unit_00F0(c, 7u, depth); } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 464u), c.r[23].w[0]);  [[clang::musttail]] return unit_00F0(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFFDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004BFFDCu) [[unlikely]] return; }
L_004BFFDC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BFFECu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004BFFECu) [[unlikely]] return; }
L_004BFFEC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00F0(c, 2u, depth); } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_00F0(c, 1u, depth);
}

}
