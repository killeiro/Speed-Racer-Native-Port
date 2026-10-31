#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F1[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200,
    201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 321, 0,
    0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0,
    376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0,
    0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0,
};

void unit_00F1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004C4000;
    case 2u: goto L_004C4014;
    case 3u: goto L_004C401C;
    case 4u: goto L_004C4030;
    case 5u: goto L_004C4078;
    case 6u: goto L_004C4084;
    case 7u: goto L_004C4090;
    case 8u: goto L_004C409C;
    case 9u: goto L_004C40BC;
    case 10u: goto L_004C40E0;
    case 11u: goto L_004C40EC;
    case 12u: goto L_004C410C;
    case 13u: goto L_004C4130;
    case 14u: goto L_004C413C;
    case 15u: goto L_004C4154;
    case 16u: goto L_004C415C;
    case 17u: goto L_004C4180;
    case 18u: goto L_004C4198;
    case 19u: goto L_004C41B0;
    case 20u: goto L_004C41C8;
    case 21u: goto L_004C41DC;
    case 22u: goto L_004C41E4;
    case 23u: goto L_004C41FC;
    case 24u: goto L_004C4210;
    case 25u: goto L_004C427C;
    case 26u: goto L_004C4298;
    case 27u: goto L_004C42C8;
    case 28u: goto L_004C42D4;
    case 29u: goto L_004C42F4;
    case 30u: goto L_004C4334;
    case 31u: goto L_004C4340;
    case 32u: goto L_004C434C;
    case 33u: goto L_004C436C;
    case 34u: goto L_004C4378;
    case 35u: goto L_004C4384;
    case 36u: goto L_004C439C;
    case 37u: goto L_004C43C0;
    case 38u: goto L_004C43E0;
    case 39u: goto L_004C43E8;
    case 40u: goto L_004C43F0;
    case 41u: goto L_004C4404;
    case 42u: goto L_004C4420;
    case 43u: goto L_004C444C;
    case 44u: goto L_004C4454;
    case 45u: goto L_004C446C;
    case 46u: goto L_004C44B4;
    case 47u: goto L_004C44C8;
    case 48u: goto L_004C44DC;
    case 49u: goto L_004C44F4;
    case 50u: goto L_004C450C;
    case 51u: goto L_004C4518;
    case 52u: goto L_004C4524;
    case 53u: goto L_004C4534;
    case 54u: goto L_004C4544;
    case 55u: goto L_004C454C;
    case 56u: goto L_004C455C;
    case 57u: goto L_004C458C;
    case 58u: goto L_004C4598;
    case 59u: goto L_004C45D8;
    case 60u: goto L_004C45E4;
    case 61u: goto L_004C4610;
    case 62u: goto L_004C462C;
    case 63u: goto L_004C4638;
    case 64u: goto L_004C4640;
    case 65u: goto L_004C464C;
    case 66u: goto L_004C4680;
    case 67u: goto L_004C4690;
    case 68u: goto L_004C46A0;
    case 69u: goto L_004C4700;
    case 70u: goto L_004C4724;
    case 71u: goto L_004C4740;
    case 72u: goto L_004C4764;
    case 73u: goto L_004C477C;
    case 74u: goto L_004C47A0;
    case 75u: goto L_004C47B0;
    case 76u: goto L_004C47D4;
    case 77u: goto L_004C47E0;
    case 78u: goto L_004C47F0;
    case 79u: goto L_004C4830;
    case 80u: goto L_004C487C;
    case 81u: goto L_004C4890;
    case 82u: goto L_004C48A0;
    case 83u: goto L_004C4914;
    case 84u: goto L_004C4938;
    case 85u: goto L_004C4948;
    case 86u: goto L_004C496C;
    case 87u: goto L_004C49B0;
    case 88u: goto L_004C49D4;
    case 89u: goto L_004C4A48;
    case 90u: goto L_004C4A6C;
    case 91u: goto L_004C4A94;
    case 92u: goto L_004C4AB8;
    case 93u: goto L_004C4AC4;
    case 94u: goto L_004C4B04;
    case 95u: goto L_004C4B30;
    case 96u: goto L_004C4B40;
    case 97u: goto L_004C4B8C;
    case 98u: goto L_004C4BA0;
    case 99u: goto L_004C4BB0;
    case 100u: goto L_004C4BCC;
    case 101u: goto L_004C4BD8;
    case 102u: goto L_004C4BF8;
    case 103u: goto L_004C4C00;
    case 104u: goto L_004C4C20;
    case 105u: goto L_004C4C34;
    case 106u: goto L_004C4C40;
    case 107u: goto L_004C4C60;
    case 108u: goto L_004C4CB0;
    case 109u: goto L_004C4CC0;
    case 110u: goto L_004C4CE0;
    case 111u: goto L_004C4D14;
    case 112u: goto L_004C4D20;
    case 113u: goto L_004C4D38;
    case 114u: goto L_004C4D50;
    case 115u: goto L_004C4D60;
    case 116u: goto L_004C4D70;
    case 117u: goto L_004C4D80;
    case 118u: goto L_004C4DCC;
    case 119u: goto L_004C4DE0;
    case 120u: goto L_004C4E1C;
    case 121u: goto L_004C4E30;
    case 122u: goto L_004C4E40;
    case 123u: goto L_004C4E60;
    case 124u: goto L_004C4E84;
    case 125u: goto L_004C4EA0;
    case 126u: goto L_004C4EB0;
    case 127u: goto L_004C4EC0;
    case 128u: goto L_004C4ED0;
    case 129u: goto L_004C4EE0;
    case 130u: goto L_004C4EF0;
    case 131u: goto L_004C4F00;
    case 132u: goto L_004C4F10;
    case 133u: goto L_004C4F20;
    case 134u: goto L_004C4F30;
    case 135u: goto L_004C4F40;
    case 136u: goto L_004C4F50;
    case 137u: goto L_004C4F60;
    case 138u: goto L_004C4F70;
    case 139u: goto L_004C4F80;
    case 140u: goto L_004C4F90;
    case 141u: goto L_004C4FA0;
    case 142u: goto L_004C4FC0;
    case 143u: goto L_004C4FF0;
    case 144u: goto L_004C50F0;
    case 145u: goto L_004C51D0;
    case 146u: goto L_004C5330;
    case 147u: goto L_004C5368;
    case 148u: goto L_004C5374;
    case 149u: goto L_004C5398;
    case 150u: goto L_004C53AC;
    case 151u: goto L_004C53C0;
    case 152u: goto L_004C53CC;
    case 153u: goto L_004C53F0;
    case 154u: goto L_004C5404;
    case 155u: goto L_004C5418;
    case 156u: goto L_004C5424;
    case 157u: goto L_004C5448;
    case 158u: goto L_004C545C;
    case 159u: goto L_004C5474;
    case 160u: goto L_004C5494;
    case 161u: goto L_004C54A0;
    case 162u: goto L_004C54C4;
    case 163u: goto L_004C54D8;
    case 164u: goto L_004C54E4;
    case 165u: goto L_004C54F8;
    case 166u: goto L_004C5504;
    case 167u: goto L_004C5528;
    case 168u: goto L_004C553C;
    case 169u: goto L_004C5550;
    case 170u: goto L_004C555C;
    case 171u: goto L_004C5580;
    case 172u: goto L_004C5594;
    case 173u: goto L_004C55A8;
    case 174u: goto L_004C55B4;
    case 175u: goto L_004C55D8;
    case 176u: goto L_004C55EC;
    case 177u: goto L_004C5600;
    case 178u: goto L_004C560C;
    case 179u: goto L_004C5630;
    case 180u: goto L_004C5644;
    case 181u: goto L_004C5658;
    case 182u: goto L_004C5664;
    case 183u: goto L_004C5688;
    case 184u: goto L_004C569C;
    case 185u: goto L_004C56B0;
    case 186u: goto L_004C56BC;
    case 187u: goto L_004C56E0;
    case 188u: goto L_004C56F4;
    case 189u: goto L_004C5708;
    case 190u: goto L_004C5714;
    case 191u: goto L_004C5738;
    case 192u: goto L_004C574C;
    case 193u: goto L_004C5760;
    case 194u: goto L_004C576C;
    case 195u: goto L_004C5790;
    case 196u: goto L_004C57A4;
    case 197u: goto L_004C57B8;
    case 198u: goto L_004C57C4;
    case 199u: goto L_004C57E8;
    case 200u: goto L_004C57FC;
    case 201u: goto L_004C5800;
    case 202u: goto L_004C5818;
    case 203u: goto L_004C5838;
    case 204u: goto L_004C5844;
    case 205u: goto L_004C5868;
    case 206u: goto L_004C5884;
    case 207u: goto L_004C589C;
    case 208u: goto L_004C58B8;
    case 209u: goto L_004C58C4;
    case 210u: goto L_004C58E4;
    case 211u: goto L_004C58F0;
    case 212u: goto L_004C5914;
    case 213u: goto L_004C5928;
    case 214u: goto L_004C5940;
    case 215u: goto L_004C595C;
    case 216u: goto L_004C5968;
    case 217u: goto L_004C5988;
    case 218u: goto L_004C5994;
    case 219u: goto L_004C59B8;
    case 220u: goto L_004C59CC;
    case 221u: goto L_004C59D8;
    case 222u: goto L_004C5A10;
    case 223u: goto L_004C5BA0;
    case 224u: goto L_004C5BD8;
    case 225u: goto L_004C5BF0;
    case 226u: goto L_004C5C58;
    case 227u: goto L_004C5C64;
    case 228u: goto L_004C5C78;
    case 229u: goto L_004C5C88;
    case 230u: goto L_004C5C90;
    case 231u: goto L_004C5C98;
    case 232u: goto L_004C5CA8;
    case 233u: goto L_004C5CB0;
    case 234u: goto L_004C5CB8;
    case 235u: goto L_004C5CD4;
    case 236u: goto L_004C5CE0;
    case 237u: goto L_004C5DB4;
    case 238u: goto L_004C5DC4;
    case 239u: goto L_004C5DCC;
    case 240u: goto L_004C5DFC;
    case 241u: goto L_004C5E68;
    case 242u: goto L_004C6000;
    case 243u: goto L_004C6054;
    case 244u: goto L_004C62B0;
    case 245u: goto L_004C62C0;
    case 246u: goto L_004C62D4;
    case 247u: goto L_004C6340;
    case 248u: goto L_004C636C;
    case 249u: goto L_004C63BC;
    case 250u: goto L_004C63C4;
    case 251u: goto L_004C63E0;
    case 252u: goto L_004C6540;
    case 253u: goto L_004C661C;
    case 254u: goto L_004C6738;
    case 255u: goto L_004C67AC;
    case 256u: goto L_004C6870;
    case 257u: goto L_004C68B8;
    case 258u: goto L_004C6974;
    case 259u: goto L_004C69E8;
    case 260u: goto L_004C6A1C;
    case 261u: goto L_004C6AC4;
    case 262u: goto L_004C6B30;
    case 263u: goto L_004C6B80;
    case 264u: goto L_004C6BC0;
    case 265u: goto L_004C6C10;
    case 266u: goto L_004C6C20;
    case 267u: goto L_004C6C40;
    case 268u: goto L_004C6C50;
    case 269u: goto L_004C6C70;
    case 270u: goto L_004C6C80;
    case 271u: goto L_004C6C90;
    case 272u: goto L_004C6CDC;
    case 273u: goto L_004C6CEC;
    case 274u: goto L_004C6D08;
    case 275u: goto L_004C6D18;
    case 276u: goto L_004C6D34;
    case 277u: goto L_004C6D48;
    case 278u: goto L_004C6D58;
    case 279u: goto L_004C6D7C;
    case 280u: goto L_004C6D8C;
    case 281u: goto L_004C6DA8;
    case 282u: goto L_004C6DBC;
    case 283u: goto L_004C6DCC;
    case 284u: goto L_004C6DFC;
    case 285u: goto L_004C6E0C;
    case 286u: goto L_004C6E28;
    case 287u: goto L_004C6E3C;
    case 288u: goto L_004C6E4C;
    case 289u: goto L_004C6E78;
    case 290u: goto L_004C6E90;
    case 291u: goto L_004C6EB0;
    case 292u: goto L_004C6EC0;
    case 293u: goto L_004C6EDC;
    case 294u: goto L_004C6EF0;
    case 295u: goto L_004C6F00;
    case 296u: goto L_004C6F2C;
    case 297u: goto L_004C6F3C;
    case 298u: goto L_004C6F5C;
    case 299u: goto L_004C6F8C;
    case 300u: goto L_004C6FA4;
    case 301u: goto L_004C6FC4;
    case 302u: goto L_004C6FD4;
    case 303u: goto L_004C6FF0;
    case 304u: goto L_004C7004;
    case 305u: goto L_004C7014;
    case 306u: goto L_004C7040;
    case 307u: goto L_004C7050;
    case 308u: goto L_004C7070;
    case 309u: goto L_004C7084;
    case 310u: goto L_004C709C;
    case 311u: goto L_004C70AC;
    case 312u: goto L_004C70F4;
    case 313u: goto L_004C7110;
    case 314u: goto L_004C711C;
    case 315u: goto L_004C7180;
    case 316u: goto L_004C71B8;
    case 317u: goto L_004C71C8;
    case 318u: goto L_004C71D8;
    case 319u: goto L_004C71E0;
    case 320u: goto L_004C71EC;
    case 321u: goto L_004C71F8;
    case 322u: goto L_004C7204;
    case 323u: goto L_004C720C;
    case 324u: goto L_004C722C;
    case 325u: goto L_004C7254;
    case 326u: goto L_004C7264;
    case 327u: goto L_004C727C;
    case 328u: goto L_004C729C;
    case 329u: goto L_004C72AC;
    case 330u: goto L_004C72C8;
    case 331u: goto L_004C72DC;
    case 332u: goto L_004C72EC;
    case 333u: goto L_004C72FC;
    case 334u: goto L_004C7310;
    case 335u: goto L_004C7340;
    case 336u: goto L_004C7350;
    case 337u: goto L_004C737C;
    case 338u: goto L_004C738C;
    case 339u: goto L_004C73AC;
    case 340u: goto L_004C73B8;
    case 341u: goto L_004C73C4;
    case 342u: goto L_004C73EC;
    case 343u: goto L_004C7400;
    case 344u: goto L_004C740C;
    case 345u: goto L_004C7460;
    case 346u: goto L_004C7478;
    case 347u: goto L_004C7494;
    case 348u: goto L_004C74B4;
    case 349u: goto L_004C74C8;
    case 350u: goto L_004C753C;
    case 351u: goto L_004C75E0;
    case 352u: goto L_004C7688;
    case 353u: goto L_004C7698;
    case 354u: goto L_004C76D0;
    case 355u: goto L_004C7714;
    case 356u: goto L_004C7720;
    case 357u: goto L_004C7728;
    case 358u: goto L_004C778C;
    case 359u: goto L_004C7794;
    case 360u: goto L_004C77AC;
    case 361u: goto L_004C77BC;
    case 362u: goto L_004C77D0;
    case 363u: goto L_004C77D8;
    case 364u: goto L_004C7810;
    case 365u: goto L_004C7860;
    case 366u: goto L_004C7888;
    case 367u: goto L_004C7894;
    case 368u: goto L_004C78A0;
    case 369u: goto L_004C78AC;
    case 370u: goto L_004C78B8;
    case 371u: goto L_004C78C4;
    case 372u: goto L_004C78D0;
    case 373u: goto L_004C78DC;
    case 374u: goto L_004C78E8;
    case 375u: goto L_004C78F4;
    case 376u: goto L_004C7900;
    case 377u: goto L_004C790C;
    case 378u: goto L_004C7918;
    case 379u: goto L_004C7930;
    case 380u: goto L_004C794C;
    case 381u: goto L_004C7958;
    case 382u: goto L_004C7968;
    case 383u: goto L_004C797C;
    case 384u: goto L_004C799C;
    case 385u: goto L_004C79AC;
    case 386u: goto L_004C79C8;
    case 387u: goto L_004C79DC;
    case 388u: goto L_004C79EC;
    case 389u: goto L_004C7A24;
    case 390u: goto L_004C7A34;
    case 391u: goto L_004C7AC4;
    case 392u: goto L_004C7AD4;
    case 393u: goto L_004C7B30;
    case 394u: goto L_004C7B40;
    case 395u: goto L_004C7B5C;
    case 396u: goto L_004C7B70;
    case 397u: goto L_004C7B80;
    case 398u: goto L_004C7BB8;
    case 399u: goto L_004C7BC8;
    case 400u: goto L_004C7C2C;
    case 401u: goto L_004C7C3C;
    case 402u: goto L_004C7C58;
    case 403u: goto L_004C7C6C;
    case 404u: goto L_004C7C7C;
    case 405u: goto L_004C7CC0;
    case 406u: goto L_004C7CD0;
    case 407u: goto L_004C7CEC;
    case 408u: goto L_004C7CF8;
    case 409u: goto L_004C7D04;
    case 410u: goto L_004C7D10;
    case 411u: goto L_004C7D1C;
    case 412u: goto L_004C7D28;
    case 413u: goto L_004C7D4C;
    case 414u: goto L_004C7D5C;
    case 415u: goto L_004C7D78;
    case 416u: goto L_004C7D8C;
    case 417u: goto L_004C7D9C;
    case 418u: goto L_004C7E20;
    case 419u: goto L_004C7E30;
    case 420u: goto L_004C7E3C;
    case 421u: goto L_004C7E4C;
    case 422u: goto L_004C7E54;
    case 423u: goto L_004C7E78;
    case 424u: goto L_004C7E88;
    case 425u: goto L_004C7EA4;
    case 426u: goto L_004C7EB8;
    case 427u: goto L_004C7EC8;
    case 428u: goto L_004C7EE8;
    case 429u: goto L_004C7EF8;
    case 430u: goto L_004C7F84;
    case 431u: goto L_004C7F94;
    case 432u: goto L_004C7FB0;
    case 433u: goto L_004C7FC4;
    case 434u: goto L_004C7FD4;
    case 435u: goto L_004C7FE8;
    case 436u: goto L_004C7FF8;
    default: bad_entry(c, 0x004C4000u); return;
    }
L_004C4000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004C400C; } }
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_004C400C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4014u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x004C4014u) [[unlikely]] return; }
L_004C4014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C401Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0013(c, 58u, depth + 1u); else { c.pc = 0x0014C6F0u; return; } if (c.pc != 0x004C401Cu) [[unlikely]] return; }
L_004C401C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C4030:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4078u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00F0(c, 450u, depth + 1u); else { c.pc = 0x004C3810u; return; } if (c.pc != 0x004C4078u) [[unlikely]] return; }
L_004C4078:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4084u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002F(c, 95u, depth + 1u); else { c.pc = 0x001BD800u; return; } if (c.pc != 0x004C4084u) [[unlikely]] return; }
L_004C4084:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4090u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_002F(c, 98u, depth + 1u); else { c.pc = 0x001BD840u; return; } if (c.pc != 0x004C4090u) [[unlikely]] return; }
L_004C4090:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C409Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002F(c, 101u, depth + 1u); else { c.pc = 0x001BD880u; return; } if (c.pc != 0x004C409Cu) [[unlikely]] return; }
L_004C409C:
    set32(c.r[2], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C40BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C40BCu) [[unlikely]] return; }
L_004C40BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_004C40E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C40E0; } }
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C40E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C40E0u) [[unlikely]] return; }
L_004C40E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004C40E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C40ECu); c.f[12] = ld32((c.r[29].w[0] + 108u));  if (depth < kMaxDepth) unit_002F(c, 109u, depth + 1u); else { c.pc = 0x001BDA00u; return; } if (c.pc != 0x004C40ECu) [[unlikely]] return; }
L_004C40EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C410Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C410Cu) [[unlikely]] return; }
L_004C410C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_004C4134; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C4130; } }
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4130u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C4130u) [[unlikely]] return; }
L_004C4130:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004C4134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C413Cu); c.f[12] = ld32((c.r[29].w[0] + 104u));  if (depth < kMaxDepth) unit_002F(c, 112u, depth + 1u); else { c.pc = 0x001BDA80u; return; } if (c.pc != 0x004C413Cu) [[unlikely]] return; }
L_004C413C:
    set32(c.r[2], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_004C4154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C415Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C415Cu) [[unlikely]] return; }
L_004C415C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 100u));  goto L_004C4184; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C4180; } }
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C4180u) [[unlikely]] return; }
L_004C4180:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 1;
L_004C4184:
    set32(c.r[4], c.r[16].w[0] + 92u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st32((c.r[16].w[0] + 760u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4198u); st32((c.r[16].w[0] + 764u), c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004C4198u) [[unlikely]] return; }
L_004C4198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C41B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C41C8u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0013(c, 59u, depth + 1u); else { c.pc = 0x0014C700u; return; } if (c.pc != 0x004C41C8u) [[unlikely]] return; }
L_004C41C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C41DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C41DCu) [[unlikely]] return; }
L_004C41DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C41E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 223u, depth + 1u); else { c.pc = 0x004C1AD0u; return; } if (c.pc != 0x004C41E4u) [[unlikely]] return; }
L_004C41E4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  goto L_004C41F4; }
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 2;
L_004C41F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C41FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x004C41FCu) [[unlikely]] return; }
L_004C41FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C4210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C439C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[3], c.r[3].w[0] - 24036u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23964u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 788u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 784u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_004C42A4; } }
L_004C427C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_004C429C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4298u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C4298u) [[unlikely]] return; }
L_004C4298:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_004C429C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_004C42A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C427Cu | kUnwind; return; } goto L_004C427C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C42C8u); set32(c.r[4], ld32((c.r[17].w[0] + 748u)));  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x004C42C8u) [[unlikely]] return; }
L_004C42C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C42D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 284u, depth + 1u); else { c.pc = 0x00127100u; return; } if (c.pc != 0x004C42D4u) [[unlikely]] return; }
L_004C42D4:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 776u);  goto L_004C42F8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C42F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C42F4u) [[unlikely]] return; }
L_004C42F4:
    set32(c.r[2], c.r[17].w[0] + 776u);
    c.budget -= 1;
L_004C42F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_004C4334; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 256u);  goto L_004C4338; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C4334; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C4334; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C4334; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C4334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4334u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004C4334u) [[unlikely]] return; }
L_004C4334:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 1;
L_004C4338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4340u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00DD(c, 4u, depth + 1u); else { c.pc = 0x00474020u; return; } if (c.pc != 0x004C4340u) [[unlikely]] return; }
L_004C4340:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C434Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 77u, depth + 1u); else { c.pc = 0x003ED080u; return; } if (c.pc != 0x004C434Cu) [[unlikely]] return; }
L_004C434C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_004C4370; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C436Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x004C436Cu) [[unlikely]] return; }
L_004C436C:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_004C4370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014C720u; return; } if (c.pc != 0x004C4378u) [[unlikely]] return; }
L_004C4378:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x004C4384u) [[unlikely]] return; }
L_004C4384:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004C43A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C439Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C439Cu) [[unlikely]] return; }
L_004C439C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C43A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C43C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C43E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x004C43E0u) [[unlikely]] return; }
L_004C43E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C43E8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014C790u; return; } if (c.pc != 0x004C43E8u) [[unlikely]] return; }
L_004C43E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C43F0u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C43F0u) [[unlikely]] return; }
L_004C43F0:
    set32(c.r[16], c.r[18].w[0] + 16u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x004C4404u) [[unlikely]] return; }
L_004C4404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4420u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x004C4420u) [[unlikely]] return; }
L_004C4420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[3], c.r[3].w[0] - 24036u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 92u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23964u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C444Cu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 79u, depth + 1u); else { c.pc = 0x003ED0E0u; return; } if (c.pc != 0x004C444Cu) [[unlikely]] return; }
L_004C444C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4454u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C4454u) [[unlikely]] return; }
L_004C4454:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 324u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C446Cu); set32(c.r[4], c.r[18].w[0] + 256u);  if (depth < kMaxDepth) unit_00DD(c, 8u, depth + 1u); else { c.pc = 0x004740A0u; return; } if (c.pc != 0x004C446Cu) [[unlikely]] return; }
L_004C446C:
    st32((c.r[18].w[0] + 688u), 0u);
    set32(c.r[16], c.r[18].w[0] + 776u);
    st32((c.r[18].w[0] + 692u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 696u), 0u);
    st32((c.r[18].w[0] + 700u), 0u);
    st32((c.r[18].w[0] + 704u), 0u);
    st32((c.r[18].w[0] + 708u), 0u);
    st32((c.r[18].w[0] + 712u), 0u);
    st32((c.r[18].w[0] + 716u), 0u);
    st32((c.r[18].w[0] + 720u), 0u);
    st32((c.r[18].w[0] + 724u), 0u);
    st32((c.r[18].w[0] + 728u), 0u);
    st32((c.r[18].w[0] + 732u), 0u);
    st32((c.r[18].w[0] + 736u), 0u);
    st32((c.r[18].w[0] + 740u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C44B4u); st32((c.r[18].w[0] + 744u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C44B4u) [[unlikely]] return; }
L_004C44B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004C44CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C44C8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004C44C8u) [[unlikely]] return; }
L_004C44C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004C44CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004C44E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C44DCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004C44DCu) [[unlikely]] return; }
L_004C44DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004C44E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C44F4u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C44F4u) [[unlikely]] return; }
L_004C44F4:
    st8((c.r[18].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[18].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C450Cu); c.f[12] = ld32((c.r[2].w[0] + 156u));  if (depth < kMaxDepth) unit_000A(c, 5u, depth + 1u); else { c.pc = 0x001280B0u; return; } if (c.pc != 0x004C450Cu) [[unlikely]] return; }
L_004C450C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4518u); st32((c.r[18].w[0] + 76u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C4518u) [[unlikely]] return; }
L_004C4518:
    set32(c.r[4], 0u + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4524u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C4524u) [[unlikely]] return; }
L_004C4524:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  goto L_004C4538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4534u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 298u, depth + 1u); else { c.pc = 0x001272E0u; return; } if (c.pc != 0x004C4534u) [[unlikely]] return; }
L_004C4534:
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_004C4538:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4544u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C4544u) [[unlikely]] return; }
L_004C4544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C457C; } }
L_004C454C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C455Cu); set32(c.r[5], c.r[5].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 341u, depth + 1u); else { c.pc = 0x00127A70u; return; } if (c.pc != 0x004C455Cu) [[unlikely]] return; }
L_004C455C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 24192u);
    set32(c.r[2], c.r[2].w[0] - 24160u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 8;
L_004C457C:
    st32((c.r[18].w[0] + 80u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C458Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 277u, depth + 1u); else { c.pc = 0x00127070u; return; } if (c.pc != 0x004C458Cu) [[unlikely]] return; }
L_004C458C:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4598u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C4598u) [[unlikely]] return; }
L_004C4598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  goto L_004C45CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 26496u);
    set32(c.r[3], c.r[3].w[0] - 24320u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
L_004C45CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C45D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 275u, depth + 1u); else { c.pc = 0x00127050u; return; } if (c.pc != 0x004C45D8u) [[unlikely]] return; }
L_004C45D8:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C45E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C45E4u) [[unlikely]] return; }
L_004C45E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  goto L_004C4614; }
    c.f[12] = ld32((c.r[28].w[0] - 29528u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[28].w[0] - 29524u));
    c.f[14] = ld32((c.r[28].w[0] - 29520u));
    c.f[15] = ld32((c.r[28].w[0] - 29516u));
    c.f[16] = ld32((c.r[28].w[0] - 29512u));
    c.f[17] = ld32((c.r[28].w[0] - 29508u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4610u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 259u, depth + 1u); else { c.pc = 0x00126EB0u; return; } if (c.pc != 0x004C4610u) [[unlikely]] return; }
L_004C4610:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_004C4614:
    c.f[12] = ld32((c.r[28].w[0] - 29504u));
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.f[13] = ld32((c.r[28].w[0] - 29500u));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C462Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C462Cu) [[unlikely]] return; }
L_004C462C:
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4638u); set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 270u, depth + 1u); else { c.pc = 0x00127010u; return; } if (c.pc != 0x004C4638u) [[unlikely]] return; }
L_004C4638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4640u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 200u, depth + 1u); else { c.pc = 0x004C18E0u; return; } if (c.pc != 0x004C4640u) [[unlikely]] return; }
L_004C4640:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C464Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C464Cu) [[unlikely]] return; }
L_004C464C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  goto L_004C4678; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 26464u);
    set32(c.r[3], c.r[3].w[0] - 24352u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 9;
L_004C4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4680u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 272u, depth + 1u); else { c.pc = 0x00127030u; return; } if (c.pc != 0x004C4680u) [[unlikely]] return; }
L_004C4680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4690u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x004C4690u) [[unlikely]] return; }
L_004C4690:
    st32((c.r[18].w[0] + 748u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C46A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x004C46A0u) [[unlikely]] return; }
L_004C46A0:
    set32(c.r[6], ld32((c.r[18].w[0] + 748u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[3].d[0] << 16;
    set32(c.r[5], 0u + 256u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 748u)));
    st64((c.r[3].w[0] + 64u), c.r[5].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 748u)));
    st64((c.r[3].w[0] + 72u), c.r[4].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C4700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29532u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[4], c.r[4].w[0] + 8u);  goto L_004C471C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004C472C; } }
L_004C471C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4724u);  if (depth < kMaxDepth) unit_0013(c, 65u, depth + 1u); else { c.pc = 0x0014C7D0u; return; } if (c.pc != 0x004C4724u) [[unlikely]] return; }
L_004C4724:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004C472C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C4740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4764u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004C4764u) [[unlikely]] return; }
L_004C4764:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_004C4774; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004C4784; } }
L_004C4774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C477Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 67u, depth + 1u); else { c.pc = 0x0014C810u; return; } if (c.pc != 0x004C477Cu) [[unlikely]] return; }
L_004C477C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004C4784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C47A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31116u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004C47B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29532u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 8u);  goto L_004C47CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C47D4; } }
L_004C47CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C47D4u);  if (depth < kMaxDepth) unit_0013(c, 72u, depth + 1u); else { c.pc = 0x0014C880u; return; } if (c.pc != 0x004C47D4u) [[unlikely]] return; }
L_004C47D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C47E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29532u)));  c.pc = t; return; }
L_004C47F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 124u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1956u));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1957u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1958u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1959u));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], c.r[6].w[0] + 640u);  goto L_004C4828; }
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 500u);  goto L_004C4828; }
    set32(c.r[2], c.r[6].w[0] + 640u);
    c.budget -= 1;
L_004C4828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C4830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004C4880; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24352u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004C4864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26464u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C4864:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C487C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C487Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C487Cu) [[unlikely]] return; }
L_004C487C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C4880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C4890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C48A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[20] = c.f[12];
    c.f[2] = ld32((c.r[2].w[0] + 108u));
    c.f[1] = ld32((c.r[2].w[0] + 112u));
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[22] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[22] = fp::sqrt(c.f[22]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4914u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C4914u) [[unlikely]] return; }
L_004C4914:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[21] = ld32((c.r[29].w[0] + 108u));  goto L_004C493C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C4938; } }
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C4938u) [[unlikely]] return; }
L_004C4938:
    c.f[21] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 1;
L_004C493C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4948u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C4948u) [[unlikely]] return; }
L_004C4948:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 104u));  goto L_004C4970; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C496C; } }
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C496Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C496Cu) [[unlikely]] return; }
L_004C496C:
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 1;
L_004C4970:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[22], c.f[21]));
    c.f[21] = fp::max(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[4], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[16], ld32((c.r[2].w[0] + 1052u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C49B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C49B0u) [[unlikely]] return; }
L_004C49B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[29].w[0] + 100u));  goto L_004C49D8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C49D4; } }
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C49D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C49D4u) [[unlikely]] return; }
L_004C49D4:
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 1;
L_004C49D8:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_004C49EC; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C4A04; } }
L_004C49EC:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_004C4A04:
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[21] = fp::min(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4A48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C4A48u) [[unlikely]] return; }
L_004C4A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_004C4A70; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C4A6C; } }
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C4A6Cu) [[unlikely]] return; }
L_004C4A6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004C4A70:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C4A94u) [[unlikely]] return; }
L_004C4A94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 92u));  goto L_004C4ABC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C4AB8; } }
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C4AB8u) [[unlikely]] return; }
L_004C4AB8:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 1;
L_004C4ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4AC4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x004C4AC4u) [[unlikely]] return; }
L_004C4AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = fp::min(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[21], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    st32((c.r[18].w[0] + 20u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4B04u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 415u, depth + 1u); else { c.pc = 0x003AF5C8u; return; } if (c.pc != 0x004C4B04u) [[unlikely]] return; }
L_004C4B04:
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C4B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C4B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004C4B90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004C4B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26496u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C4B74:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C4B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4B8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C4B8Cu) [[unlikely]] return; }
L_004C4B8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C4B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C4BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C4BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4BCCu); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00F1(c, 78u, depth + 1u); else { c.pc = 0x004C47F0u; return; } if (c.pc != 0x004C4BCCu) [[unlikely]] return; }
L_004C4BCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4BD8u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00F1(c, 109u, depth + 1u); else { c.pc = 0x004C4CC0u; return; } if (c.pc != 0x004C4BD8u) [[unlikely]] return; }
L_004C4BD8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C4BF8; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4BF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004C4BF8u) [[unlikely]] return; }
L_004C4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4C00u);  if (depth < kMaxDepth) unit_00F1(c, 108u, depth + 1u); else { c.pc = 0x004C4CB0u; return; } if (c.pc != 0x004C4C00u) [[unlikely]] return; }
L_004C4C00:
    c.f[1] = ld32((c.r[28].w[0] - 29536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4C20u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00C8(c, 16u, depth + 1u); else { c.pc = 0x00420540u; return; } if (c.pc != 0x004C4C20u) [[unlikely]] return; }
L_004C4C20:
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4C34u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00F1(c, 107u, depth + 1u); else { c.pc = 0x004C4C60u; return; } if (c.pc != 0x004C4C34u) [[unlikely]] return; }
L_004C4C34:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4C40u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004C4C40u) [[unlikely]] return; }
L_004C4C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C4C60:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[2]);  c.pc = t; return; }
L_004C4CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[28].w[0] - 29056u));  c.pc = t; return; }
L_004C4CC0:
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  c.pc = t; return; }
L_004C4CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C4D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 24256u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4D14u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004C4D14u) [[unlikely]] return; }
L_004C4D14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x004C4D20u) [[unlikely]] return; }
L_004C4D20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004C4D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C4D38u) [[unlikely]] return; }
L_004C4D38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C4D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C4D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 208u);  c.pc = t; return; }
L_004C4D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C4D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 144u);  c.pc = t; return; }
L_004C4D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004C4DD0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24288u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004C4DB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C4DB4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C4DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4DCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C4DCCu) [[unlikely]] return; }
L_004C4DCC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C4DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C4DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 12u)));  goto L_004C4E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C4E1C; } }
L_004C4E00:
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4E1Cu); c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x004C4E1Cu) [[unlikely]] return; }
L_004C4E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C4E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0] + 8u)));  c.pc = t; return; }
L_004C4E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4E60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 403u, depth + 1u); else { c.pc = 0x0011FFB0u; return; } if (c.pc != 0x004C4E60u) [[unlikely]] return; }
L_004C4E60:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C4E84u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004C4E84u) [[unlikely]] return; }
L_004C4E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C4EA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4D60u | kUnwind; return; } goto L_004C4D60; }
L_004C4EB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2A50u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 358u, depth); }
L_004C4EC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2420u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 323u, depth); }
L_004C4ED0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2430u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 324u, depth); }
L_004C4EE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3FF0u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 489u, depth); }
L_004C4EF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C41B0u | kUnwind; return; } goto L_004C41B0; }
L_004C4F00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4210u | kUnwind; return; } goto L_004C4210; }
L_004C4F10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4740u | kUnwind; return; } goto L_004C4740; }
L_004C4F20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4700u | kUnwind; return; } goto L_004C4700; }
L_004C4F30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4D70u | kUnwind; return; } goto L_004C4D70; }
L_004C4F40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C47A0u | kUnwind; return; } goto L_004C47A0; }
L_004C4F50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C47B0u | kUnwind; return; } goto L_004C47B0; }
L_004C4F60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C47E0u | kUnwind; return; } goto L_004C47E0; }
L_004C4F70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3DF0u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 468u, depth); }
L_004C4F80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C4210u | kUnwind; return; } goto L_004C4210; }
L_004C4F90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2670u | kUnwind; return; } [[clang::musttail]] return unit_00F0(c, 339u, depth); }
L_004C4FA0:
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004C4FC0:
    c.f[2] = ld32((c.r[28].w[0] - 31788u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = fp::mul(c.f[2], c.f[13]);
    fpu_div(c, 2u, c.f[12], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.f[0]);  c.pc = t; return; }
L_004C4FF0:
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C50E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));  goto L_004C5028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C50E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 1;
L_004C5028:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C504C; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_004C50E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004C50E0; } }
L_004C504C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_004C5060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_004C50E0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_004C5060:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);  goto L_004C50A4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004C50A0; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_004C50E0; } }
L_004C50A0:
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_004C50A4:
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C50E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004C50E0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 7;
L_004C50E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C50F0:
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[4].w[0] + 12u));  goto L_004C5120; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_004C517C; }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 1;
L_004C5120:
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[12]));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));  goto L_004C519C; }
    c.f[2] = ld32((c.r[4].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[14]);
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[12], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_004C5198; } }
L_004C517C:
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = fp::mul(c.f[13], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 7;
L_004C5198:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_004C519C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 12u));  goto L_004C51B8; }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_004C51C8; } }
L_004C51B8:
    c.f[0] = 0u;
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_004C51C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C51D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));  goto L_004C51E8; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C531C; } }
L_004C51E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 140u));  goto L_004C52C0; }
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[28].w[0] - 29488u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[4].w[0] + 64u));  goto L_004C5214; }
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[28].w[0] - 29484u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004C52AC; } }
L_004C5214:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 56u));  goto L_004C5260; }
    c.f[2] = ld32((c.r[4].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004C52AC; } }
L_004C5260:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);  goto L_004C52A8; }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 124u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004C52AC; } }
L_004C52A8:
    c.f[2] = c.r[2].w[0];
    c.budget -= 1;
L_004C52AC:
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004C52CC; } }
L_004C52C0:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 3;
L_004C52CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C52E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C5300; } }
L_004C52E8:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C52F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C52F8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004C5300:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[12]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
L_004C531C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C5330:
    set32(c.r[29], c.r[29].w[0] - 720u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 2288u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5368u); set32(c.r[4], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5368u) [[unlikely]] return; }
L_004C5368:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5374u); set32(c.r[5], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5374u) [[unlikely]] return; }
L_004C5374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 716u));  goto L_004C539C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 634u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5398; } }
    c.f[12] = ld32((c.r[29].w[0] + 716u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5398u); set32(c.r[4], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5398u) [[unlikely]] return; }
L_004C5398:
    c.f[0] = ld32((c.r[29].w[0] + 716u));
    c.budget -= 1;
L_004C539C:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C53ACu); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C53ACu) [[unlikely]] return; }
L_004C53AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C53C0u); set32(c.r[6], c.r[6].w[0] + 2303u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C53C0u) [[unlikely]] return; }
L_004C53C0:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C53CCu); set32(c.r[5], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C53CCu) [[unlikely]] return; }
L_004C53CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 712u));  goto L_004C53F4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 602u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C53F0; } }
    c.f[12] = ld32((c.r[29].w[0] + 712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C53F0u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C53F0u) [[unlikely]] return; }
L_004C53F0:
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    c.budget -= 1;
L_004C53F4:
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5404u); st32((c.r[19].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C5404u) [[unlikely]] return; }
L_004C5404:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5418u); set32(c.r[6], c.r[6].w[0] + 2318u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5418u) [[unlikely]] return; }
L_004C5418:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5424u); set32(c.r[5], c.r[29].w[0] + 708u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5424u) [[unlikely]] return; }
L_004C5424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 708u));  goto L_004C544C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 570u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5448; } }
    c.f[12] = ld32((c.r[29].w[0] + 708u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5448u); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5448u) [[unlikely]] return; }
L_004C5448:
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    c.budget -= 1;
L_004C544C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C545Cu); st32((c.r[19].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C545Cu) [[unlikely]] return; }
L_004C545C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5474u); set32(c.r[6], c.r[6].w[0] + 2337u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004C5474u) [[unlikely]] return; }
L_004C5474:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 529u);  goto L_004C5488; }
    set32(c.r[6], ld32((c.r[29].w[0] + 536u)));
    c.budget -= 1;
L_004C5488:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5494u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5494u) [[unlikely]] return; }
L_004C5494:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C54A0u); set32(c.r[5], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C54A0u) [[unlikely]] return; }
L_004C54A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 704u));  goto L_004C54C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 522u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C54C4; } }
    c.f[12] = ld32((c.r[29].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C54C4u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C54C4u) [[unlikely]] return; }
L_004C54C4:
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.budget -= 1;
L_004C54C8:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C54D8u); st32((c.r[19].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C54D8u) [[unlikely]] return; }
L_004C54D8:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C54E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C54E4u) [[unlikely]] return; }
L_004C54E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C54F8u); set32(c.r[6], c.r[6].w[0] + 2358u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C54F8u) [[unlikely]] return; }
L_004C54F8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5504u); set32(c.r[5], c.r[29].w[0] + 700u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5504u) [[unlikely]] return; }
L_004C5504:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 700u));  goto L_004C552C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 490u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5528; } }
    c.f[12] = ld32((c.r[29].w[0] + 700u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5528u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5528u) [[unlikely]] return; }
L_004C5528:
    c.f[0] = ld32((c.r[29].w[0] + 700u));
    c.budget -= 1;
L_004C552C:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C553Cu); st32((c.r[19].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C553Cu) [[unlikely]] return; }
L_004C553C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5550u); set32(c.r[6], c.r[6].w[0] + 2387u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5550u) [[unlikely]] return; }
L_004C5550:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C555Cu); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C555Cu) [[unlikely]] return; }
L_004C555C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 696u));  goto L_004C5584; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5580; } }
    c.f[12] = ld32((c.r[29].w[0] + 696u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5580u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5580u) [[unlikely]] return; }
L_004C5580:
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.budget -= 1;
L_004C5584:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5594u); st32((c.r[19].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C5594u) [[unlikely]] return; }
L_004C5594:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C55A8u); set32(c.r[6], c.r[6].w[0] + 2416u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C55A8u) [[unlikely]] return; }
L_004C55A8:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C55B4u); set32(c.r[5], c.r[29].w[0] + 692u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C55B4u) [[unlikely]] return; }
L_004C55B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 692u));  goto L_004C55DC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 426u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C55D8; } }
    c.f[12] = ld32((c.r[29].w[0] + 692u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C55D8u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C55D8u) [[unlikely]] return; }
L_004C55D8:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.budget -= 1;
L_004C55DC:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C55ECu); st32((c.r[19].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C55ECu) [[unlikely]] return; }
L_004C55EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5600u); set32(c.r[6], c.r[6].w[0] + 2358u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5600u) [[unlikely]] return; }
L_004C5600:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C560Cu); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C560Cu) [[unlikely]] return; }
L_004C560C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 688u));  goto L_004C5634; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 394u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5630; } }
    c.f[12] = ld32((c.r[29].w[0] + 688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5630u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5630u) [[unlikely]] return; }
L_004C5630:
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.budget -= 1;
L_004C5634:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5644u); st32((c.r[19].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C5644u) [[unlikely]] return; }
L_004C5644:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5658u); set32(c.r[6], c.r[6].w[0] + 2358u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5658u) [[unlikely]] return; }
L_004C5658:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5664u); set32(c.r[5], c.r[29].w[0] + 684u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5664u) [[unlikely]] return; }
L_004C5664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 684u));  goto L_004C568C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5688; } }
    c.f[12] = ld32((c.r[29].w[0] + 684u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5688u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5688u) [[unlikely]] return; }
L_004C5688:
    c.f[0] = ld32((c.r[29].w[0] + 684u));
    c.budget -= 1;
L_004C568C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C569Cu); st32((c.r[19].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C569Cu) [[unlikely]] return; }
L_004C569C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C56B0u); set32(c.r[6], c.r[6].w[0] + 2440u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C56B0u) [[unlikely]] return; }
L_004C56B0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C56BCu); set32(c.r[5], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004C56BCu) [[unlikely]] return; }
L_004C56BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 680u)));  goto L_004C56E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C56E0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C56E0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004C56E0u) [[unlikely]] return; }
L_004C56E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 680u)));
    c.budget -= 1;
L_004C56E4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C56F4u); st32((c.r[19].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C56F4u) [[unlikely]] return; }
L_004C56F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5708u); set32(c.r[6], c.r[6].w[0] + 2457u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5708u) [[unlikely]] return; }
L_004C5708:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5714u); set32(c.r[5], c.r[29].w[0] + 676u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5714u) [[unlikely]] return; }
L_004C5714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 676u));  goto L_004C573C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5738; } }
    c.f[12] = ld32((c.r[29].w[0] + 676u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5738u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5738u) [[unlikely]] return; }
L_004C5738:
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    c.budget -= 1;
L_004C573C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C574Cu); st32((c.r[19].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C574Cu) [[unlikely]] return; }
L_004C574C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5760u); set32(c.r[6], c.r[6].w[0] + 2485u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5760u) [[unlikely]] return; }
L_004C5760:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C576Cu); set32(c.r[5], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C576Cu) [[unlikely]] return; }
L_004C576C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 672u));  goto L_004C5794; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5790; } }
    c.f[12] = ld32((c.r[29].w[0] + 672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5790u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5790u) [[unlikely]] return; }
L_004C5790:
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.budget -= 1;
L_004C5794:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C57A4u); st32((c.r[19].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C57A4u) [[unlikely]] return; }
L_004C57A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C57B8u); set32(c.r[6], c.r[6].w[0] + 2515u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C57B8u) [[unlikely]] return; }
L_004C57B8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C57C4u); set32(c.r[5], c.r[29].w[0] + 668u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C57C4u) [[unlikely]] return; }
L_004C57C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 668u));  goto L_004C57EC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C57E8; } }
    c.f[12] = ld32((c.r[29].w[0] + 668u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C57E8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C57E8u) [[unlikely]] return; }
L_004C57E8:
    c.f[0] = ld32((c.r[29].w[0] + 668u));
    c.budget -= 1;
L_004C57EC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C57FCu); st32((c.r[19].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C57FCu) [[unlikely]] return; }
L_004C57FC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_004C5800:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 2539u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5818u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004C5818u) [[unlikely]] return; }
L_004C5818:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 641u);  goto L_004C582C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 1;
L_004C582C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5838u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5838u) [[unlikely]] return; }
L_004C5838:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5844u); set32(c.r[5], c.r[29].w[0] + 664u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5844u) [[unlikely]] return; }
L_004C5844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 664u));  goto L_004C586C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5868; } }
    c.f[12] = ld32((c.r[29].w[0] + 664u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5868u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5868u) [[unlikely]] return; }
L_004C5868:
    c.f[0] = ld32((c.r[29].w[0] + 664u));
    c.budget -= 1;
L_004C586C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5884u); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C5884u) [[unlikely]] return; }
L_004C5884:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 2560u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C589Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004C589Cu) [[unlikely]] return; }
L_004C589C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_004C58B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004C58B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C58B8u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004C58B8u) [[unlikely]] return; }
L_004C58B8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C58C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C58C4u) [[unlikely]] return; }
L_004C58C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 641u);  goto L_004C58D8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 1;
L_004C58D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C58E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C58E4u) [[unlikely]] return; }
L_004C58E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C58F0u); set32(c.r[5], c.r[29].w[0] + 660u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C58F0u) [[unlikely]] return; }
L_004C58F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 660u));  goto L_004C5918; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C5914; } }
    c.f[12] = ld32((c.r[29].w[0] + 660u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5914u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C5914u) [[unlikely]] return; }
L_004C5914:
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    c.budget -= 1;
L_004C5918:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5928u); st32((c.r[16].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C5928u) [[unlikely]] return; }
L_004C5928:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 2584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5940u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004C5940u) [[unlikely]] return; }
L_004C5940:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004C5954; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004C5954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C595Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004C595Cu) [[unlikely]] return; }
L_004C595C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C5968u) [[unlikely]] return; }
L_004C5968:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 641u);  goto L_004C597C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 1;
L_004C597C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5988u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004C5988u) [[unlikely]] return; }
L_004C5988:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5994u); set32(c.r[5], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C5994u) [[unlikely]] return; }
L_004C5994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 656u));  goto L_004C59BC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C59B8; } }
    c.f[12] = ld32((c.r[29].w[0] + 656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C59B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C59B8u) [[unlikely]] return; }
L_004C59B8:
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.budget -= 1;
L_004C59BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C59CCu); st32((c.r[16].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C59CCu) [[unlikely]] return; }
L_004C59CC:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C59D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C59D8u) [[unlikely]] return; }
L_004C59D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C5800u | kUnwind; return; } goto L_004C5800; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_004C5A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    set32(c.r[2], c.r[2].w[0] - 23912u);
    set32(c.r[14], 0u + 1300u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31712u));
    set32(c.r[2], 0u + 7000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 5500u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], 0u + 1900u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], 0u + 2200u);
    set32(c.r[10], 0u + 2500u);
    set32(c.r[9], 0u + 3500u);
    set32(c.r[8], 0u + 3800u);
    set32(c.r[7], 0u + 4100u);
    st32((c.r[4].w[0] + 52u), c.f[1]);
    set32(c.r[6], 0u + 4400u);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    set32(c.r[5], 0u + 4700u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 5000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[15], 0u + 6u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = c.r[14].w[0];
    st32((c.r[4].w[0] + 116u), c.r[25].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[12].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[11].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[10].w[0];
    c.f[11] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[9].w[0];
    c.f[10] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[9] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[7].w[0];
    c.f[8] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[7] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[6] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32020u));
    c.f[0] = ld32((c.r[28].w[0] - 31848u));
    c.f[4] = ld32((c.r[28].w[0] - 31708u));
    st32((c.r[4].w[0] + 120u), c.f[1]);
    st32((c.r[4].w[0] + 124u), c.f[1]);
    st32((c.r[4].w[0] + 128u), c.r[24].w[0]);
    c.f[3] = ld32((c.r[28].w[0] - 31704u));
    st32((c.r[4].w[0] + 132u), c.r[15].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 31700u));
    st32((c.r[4].w[0] + 136u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.r[25].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31696u));
    st32((c.r[4].w[0] + 72u), c.f[14]);
    st32((c.r[4].w[0] + 76u), c.r[13].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31692u));
    st32((c.r[4].w[0] + 80u), c.f[13]);
    st32((c.r[4].w[0] + 84u), c.f[12]);
    st32((c.r[4].w[0] + 88u), c.f[11]);
    st32((c.r[4].w[0] + 92u), c.f[10]);
    st32((c.r[4].w[0] + 96u), c.f[9]);
    st32((c.r[4].w[0] + 100u), c.f[8]);
    st32((c.r[4].w[0] + 104u), c.f[7]);
    st32((c.r[4].w[0] + 108u), c.f[6]);
    st32((c.r[4].w[0] + 112u), c.f[5]);
    st32((c.r[4].w[0] + 28u), c.f[4]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31688u));
    c.budget -= 98;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.f[0]);  c.pc = t; return; }
L_004C5BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004C5BDC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 23912u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_004C5BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5BD8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C5BD8u) [[unlikely]] return; }
L_004C5BD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C5BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C5BF0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.f[12];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C58u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C5C58u) [[unlikely]] return; }
L_004C5C58:
    st32((c.r[29].w[0] + 572u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C5C64u) [[unlikely]] return; }
L_004C5C64:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 568u), c.r[2].w[0]);  if (t) { goto L_004C5C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C5C78u) [[unlikely]] return; }
L_004C5C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_004C6AC8; } }
L_004C5C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C88u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004C5C88u) [[unlikely]] return; }
L_004C5C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C90u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004C5C90u) [[unlikely]] return; }
L_004C5C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5C98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 269u, depth + 1u); else { c.pc = 0x004C6C70u; return; } if (c.pc != 0x004C5C98u) [[unlikely]] return; }
L_004C5C98:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C5DF4; } }
L_004C5CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5CB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 268u, depth + 1u); else { c.pc = 0x004C6C50u; return; } if (c.pc != 0x004C5CB0u) [[unlikely]] return; }
L_004C5CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5CB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004C5CB8u) [[unlikely]] return; }
L_004C5CB8:
    c.f[12] = ld32((c.r[28].w[0] - 32372u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 580u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5CD4u); set32(c.r[7], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0062(c, 118u, depth + 1u); else { c.pc = 0x00288E30u; return; } if (c.pc != 0x004C5CD4u) [[unlikely]] return; }
L_004C5CD4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 267u, depth + 1u); else { c.pc = 0x004C6C40u; return; } if (c.pc != 0x004C5CE0u) [[unlikely]] return; }
L_004C5CE0:
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 580u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 576u), c.f[0]);  if (t) { goto L_004C5D54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 576u));  goto L_004C5D58; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004C5D54:
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    c.budget -= 1;
L_004C5D58:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[22].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_004C5D94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_004C5D98; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004C5D94:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004C5D98:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004C5DF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5DB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 148u, depth + 1u); else { c.pc = 0x004219D0u; return; } if (c.pc != 0x004C5DB4u) [[unlikely]] return; }
L_004C5DB4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5DC4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 280u, depth + 1u); else { c.pc = 0x0021AB30u; return; } if (c.pc != 0x004C5DC4u) [[unlikely]] return; }
L_004C5DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5DCCu); set32(c.r[4], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_00F1(c, 266u, depth + 1u); else { c.pc = 0x004C6C20u; return; } if (c.pc != 0x004C5DCCu) [[unlikely]] return; }
L_004C5DCC:
    set32(c.r[2], 0u + 32400u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C5DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004C5E08; } }
L_004C5DF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004C5DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5DFCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 265u, depth + 1u); else { c.pc = 0x004C6C10u; return; } if (c.pc != 0x004C5DFCu) [[unlikely]] return; }
L_004C5DFC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C5CA8u | kUnwind; return; } goto L_004C5CA8; } }
L_004C5E08:
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_004C5E28; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C5E34; } }
L_004C5E28:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004C5E34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_004C5E4C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C5E58; } }
L_004C5E4C:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004C5E58:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004C5E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C5E68u); set32(c.r[4], ld32((c.r[29].w[0] + 568u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C5E68u) [[unlikely]] return; }
L_004C5E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C6AC4; } }
L_004C5E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 104u));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[2] = ld32((c.r[3].w[0] + 100u));
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    c.f[7] = c.f[3] ^ fp::kSign;
    c.f[6] = c.f[2] ^ fp::kSign;
    c.f[3] = ld32((c.r[2].w[0] + 408u));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.f[2] = ld32((c.r[2].w[0] + 404u));
    c.f[4] = c.f[3] ^ fp::kSign;
    c.f[0] = ld32((c.r[2].w[0] + 400u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[0] ^ fp::kSign;
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 8u, c.f[1], c.f[8]);
    c.f[0] = fp::mul(c.f[5], c.f[8]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[8]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = fp::mul(c.f[7], c.f[8]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    fpu_rsqrt(c, 5u, c.f[1], c.f[5]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[17], c.r[3].w[0] + 112u);
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    c.budget -= 44;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_004C5F30; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5F3C; } }
L_004C5F30:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5F3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_004C5F54; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5F60; } }
L_004C5F54:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5F60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_004C5F78; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5F84; } }
L_004C5F78:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_004C5F9C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5FA8; } }
L_004C5F9C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_004C5FC0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5FCC; } }
L_004C5FC0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_004C5FE4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C5FF0; } }
L_004C5FE4:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C5FF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004C6008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6000u); set32(c.r[4], ld32((c.r[29].w[0] + 568u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C6000u) [[unlikely]] return; }
L_004C6000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C6AC4; } }
L_004C6008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[21] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004C61A8; }
    set32(c.r[6], ld32((c.r[3].w[0] + 92u)));
    c.f[20] = ld32((c.r[17].w[0] + 60u));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6054u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004C6054u) [[unlikely]] return; }
L_004C6054:
    c.f[5] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.f[4] = ld32((c.r[29].w[0] + 524u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[5] = fp::mul(c.f[20], c.f[5]);
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[12] = fp::add(c.f[5], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 520u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[2] = fp::mul(c.f[20], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[3] = c.r[2].w[0];
    c.f[10] = fp::add(c.f[2], c.f[0]);
    c.f[11] = fp::add(c.f[4], c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 408u));
    c.f[1] = ld32((c.r[3].w[0] + 404u));
    c.f[0] = ld32((c.r[3].w[0] + 400u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[9] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 560u), c.f[2]);
    c.f[8] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 556u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.f[7] = ld32((c.r[16].w[0] + 44u));
    c.f[2] = fp::sub(c.f[9], c.f[10]);
    c.f[5] = ld32((c.r[29].w[0] + 552u));
    c.f[1] = fp::sub(c.f[8], c.f[11]);
    c.f[4] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = fp::sub(c.f[7], c.f[12]);
    c.f[3] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[10]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[13], c.f[5]));
    c.f[2] = fp::sub(c.f[9], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[11]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[13], c.f[4]));
    c.f[1] = fp::sub(c.f[8], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[12]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[13], c.f[3]));
    c.f[0] = fp::sub(c.f[7], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[4].d[0] = c.r[2].d[0] | 23007ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[5], c.f[13]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 588u), c.f[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 584u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 584u));
    c.f[0] = ld32((c.r[28].w[0] - 31508u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 588u), c.f[2]);
    c.f[0] = fp::min(c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[21] = fp::max(c.f[0], c.f[3]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 85;
L_004C61A8:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = ld32((c.r[3].w[0] + 108u));
    c.f[4] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 116u));
    c.f[2] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = ld32((c.r[2].w[0] + 404u));
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[4], ld32((c.r[3].w[0] + 420u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = ld16((c.r[18].w[0] + 110u));
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004C6234; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C6250; } }
L_004C6234:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004C6250:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::min(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[5].w[0] + 2672u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C62B0u); set32(c.r[6], c.r[6].w[0] + 2688u);  if (depth < kMaxDepth) unit_00F1(c, 264u, depth + 1u); else { c.pc = 0x004C6BC0u; return; } if (c.pc != 0x004C62B0u) [[unlikely]] return; }
L_004C62B0:
    c.f[12] = c.f[23];
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C62C0u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_00F1(c, 263u, depth + 1u); else { c.pc = 0x004C6B80u; return; } if (c.pc != 0x004C62C0u) [[unlikely]] return; }
L_004C62C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], c.r[5].w[0] + 2688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C62D4u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_00F1(c, 262u, depth + 1u); else { c.pc = 0x004C6B30u; return; } if (c.pc != 0x004C62D4u) [[unlikely]] return; }
L_004C62D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.f[31] = ld32((c.r[28].w[0] - 31728u));
    c.f[29] = c.r[3].w[0];
    c.r[23].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 110u));
    c.f[28] = c.f[29];
    c.f[27] = c.f[29];
    c.f[30] = c.f[31];
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] < 0; c.f[26] = c.f[31];  if (t) { goto L_004C632C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C6348; } }
L_004C632C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
L_004C6340:
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 2;
L_004C6348:
    c.f[22] = fp::mul(c.f[21], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C6AAC; } }
L_004C636C:
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[16].d[0] = ld16((c.r[22].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C63BCu);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004C63BCu) [[unlikely]] return; }
L_004C63BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C63C4u);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x004C63C4u) [[unlikely]] return; }
L_004C63C4:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(0u));
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_004C6838; } }
L_004C63E0:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_004C63F4; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C640C; } }
L_004C63F4:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_004C640C:
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.f[6] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004C6424; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C6440; } }
L_004C6424:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004C6440:
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[5] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = 0u;
    c.f[4] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[23] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[24] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.budget -= 28;
    { const bool t = c.r[2].sd[0] < 0; c.f[25] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));  if (t) { goto L_004C64BC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C64D8; } }
L_004C64BC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004C64D8:
    c.f[3] = fp::mul(c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[21].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = c.r[3].w[0];
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[1]);
    c.f[2] = c.r[4].w[0];
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[1] = fp::mul(c.f[3], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[3] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[28].w[0] - 29480u));
    c.f[1] = ld32((c.r[28].w[0] - 29476u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 220u), c.f[0]);  if (t) { goto L_004C6820; } }
L_004C6540:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[30].d[0] & 65535ull;
    c.r[19].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[30].d[0] = c.r[19].d[0] + 0ull;  goto L_004C6558; }
L_004C6558:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[30].d[0] = c.r[30].d[0] & 65535ull;  if (t) { goto L_004C6570; } }
    st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 1;
L_004C6570:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C658C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C65A8; } }
L_004C658C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_004C65A8:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = ld32((c.r[28].w[0] - 31524u));
    c.f[4] = ld32((c.r[28].w[0] - 31504u));
    c.f[3] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31788u));
    c.f[3] = ld32((c.r[28].w[0] - 31500u));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = ld32((c.r[28].w[0] - 31660u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[5] = c.f[0] ^ fp::kSign;
    c.f[0] = c.f[5] & fp::kAbs;
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[5] = c.f[1] & fp::kAbs;
    c.facc = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C661Cu); c.f[26] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x004C661Cu) [[unlikely]] return; }
L_004C661C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.f[4] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::add(c.f[1], c.f[26]);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.f[3] = c.r[2].w[0];
    c.r[1].d[0] = c.r[1].d[0] | 4096ull;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 448u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[9] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 31;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 4108u), c.f[0]);  if (t) { goto L_004C6784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[22].w[0] + 16u));
    c.f[3] = ld32((c.r[22].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[7] = fp::sub(c.f[8], c.f[2]);
    c.f[2] = ld32((c.r[22].w[0] + 8u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[6], c.f[2]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    set32(c.r[4], c.r[29].w[0] + 504u);
    fpu_rsqrt(c, 10u, c.f[0], c.f[10]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[5] = fp::mul(c.f[2], c.f[10]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[4] = fp::mul(c.f[3], c.f[10]);
    c.f[2] = fp::mul(c.f[0], c.f[9]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[4]));
    c.f[3] = fp::mul(c.f[7], c.f[10]);
    c.facc = fp::add(c.f[1], c.f[8]);
    st32((c.r[29].w[0] + 540u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[26] = ld32((c.r[17].w[0] + 60u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6738u); set32(c.r[6], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004C6738u) [[unlikely]] return; }
L_004C6738:
    c.f[3] = ld32((c.r[29].w[0] + 504u));
    c.f[4] = ld32((c.r[29].w[0] + 508u));
    c.f[5] = ld32((c.r[29].w[0] + 512u));
    c.f[3] = fp::mul(c.f[26], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[4] = fp::mul(c.f[26], c.f[4]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[5] = fp::mul(c.f[26], c.f[5]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[24]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[25]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_004C67F4; } }
L_004C6784:
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 488u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.f[26] = ld32((c.r[17].w[0] + 60u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C67ACu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004C67ACu) [[unlikely]] return; }
L_004C67AC:
    c.f[3] = ld32((c.r[29].w[0] + 488u));
    c.f[4] = ld32((c.r[29].w[0] + 492u));
    c.f[5] = ld32((c.r[29].w[0] + 496u));
    c.f[3] = fp::mul(c.f[26], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[4] = fp::mul(c.f[26], c.f[4]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[23]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[5] = fp::mul(c.f[26], c.f[5]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[24]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[25]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 18;
L_004C67F4:
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[31] = fp::min(c.f[29], c.f[2]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[30] = fp::min(c.f[28], c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[26] = fp::min(c.f[27], c.f[0]);
    c.f[29] = fp::max(c.f[29], c.f[2]);
    c.f[28] = fp::max(c.f[28], c.f[1]);
    c.f[27] = fp::max(c.f[27], c.f[0]);
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 11;
L_004C6820:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C6540u | kUnwind; return; } goto L_004C6540; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004C6838:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 110u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C63E0u | kUnwind; return; } goto L_004C63E0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4097ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004C6868; } }
    breakpoint(c, 0x004C6860u);
    c.budget -= 2;
L_004C6868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6870u);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004C6870u) [[unlikely]] return; }
L_004C6870:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[20].w[0] + 220u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], 0u + 257u);
    set32(c.r[4], c.r[4].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] >> 4);
    st32((c.r[2].w[0] - 12256u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 12272u), c.r[5].w[0]);
    st32((c.r[2].w[0] - 12160u), 0u);
    st32((c.r[2].w[0] - 12288u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C68B8u);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x004C68B8u) [[unlikely]] return; }
L_004C68B8:
    set32(c.r[6], ld32((c.r[20].w[0] + 220u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], c.r[3].w[0] >> 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 40u)));
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0] - 12256u), c.r[5].w[0]);
    st32((c.r[2].w[0] - 12272u), c.r[6].w[0]);
    st32((c.r[2].w[0] - 12160u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 12288u), c.r[3].w[0]);
    c.f[0] = fp::add(c.f[29], c.f[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = fp::add(c.f[28], c.f[30]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = fp::add(c.f[27], c.f[26]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[2] = fp::sub(c.f[29], c.f[31]);
    c.f[1] = fp::sub(c.f[28], c.f[30]);
    c.f[0] = fp::sub(c.f[27], c.f[26]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[2].w[0] + 16u), c.f[2]);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6974u); st16((c.r[3].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004C6974u) [[unlikely]] return; }
L_004C6974:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.f[0] = c.r[5].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004C6A0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.f[0] = fp::add(c.f[22], c.f[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[18].w[0] + 72u), c.f[22]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C69E8u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x004C69E8u) [[unlikely]] return; }
L_004C69E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[2].w[0] + 16u), c.f[2]);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.budget -= 9;
L_004C6A0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6A1Cu); st32((c.r[29].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004C6A1Cu) [[unlikely]] return; }
L_004C6A1C:
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 7u, c.f[5], c.f[2]);
    c.f[6] = ld32((c.r[28].w[0] - 32076u));
    c.f[5] = ld32((c.r[28].w[0] - 32252u));
    c.f[2] = 0u;
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    c.facc = fp::add(c.f[2], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[20], c.f[5]));
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.f[2] = fp::mul(c.f[5], c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 456u));
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 448u));
    c.f[1] = fp::mul(c.f[5], c.f[4]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[2]);
    st32((c.r[3].w[0] + 76u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[0] = fp::mul(c.f[5], c.f[3]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[2]);
    st32((c.r[3].w[0] + 76u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 36;
L_004C6AAC:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 384u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C636Cu | kUnwind; return; } goto L_004C636C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6AC4u); set32(c.r[4], ld32((c.r[29].w[0] + 568u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C6AC4u) [[unlikely]] return; }
L_004C6AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_004C6AC8:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_004C6B30:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[6], c.f[1]);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::add(c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_004C6B80:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[12]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_004C6BC0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[6], c.f[1]);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_004C6C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_004C6C20:
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  c.pc = t; return; }
L_004C6C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 308u);  c.pc = t; return; }
L_004C6C50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 52u)));  c.pc = t; return; }
L_004C6C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 320u)));  c.pc = t; return; }
L_004C6C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C6C90:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6CDCu); st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C6CDCu) [[unlikely]] return; }
L_004C6CDC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6CECu); st32((c.r[29].w[0] + 276u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C6CECu) [[unlikely]] return; }
L_004C6CEC:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[20].d[0]; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_004C6D58; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[20].w[0]);  goto L_004C6D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6D08u) [[unlikely]] return; }
L_004C6D08:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D18u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6D18u) [[unlikely]] return; }
L_004C6D18:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C6D34; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6D34u) [[unlikely]] return; }
L_004C6D34:
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 1;
L_004C6D38:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004C6D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6D48u) [[unlikely]] return; }
L_004C6D48:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D58u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6D58u) [[unlikely]] return; }
L_004C6D58:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004C6DD4; }
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[18].d[0]) { st16((c.r[16].w[0] + 110u), static_cast<std::uint16_t>(c.r[22].w[0]));  goto L_004C6E50; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[18].w[0]);  goto L_004C6DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6D7Cu) [[unlikely]] return; }
L_004C6D7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6D8Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6D8Cu) [[unlikely]] return; }
L_004C6D8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C6DA8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6DA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6DA8u) [[unlikely]] return; }
L_004C6DA8:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_004C6DAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C6E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6DBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6DBCu) [[unlikely]] return; }
L_004C6DBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6DCCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6DCCu) [[unlikely]] return; }
L_004C6DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C6E4C; } }
L_004C6DD4:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_004C6E4C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[17].w[0]);  goto L_004C6E2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6DFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6DFCu) [[unlikely]] return; }
L_004C6DFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E0Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6E0Cu) [[unlikely]] return; }
L_004C6E0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C6E28; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6E28u) [[unlikely]] return; }
L_004C6E28:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004C6E2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C6E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6E3Cu) [[unlikely]] return; }
L_004C6E3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E4Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6E4Cu) [[unlikely]] return; }
L_004C6E4C:
    st16((c.r[16].w[0] + 110u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.budget -= 1;
L_004C6E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[16].w[0] + 124u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2704u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[21].w[0]);  if (t) { goto L_004C6E70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004C6E78; } }
L_004C6E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E78u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004C6E78u) [[unlikely]] return; }
L_004C6E78:
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6E90u); set32(c.r[5], c.r[29].w[0] + 292u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6E90u) [[unlikely]] return; }
L_004C6E90:
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_004C6F00; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_004C6EE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6EB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6EB0u) [[unlikely]] return; }
L_004C6EB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6EC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6EC0u) [[unlikely]] return; }
L_004C6EC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C6EDC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6EDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6EDCu) [[unlikely]] return; }
L_004C6EDC:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_004C6EE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C6F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6EF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6EF0u) [[unlikely]] return; }
L_004C6EF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6F00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6F00u) [[unlikely]] return; }
L_004C6F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_004C6F60; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6F2Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6F2Cu) [[unlikely]] return; }
L_004C6F2C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6F3Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6F3Cu) [[unlikely]] return; }
L_004C6F3C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C6F5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6F5Cu); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004C6F5Cu) [[unlikely]] return; }
L_004C6F5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004C6F60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = ld16((c.r[2].w[0] + 220u));  goto L_004C7090; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 2725u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004C6F84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004C6F8C; } }
L_004C6F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6F8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004C6F8Cu) [[unlikely]] return; }
L_004C6F8C:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6FA4u); set32(c.r[5], c.r[29].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6FA4u) [[unlikely]] return; }
L_004C6FA4:
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_004C7014; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_004C6FF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6FC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C6FC4u) [[unlikely]] return; }
L_004C6FC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6FD4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C6FD4u) [[unlikely]] return; }
L_004C6FD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C6FF0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C6FF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C6FF0u) [[unlikely]] return; }
L_004C6FF0:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_004C6FF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C7014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7004u) [[unlikely]] return; }
L_004C7004:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7014u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7014u) [[unlikely]] return; }
L_004C7014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_004C7074; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7040u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7040u) [[unlikely]] return; }
L_004C7040:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7050u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7050u) [[unlikely]] return; }
L_004C7050:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C7070; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7070u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004C7070u) [[unlikely]] return; }
L_004C7070:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004C7074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C708C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7084u); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C7084u) [[unlikely]] return; }
L_004C7084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_004C77DC; } }
L_004C708C:
    c.r[17].d[0] = ld16((c.r[2].w[0] + 220u));
    c.budget -= 1;
L_004C7090:
    set32(c.r[4], c.r[16].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C709Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004C709Cu) [[unlikely]] return; }
L_004C709C:
    c.r[22].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004C7234; } }
L_004C70AC:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 218u));
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 212u)));  goto L_004C70C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004C70D0; } }
L_004C70C4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004C70D0:
    c.r[17].d[0] = ld16((c.r[20].w[0] + 220u));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004C7234; }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C70F4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004C70F4u) [[unlikely]] return; }
L_004C70F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7110u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004C7110u) [[unlikely]] return; }
L_004C7110:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004C7168; } }
L_004C711C:
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 212u)));  goto L_004C7130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004C713C; } }
L_004C7130:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004C713C:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_004C7168:
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C711Cu | kUnwind; return; } goto L_004C711C; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7180u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C7180u) [[unlikely]] return; }
L_004C7180:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 300u), c.r[20].w[0]);  goto L_004C7198; }
    st32((c.r[20].w[0]), 0u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 300u), c.r[20].w[0]);
    c.budget -= 3;
L_004C7198:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[21].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  goto L_004C7210; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71B8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x004C71B8u) [[unlikely]] return; }
L_004C71B8:
    st32((c.r[20].w[0]), c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71C8u); st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_003F(c, 43u, depth + 1u); else { c.pc = 0x001FC7B0u; return; } if (c.pc != 0x004C71C8u) [[unlikely]] return; }
L_004C71C8:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71D8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x004C71D8u) [[unlikely]] return; }
L_004C71D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71E0u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0049(c, 356u, depth + 1u); else { c.pc = 0x00227DC0u; return; } if (c.pc != 0x004C71E0u) [[unlikely]] return; }
L_004C71E0:
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71ECu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0049(c, 358u, depth + 1u); else { c.pc = 0x00227E00u; return; } if (c.pc != 0x004C71ECu) [[unlikely]] return; }
L_004C71EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C71F8u); set32(c.r[4], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004C71F8u) [[unlikely]] return; }
L_004C71F8:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7204u); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004C7204u) [[unlikely]] return; }
L_004C7204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C720Cu); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_00F1(c, 364u, depth + 1u); else { c.pc = 0x004C7810u; return; } if (c.pc != 0x004C720Cu) [[unlikely]] return; }
L_004C720C:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_004C7210:
    set32(c.r[4], c.r[16].w[0] + 92u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 300u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C722Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004C722Cu) [[unlikely]] return; }
L_004C722C:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_004C7234:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C70ACu | kUnwind; return; } goto L_004C70AC; }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 256u);  goto L_004C725C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7254u); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C7254u) [[unlikely]] return; }
L_004C7254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C77D8; } }
L_004C725C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7264u) [[unlikely]] return; }
L_004C7264:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 16u)));  goto L_004C7284; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C727Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004C727Cu) [[unlikely]] return; }
L_004C727C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_004C7284:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_004C72EC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  goto L_004C72CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C729Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C729Cu) [[unlikely]] return; }
L_004C729C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C72ACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C72ACu) [[unlikely]] return; }
L_004C72AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C72C8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C72C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C72C8u) [[unlikely]] return; }
L_004C72C8:
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_004C72CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C72EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C72DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C72DCu) [[unlikely]] return; }
L_004C72DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C72ECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C72ECu) [[unlikely]] return; }
L_004C72EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C72FCu); set32(c.r[5], c.r[5].w[0] + 2741u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004C72FCu) [[unlikely]] return; }
L_004C72FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7310u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004C7310u) [[unlikely]] return; }
L_004C7310:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 241u);  goto L_004C7324; }
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004C7324:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004C7338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004C7340; } }
L_004C7338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7340u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004C7340u) [[unlikely]] return; }
L_004C7340:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7350u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004C7350u) [[unlikely]] return; }
L_004C7350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004C73B0; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C737Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C737Cu) [[unlikely]] return; }
L_004C737C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C738Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C738Cu) [[unlikely]] return; }
L_004C738C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C73AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C73ACu); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004C73ACu) [[unlikely]] return; }
L_004C73AC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004C73B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C73B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C73B8u) [[unlikely]] return; }
L_004C73B8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C73C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C73C4u) [[unlikely]] return; }
L_004C73C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C73ECu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C73ECu) [[unlikely]] return; }
L_004C73EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7400u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 152u, depth + 1u); else { c.pc = 0x00102350u; return; } if (c.pc != 0x004C7400u) [[unlikely]] return; }
L_004C7400:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_004C7750; } }
L_004C740C:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 110u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u - 16u);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[7].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld16((c.r[8].w[0] + 4u));
    set32(c.r[2], ld32((c.r[8].w[0])));
    mmi::mult(c, 0, c.r[18].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[18].w[0] << 1);
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.r[19].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7460u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x004C7460u) [[unlikely]] return; }
L_004C7460:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7478u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004C7478u) [[unlikely]] return; }
L_004C7478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7494u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004C7494u) [[unlikely]] return; }
L_004C7494:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C74B4u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004C74B4u) [[unlikely]] return; }
L_004C74B4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_004C75C0; } }
L_004C74C8:
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { set32(c.r[3], c.r[20].w[0] >> 1);  goto L_004C74DC; }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C74F4; } }
L_004C74DC:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_004C74F4:
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[3], c.r[18].w[0] >> 1);  goto L_004C7508; }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C7520; } }
L_004C7508:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004C7520:
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C753Cu);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x004C753Cu) [[unlikely]] return; }
L_004C753C:
    mmi::div(c, 0, c.r[30].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.hi.d[0];
    c.f[2] = c.r[6].w[0];
    set32(c.r[2], c.r[6].w[0] << 1);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[5].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 33;
L_004C75C0:
    c.r[30].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[30].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C74C8u | kUnwind; return; } goto L_004C74C8; } }
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004C765C; } }
L_004C75E0:
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[7], c.r[5].w[0] << 1);  goto L_004C7628; }
    set32(c.r[7], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[7], c.r[23].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_004C7654; } }
L_004C7628:
    set32(c.r[6], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[23].w[0] + c.r[7].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_004C7654:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_004C765C:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C75E0u | kUnwind; return; } goto L_004C75E0; }
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[5], 0u + 16u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7688u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x004C7688u) [[unlikely]] return; }
L_004C7688:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7698u) [[unlikely]] return; }
L_004C7698:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 220u)));  goto L_004C76D8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 220u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[22].d[0]);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C76D0u); st64((c.r[29].w[0] + 8u), c.r[23].d[0]);  if (depth < kMaxDepth) unit_0087(c, 344u, depth + 1u); else { c.pc = 0x0031F1F0u; return; } if (c.pc != 0x004C76D0u) [[unlikely]] return; }
L_004C76D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 220u)));
    c.budget -= 2;
L_004C76D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7714u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7714u) [[unlikely]] return; }
L_004C7714:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7720u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F1(c, 365u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x004C7720u) [[unlikely]] return; }
L_004C7720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7728u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C7728u) [[unlikely]] return; }
L_004C7728:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 10;
L_004C7750:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C740Cu | kUnwind; return; } goto L_004C740C; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C778Cu); st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00F2(c, 111u, depth + 1u); else { c.pc = 0x004C8B70u; return; } if (c.pc != 0x004C778Cu) [[unlikely]] return; }
L_004C778C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F2(c, 6u, depth + 1u); else { c.pc = 0x004C8040u; return; } if (c.pc != 0x004C7794u) [[unlikely]] return; }
L_004C7794:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C77ACu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C77ACu) [[unlikely]] return; }
L_004C77AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C77BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004C77BCu) [[unlikely]] return; }
L_004C77BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C77D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C77D0u) [[unlikely]] return; }
L_004C77D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C77D8u); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C77D8u) [[unlikely]] return; }
L_004C77D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_004C77DC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_004C7810:
    c.f[3] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_004C7860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C7888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7888u);  if (depth < kMaxDepth) unit_00F1(c, 379u, depth + 1u); else { c.pc = 0x004C7930u; return; } if (c.pc != 0x004C7888u) [[unlikely]] return; }
L_004C7888:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7894u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C7894u) [[unlikely]] return; }
L_004C7894:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78A0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C78A0u) [[unlikely]] return; }
L_004C78A0:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C78ACu) [[unlikely]] return; }
L_004C78AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78B8u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C78B8u) [[unlikely]] return; }
L_004C78B8:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78C4u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C78C4u) [[unlikely]] return; }
L_004C78C4:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C78D0u) [[unlikely]] return; }
L_004C78D0:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78DCu); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C78DCu) [[unlikely]] return; }
L_004C78DC:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78E8u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C78E8u) [[unlikely]] return; }
L_004C78E8:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C78F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C78F4u) [[unlikely]] return; }
L_004C78F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7900u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C7900u) [[unlikely]] return; }
L_004C7900:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C790Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C790Cu) [[unlikely]] return; }
L_004C790C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7918u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C7918u) [[unlikely]] return; }
L_004C7918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C7930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C794Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C794Cu) [[unlikely]] return; }
L_004C794C:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C7958u) [[unlikely]] return; }
L_004C7958:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7968u) [[unlikely]] return; }
L_004C7968:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 36u)));  goto L_004C7984; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C797Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004C797Cu) [[unlikely]] return; }
L_004C797C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 2;
L_004C7984:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_004C79F0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 36u), c.r[17].w[0]);  goto L_004C79CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C799Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C799Cu) [[unlikely]] return; }
L_004C799C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C79ACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C79ACu) [[unlikely]] return; }
L_004C79AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C79C8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C79C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C79C8u) [[unlikely]] return; }
L_004C79C8:
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 1;
L_004C79CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C79EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C79DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C79DCu) [[unlikely]] return; }
L_004C79DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C79ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C79ECu) [[unlikely]] return; }
L_004C79EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004C79F0:
    set32(c.r[2], 0u - 15u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_004C7AA8; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7A24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7A24u) [[unlikely]] return; }
L_004C7A24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004C7A38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7A34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004C7A34u) [[unlikely]] return; }
L_004C7A34:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004C7A38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C7A5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7A9C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7A9C; } }
L_004C7A5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004C7A84; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004C7AA0; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7A9C; } }
L_004C7A84:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C7A9C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C7A9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004C7AA0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004C7AA8:
    set32(c.r[3], 0u - 12289u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7AC4u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7AC4u) [[unlikely]] return; }
L_004C7AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C7B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7AD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C7AD4u) [[unlikely]] return; }
L_004C7AD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004C7B14:
    set32(c.r[18], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[7], ld32((c.r[16].w[0] + 40u)));  goto L_004C7B84; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  goto L_004C7B60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7B30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7B30u) [[unlikely]] return; }
L_004C7B30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7B40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7B40u) [[unlikely]] return; }
L_004C7B40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C7B5C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7B5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7B5Cu) [[unlikely]] return; }
L_004C7B5C:
    st32((c.r[16].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 1;
L_004C7B60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C7B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7B70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7B70u) [[unlikely]] return; }
L_004C7B70:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7B80u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7B80u) [[unlikely]] return; }
L_004C7B80:
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_004C7B84:
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld16((c.r[7].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[7].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7BB8u); st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7BB8u) [[unlikely]] return; }
L_004C7BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7BC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C7BC8u) [[unlikely]] return; }
L_004C7BC8:
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
L_004C7C10:
    set32(c.r[18], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 44u)));  goto L_004C7C80; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), c.r[17].w[0]);  goto L_004C7C5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7C2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7C2Cu) [[unlikely]] return; }
L_004C7C2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7C3Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7C3Cu) [[unlikely]] return; }
L_004C7C3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C7C58; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7C58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7C58u) [[unlikely]] return; }
L_004C7C58:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 1;
L_004C7C5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C7C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7C6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7C6Cu) [[unlikely]] return; }
L_004C7C6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7C7Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7C7Cu) [[unlikely]] return; }
L_004C7C7C:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_004C7C80:
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7CC0u); st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7CC0u) [[unlikely]] return; }
L_004C7CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C7D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7CD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004C7CD0u) [[unlikely]] return; }
L_004C7CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7CECu); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004C7CECu) [[unlikely]] return; }
L_004C7CEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7CF8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004C7CF8u) [[unlikely]] return; }
L_004C7CF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D04u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004C7D04u) [[unlikely]] return; }
L_004C7D04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004C7D10u) [[unlikely]] return; }
L_004C7D10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004C7D1Cu) [[unlikely]] return; }
L_004C7D1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004C7D28u) [[unlikely]] return; }
L_004C7D28:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004C7D30:
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[7], ld32((c.r[16].w[0] + 48u)));  goto L_004C7DA0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_004C7D7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7D4Cu) [[unlikely]] return; }
L_004C7D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D5Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7D5Cu) [[unlikely]] return; }
L_004C7D5C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C7D78; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7D78u) [[unlikely]] return; }
L_004C7D78:
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_004C7D7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C7D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7D8Cu) [[unlikely]] return; }
L_004C7D8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7D9Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7D9Cu) [[unlikely]] return; }
L_004C7D9C:
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_004C7DA0:
    set32(c.r[4], 0u - 31u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[7].w[0] + 28u));
    st32((c.r[29].w[0] + 76u), 0u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    st16((c.r[7].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 30;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C7E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7E20u) [[unlikely]] return; }
L_004C7E20:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7E30u) [[unlikely]] return; }
L_004C7E30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E3Cu); set32(c.r[4], c.r[4].w[0] + 2755u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004C7E3Cu) [[unlikely]] return; }
L_004C7E3C:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004C7E4Cu) [[unlikely]] return; }
L_004C7E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E54u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004C7E54u) [[unlikely]] return; }
L_004C7E54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 36u)));  goto L_004C7ECC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_004C7EA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7E78u) [[unlikely]] return; }
L_004C7E78:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7E88u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7E88u) [[unlikely]] return; }
L_004C7E88:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C7EA4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7EA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7EA4u) [[unlikely]] return; }
L_004C7EA4:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004C7EA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[17].w[0]);  if (t) { goto L_004C7EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7EB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7EB8u) [[unlikely]] return; }
L_004C7EB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7EC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7EC8u) [[unlikely]] return; }
L_004C7EC8:
    set32(c.r[16], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004C7ECC:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_004C7F68; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C7EE8u) [[unlikely]] return; }
L_004C7EE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004C7EFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7EF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004C7EF8u) [[unlikely]] return; }
L_004C7EF8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004C7EFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C7F20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7F60; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7F60; } }
L_004C7F20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004C7F48; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004C7F64; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C7F60; } }
L_004C7F48:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C7F60; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C7F60:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004C7F64:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004C7F68:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 76u)));  goto L_004C7FD8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  goto L_004C7FB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7F84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7F84u) [[unlikely]] return; }
L_004C7F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7F94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7F94u) [[unlikely]] return; }
L_004C7F94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C7FB0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C7FB0u) [[unlikely]] return; }
L_004C7FB0:
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_004C7FB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C7FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7FC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7FC4u) [[unlikely]] return; }
L_004C7FC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7FD4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7FD4u) [[unlikely]] return; }
L_004C7FD4:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_004C7FD8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  [[clang::musttail]] return unit_00F2(c, 4u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7FE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C7FE8u) [[unlikely]] return; }
L_004C7FE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C7FF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C7FF8u) [[unlikely]] return; }
L_004C7FF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00F2(c, 3u, depth); } }
    [[clang::musttail]] return unit_00F2(c, 2u, depth);
}

}
