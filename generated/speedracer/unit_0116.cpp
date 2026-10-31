#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0116[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0,
    91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0,
    109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
};

void unit_0116(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00558000;
    case 2u: goto L_00558010;
    case 3u: goto L_0055804C;
    case 4u: goto L_00558060;
    case 5u: goto L_00558080;
    case 6u: goto L_00558108;
    case 7u: goto L_0055817C;
    case 8u: goto L_005581C4;
    case 9u: goto L_005581EC;
    case 10u: goto L_00558224;
    case 11u: goto L_00558248;
    case 12u: goto L_00558274;
    case 13u: goto L_005582AC;
    case 14u: goto L_005582CC;
    case 15u: goto L_005582F0;
    case 16u: goto L_00558300;
    case 17u: goto L_00558320;
    case 18u: goto L_0055834C;
    case 19u: goto L_00558368;
    case 20u: goto L_00558388;
    case 21u: goto L_005583B8;
    case 22u: goto L_005583D8;
    case 23u: goto L_00558418;
    case 24u: goto L_00558438;
    case 25u: goto L_00558454;
    case 26u: goto L_00558464;
    case 27u: goto L_00558484;
    case 28u: goto L_005584B0;
    case 29u: goto L_005584E0;
    case 30u: goto L_00558500;
    case 31u: goto L_0055853C;
    case 32u: goto L_00558558;
    case 33u: goto L_00558574;
    case 34u: goto L_00558594;
    case 35u: goto L_005585B4;
    case 36u: goto L_005585F8;
    case 37u: goto L_00558618;
    case 38u: goto L_00558660;
    case 39u: goto L_0055867C;
    case 40u: goto L_005586A8;
    case 41u: goto L_00558730;
    case 42u: goto L_00558768;
    case 43u: goto L_00558790;
    case 44u: goto L_005587C8;
    case 45u: goto L_005587EC;
    case 46u: goto L_00558824;
    case 47u: goto L_00558844;
    case 48u: goto L_00558860;
    case 49u: goto L_00558870;
    case 50u: goto L_00558890;
    case 51u: goto L_005588BC;
    case 52u: goto L_005588DC;
    case 53u: goto L_005588FC;
    case 54u: goto L_0055891C;
    case 55u: goto L_0055893C;
    case 56u: goto L_0055895C;
    case 57u: goto L_0055897C;
    case 58u: goto L_005589C8;
    case 59u: goto L_005589E8;
    case 60u: goto L_00558A14;
    case 61u: goto L_00558A34;
    case 62u: goto L_00558A60;
    case 63u: goto L_00558A80;
    case 64u: goto L_00558AA0;
    case 65u: goto L_00558AEC;
    case 66u: goto L_00558AF4;
    case 67u: goto L_00558AF8;
    case 68u: goto L_00558B30;
    case 69u: goto L_00558B50;
    case 70u: goto L_00558BA8;
    case 71u: goto L_00558BE0;
    case 72u: goto L_00558C10;
    case 73u: goto L_00558C20;
    case 74u: goto L_00558C60;
    case 75u: goto L_00558C88;
    case 76u: goto L_00558CDC;
    case 77u: goto L_00558CEC;
    case 78u: goto L_00558D10;
    case 79u: goto L_00558D18;
    case 80u: goto L_00558D20;
    case 81u: goto L_00558D28;
    case 82u: goto L_00558DCC;
    case 83u: goto L_00558DDC;
    case 84u: goto L_00558E10;
    case 85u: goto L_00558E94;
    case 86u: goto L_00558EDC;
    case 87u: goto L_00558F20;
    case 88u: goto L_00558FC0;
    case 89u: goto L_00558FF0;
    case 90u: goto L_00558FF8;
    case 91u: goto L_00559000;
    case 92u: goto L_00559008;
    case 93u: goto L_00559010;
    case 94u: goto L_00559058;
    case 95u: goto L_00559060;
    case 96u: goto L_0055908C;
    case 97u: goto L_005590A0;
    case 98u: goto L_005590CC;
    case 99u: goto L_005590F4;
    case 100u: goto L_0055911C;
    case 101u: goto L_00559144;
    case 102u: goto L_00559154;
    case 103u: goto L_00559174;
    case 104u: goto L_005591AC;
    case 105u: goto L_005591C0;
    case 106u: goto L_005591E0;
    case 107u: goto L_005591F0;
    case 108u: goto L_005591F8;
    case 109u: goto L_00559200;
    case 110u: goto L_00559208;
    case 111u: goto L_00559210;
    case 112u: goto L_00559258;
    case 113u: goto L_00559270;
    case 114u: goto L_005592A4;
    case 115u: goto L_005592B4;
    case 116u: goto L_005592C4;
    case 117u: goto L_005592F0;
    case 118u: goto L_0055930C;
    case 119u: goto L_00559330;
    case 120u: goto L_0055933C;
    case 121u: goto L_0055934C;
    case 122u: goto L_0055935C;
    case 123u: goto L_00559378;
    case 124u: goto L_00559388;
    case 125u: goto L_00559394;
    case 126u: goto L_005593BC;
    case 127u: goto L_005593D8;
    case 128u: goto L_005593F8;
    case 129u: goto L_00559404;
    case 130u: goto L_00559414;
    case 131u: goto L_00559424;
    case 132u: goto L_00559440;
    case 133u: goto L_00559454;
    case 134u: goto L_00559480;
    case 135u: goto L_005594F0;
    case 136u: goto L_00559544;
    case 137u: goto L_00559570;
    case 138u: goto L_00559660;
    case 139u: goto L_005596B4;
    case 140u: goto L_005596D0;
    case 141u: goto L_00559700;
    case 142u: goto L_0055972C;
    case 143u: goto L_00559754;
    case 144u: goto L_00559778;
    case 145u: goto L_005597C0;
    case 146u: goto L_005597E8;
    case 147u: goto L_00559814;
    case 148u: goto L_00559840;
    case 149u: goto L_00559868;
    case 150u: goto L_00559890;
    case 151u: goto L_005598C4;
    case 152u: goto L_005598FC;
    case 153u: goto L_0055991C;
    case 154u: goto L_00559930;
    case 155u: goto L_0055995C;
    case 156u: goto L_00559990;
    case 157u: goto L_005599C0;
    case 158u: goto L_005599E0;
    case 159u: goto L_00559AB0;
    case 160u: goto L_00559B00;
    case 161u: goto L_00559B14;
    case 162u: goto L_00559B24;
    case 163u: goto L_00559B2C;
    case 164u: goto L_00559B34;
    case 165u: goto L_00559BD0;
    case 166u: goto L_00559D30;
    case 167u: goto L_00559D3C;
    case 168u: goto L_00559D44;
    case 169u: goto L_00559D5C;
    case 170u: goto L_00559D70;
    case 171u: goto L_00559D7C;
    case 172u: goto L_00559D88;
    case 173u: goto L_00559DA4;
    case 174u: goto L_00559DB0;
    case 175u: goto L_00559DC0;
    case 176u: goto L_00559DC8;
    case 177u: goto L_00559E08;
    case 178u: goto L_00559EC0;
    case 179u: goto L_00559ED0;
    case 180u: goto L_00559EF0;
    case 181u: goto L_00559F10;
    case 182u: goto L_00559F30;
    case 183u: goto L_00559F7C;
    case 184u: goto L_00559F90;
    case 185u: goto L_00559FDC;
    case 186u: goto L_00559FF0;
    case 187u: goto L_0055A014;
    case 188u: goto L_0055A040;
    case 189u: goto L_0055A090;
    case 190u: goto L_0055A0B0;
    case 191u: goto L_0055A120;
    case 192u: goto L_0055A17C;
    case 193u: goto L_0055A18C;
    case 194u: goto L_0055A198;
    case 195u: goto L_0055A1A4;
    case 196u: goto L_0055A1C4;
    case 197u: goto L_0055A240;
    case 198u: goto L_0055A28C;
    case 199u: goto L_0055A294;
    case 200u: goto L_0055A2E0;
    case 201u: goto L_0055A320;
    case 202u: goto L_0055A394;
    case 203u: goto L_0055A3C4;
    case 204u: goto L_0055A3FC;
    case 205u: goto L_0055A440;
    case 206u: goto L_0055A460;
    case 207u: goto L_0055A470;
    case 208u: goto L_0055A48C;
    case 209u: goto L_0055A4A0;
    case 210u: goto L_0055A508;
    case 211u: goto L_0055A56C;
    case 212u: goto L_0055A590;
    case 213u: goto L_0055A5AC;
    case 214u: goto L_0055A5C0;
    case 215u: goto L_0055A5DC;
    case 216u: goto L_0055A5F0;
    case 217u: goto L_0055A630;
    case 218u: goto L_0055A694;
    case 219u: goto L_0055A6B4;
    case 220u: goto L_0055A6D0;
    case 221u: goto L_0055A73C;
    case 222u: goto L_0055A788;
    case 223u: goto L_0055A7AC;
    case 224u: goto L_0055A7C4;
    case 225u: goto L_0055A7E8;
    case 226u: goto L_0055A824;
    case 227u: goto L_0055A830;
    case 228u: goto L_0055A89C;
    case 229u: goto L_0055A8E8;
    case 230u: goto L_0055A90C;
    case 231u: goto L_0055A924;
    case 232u: goto L_0055A948;
    case 233u: goto L_0055A990;
    case 234u: goto L_0055A9A0;
    case 235u: goto L_0055A9B0;
    case 236u: goto L_0055A9C0;
    case 237u: goto L_0055A9D0;
    case 238u: goto L_0055AA04;
    case 239u: goto L_0055AA34;
    case 240u: goto L_0055AA44;
    case 241u: goto L_0055AA60;
    case 242u: goto L_0055AAA0;
    case 243u: goto L_0055AAD0;
    case 244u: goto L_0055AB00;
    case 245u: goto L_0055AB40;
    case 246u: goto L_0055AC90;
    case 247u: goto L_0055ACBC;
    case 248u: goto L_0055ADE0;
    case 249u: goto L_0055AE04;
    case 250u: goto L_0055AE10;
    case 251u: goto L_0055AE68;
    case 252u: goto L_0055AE80;
    case 253u: goto L_0055AED8;
    case 254u: goto L_0055AF04;
    case 255u: goto L_0055AF20;
    case 256u: goto L_0055AF50;
    case 257u: goto L_0055AF80;
    case 258u: goto L_0055AFB0;
    case 259u: goto L_0055B000;
    case 260u: goto L_0055B040;
    case 261u: goto L_0055B0BC;
    case 262u: goto L_0055B0EC;
    case 263u: goto L_0055B150;
    case 264u: goto L_0055B184;
    case 265u: goto L_0055B1A0;
    case 266u: goto L_0055B1C0;
    case 267u: goto L_0055B1F0;
    case 268u: goto L_0055B210;
    case 269u: goto L_0055B240;
    case 270u: goto L_0055B260;
    case 271u: goto L_0055B28C;
    case 272u: goto L_0055B2A8;
    case 273u: goto L_0055B2C8;
    case 274u: goto L_0055B2F0;
    case 275u: goto L_0055B334;
    case 276u: goto L_0055B350;
    case 277u: goto L_0055B378;
    case 278u: goto L_0055B3C4;
    case 279u: goto L_0055B3E8;
    case 280u: goto L_0055B42C;
    case 281u: goto L_0055B480;
    case 282u: goto L_0055B4C0;
    case 283u: goto L_0055B4DC;
    case 284u: goto L_0055B530;
    case 285u: goto L_0055B560;
    case 286u: goto L_0055B594;
    case 287u: goto L_0055B5B0;
    case 288u: goto L_0055B5D0;
    case 289u: goto L_0055B61C;
    case 290u: goto L_0055B638;
    case 291u: goto L_0055B67C;
    case 292u: goto L_0055B690;
    case 293u: goto L_0055B6C0;
    case 294u: goto L_0055B6F4;
    case 295u: goto L_0055B718;
    case 296u: goto L_0055B744;
    case 297u: goto L_0055B760;
    case 298u: goto L_0055B854;
    case 299u: goto L_0055B888;
    case 300u: goto L_0055B8B0;
    case 301u: goto L_0055B8C0;
    case 302u: goto L_0055B8D4;
    case 303u: goto L_0055B8F4;
    case 304u: goto L_0055B910;
    case 305u: goto L_0055B91C;
    case 306u: goto L_0055B940;
    case 307u: goto L_0055B95C;
    case 308u: goto L_0055B968;
    case 309u: goto L_0055B980;
    case 310u: goto L_0055B9BC;
    case 311u: goto L_0055B9DC;
    case 312u: goto L_0055BA00;
    case 313u: goto L_0055BA14;
    case 314u: goto L_0055BA24;
    case 315u: goto L_0055BA44;
    case 316u: goto L_0055BA68;
    case 317u: goto L_0055BA80;
    case 318u: goto L_0055BA8C;
    case 319u: goto L_0055BAC0;
    case 320u: goto L_0055BADC;
    case 321u: goto L_0055BB04;
    case 322u: goto L_0055BB38;
    case 323u: goto L_0055BB54;
    case 324u: goto L_0055BB70;
    case 325u: goto L_0055BB90;
    case 326u: goto L_0055BBA8;
    case 327u: goto L_0055BBE4;
    case 328u: goto L_0055BC48;
    case 329u: goto L_0055BC78;
    case 330u: goto L_0055BCA0;
    case 331u: goto L_0055BCB0;
    case 332u: goto L_0055BCF4;
    case 333u: goto L_0055BD1C;
    case 334u: goto L_0055BD44;
    case 335u: goto L_0055BD7C;
    case 336u: goto L_0055BD9C;
    case 337u: goto L_0055BDA4;
    case 338u: goto L_0055BDD8;
    case 339u: goto L_0055BDF4;
    case 340u: goto L_0055BE10;
    case 341u: goto L_0055BE18;
    case 342u: goto L_0055BE20;
    case 343u: goto L_0055BE6C;
    case 344u: goto L_0055BEB0;
    case 345u: goto L_0055BED4;
    case 346u: goto L_0055BEE4;
    case 347u: goto L_0055BF10;
    case 348u: goto L_0055BF40;
    case 349u: goto L_0055BF78;
    case 350u: goto L_0055BFA8;
    case 351u: goto L_0055BFD0;
    case 352u: goto L_0055BFF8;
    default: bad_entry(c, 0x00558000u); return;
    }
L_00558000:
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00557FF4u | kUnwind; return; } [[clang::musttail]] return unit_0115(c, 354u, depth); } }
L_00558010:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[23].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[30].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_005580C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00558198; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0055804C:
    st32((c.r[30].w[0] + 428u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558060u); set32(c.r[6], c.r[30].w[0] + 428u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00558060u) [[unlikely]] return; }
L_00558060:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 428u)));  goto L_00558090; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558080u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558080u) [[unlikely]] return; }
L_00558080:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005580A8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[23], c.r[23].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
L_005580A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055804Cu | kUnwind; return; } goto L_0055804C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558198; } }
L_005580C0:
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00558198; } }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] - 8u);  if (t) { goto L_00558160; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_005580F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_005580F8; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_005580F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00558160; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 224u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00558108:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[6].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[6].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558108u | kUnwind; return; } goto L_00558108; } }
    c.budget -= 1;
L_00558160:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00558198; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 224u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0055817C:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055817Cu | kUnwind; return; } goto L_0055817C; } }
L_00558198:
    set32(c.r[2], ld32((c.r[30].w[0] + 224u)));
    st32((c.r[30].w[0] + 312u), c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[30].w[0] + 308u), c.r[2].w[0]);  if (t) { goto L_005589F8; } }
    st32((c.r[30].w[0] + 424u), 0u);
    set32(c.r[6], c.r[30].w[0] + 420u);
    st32((c.r[30].w[0] + 420u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005581C4u); set32(c.r[7], c.r[30].w[0] + 416u);  if (depth < kMaxDepth) unit_0116(c, 191u, depth + 1u); else { c.pc = 0x0055A120u; return; } if (c.pc != 0x005581C4u) [[unlikely]] return; }
L_005581C4:
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005581EC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005581EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[30].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005581ECu); set32(c.r[7], c.r[30].w[0] + 416u);  if (depth < kMaxDepth) unit_0116(c, 191u, depth + 1u); else { c.pc = 0x0055A120u; return; } if (c.pc != 0x005581ECu) [[unlikely]] return; }
L_005581EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[22].d[0] & 2ull;  goto L_0055822C; }
    set32(c.r[4], ld32((c.r[30].w[0] + 416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[5], ld32((c.r[30].w[0] + 420u)));
    set32(c.r[7], c.r[30].w[0] + 272u);
    st32((c.r[30].w[0] + 276u), c.r[4].w[0]);
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558224u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x00558224u) [[unlikely]] return; }
L_00558224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005582B0; } }
L_0055822C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));  goto L_00558258; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 24u);  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558248u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558248u) [[unlikely]] return; }
L_00558248:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558258:
    set32(c.r[7], c.r[30].w[0] + 272u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558274u); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x00558274u) [[unlikely]] return; }
L_00558274:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_005582B0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005582B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[7], c.r[30].w[0] + 272u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005582ACu); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x005582ACu) [[unlikely]] return; }
L_005582AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_005582B0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  goto L_005582DC; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005582CCu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005582CCu) [[unlikely]] return; }
L_005582CC:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005582DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[30].w[0] + 424u)));  goto L_005584D8; }
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_005583F8; } }
    set32(c.r[16], ld32((c.r[30].w[0] + 224u)));
    c.budget -= 1;
L_005582F0:
    set32(c.r[4], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558300u); set32(c.r[6], c.r[30].w[0] + 412u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00558300u) [[unlikely]] return; }
L_00558300:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 412u)));  goto L_00558330; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558320u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558320u) [[unlikely]] return; }
L_00558320:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558330:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[30].w[0] + 424u)));  goto L_0055835C; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 33u);  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055834Cu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055834Cu) [[unlikely]] return; }
L_0055834C:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_0055835C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558368u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 254u, depth + 1u); else { c.pc = 0x0052F730u; return; } if (c.pc != 0x00558368u) [[unlikely]] return; }
L_00558368:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 412u)));  goto L_00558398; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558388u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558388u) [[unlikely]] return; }
L_00558388:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558398:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[30].w[0] + 412u)));
    st32((c.r[2].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[30].w[0] + 412u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005583B8u); set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_010B(c, 254u, depth + 1u); else { c.pc = 0x0052F730u; return; } if (c.pc != 0x005583B8u) [[unlikely]] return; }
L_005583B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_005583E8; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005583D8u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005583D8u) [[unlikely]] return; }
L_005583D8:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005583E8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005582F0u | kUnwind; return; } goto L_005582F0; } }
    c.budget -= 1;
L_005583F8:
    set32(c.r[2], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558418u); set32(c.r[4], ld32((c.r[30].w[0] + 424u)));  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x00558418u) [[unlikely]] return; }
L_00558418:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00558448; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558438u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558438u) [[unlikely]] return; }
L_00558438:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558448:
    c.budget -= 2;
    if (c.r[23].sd[0] <= 0) { set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  goto L_00558580; }
    set32(c.r[16], ld32((c.r[30].w[0] + 224u)));
    c.budget -= 1;
L_00558454:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558464u); set32(c.r[6], c.r[30].w[0] + 412u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00558464u) [[unlikely]] return; }
L_00558464:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 412u)));  goto L_00558494; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558484u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558484u) [[unlikely]] return; }
L_00558484:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558494:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 264u), 0u);  goto L_005584C0; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 33u);  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005584B0u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005584B0u) [[unlikely]] return; }
L_005584B0:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005584C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558454u | kUnwind; return; } goto L_00558454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055857C; } }
L_005584D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005584E0u); set32(c.r[5], c.r[30].w[0] + 408u);  if (depth < kMaxDepth) unit_010B(c, 242u, depth + 1u); else { c.pc = 0x0052F580u; return; } if (c.pc != 0x005584E0u) [[unlikely]] return; }
L_005584E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 72u)));  goto L_00558510; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558500u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558500u) [[unlikely]] return; }
L_00558500:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558510:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 408u)));  goto L_00558568; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[30].w[0] + 408u)));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 1496u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055853Cu); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055853Cu) [[unlikely]] return; }
L_0055853C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00558574; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558558u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558558u) [[unlikely]] return; }
L_00558558:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558568:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558574u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00558574u) [[unlikely]] return; }
L_00558574:
    set32(c.r[2], ld32((c.r[30].w[0] + 424u)));
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0055857C:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_00558580:
    set32(c.r[5], c.r[30].w[0] + 404u);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 280u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558594u); st128((c.r[30].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_010B(c, 242u, depth + 1u); else { c.pc = 0x0052F580u; return; } if (c.pc != 0x00558594u) [[unlikely]] return; }
L_00558594:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[23].w[0] << 4);  goto L_005585C4; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005585B4u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005585B4u) [[unlikely]] return; }
L_005585B4:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005585C4:
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    c.budget -= 11;
    { const bool t = c.r[23].sd[0] <= 0; st32((c.r[30].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_00558718; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[30].w[0] + 224u)));
    c.budget -= 2;
L_005585F8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st128((c.r[30].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[30].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_00558618:
    ld128((c.r[30].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 404u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_005586F8; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00558650; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005586F8; } }
L_00558650:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558660u); set32(c.r[6], c.r[30].w[0] + 400u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00558660u) [[unlikely]] return; }
L_00558660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_0055868C; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 204u)));  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055867Cu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055867Cu) [[unlikely]] return; }
L_0055867C:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[30].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_0055868C:
    set32(c.r[2], ld32((c.r[30].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005586E8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_005586D0; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 208u)));
    c.budget -= 1;
L_005586A8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_005586C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_005586D0; } }
    c.budget -= 1;
L_005586C0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005586A8u | kUnwind; return; } goto L_005586A8; } }
L_005586D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005586E8; } }
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 4;
L_005586E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558618u | kUnwind; return; } goto L_00558618; } }
L_005586F8:
    set32(c.r[2], ld32((c.r[30].w[0] + 224u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[30].w[0] + 224u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 224u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005585F8u | kUnwind; return; } goto L_005585F8; }
    c.budget -= 1;
L_00558718:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 268u)));  goto L_005589FC; }
    set32(c.r[4], c.r[30].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558730u); set32(c.r[6], 0u + 108u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00558730u) [[unlikely]] return; }
L_00558730:
    set32(c.r[3], 0u + 108u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[30].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[6], c.r[30].w[0] + 420u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    st32((c.r[30].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    st32((c.r[30].w[0] + 332u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 312u), c.r[18].w[0]);
    st32((c.r[30].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558768u); set32(c.r[7], c.r[30].w[0] + 416u);  if (depth < kMaxDepth) unit_0116(c, 191u, depth + 1u); else { c.pc = 0x0055A120u; return; } if (c.pc != 0x00558768u) [[unlikely]] return; }
L_00558768:
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00558790; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00558790; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[30].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558790u); set32(c.r[7], c.r[30].w[0] + 416u);  if (depth < kMaxDepth) unit_0116(c, 191u, depth + 1u); else { c.pc = 0x0055A120u; return; } if (c.pc != 0x00558790u) [[unlikely]] return; }
L_00558790:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));  goto L_005587D0; }
    set32(c.r[4], ld32((c.r[30].w[0] + 416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[5], ld32((c.r[30].w[0] + 420u)));
    set32(c.r[7], c.r[30].w[0] + 272u);
    st32((c.r[30].w[0] + 276u), c.r[4].w[0]);
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005587C8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x005587C8u) [[unlikely]] return; }
L_005587C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00558828; } }
L_005587D0:
    set32(c.r[7], c.r[30].w[0] + 272u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005587ECu); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x005587ECu) [[unlikely]] return; }
L_005587EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00558828; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00558828; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[7], c.r[30].w[0] + 272u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[8], c.r[30].w[0] + 424u);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558824u); c.r[6].d[0] = c.r[2].d[0] | 2ull;  if (depth < kMaxDepth) unit_010E(c, 45u, depth + 1u); else { c.pc = 0x005384F0u; return; } if (c.pc != 0x00558824u) [[unlikely]] return; }
L_00558824:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00558828:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00558854; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558844u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558844u) [[unlikely]] return; }
L_00558844:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558854:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_005589A8; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    c.budget -= 1;
L_00558860:
    set32(c.r[4], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558870u); set32(c.r[6], c.r[30].w[0] + 396u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00558870u) [[unlikely]] return; }
L_00558870:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 396u)));  goto L_005588A0; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558890u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558890u) [[unlikely]] return; }
L_00558890:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005588A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 208u)));  goto L_005588CC; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 33u);  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005588BCu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005588BCu) [[unlikely]] return; }
L_005588BC:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005588CC:
    set32(c.r[4], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005588DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 254u, depth + 1u); else { c.pc = 0x0052F730u; return; } if (c.pc != 0x005588DCu) [[unlikely]] return; }
L_005588DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 396u)));  goto L_0055890C; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005588FCu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005588FCu) [[unlikely]] return; }
L_005588FC:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_0055890C:
    st32((c.r[2].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[30].w[0] + 396u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055891Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_010C(c, 163u, depth + 1u); else { c.pc = 0x00532630u; return; } if (c.pc != 0x0055891Cu) [[unlikely]] return; }
L_0055891C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 208u)));  goto L_0055894C; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055893Cu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055893Cu) [[unlikely]] return; }
L_0055893C:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_0055894C:
    set32(c.r[6], ld32((c.r[30].w[0] + 396u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055895Cu); set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_010B(c, 254u, depth + 1u); else { c.pc = 0x0052F730u; return; } if (c.pc != 0x0055895Cu) [[unlikely]] return; }
L_0055895C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 208u)));  goto L_0055898C; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055897Cu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055897Cu) [[unlikely]] return; }
L_0055897C:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_0055898C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[30].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 208u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558860u | kUnwind; return; } goto L_00558860; }
    c.budget -= 1;
L_005589A8:
    set32(c.r[2], ld32((c.r[30].w[0] + 424u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005589C8u); set32(c.r[4], ld32((c.r[30].w[0] + 424u)));  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x005589C8u) [[unlikely]] return; }
L_005589C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_005589F8; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005589E8u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005589E8u) [[unlikely]] return; }
L_005589E8:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_005589F8:
    set32(c.r[2], ld32((c.r[30].w[0] + 268u)));
    c.budget -= 1;
L_005589FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 240u)));  goto L_00558A44; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558A14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0116(c, 68u, depth + 1u); else { c.pc = 0x00558B30u; return; } if (c.pc != 0x00558A14u) [[unlikely]] return; }
L_00558A14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00558AD8; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558A34u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558A34u) [[unlikely]] return; }
L_00558A34:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00558AD8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00558AD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 1;
L_00558A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00558AC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558A80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0116(c, 68u, depth + 1u); else { c.pc = 0x00558B30u; return; } if (c.pc != 0x00558A80u) [[unlikely]] return; }
L_00558A80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 304u)));  goto L_00558AB0; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558AA0u); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558AA0u) [[unlikely]] return; }
L_00558AA0:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558AF4; } }
L_00558AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 4;
L_00558AC0:
    set32(c.r[2], ld32((c.r[30].w[0] + 240u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 304u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558A60u | kUnwind; return; } goto L_00558A60; }
    c.budget -= 1;
L_00558AD8:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 388u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00558AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558AECu); set32(c.r[4], ld32((c.r[30].w[0] + 384u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558AECu) [[unlikely]] return; }
L_00558AEC:
    st8((c.r[30].w[0] + 388u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00558AF4:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.budget -= 1;
L_00558AF8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_00558B30:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 376u)));  goto L_00558B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00558C04; } }
L_00558B44:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00558B70; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 380u)));
    c.budget -= 1;
L_00558B50:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00558B70; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558B50u | kUnwind; return; } goto L_00558B50; } }
    c.budget -= 1;
L_00558B70:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 392u)));  goto L_00558B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00558C04; } }
L_00558B84:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00558BD0; } }
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 2;
L_00558BA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558BA8u | kUnwind; return; } goto L_00558BA8; }
L_00558BD0:
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00558C00; } }
L_00558BE0:
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558BE0u | kUnwind; return; } goto L_00558BE0; } }
    c.budget -= 1;
L_00558C00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00558C04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00558C10:
    c.budget -= 2;
    { set32(c.r[6], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558B30u | kUnwind; return; } goto L_00558B30; }
L_00558C20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558C60u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00558C60u) [[unlikely]] return; }
L_00558C60:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00558D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20720u)));
    set32(c.r[4], c.r[4].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00558D00; } }
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 2;
L_00558C88:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00558CF8; }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00558CF4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00558CF4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00558CF4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00558CF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00558CCC; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_00558CCC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00558CE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558CDCu); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558CDCu) [[unlikely]] return; }
L_00558CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00558DE0; } }
L_00558CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558CECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0112(c, 46u, depth + 1u); else { c.pc = 0x005487C0u; return; } if (c.pc != 0x00558CECu) [[unlikely]] return; }
L_00558CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00558D00; } }
L_00558CF4:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_00558CF8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558C88u | kUnwind; return; } goto L_00558C88; }
L_00558D00:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  goto L_00558DD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558D28; } }
L_00558D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558D18u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558D18u) [[unlikely]] return; }
L_00558D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558D20u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00558D20u) [[unlikely]] return; }
L_00558D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558D28u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00558D28u) [[unlikely]] return; }
L_00558D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 20752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20752u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00558D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20756u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00558D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00558D60; } }
L_00558D58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00558D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558D10u | kUnwind; return; } goto L_00558D10; } }
    st32((c.r[6].w[0] + 12u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[6].w[0] + 16u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[6].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    st32((c.r[6].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[6].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[6].w[0]);
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558DCCu); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558DCCu) [[unlikely]] return; }
L_00558DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00558DE0; } }
L_00558DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558DDCu);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00558DDCu) [[unlikely]] return; }
L_00558DDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00558DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00558E10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[22].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00558E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00558F8C; } }
L_00558E4C:
    st32((c.r[22].w[0]), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0] + 32u)));  goto L_00558E6C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_00558F88; } }
L_00558E6C:
    set32(c.r[2], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00558E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00558F8C; } }
L_00558E80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00558F68; } }
    c.r[18].d[0] = c.r[20].d[0] & 64ull;
    c.r[17].d[0] = c.r[20].d[0] & 24ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
L_00558E94:
    c.r[16].d[0] = c.r[2].d[0] & 120ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_00558EB8; } }
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_00558F58; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00558F54; } }
    c.budget -= 1;
L_00558EB8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00558F54; } }
    c.r[2].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00558F40; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558EDCu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_010B(c, 224u, depth + 1u); else { c.pc = 0x0052F2E0u; return; } if (c.pc != 0x00558EDCu) [[unlikely]] return; }
L_00558EDC:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00558F54; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  goto L_00558EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00558F90; } }
L_00558EF8:
    c.r[2].d[0] = c.r[4].d[0] & 24ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00558F3C; } }
    set32(c.r[3], 0u - 25u);
    c.r[2].d[0] = c.r[16].d[0] & 24ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 140u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558F20u); set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (depth < kMaxDepth) unit_010B(c, 227u, depth + 1u); else { c.pc = 0x0052F340u; return; } if (c.pc != 0x00558F20u) [[unlikely]] return; }
L_00558F20:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00558F54; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00558F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558F8C; } }
L_00558F3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00558F40:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[3].w[0]);  if (t) { goto L_00558F8C; } }
L_00558F54:
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00558F58:
    set32(c.r[2], c.r[21].w[0] + 32u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00558E94u | kUnwind; return; } goto L_00558E94; }
    c.budget -= 1;
L_00558F68:
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 75u);  goto L_00558F80; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00558F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00558F8C; } }
L_00558F88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00558F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00558F90:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00558FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 21892u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00558FF0u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00558FF0u) [[unlikely]] return; }
L_00558FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00559010; } }
L_00558FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559000u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559000u) [[unlikely]] return; }
L_00559000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559008u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00559008u) [[unlikely]] return; }
L_00559008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559010u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00559010u) [[unlikely]] return; }
L_00559010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00559040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00559040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00559048; } }
L_00559040:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00559048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00558FF8u | kUnwind; return; } goto L_00558FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559058u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559058u) [[unlikely]] return; }
L_00559058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559060u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00559060u) [[unlikely]] return; }
L_00559060:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0055908C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 958u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055908Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055908Cu) [[unlikely]] return; }
L_0055908C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_005590A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005590A0u);  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x005590A0u) [[unlikely]] return; }
L_005590A0:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_005590A8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  goto L_005590D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 969u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005590CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005590CCu) [[unlikely]] return; }
L_005590CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_005590D0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  goto L_005590F8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 974u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005590F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005590F4u) [[unlikely]] return; }
L_005590F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_005590F8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 80u)));  goto L_00559120; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 979u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055911Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055911Cu) [[unlikely]] return; }
L_0055911C:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_00559120:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00559148; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 984u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559144u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00559144u) [[unlikely]] return; }
L_00559144:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00559148:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559154u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0115(c, 256u, depth + 1u); else { c.pc = 0x00557080u; return; } if (c.pc != 0x00559154u) [[unlikely]] return; }
L_00559154:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00559184; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_005591C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559174u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559174u) [[unlikely]] return; }
L_00559174:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005591C8; } }
L_00559184:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));  goto L_005591B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 995u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005591ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005591ACu) [[unlikely]] return; }
L_005591AC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 1;
L_005591B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005591C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005591C0u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005591C0u) [[unlikely]] return; }
L_005591C0:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005591C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005591E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005591F0u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005591F0u) [[unlikely]] return; }
L_005591F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00559210; } }
L_005591F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559200u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559200u) [[unlikely]] return; }
L_00559200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559208u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0104(c, 257u, depth + 1u); else { c.pc = 0x00512D40u; return; } if (c.pc != 0x00559208u) [[unlikely]] return; }
L_00559208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559210u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00559210u) [[unlikely]] return; }
L_00559210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00559240; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00559240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00559248; } }
L_00559240:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00559248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005591F8u | kUnwind; return; } goto L_005591F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559258u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559258u) [[unlikely]] return; }
L_00559258:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00559270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 21892u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005592A4u); st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x005592A4u) [[unlikely]] return; }
L_005592A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005592B4u); st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x005592B4u) [[unlikely]] return; }
L_005592B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 5u);  if (t) { goto L_005592CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005592C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x005592C4u) [[unlikely]] return; }
L_005592C4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_005592CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 876u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005592F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x005592F0u) [[unlikely]] return; }
L_005592F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0055931C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_0055945C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055930Cu); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0055930Cu) [[unlikely]] return; }
L_0055930C:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055945C; } }
L_0055931C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00559330; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559330u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x00559330u) [[unlikely]] return; }
L_00559330:
    set32(c.r[19], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055933Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055933Cu) [[unlikely]] return; }
L_0055933C:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055934Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x0055934Cu) [[unlikely]] return; }
L_0055934C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055935Cu); set32(c.r[5], c.r[5].w[0] - 19008u);  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x0055935Cu) [[unlikely]] return; }
L_0055935C:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 303u, depth + 1u); else { c.pc = 0x00537E90u; return; } if (c.pc != 0x00559378u) [[unlikely]] return; }
L_00559378:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));  goto L_00559444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559388u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x00559388u) [[unlikely]] return; }
L_00559388:
    set32(c.r[16], c.r[2].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x00559394u) [[unlikely]] return; }
L_00559394:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 906u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005593BCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x005593BCu) [[unlikely]] return; }
L_005593BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_005593E8; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_0055945C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005593D8u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005593D8u) [[unlikely]] return; }
L_005593D8:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055945C; } }
L_005593E8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005593F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x005593F8u) [[unlikely]] return; }
L_005593F8:
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559404u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x00559404u) [[unlikely]] return; }
L_00559404:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x00559414u) [[unlikely]] return; }
L_00559414:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559424u); set32(c.r[5], c.r[5].w[0] - 19008u);  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x00559424u) [[unlikely]] return; }
L_00559424:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 303u, depth + 1u); else { c.pc = 0x00537E90u; return; } if (c.pc != 0x00559440u) [[unlikely]] return; }
L_00559440:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 1;
L_00559444:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055945C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559454u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00559454u) [[unlikely]] return; }
L_00559454:
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055945C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00559480:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + 32u);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 56u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_005594F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055951C; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  goto L_00559520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_005596B8; } }
L_0055951C:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00559520:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00559674; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0055962C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559544u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00559544u) [[unlikely]] return; }
L_00559544:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 56u)));  goto L_00559554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_005596BC; } }
L_00559554:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 300u)));  goto L_00559564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_005596B8; } }
L_00559564:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00559570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00559570u) [[unlikely]] return; }
L_00559570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559628; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055958C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005595A8; } }
L_0055958C:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005595A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_005595A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00559628; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_005595D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005596B8; } }
L_005595D0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_00559608; }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00559604; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00559604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_005596B8; } }
L_00559604:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_00559608:
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 384u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_005596B8; } }
L_00559628:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0055962C:
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559660u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x00559660u) [[unlikely]] return; }
L_00559660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005596B8; } }
L_00559670:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00559674:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 837u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005596B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005596B4u) [[unlikely]] return; }
L_005596B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005596B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_005596BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005596D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559700u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00559700u) [[unlikely]] return; }
L_00559700:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00559710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00559880; } }
L_00559710:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 660u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055972Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055972Cu) [[unlikely]] return; }
L_0055972C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0055973C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055987C; } }
L_0055973C:
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559754u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00559754u) [[unlikely]] return; }
L_00559754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00559764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_00559764:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559778u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00559778u) [[unlikely]] return; }
L_00559778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_00559788; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_00559788:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00559800; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005597D8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005597B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055987C; } }
L_005597B0:
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005597C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005597C0u) [[unlikely]] return; }
L_005597C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 56u)));  goto L_005597D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_005597D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00559878; } }
L_005597D8:
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005597E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005597E8u) [[unlikely]] return; }
L_005597E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 56u)));  goto L_005597F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_005597F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00559878; } }
L_00559800:
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559814u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00559814u) [[unlikely]] return; }
L_00559814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00559824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_00559824:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 723u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559840u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x00559840u) [[unlikely]] return; }
L_00559840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00559850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055987C; } }
L_00559850:
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559868u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00559868u) [[unlikely]] return; }
L_00559868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00559878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055987C; } }
L_00559878:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055987C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00559880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00559890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005598C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 634u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005598C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005598C4u) [[unlikely]] return; }
L_005598C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00559900; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005598FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 639u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005598FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005598FCu) [[unlikely]] return; }
L_005598FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_00559900:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 642u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055991Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055991Cu) [[unlikely]] return; }
L_0055991C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00559930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055996C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055995Cu);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0055995Cu) [[unlikely]] return; }
L_0055995C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0055996C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005599AC; } }
L_0055996C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_005599A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005599AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559990u);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x00559990u) [[unlikely]] return; }
L_00559990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005599A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005599AC; } }
L_005599A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_005599A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005599AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005599C0:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_005599E0:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[8] = 0u;
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[7] = ld32((c.r[5].w[0] + 16u));
    c.facc = fp::add(c.f[8], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[0] = fp::sub(c.f[7], c.f[4]);
    c.facc = fp::add(c.f[8], c.f[4]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[5] = ld32((c.r[5].w[0] + 20u));
    c.facc = fp::add(c.f[8], c.f[1]);
    c.f[0] = fp::sub(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.f[5], c.f[1]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.facc = fp::add(c.f[8], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    c.facc = fp::add(c.f[8], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.facc = fp::add(c.f[8], c.f[5]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.facc = fp::add(c.f[8], c.f[4]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.facc = fp::add(c.f[8], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.facc = fp::add(c.f[8], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::add(c.f[8], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.facc = fp::add(c.f[8], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_00559AB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559B00u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00559B00u) [[unlikely]] return; }
L_00559B00:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559B14u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00559B14u) [[unlikely]] return; }
L_00559B14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559B24u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x00559B24u) [[unlikely]] return; }
L_00559B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559B2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00559B2Cu) [[unlikely]] return; }
L_00559B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559B34u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 433u, depth + 1u); else { c.pc = 0x003AF788u; return; } if (c.pc != 0x00559B34u) [[unlikely]] return; }
L_00559B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);  goto L_00559B60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { goto L_00559B7C; } }
L_00559B60:
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[16].d[0] & 255ull;  goto L_00559B80; }
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 1;
L_00559B7C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_00559B80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] - 20000u);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 19488u);
    set32(c.r[18], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.r[12].d[0] = 0ull + 0ull;
    c.f[20] = c.r[2].w[0];
    set32(c.r[9], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19744u);
    c.f[1] = ld32((c.r[21].w[0]));
    c.budget -= 18;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);  if (t) { goto L_00559C40; } }
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_00559BD0:
    set32(c.r[6], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00559BF0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00559BF0:
    c.r[6].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_00559C30; }
    set32(c.r[6], c.r[12].w[0] << 3);
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[19], 0u + 2u);  goto L_00559C28; }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00559C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00559C6C; } }
L_00559C30:
    c.r[6].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00559BD0u | kUnwind; return; } goto L_00559BD0; } }
    c.budget -= 1;
L_00559C40:
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[8], ld32((c.r[10].w[0] + 4u)));  if (t) { goto L_00559C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00559C68; } }
L_00559C64:
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_00559C68:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00559C6C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00559C8C; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[6].w[0] + 144u), c.r[7].w[0]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
L_00559C8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 19744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[29].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 144u), c.r[7].w[0]);  if (t) { goto L_00559CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[1], c.f[3]);  if (t) { goto L_00559CE8; } }
L_00559CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 6;
L_00559CE8:
    c.f[1] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);  goto L_00559D00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[3]);  if (t) { goto L_00559D14; } }
L_00559D00:
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 5;
L_00559D14:
    fpu_div(c, 22u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[21].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D30u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00559D30u) [[unlikely]] return; }
L_00559D30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x00559D3Cu) [[unlikely]] return; }
L_00559D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00559D44u) [[unlikely]] return; }
L_00559D44:
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D5Cu); st32((c.r[2].w[0]), c.f[22]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00559D5Cu) [[unlikely]] return; }
L_00559D5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[21].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D70u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00559D70u) [[unlikely]] return; }
L_00559D70:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x00559D7Cu) [[unlikely]] return; }
L_00559D7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559D88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x00559D88u) [[unlikely]] return; }
L_00559D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19472u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559DA4u); set32(c.r[4], c.r[2].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x00559DA4u) [[unlikely]] return; }
L_00559DA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559DB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x00559DB0u) [[unlikely]] return; }
L_00559DB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559DC0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x00559DC0u) [[unlikely]] return; }
L_00559DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559DC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00559DC8u) [[unlikely]] return; }
L_00559DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] - 19616u);
    c.f[1] = fp::sub(c.f[2], c.f[21]);
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[4], 0u + 3u);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[1] = fp::sqrt(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[21]));
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[20]);
    c.budget -= 16;
L_00559E08:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00559E70; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00559E48; } }
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[20]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.f[2] = fp::sqrt(c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[2]);  if (t) { goto L_00559E70; } }
    c.budget -= 1;
L_00559E48:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00559E68; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00559E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[1]);  if (t) { goto L_00559E70; } }
    c.budget -= 1;
L_00559E68:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 2;
L_00559E70:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00559E08u | kUnwind; return; } goto L_00559E08; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00559EC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x005379F0u | kUnwind; return; } [[clang::musttail]] return unit_010D(c, 278u, depth); }
L_00559ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C7D0u | kUnwind; return; } [[clang::musttail]] return unit_010B(c, 38u, depth); }
L_00559EF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C7C0u | kUnwind; return; } [[clang::musttail]] return unit_010B(c, 37u, depth); }
L_00559F10:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[9].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C8F0u | kUnwind; return; } [[clang::musttail]] return unit_010B(c, 45u, depth); }
L_00559F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00559F80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19200u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00559F64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19248u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00559F64:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00559F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00559F7Cu) [[unlikely]] return; }
L_00559F7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00559F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00559F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00559FE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19152u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00559FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00559FC4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00559FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00559FDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00559FDCu) [[unlikely]] return; }
L_00559FDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00559FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00559FF0:
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0055A004; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0055A004:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0055A030; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0055A014:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0055A030; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A014u | kUnwind; return; } goto L_0055A014; } }
L_0055A030:
    set32(c.r[3], ld32((c.r[6].w[0] + 336u)));
    set32(c.r[2], c.r[6].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0055A058; } }
L_0055A040:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0055A058; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A040u | kUnwind; return; } goto L_0055A040; } }
    c.budget -= 1;
L_0055A058:
    set32(c.r[5], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 72u)));
    set32(c.r[4], c.r[8].w[0] << 11);
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] << 19);
    c.r[5].d[0] = c.r[9].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0055A090:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0055A0A0; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0055A0A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0055A0D0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0055A0B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0055A0D0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A0B0u | kUnwind; return; } goto L_0055A0B0; } }
    c.budget -= 1;
L_0055A0D0:
    c.r[2].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 72u)));  goto L_0055A0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), 0u);  if (t) { goto L_0055A0F8; } }
L_0055A0E4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0055A0F8; } }
    st32((c.r[5].w[0] + 72u), 0u);
    c.budget -= 1;
L_0055A0F8:
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[3], c.r[7].w[0] << 11);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] << 19);
    c.r[4].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 32u), c.r[2].w[0]);  c.pc = t; return; }
L_0055A120:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0055A15C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A214; } }
L_0055A15C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 136u)));  goto L_0055A16C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A214; } }
L_0055A16C:
    set32(c.r[2], c.r[20].w[0] + 136u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055A210; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_0055A17C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0055A198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A18Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0055A18Cu) [[unlikely]] return; }
L_0055A18C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A198u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x0055A198u) [[unlikely]] return; }
L_0055A198:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A1A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055A1A4u) [[unlikely]] return; }
L_0055A1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055A1D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055A200; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A1C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055A1C4u) [[unlikely]] return; }
L_0055A1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055A1FC; } }
    c.budget -= 1;
L_0055A1D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0055A1E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0055A1E0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055A214; }
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A214; } }
L_0055A1FC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0055A200:
    set32(c.r[2], c.r[20].w[0] + 136u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A17Cu | kUnwind; return; } goto L_0055A17C; }
    c.budget -= 1;
L_0055A210:
    set32(c.r[2], 0u + 23u);
    c.budget -= 1;
L_0055A214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0055A240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055A26C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A2FC; } }
L_0055A26C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 136u)));  goto L_0055A27C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A2FC; } }
L_0055A27C:
    set32(c.r[2], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055A2F8; } }
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0055A28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A294u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055A294u) [[unlikely]] return; }
L_0055A294:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055A2E8; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 3480u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A2E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055A2E0u) [[unlikely]] return; }
L_0055A2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055A2FC; } }
L_0055A2E8:
    set32(c.r[2], c.r[18].w[0] + 136u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A28Cu | kUnwind; return; } goto L_0055A28C; }
    c.budget -= 1;
L_0055A2F8:
    set32(c.r[2], 0u + 23u);
    c.budget -= 1;
L_0055A2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055A320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0055A35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A41C; } }
L_0055A35C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055A41C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0055A378; } }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0055A384; }
L_0055A378:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A41C; } }
L_0055A384:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A394u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_010D(c, 299u, depth + 1u); else { c.pc = 0x00537DE0u; return; } if (c.pc != 0x0055A394u) [[unlikely]] return; }
L_0055A394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0055A3A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_0055A41C; } }
L_0055A3A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 276u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 3397u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A3C4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055A3C4u) [[unlikely]] return; }
L_0055A3C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055A3DC; } }
    st32((c.r[16].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
L_0055A3DC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0] + 268u), c.r[18].w[0]);  goto L_0055A3EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055A41C; } }
L_0055A3EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A3FCu); st32((c.r[16].w[0] + 272u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0055A3FCu) [[unlikely]] return; }
L_0055A3FC:
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[3], c.r[20].w[0] + 136u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 140u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 8;
L_0055A41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0055A440:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 212u)));  goto L_0055A450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A458; } }
L_0055A450:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0055A458:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055A460:
    st32((c.r[4].w[0] + 212u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0055A470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 31u);  goto L_0055A48C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A48Cu); set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_010E(c, 51u, depth + 1u); else { c.pc = 0x005385C0u; return; } if (c.pc != 0x0055A48Cu) [[unlikely]] return; }
L_0055A48C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0055A4A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0055A4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A56C; } }
L_0055A4E8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 16u)));  goto L_0055A554; }
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A508u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 51u, depth + 1u); else { c.pc = 0x005385C0u; return; } if (c.pc != 0x0055A508u) [[unlikely]] return; }
L_0055A508:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[21].w[0] + 172u)));  goto L_0055A548; }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0055A544; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055A550; } }
L_0055A544:
    set32(c.r[2], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 1;
L_0055A548:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 2;
L_0055A550:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_0055A554:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A56Cu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 54u, depth + 1u); else { c.pc = 0x00538640u; return; } if (c.pc != 0x0055A56Cu) [[unlikely]] return; }
L_0055A56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0055A590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 31u);  goto L_0055A5AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A5ACu); set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_010E(c, 57u, depth + 1u); else { c.pc = 0x005386C0u; return; } if (c.pc != 0x0055A5ACu) [[unlikely]] return; }
L_0055A5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0055A5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 31u);  goto L_0055A5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A5DCu); set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_010E(c, 60u, depth + 1u); else { c.pc = 0x00538700u; return; } if (c.pc != 0x0055A5DCu) [[unlikely]] return; }
L_0055A5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0055A5F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055A604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A61C; } }
L_0055A604:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  goto L_0055A614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A61C; } }
L_0055A614:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0055A61C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055A630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055A654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A6C0; } }
L_0055A654:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  goto L_0055A664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A6C0; } }
L_0055A664:
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] & 4ull;  goto L_0055A678; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A6C0; } }
L_0055A678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_0055A69C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A694u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0116(c, 189u, depth + 1u); else { c.pc = 0x0055A090u; return; } if (c.pc != 0x0055A694u) [[unlikely]] return; }
L_0055A694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0055A6BC; } }
L_0055A69C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A6B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 207u, depth + 1u); else { c.pc = 0x00546880u; return; } if (c.pc != 0x0055A6B4u) [[unlikely]] return; }
L_0055A6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0055A6C4; } }
L_0055A6BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055A6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0055A6C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0055A6D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055A718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A804; } }
L_0055A718:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055A804; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[19].d[0] = c.r[20].d[0] + 0ull;  goto L_0055A734; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A804; } }
L_0055A734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0055A740; } }
L_0055A73C:
    c.budget -= 1;
L_0055A740:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0055A768; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A73Cu | kUnwind; return; } goto L_0055A73C; }
    c.budget -= 1;
L_0055A768:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[18], ld32((c.r[21].w[0] + 124u)));  goto L_0055A778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A804; } }
L_0055A778:
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0055A800; } }
    set32(c.r[16], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0055A788:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0055A798; } }
    set32(c.r[17], c.r[18].w[0] - 4u);
    c.budget -= 2;
L_0055A798:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_0055A7F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A7ACu);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055A7ACu) [[unlikely]] return; }
L_0055A7AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0055A7F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A7C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 295u, depth + 1u); else { c.pc = 0x00537CB0u; return; } if (c.pc != 0x0055A7C4u) [[unlikely]] return; }
L_0055A7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055A7F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A7E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055A7E8u) [[unlikely]] return; }
L_0055A7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A804; } }
L_0055A7F0:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0055A7F4:
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A788u | kUnwind; return; } goto L_0055A788; } }
L_0055A800:
    set32(c.r[2], 0u + 87u);
    c.budget -= 1;
L_0055A804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
L_0055A824:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0055A830:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055A878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055A964; } }
L_0055A878:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055A964; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[19].d[0] = c.r[20].d[0] + 0ull;  goto L_0055A894; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A964; } }
L_0055A894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0055A8A0; } }
L_0055A89C:
    c.budget -= 1;
L_0055A8A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0055A8C8; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A89Cu | kUnwind; return; } goto L_0055A89C; }
    c.budget -= 1;
L_0055A8C8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[18], ld32((c.r[21].w[0] + 124u)));  goto L_0055A8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055A964; } }
L_0055A8D8:
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0055A960; } }
    set32(c.r[16], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0055A8E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0055A8F8; } }
    set32(c.r[17], c.r[18].w[0] - 4u);
    c.budget -= 2;
L_0055A8F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_0055A954; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A90Cu);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055A90Cu) [[unlikely]] return; }
L_0055A90C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0055A950; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A924u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 295u, depth + 1u); else { c.pc = 0x00537CB0u; return; } if (c.pc != 0x0055A924u) [[unlikely]] return; }
L_0055A924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055A950; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055A948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055A948u) [[unlikely]] return; }
L_0055A948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055A964; } }
L_0055A950:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0055A954:
    set32(c.r[2], c.r[21].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055A8E8u | kUnwind; return; } goto L_0055A8E8; } }
L_0055A960:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055A964:
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
L_0055A990:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00538190u | kUnwind; return; } [[clang::musttail]] return unit_010E(c, 15u, depth); }
L_0055A9A0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005381D0u | kUnwind; return; } [[clang::musttail]] return unit_010E(c, 18u, depth); }
L_0055A9B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00538130u | kUnwind; return; } [[clang::musttail]] return unit_010E(c, 11u, depth); }
L_0055A9C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00538160u | kUnwind; return; } [[clang::musttail]] return unit_010E(c, 13u, depth); }
L_0055A9D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0055A9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AA88; } }
L_0055A9F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AA04u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_010E(c, 30u, depth + 1u); else { c.pc = 0x00538350u; return; } if (c.pc != 0x0055AA04u) [[unlikely]] return; }
L_0055AA04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0055AA14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055AA8C; } }
L_0055AA14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 160u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 3001u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AA34u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055AA34u) [[unlikely]] return; }
L_0055AA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055AA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AA44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 150u, depth + 1u); else { c.pc = 0x00555620u; return; } if (c.pc != 0x0055AA44u) [[unlikely]] return; }
L_0055AA44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0055AA48:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  goto L_0055AA58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055AA88; } }
L_0055AA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AA60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 149u, depth + 1u); else { c.pc = 0x00555610u; return; } if (c.pc != 0x0055AA60u) [[unlikely]] return; }
L_0055AA60:
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[18].w[0] + 112u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 10;
L_0055AA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055AA8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055AAA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055AAB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055AAF8; } }
L_0055AAB4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_0055AAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AAF8; } }
L_0055AAC4:
    set32(c.r[2], c.r[4].w[0] + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0055AAF0; } }
L_0055AAD0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055AAD0u | kUnwind; return; } goto L_0055AAD0; } }
    c.budget -= 1;
L_0055AAF0:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055AAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055AB00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_0055AB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AC84; } }
L_0055AB10:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_0055AB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AB6C; } }
L_0055AB20:
    set32(c.r[2], c.r[4].w[0] + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055AB34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055AB58; } }
L_0055AB34:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0055AB58; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0055AB40:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_0055AB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055AB58; } }
L_0055AB50:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055AB40u | kUnwind; return; } goto L_0055AB40; }
L_0055AB58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0055AB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055AB6C; } }
L_0055AB68:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055AB6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  goto L_0055AB7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_0055AC88; } }
L_0055AB7C:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[6].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[6].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[6].w[0] + 40u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 64u));
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[6].w[0] + 48u), c.f[2]);
    st32((c.r[6].w[0] + 52u), c.f[1]);
    st32((c.r[6].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[6].w[0] + 68u), c.f[2]);
    st32((c.r[6].w[0] + 72u), c.f[1]);
    st32((c.r[6].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[6].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[6].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[6].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 108u));
    st32((c.r[6].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    st32((c.r[6].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[6].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    st32((c.r[6].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 63;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_0055AC80; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0055AC80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055AC84:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_0055AC88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055AC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055ACAC; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], c.r[29].w[0] + 44u);  goto L_0055ACB4; }
L_0055ACAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055ADC8; } }
L_0055ACB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055ACBCu);  if (depth < kMaxDepth) unit_0117(c, 240u, depth + 1u); else { c.pc = 0x0055E6E0u; return; } if (c.pc != 0x0055ACBCu) [[unlikely]] return; }
L_0055ACBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0055ACCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0055ADCC; } }
L_0055ACCC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[16].w[0] + 48u), c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 63;
L_0055ADC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0055ADCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055ADE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 31u);  goto L_0055AE04; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AE04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055AE04u) [[unlikely]] return; }
L_0055AE04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0055AE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055AE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055AE68; } }
L_0055AE2C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0055AE3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AE68; } }
L_0055AE3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st32((c.r[6].w[0]), 0u);  if (t) { goto L_0055AE54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_0055AE68; } }
L_0055AE54:
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AE68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055AE68u) [[unlikely]] return; }
L_0055AE68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0055AE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055AEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055AF04; } }
L_0055AEB0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055AF04; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0055AECC; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055AF04; } }
L_0055AECC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AED8u); set32(c.r[5], c.r[5].w[0] - 19000u);  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055AED8u) [[unlikely]] return; }
L_0055AED8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 160u)));  goto L_0055AEF0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 160u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0055AF04; } }
L_0055AEF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055AF04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055AF04u) [[unlikely]] return; }
L_0055AF04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055AF20:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055AF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055AF78; } }
L_0055AF34:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 124u)));  goto L_0055AF44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055AF78; } }
L_0055AF44:
    set32(c.r[2], c.r[4].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0055AF70; } }
L_0055AF50:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055AF50u | kUnwind; return; } goto L_0055AF50; } }
    c.budget -= 1;
L_0055AF70:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055AF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055AF80:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055AF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055B038; } }
L_0055AF94:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055B038; }
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[2], c.r[4].w[0] + 124u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0055AFD0; } }
L_0055AFB0:
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055AFB0u | kUnwind; return; } goto L_0055AFB0; } }
    c.budget -= 1;
L_0055AFD0:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + 124u);  goto L_0055AFE4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B038; } }
L_0055AFE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055AFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055B018; } }
L_0055AFF4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0055B018; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0055B000:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_0055B010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055B018; } }
L_0055B010:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B000u | kUnwind; return; } goto L_0055B000; }
L_0055B018:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[6].w[0]), c.r[3].w[0]);  goto L_0055B028; }
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0055B028:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055B038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055B038; } }
L_0055B038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055B040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055B074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055B134; } }
L_0055B074:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055B134; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0055B090; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B134; } }
L_0055B090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0055B11C; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 124u)));  goto L_0055B0B0; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B11C; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 1;
L_0055B0B0:
    set32(c.r[2], c.r[19].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055B118; } }
L_0055B0BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055B0C8; } }
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_0055B0C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055B10C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055B0E0; } }
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_0055B0E0:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B0ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055B0ECu) [[unlikely]] return; }
L_0055B0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055B108; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055B11C; } }
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B11C; } }
L_0055B108:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0055B10C:
    set32(c.r[2], c.r[19].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B0BCu | kUnwind; return; } goto L_0055B0BC; } }
L_0055B118:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055B11C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055B134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055B134; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055B134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055B150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055B174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055B2DC; } }
L_0055B174:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], c.r[17].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B1B0; } }
L_0055B184:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0055B190; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_0055B190:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B1A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B1A0u) [[unlikely]] return; }
L_0055B1A0:
    set32(c.r[2], c.r[17].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B184u | kUnwind; return; } goto L_0055B184; } }
    c.budget -= 1;
L_0055B1B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[17].w[0] + 88u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B200; } }
L_0055B1C0:
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B1F0u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0117(c, 306u, depth + 1u); else { c.pc = 0x0055F8B0u; return; } if (c.pc != 0x0055B1F0u) [[unlikely]] return; }
L_0055B1F0:
    set32(c.r[2], c.r[17].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B1C0u | kUnwind; return; } goto L_0055B1C0; } }
    c.budget -= 1;
L_0055B200:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B250; } }
L_0055B210:
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B240u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0116(c, 88u, depth + 1u); else { c.pc = 0x00558FC0u; return; } if (c.pc != 0x0055B240u) [[unlikely]] return; }
L_0055B240:
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B210u | kUnwind; return; } goto L_0055B210; } }
    c.budget -= 1;
L_0055B250:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[17].w[0] + 100u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B298; } }
L_0055B260:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B28Cu); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0118(c, 184u, depth + 1u); else { c.pc = 0x005630B0u; return; } if (c.pc != 0x0055B28Cu) [[unlikely]] return; }
L_0055B28C:
    set32(c.r[2], c.r[17].w[0] + 100u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B260u | kUnwind; return; } goto L_0055B260; } }
L_0055B298:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B2D8; } }
L_0055B2A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0055B2B8; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 2;
L_0055B2B8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B2C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B2C8u) [[unlikely]] return; }
L_0055B2C8:
    set32(c.r[2], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B2A8u | kUnwind; return; } goto L_0055B2A8; } }
    c.budget -= 1;
L_0055B2D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055B2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055B2F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0055B3B0; } }
    set32(c.r[20], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], c.r[18].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0055B450; } }
L_0055B334:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0055B340; } }
    set32(c.r[19], c.r[20].w[0] - 4u);
    c.budget -= 1;
L_0055B340:
    set32(c.r[21], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0055B398; } }
L_0055B350:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0055B360; } }
    set32(c.r[5], c.r[21].w[0] - 4u);
    c.budget -= 2;
L_0055B360:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B378u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B378u) [[unlikely]] return; }
L_0055B378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], ld32((c.r[21].w[0])));  goto L_0055B388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0055B458; } }
L_0055B388:
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B350u | kUnwind; return; } goto L_0055B350; } }
    c.budget -= 1;
L_0055B398:
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[18].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B334u | kUnwind; return; } goto L_0055B334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B450; } }
L_0055B3B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055B418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0055B3F8; } }
L_0055B3C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0055B3D0; } }
    set32(c.r[5], c.r[19].w[0] - 4u);
    c.budget -= 1;
L_0055B3D0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B3E8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B3E8u) [[unlikely]] return; }
L_0055B3E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_0055B3F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B454; } }
L_0055B3F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055B410; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_0055B410:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B3C4u | kUnwind; return; } goto L_0055B3C4; } }
L_0055B418:
    set32(c.r[5], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0055B450; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0055B42C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 9;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B42Cu | kUnwind; return; } goto L_0055B42C; }
L_0055B450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055B454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0055B458:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055B480:
    c.r[2].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 172u)));  goto L_0055B4A0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 5;
L_0055B4A0:
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  c.pc = t; return; }
L_0055B4C0:
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0055B510; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055B510; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0055B4DC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0055B500; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FAC0000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 57599ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0055B51C; } }
L_0055B500:
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B4DCu | kUnwind; return; } goto L_0055B4DC; } }
    c.budget -= 1;
L_0055B510:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
L_0055B51C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055B530:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055B550; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_0055B550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055B560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055B608; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], c.r[17].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055B6A0; } }
L_0055B594:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055B5A0; } }
    set32(c.r[18], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_0055B5A0:
    set32(c.r[19], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0055B5F0; } }
L_0055B5B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0055B5C0; } }
    set32(c.r[5], c.r[19].w[0] - 4u);
    c.budget -= 2;
L_0055B5C0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B5D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B5D0u) [[unlikely]] return; }
L_0055B5D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_0055B5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0055B6A8; } }
L_0055B5E0:
    set32(c.r[2], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B5B0u | kUnwind; return; } goto L_0055B5B0; } }
    c.budget -= 1;
L_0055B5F0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B594u | kUnwind; return; } goto L_0055B594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B6A0; } }
L_0055B608:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055B668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0055B648; } }
L_0055B61C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0055B628; } }
    set32(c.r[5], c.r[18].w[0] - 4u);
    c.budget -= 1;
L_0055B628:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B638u) [[unlikely]] return; }
L_0055B638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_0055B648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055B6A4; } }
L_0055B648:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055B660; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_0055B660:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B61Cu | kUnwind; return; } goto L_0055B61C; } }
L_0055B668:
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0055B6A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0055B67C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B690u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B690u) [[unlikely]] return; }
L_0055B690:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B67Cu | kUnwind; return; } goto L_0055B67C; }
L_0055B6A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055B6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0055B6A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055B6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0055B6FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2495u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B6F4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055B6F4u) [[unlikely]] return; }
L_0055B6F4:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_0055B6FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2499u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B718u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055B718u) [[unlikely]] return; }
L_0055B718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0055B728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055B744; } }
L_0055B728:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B744u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055B744u) [[unlikely]] return; }
L_0055B744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0055B760:
    set32(c.r[29], c.r[29].w[0] - 848u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 812u), 0u);
    st32((c.r[29].w[0] + 808u), 0u);
    st32((c.r[29].w[0] + 804u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[29].w[0] + 220u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0055B7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055B7C8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 220u)));  goto L_0055B80C; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0055B808; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x03200000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0055B808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055B808:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_0055B80C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055B828; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_0055B828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = c.r[2].d[0] & 255ull;  goto L_0055B840; }
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_0055B840:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0055B8B8; }
    set32(c.r[4], c.r[29].w[0] + 844u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B854u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 106u, depth + 1u); else { c.pc = 0x00538C00u; return; } if (c.pc != 0x0055B854u) [[unlikely]] return; }
L_0055B854:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  goto L_0055B864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0117(c, 138u, depth); } }
L_0055B864:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 844u)));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B888u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 208u, depth + 1u); else { c.pc = 0x0052B5C0u; return; } if (c.pc != 0x0055B888u) [[unlikely]] return; }
L_0055B888:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055BB94; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1394u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B8B0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055B8B0u) [[unlikely]] return; }
L_0055B8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055B8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B8C0u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055B8C0u) [[unlikely]] return; }
L_0055B8C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_0055B924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B8D4u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055B8D4u) [[unlikely]] return; }
L_0055B8D4:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1410u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B8F4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055B8F4u) [[unlikely]] return; }
L_0055B8F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 28u)));  goto L_0055B908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055B908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B910u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0055B910u) [[unlikely]] return; }
L_0055B910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B91Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x0055B91Cu) [[unlikely]] return; }
L_0055B91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0055B960; } }
L_0055B924:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1421u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B940u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055B940u) [[unlikely]] return; }
L_0055B940:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055B954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055B954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B95Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0055B95Cu) [[unlikely]] return; }
L_0055B95C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0055B960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B968u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055B968u) [[unlikely]] return; }
L_0055B968:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055B9A0; } }
    set32(c.r[2], 0u + 92u);
    set32(c.r[3], 0u + 47u);
    set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 3;
L_0055B980:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0055B9A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055B9A0; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055B980u | kUnwind; return; } goto L_0055B980; }
L_0055B9A0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 844u);  goto L_0055BA84; }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0055BA2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B9BCu);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055B9BCu) [[unlikely]] return; }
L_0055B9BC:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], c.r[3].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1445u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055B9DCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055B9DCu) [[unlikely]] return; }
L_0055B9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_0055BA08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1448u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA00u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BA00u) [[unlikely]] return; }
L_0055BA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055BA08:
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 308u, depth + 1u); else { c.pc = 0x00537F60u; return; } if (c.pc != 0x0055BA14u) [[unlikely]] return; }
L_0055BA14:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 305u, depth + 1u); else { c.pc = 0x00537EE0u; return; } if (c.pc != 0x0055BA24u) [[unlikely]] return; }
L_0055BA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055BA80; } }
L_0055BA2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA44u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055BA44u) [[unlikely]] return; }
L_0055BA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_0055BA70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1459u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA68u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BA68u) [[unlikely]] return; }
L_0055BA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055BA70:
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0055BA80u) [[unlikely]] return; }
L_0055BA80:
    set32(c.r[4], c.r[29].w[0] + 844u);
    c.budget -= 1;
L_0055BA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BA8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 106u, depth + 1u); else { c.pc = 0x00538C00u; return; } if (c.pc != 0x0055BA8Cu) [[unlikely]] return; }
L_0055BA8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  goto L_0055BAE4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0055BAC4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1471u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BAC0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BAC0u) [[unlikely]] return; }
L_0055BAC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_0055BAC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1473u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BADCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BADCu) [[unlikely]] return; }
L_0055BADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055BAE4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 844u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BB04u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 208u, depth + 1u); else { c.pc = 0x0052B5C0u; return; } if (c.pc != 0x0055BB04u) [[unlikely]] return; }
L_0055BB04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0055BB78; }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0055BB3C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1486u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BB38u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BB38u) [[unlikely]] return; }
L_0055BB38:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_0055BB3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1488u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BB54u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BB54u) [[unlikely]] return; }
L_0055BB54:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1489u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BB70u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BB70u) [[unlikely]] return; }
L_0055BB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 137u, depth); } }
L_0055BB78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1492u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BB90u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055BB90u) [[unlikely]] return; }
L_0055BB90:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 1;
L_0055BB94:
    set32(c.r[5], c.r[29].w[0] + 840u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BBA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BBA8u) [[unlikely]] return; }
L_0055BBA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31560000u);
    c.r[2].d[0] = c.r[2].d[0] | 17734ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055BBD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 25u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BBD0:
    set32(c.r[5], c.r[29].w[0] + 836u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BBE4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BBE4u) [[unlikely]] return; }
L_0055BBE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00350000u);  goto L_0055BC0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 80u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BC0C:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);  goto L_0055BC24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 80u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BC24:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 836u)));  goto L_0055BC58; }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 804u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BC48u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BC48u) [[unlikely]] return; }
L_0055BC48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 1;
L_0055BC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0055BC88; }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BC78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x0055BC78u) [[unlikely]] return; }
L_0055BC78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_0055BC88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 92u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1551u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BCA0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055BCA0u) [[unlikely]] return; }
L_0055BCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055BCB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BCB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 255u, depth + 1u); else { c.pc = 0x00563E80u; return; } if (c.pc != 0x0055BCB0u) [[unlikely]] return; }
L_0055BCB0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0055BCB4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { st32((c.r[19].w[0] + 72u), c.r[20].w[0]);  goto L_0055BCC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BCC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    st32((c.r[20].w[0] + 208u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055BD58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BCF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BCF4u) [[unlikely]] return; }
L_0055BCF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1570u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BD1Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055BD1Cu) [[unlikely]] return; }
L_0055BD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0055BD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BD2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BD44u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BD44u) [[unlikely]] return; }
L_0055BD44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055BE58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BD58:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0055BD94; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1586u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BD7Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055BD7Cu) [[unlikely]] return; }
L_0055BD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0055BD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0055BE54; } }
L_0055BD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BD9Cu);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055BD9Cu) [[unlikely]] return; }
L_0055BD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 47u);  if (t) { goto L_0055BDA8; } }
L_0055BDA4:
    c.budget -= 1;
L_0055BDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055BDC0; } }
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055BDA4u | kUnwind; return; } goto L_0055BDA4; }
L_0055BDC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  goto L_0055BDD0; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0055BDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BDD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055BDD8u) [[unlikely]] return; }
L_0055BDD8:
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1603u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BDF4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055BDF4u) [[unlikely]] return; }
L_0055BDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0055BE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BE04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BE10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 313u, depth + 1u); else { c.pc = 0x00537FF0u; return; } if (c.pc != 0x0055BE10u) [[unlikely]] return; }
L_0055BE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BE18u); set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055BE18u) [[unlikely]] return; }
L_0055BE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 46u);  if (t) { goto L_0055BE20; } }
L_0055BE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055BE40; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055BE20u | kUnwind; return; } goto L_0055BE20; }
    c.budget -= 1;
L_0055BE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055BE54; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0055BE54:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 1;
L_0055BE58:
    set32(c.r[5], c.r[29].w[0] + 820u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BE6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BE6Cu) [[unlikely]] return; }
L_0055BE6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 820u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 820u)));  goto L_0055BEC4; }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 1632u);
    set32(c.r[5], c.r[2].w[0] + 188u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BEB0u); set32(c.r[4], c.r[3].w[0] << 3);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055BEB0u) [[unlikely]] return; }
L_0055BEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0055BEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BEC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 820u)));
    c.budget -= 1;
L_0055BEC4:
    set32(c.r[18], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 6u, depth); } }
    st32((c.r[29].w[0] + 800u), 0u);
    c.budget -= 1;
L_0055BED4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0055BEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BEE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 134u, depth + 1u); else { c.pc = 0x00559480u; return; } if (c.pc != 0x0055BEE4u) [[unlikely]] return; }
L_0055BEE4:
    c.budget -= 1;
L_0055BEE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[17].w[0] + 84u), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 88u);  if (t) { goto L_0055BF20; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_0055BF24; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BF10u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 178u, depth + 1u); else { c.pc = 0x00559EC0u; return; } if (c.pc != 0x0055BF10u) [[unlikely]] return; }
L_0055BF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0055BF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BF20:
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 1;
L_0055BF24:
    c.budget -= 1;
L_0055BF28:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[17].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BF40u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BF40u) [[unlikely]] return; }
L_0055BF40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 184u)));  goto L_0055BF8C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[17].w[0] + 76u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BF78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BF78u) [[unlikely]] return; }
L_0055BF78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055BF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BF8C:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_0055BF90:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BFA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BFA8u) [[unlikely]] return; }
L_0055BFA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1696u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BFD0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055BFD0u) [[unlikely]] return; }
L_0055BFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0055BFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
L_0055BFE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055BFF8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055BFF8u) [[unlikely]] return; }
L_0055BFF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0117(c, 132u, depth); } }
    [[clang::musttail]] return unit_0117(c, 2u, depth);
}

}
