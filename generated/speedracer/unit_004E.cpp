#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0,
    294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0,
    0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315,
    0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0,
    326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0,
    0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 347,
    0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00238000;
    case 2u: goto L_00238010;
    case 3u: goto L_0023802C;
    case 4u: goto L_00238038;
    case 5u: goto L_00238044;
    case 6u: goto L_00238050;
    case 7u: goto L_002380A8;
    case 8u: goto L_00238110;
    case 9u: goto L_00238150;
    case 10u: goto L_00238194;
    case 11u: goto L_002381B8;
    case 12u: goto L_00238268;
    case 13u: goto L_00238280;
    case 14u: goto L_002382A8;
    case 15u: goto L_002382B4;
    case 16u: goto L_002382C0;
    case 17u: goto L_002382CC;
    case 18u: goto L_002382D8;
    case 19u: goto L_002382E4;
    case 20u: goto L_002382F0;
    case 21u: goto L_002382FC;
    case 22u: goto L_00238310;
    case 23u: goto L_0023832C;
    case 24u: goto L_00238350;
    case 25u: goto L_00238418;
    case 26u: goto L_00238424;
    case 27u: goto L_00238438;
    case 28u: goto L_00238474;
    case 29u: goto L_00238488;
    case 30u: goto L_00238498;
    case 31u: goto L_002384AC;
    case 32u: goto L_002384C0;
    case 33u: goto L_002384CC;
    case 34u: goto L_002384DC;
    case 35u: goto L_00238518;
    case 36u: goto L_00238528;
    case 37u: goto L_00238538;
    case 38u: goto L_00238548;
    case 39u: goto L_0023855C;
    case 40u: goto L_0023856C;
    case 41u: goto L_002385B8;
    case 42u: goto L_002385C4;
    case 43u: goto L_002385FC;
    case 44u: goto L_00238614;
    case 45u: goto L_00238648;
    case 46u: goto L_00238680;
    case 47u: goto L_00238790;
    case 48u: goto L_002387BC;
    case 49u: goto L_00238820;
    case 50u: goto L_002389E0;
    case 51u: goto L_00238A48;
    case 52u: goto L_00238A68;
    case 53u: goto L_00238A74;
    case 54u: goto L_00238BF0;
    case 55u: goto L_00238C70;
    case 56u: goto L_00238C84;
    case 57u: goto L_00238C8C;
    case 58u: goto L_00238CE4;
    case 59u: goto L_00238D04;
    case 60u: goto L_00238D10;
    case 61u: goto L_00238E28;
    case 62u: goto L_00238E3C;
    case 63u: goto L_00238E44;
    case 64u: goto L_00238E90;
    case 65u: goto L_00238EB0;
    case 66u: goto L_00238EBC;
    case 67u: goto L_002390A0;
    case 68u: goto L_00239120;
    case 69u: goto L_00239154;
    case 70u: goto L_0023915C;
    case 71u: goto L_00239178;
    case 72u: goto L_00239188;
    case 73u: goto L_002391A4;
    case 74u: goto L_002391C0;
    case 75u: goto L_002391F4;
    case 76u: goto L_00239204;
    case 77u: goto L_00239220;
    case 78u: goto L_0023923C;
    case 79u: goto L_00239260;
    case 80u: goto L_002392B4;
    case 81u: goto L_002392D0;
    case 82u: goto L_002392F0;
    case 83u: goto L_00239334;
    case 84u: goto L_00239350;
    case 85u: goto L_00239370;
    case 86u: goto L_00239390;
    case 87u: goto L_002393C8;
    case 88u: goto L_002393D8;
    case 89u: goto L_002393F4;
    case 90u: goto L_00239408;
    case 91u: goto L_00239418;
    case 92u: goto L_00239440;
    case 93u: goto L_00239460;
    case 94u: goto L_00239488;
    case 95u: goto L_00239498;
    case 96u: goto L_002394B0;
    case 97u: goto L_002394E4;
    case 98u: goto L_002394F4;
    case 99u: goto L_00239510;
    case 100u: goto L_0023952C;
    case 101u: goto L_00239550;
    case 102u: goto L_00239578;
    case 103u: goto L_00239588;
    case 104u: goto L_002395A0;
    case 105u: goto L_002395E0;
    case 106u: goto L_002395F0;
    case 107u: goto L_00239614;
    case 108u: goto L_00239624;
    case 109u: goto L_00239644;
    case 110u: goto L_00239670;
    case 111u: goto L_002396A4;
    case 112u: goto L_002396B4;
    case 113u: goto L_002396D0;
    case 114u: goto L_002396E4;
    case 115u: goto L_002396F4;
    case 116u: goto L_00239710;
    case 117u: goto L_00239744;
    case 118u: goto L_00239750;
    case 119u: goto L_0023975C;
    case 120u: goto L_00239778;
    case 121u: goto L_00239790;
    case 122u: goto L_002397C4;
    case 123u: goto L_002397D4;
    case 124u: goto L_002397F0;
    case 125u: goto L_0023980C;
    case 126u: goto L_00239830;
    case 127u: goto L_00239840;
    case 128u: goto L_00239870;
    case 129u: goto L_002398A4;
    case 130u: goto L_002398AC;
    case 131u: goto L_002398F0;
    case 132u: goto L_00239900;
    case 133u: goto L_00239910;
    case 134u: goto L_00239920;
    case 135u: goto L_0023995C;
    case 136u: goto L_00239964;
    case 137u: goto L_00239980;
    case 138u: goto L_00239994;
    case 139u: goto L_002399CC;
    case 140u: goto L_002399E8;
    case 141u: goto L_00239A10;
    case 142u: goto L_00239A20;
    case 143u: goto L_00239A5C;
    case 144u: goto L_00239A64;
    case 145u: goto L_00239A80;
    case 146u: goto L_00239A94;
    case 147u: goto L_00239ACC;
    case 148u: goto L_00239AE8;
    case 149u: goto L_00239B10;
    case 150u: goto L_00239B20;
    case 151u: goto L_00239B5C;
    case 152u: goto L_00239B64;
    case 153u: goto L_00239B80;
    case 154u: goto L_00239B94;
    case 155u: goto L_00239BD8;
    case 156u: goto L_00239BE0;
    case 157u: goto L_00239BFC;
    case 158u: goto L_00239C10;
    case 159u: goto L_00239C48;
    case 160u: goto L_00239C64;
    case 161u: goto L_00239C90;
    case 162u: goto L_00239CCC;
    case 163u: goto L_00239CD4;
    case 164u: goto L_00239CF0;
    case 165u: goto L_00239D04;
    case 166u: goto L_00239D48;
    case 167u: goto L_00239D50;
    case 168u: goto L_00239D6C;
    case 169u: goto L_00239D80;
    case 170u: goto L_00239DB8;
    case 171u: goto L_00239DD4;
    case 172u: goto L_00239E00;
    case 173u: goto L_00239E20;
    case 174u: goto L_00239E54;
    case 175u: goto L_00239E64;
    case 176u: goto L_00239E90;
    case 177u: goto L_00239EB4;
    case 178u: goto L_00239EC4;
    case 179u: goto L_00239EE0;
    case 180u: goto L_00239F08;
    case 181u: goto L_00239F34;
    case 182u: goto L_00239F44;
    case 183u: goto L_00239F64;
    case 184u: goto L_00239F7C;
    case 185u: goto L_00239FA8;
    case 186u: goto L_00239FB8;
    case 187u: goto L_00239FD8;
    case 188u: goto L_00239FF0;
    case 189u: goto L_0023A01C;
    case 190u: goto L_0023A048;
    case 191u: goto L_0023A058;
    case 192u: goto L_0023A078;
    case 193u: goto L_0023A094;
    case 194u: goto L_0023A0C0;
    case 195u: goto L_0023A0D0;
    case 196u: goto L_0023A0F0;
    case 197u: goto L_0023A110;
    case 198u: goto L_0023A120;
    case 199u: goto L_0023A130;
    case 200u: goto L_0023A148;
    case 201u: goto L_0023A178;
    case 202u: goto L_0023A190;
    case 203u: goto L_0023A1B0;
    case 204u: goto L_0023A23C;
    case 205u: goto L_0023A250;
    case 206u: goto L_0023A270;
    case 207u: goto L_0023A28C;
    case 208u: goto L_0023A2A0;
    case 209u: goto L_0023A2B8;
    case 210u: goto L_0023A2E8;
    case 211u: goto L_0023A300;
    case 212u: goto L_0023A320;
    case 213u: goto L_0023A3AC;
    case 214u: goto L_0023A3C0;
    case 215u: goto L_0023A3E0;
    case 216u: goto L_0023A3FC;
    case 217u: goto L_0023A410;
    case 218u: goto L_0023A478;
    case 219u: goto L_0023A488;
    case 220u: goto L_0023A4A4;
    case 221u: goto L_0023A4C4;
    case 222u: goto L_0023A4E0;
    case 223u: goto L_0023A500;
    case 224u: goto L_0023A510;
    case 225u: goto L_0023A524;
    case 226u: goto L_0023A530;
    case 227u: goto L_0023A544;
    case 228u: goto L_0023A560;
    case 229u: goto L_0023A570;
    case 230u: goto L_0023A580;
    case 231u: goto L_0023A590;
    case 232u: goto L_0023A5B0;
    case 233u: goto L_0023A5D0;
    case 234u: goto L_0023A5E0;
    case 235u: goto L_0023A5F8;
    case 236u: goto L_0023A618;
    case 237u: goto L_0023A628;
    case 238u: goto L_0023A644;
    case 239u: goto L_0023A658;
    case 240u: goto L_0023A668;
    case 241u: goto L_0023A67C;
    case 242u: goto L_0023A6A0;
    case 243u: goto L_0023A6B4;
    case 244u: goto L_0023A6D4;
    case 245u: goto L_0023A6F0;
    case 246u: goto L_0023A708;
    case 247u: goto L_0023A718;
    case 248u: goto L_0023A740;
    case 249u: goto L_0023A798;
    case 250u: goto L_0023A7A8;
    case 251u: goto L_0023A7C4;
    case 252u: goto L_0023A7E4;
    case 253u: goto L_0023A800;
    case 254u: goto L_0023A820;
    case 255u: goto L_0023A848;
    case 256u: goto L_0023A858;
    case 257u: goto L_0023A874;
    case 258u: goto L_0023A890;
    case 259u: goto L_0023A910;
    case 260u: goto L_0023A970;
    case 261u: goto L_0023A9A4;
    case 262u: goto L_0023A9E0;
    case 263u: goto L_0023A9F0;
    case 264u: goto L_0023AA14;
    case 265u: goto L_0023AA20;
    case 266u: goto L_0023AA50;
    case 267u: goto L_0023AA9C;
    case 268u: goto L_0023AAE8;
    case 269u: goto L_0023AB8C;
    case 270u: goto L_0023AB9C;
    case 271u: goto L_0023ABD0;
    case 272u: goto L_0023AC28;
    case 273u: goto L_0023AC74;
    case 274u: goto L_0023AC94;
    case 275u: goto L_0023ACB4;
    case 276u: goto L_0023ACD4;
    case 277u: goto L_0023AD30;
    case 278u: goto L_0023ADA0;
    case 279u: goto L_0023AE08;
    case 280u: goto L_0023AE28;
    case 281u: goto L_0023AE64;
    case 282u: goto L_0023AED0;
    case 283u: goto L_0023AF00;
    case 284u: goto L_0023AF20;
    case 285u: goto L_0023AF48;
    case 286u: goto L_0023AFA0;
    case 287u: goto L_0023AFB0;
    case 288u: goto L_0023B000;
    case 289u: goto L_0023B020;
    case 290u: goto L_0023B030;
    case 291u: goto L_0023B040;
    case 292u: goto L_0023B068;
    case 293u: goto L_0023B074;
    case 294u: goto L_0023B080;
    case 295u: goto L_0023B08C;
    case 296u: goto L_0023B098;
    case 297u: goto L_0023B0A4;
    case 298u: goto L_0023B0B0;
    case 299u: goto L_0023B0BC;
    case 300u: goto L_0023B0C8;
    case 301u: goto L_0023B0D4;
    case 302u: goto L_0023B0E0;
    case 303u: goto L_0023B0EC;
    case 304u: goto L_0023B0F8;
    case 305u: goto L_0023B104;
    case 306u: goto L_0023B110;
    case 307u: goto L_0023B11C;
    case 308u: goto L_0023B128;
    case 309u: goto L_0023B134;
    case 310u: goto L_0023B140;
    case 311u: goto L_0023B14C;
    case 312u: goto L_0023B158;
    case 313u: goto L_0023B164;
    case 314u: goto L_0023B170;
    case 315u: goto L_0023B17C;
    case 316u: goto L_0023B188;
    case 317u: goto L_0023B194;
    case 318u: goto L_0023B1A0;
    case 319u: goto L_0023B1AC;
    case 320u: goto L_0023B1B8;
    case 321u: goto L_0023B1C4;
    case 322u: goto L_0023B1D0;
    case 323u: goto L_0023B1DC;
    case 324u: goto L_0023B1E8;
    case 325u: goto L_0023B1F4;
    case 326u: goto L_0023B200;
    case 327u: goto L_0023B20C;
    case 328u: goto L_0023B218;
    case 329u: goto L_0023B224;
    case 330u: goto L_0023B230;
    case 331u: goto L_0023B23C;
    case 332u: goto L_0023B248;
    case 333u: goto L_0023B254;
    case 334u: goto L_0023B260;
    case 335u: goto L_0023B26C;
    case 336u: goto L_0023B278;
    case 337u: goto L_0023B284;
    case 338u: goto L_0023B290;
    case 339u: goto L_0023B29C;
    case 340u: goto L_0023B2A8;
    case 341u: goto L_0023B2B4;
    case 342u: goto L_0023B2C0;
    case 343u: goto L_0023B2CC;
    case 344u: goto L_0023B2D8;
    case 345u: goto L_0023B2E4;
    case 346u: goto L_0023B2F0;
    case 347u: goto L_0023B2FC;
    case 348u: goto L_0023B308;
    case 349u: goto L_0023B314;
    case 350u: goto L_0023B320;
    case 351u: goto L_0023B32C;
    case 352u: goto L_0023B344;
    case 353u: goto L_0023B35C;
    case 354u: goto L_0023B364;
    case 355u: goto L_0023B380;
    case 356u: goto L_0023B3B0;
    case 357u: goto L_0023B3C4;
    case 358u: goto L_0023B3D8;
    case 359u: goto L_0023B3EC;
    case 360u: goto L_0023B400;
    case 361u: goto L_0023B414;
    case 362u: goto L_0023B428;
    case 363u: goto L_0023B43C;
    case 364u: goto L_0023B450;
    case 365u: goto L_0023B464;
    case 366u: goto L_0023B478;
    case 367u: goto L_0023B48C;
    case 368u: goto L_0023B4A0;
    case 369u: goto L_0023B4B4;
    case 370u: goto L_0023B4C8;
    case 371u: goto L_0023B4DC;
    case 372u: goto L_0023B4F0;
    case 373u: goto L_0023B504;
    case 374u: goto L_0023B518;
    case 375u: goto L_0023B52C;
    case 376u: goto L_0023B540;
    case 377u: goto L_0023B554;
    case 378u: goto L_0023B568;
    case 379u: goto L_0023B57C;
    case 380u: goto L_0023B590;
    case 381u: goto L_0023B5A4;
    case 382u: goto L_0023B5B8;
    case 383u: goto L_0023B5CC;
    case 384u: goto L_0023B5E0;
    case 385u: goto L_0023B5F4;
    case 386u: goto L_0023B608;
    case 387u: goto L_0023B61C;
    case 388u: goto L_0023B630;
    case 389u: goto L_0023B644;
    case 390u: goto L_0023B658;
    case 391u: goto L_0023B66C;
    case 392u: goto L_0023B680;
    case 393u: goto L_0023B694;
    case 394u: goto L_0023B6A8;
    case 395u: goto L_0023B6BC;
    case 396u: goto L_0023B6D0;
    case 397u: goto L_0023B6E4;
    case 398u: goto L_0023B6F8;
    case 399u: goto L_0023B70C;
    case 400u: goto L_0023B720;
    case 401u: goto L_0023B734;
    case 402u: goto L_0023B748;
    case 403u: goto L_0023B75C;
    case 404u: goto L_0023B770;
    case 405u: goto L_0023B784;
    case 406u: goto L_0023B798;
    case 407u: goto L_0023B7AC;
    case 408u: goto L_0023B7C0;
    case 409u: goto L_0023B7D4;
    case 410u: goto L_0023B7E8;
    case 411u: goto L_0023B7FC;
    case 412u: goto L_0023B810;
    case 413u: goto L_0023B824;
    case 414u: goto L_0023B830;
    case 415u: goto L_0023B838;
    case 416u: goto L_0023B840;
    case 417u: goto L_0023B850;
    case 418u: goto L_0023B884;
    case 419u: goto L_0023B8A0;
    case 420u: goto L_0023B8D0;
    case 421u: goto L_0023B8E0;
    case 422u: goto L_0023B8EC;
    case 423u: goto L_0023B8F8;
    case 424u: goto L_0023B930;
    case 425u: goto L_0023B964;
    case 426u: goto L_0023B984;
    case 427u: goto L_0023B990;
    case 428u: goto L_0023B9A0;
    case 429u: goto L_0023B9AC;
    case 430u: goto L_0023B9B8;
    case 431u: goto L_0023B9F0;
    case 432u: goto L_0023BA20;
    case 433u: goto L_0023BA40;
    case 434u: goto L_0023BA50;
    case 435u: goto L_0023BA9C;
    case 436u: goto L_0023BABC;
    case 437u: goto L_0023BADC;
    case 438u: goto L_0023BB0C;
    case 439u: goto L_0023BB40;
    case 440u: goto L_0023BB58;
    case 441u: goto L_0023BBE0;
    case 442u: goto L_0023BC28;
    case 443u: goto L_0023BC60;
    case 444u: goto L_0023BC80;
    case 445u: goto L_0023BCA0;
    case 446u: goto L_0023BCC0;
    case 447u: goto L_0023BCD0;
    case 448u: goto L_0023BD00;
    case 449u: goto L_0023BD24;
    case 450u: goto L_0023BD40;
    case 451u: goto L_0023BD5C;
    case 452u: goto L_0023BDC0;
    case 453u: goto L_0023BDD0;
    case 454u: goto L_0023BEB0;
    case 455u: goto L_0023BEE0;
    case 456u: goto L_0023BEF0;
    case 457u: goto L_0023BEFC;
    case 458u: goto L_0023BF08;
    case 459u: goto L_0023BF40;
    case 460u: goto L_0023BF74;
    case 461u: goto L_0023BF94;
    case 462u: goto L_0023BFA0;
    case 463u: goto L_0023BFB0;
    case 464u: goto L_0023BFBC;
    case 465u: goto L_0023BFC8;
    default: bad_entry(c, 0x00238000u); return;
    }
L_00238000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00238010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023802Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 210u, depth + 1u); else { c.pc = 0x00237D60u; return; } if (c.pc != 0x0023802Cu) [[unlikely]] return; }
L_0023802C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238038u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_004D(c, 210u, depth + 1u); else { c.pc = 0x00237D60u; return; } if (c.pc != 0x00238038u) [[unlikely]] return; }
L_00238038:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238044u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_004D(c, 210u, depth + 1u); else { c.pc = 0x00237D60u; return; } if (c.pc != 0x00238044u) [[unlikely]] return; }
L_00238044:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00238088; } }
L_00238050:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 76u), 0u);
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 60u), 0u);
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1072u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 14;
L_00238088:
    set32(c.r[3], ld32((c.r[16].w[0] + 1064u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1072u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238050u | kUnwind; return; } goto L_00238050; }
    st32((c.r[16].w[0] + 1068u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_002380E0; } }
L_002380A8:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 76u), 0u);
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 60u), 0u);
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1092u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 14;
L_002380E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1084u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1092u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002380A8u | kUnwind; return; } goto L_002380A8; }
    st32((c.r[16].w[0] + 1088u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00238110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 104u), c.r[7].w[0]);
    set32(c.r[6], 0u + 180u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1060u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1080u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 472u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238150u); set32(c.r[16], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00238150u) [[unlikely]] return; }
L_00238150:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[8], c.r[17].w[0] + 652u);
    set32(c.r[7], c.r[17].w[0] + 656u);
    set32(c.r[3], c.r[17].w[0] + 660u);
    set32(c.r[2], c.r[17].w[0] + 664u);
    set32(c.r[4], c.r[17].w[0] + 668u);
    set32(c.r[6], c.r[5].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 652u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[6], 0u + 180u);
    st32((c.r[17].w[0] + 656u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[17].w[0] + 660u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[17].w[0] + 664u), c.r[9].w[0]);
    st32((c.r[17].w[0] + 472u), c.r[8].w[0]);
    c.budget -= 17;
L_00238194:
    st32((c.r[17].w[0] + 476u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 480u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 512u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 548u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 552u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 580u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 616u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381B8u); st32((c.r[17].w[0] + 648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002381B8u) [[unlikely]] return; }
L_002381B8:
    set32(c.r[7], ld32((c.r[17].w[0] + 652u)));
    set32(c.r[6], 0u + 16384u);
    set32(c.r[5], c.r[17].w[0] + 848u);
    set32(c.r[4], c.r[17].w[0] + 852u);
    set32(c.r[3], c.r[17].w[0] + 856u);
    set32(c.r[2], c.r[17].w[0] + 860u);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    st32((c.r[17].w[0] + 848u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 852u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    st32((c.r[17].w[0] + 856u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    st32((c.r[17].w[0] + 860u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 668u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 672u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 676u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 708u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 744u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 748u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 776u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 812u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 844u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 668u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::plzcw(c.r[6], c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 812u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::plzcw(c.r[5], c.r[2]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 436u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238268u); st32((c.r[2].w[0]), c.r[5].w[0]);  if (depth < kMaxDepth) unit_004E(c, 2u, depth + 1u); else { c.pc = 0x00238010u; return; } if (c.pc != 0x00238268u) [[unlikely]] return; }
L_00238268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023832C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002382A8u) [[unlikely]] return; }
L_002382A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002382B4u) [[unlikely]] return; }
L_002382B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 161u, depth + 1u); else { c.pc = 0x00236C70u; return; } if (c.pc != 0x002382C0u) [[unlikely]] return; }
L_002382C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 161u, depth + 1u); else { c.pc = 0x00236C70u; return; } if (c.pc != 0x002382CCu) [[unlikely]] return; }
L_002382CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 161u, depth + 1u); else { c.pc = 0x00236C70u; return; } if (c.pc != 0x002382D8u) [[unlikely]] return; }
L_002382D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 143u, depth + 1u); else { c.pc = 0x00220F50u; return; } if (c.pc != 0x002382E4u) [[unlikely]] return; }
L_002382E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 143u, depth + 1u); else { c.pc = 0x00220F50u; return; } if (c.pc != 0x002382F0u) [[unlikely]] return; }
L_002382F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 143u, depth + 1u); else { c.pc = 0x00220F50u; return; } if (c.pc != 0x002382FCu) [[unlikely]] return; }
L_002382FC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00238314; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x00238310u) [[unlikely]] return; }
L_00238310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00238314:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00238330; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023832Cu); set32(c.r[5], 0u + 1104u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023832Cu) [[unlikely]] return; }
L_0023832C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00238330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
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
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[6], 0u + 180u);
    st32((c.r[4].w[0] + 80u), 0u);
    st8((c.r[4].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st64((c.r[4].w[0] + 32u), 0ull);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    st8((c.r[4].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 1096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238418u); set32(c.r[4], c.r[21].w[0] + 112u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00238418u) [[unlikely]] return; }
L_00238418:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238424u) [[unlikely]] return; }
L_00238424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 112u), c.r[2].w[0]);  goto L_0023843C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238438u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0048(c, 146u, depth + 1u); else { c.pc = 0x00220FC0u; return; } if (c.pc != 0x00238438u) [[unlikely]] return; }
L_00238438:
    st32((c.r[21].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_0023843C:
    set32(c.r[4], 0u + 16u);
    st32((c.r[21].w[0] + 116u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    st32((c.r[21].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    st32((c.r[21].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    st32((c.r[21].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    st32((c.r[21].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238474u); st32((c.r[21].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238474u) [[unlikely]] return; }
L_00238474:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 256u), c.r[2].w[0]);  goto L_0023848C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238488u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0048(c, 146u, depth + 1u); else { c.pc = 0x00220FC0u; return; } if (c.pc != 0x00238488u) [[unlikely]] return; }
L_00238488:
    st32((c.r[21].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_0023848C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238498u) [[unlikely]] return; }
L_00238498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 288u), c.r[2].w[0]);  goto L_002384B0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384ACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0048(c, 146u, depth + 1u); else { c.pc = 0x00220FC0u; return; } if (c.pc != 0x002384ACu) [[unlikely]] return; }
L_002384AC:
    st32((c.r[21].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_002384B0:
    set32(c.r[4], c.r[21].w[0] + 292u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384C0u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002384C0u) [[unlikely]] return; }
L_002384C0:
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002384CCu) [[unlikely]] return; }
L_002384CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 292u), c.r[2].w[0]);  goto L_002384E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 165u, depth + 1u); else { c.pc = 0x00236D20u; return; } if (c.pc != 0x002384DCu) [[unlikely]] return; }
L_002384DC:
    st32((c.r[21].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_002384E0:
    set32(c.r[4], 0u + 80u);
    st32((c.r[21].w[0] + 296u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    st32((c.r[21].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    st32((c.r[21].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    st32((c.r[21].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    st32((c.r[21].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 292u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238518u); st32((c.r[21].w[0] + 400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238518u) [[unlikely]] return; }
L_00238518:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 436u), c.r[2].w[0]);  goto L_0023852C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238528u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 165u, depth + 1u); else { c.pc = 0x00236D20u; return; } if (c.pc != 0x00238528u) [[unlikely]] return; }
L_00238528:
    st32((c.r[21].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 1;
L_0023852C:
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238538u) [[unlikely]] return; }
L_00238538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 468u), c.r[2].w[0]);  goto L_0023854C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238548u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 165u, depth + 1u); else { c.pc = 0x00236D20u; return; } if (c.pc != 0x00238548u) [[unlikely]] return; }
L_00238548:
    st32((c.r[21].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 1;
L_0023854C:
    set32(c.r[4], c.r[21].w[0] + 864u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023855Cu); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0023855Cu) [[unlikely]] return; }
L_0023855C:
    set32(c.r[4], c.r[21].w[0] + 1044u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023856Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0023856Cu) [[unlikely]] return; }
L_0023856C:
    set32(c.r[8], c.r[21].w[0] + 1044u);
    set32(c.r[7], c.r[21].w[0] + 1048u);
    st32((c.r[21].w[0] + 864u), c.r[8].w[0]);
    set32(c.r[6], c.r[21].w[0] + 1052u);
    st32((c.r[21].w[0] + 868u), c.r[8].w[0]);
    set32(c.r[3], c.r[21].w[0] + 1056u);
    st32((c.r[21].w[0] + 872u), c.r[8].w[0]);
    set32(c.r[2], c.r[19].w[0] << 3);
    st32((c.r[21].w[0] + 904u), c.r[8].w[0]);
    set32(c.r[4], c.r[19].w[0] << 5);
    st32((c.r[21].w[0] + 940u), c.r[8].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 944u), c.r[8].w[0]);
    st32((c.r[21].w[0] + 972u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 1008u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 1040u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 1060u), c.r[19].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385B8u); st32((c.r[21].w[0] + 1064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002385B8u) [[unlikely]] return; }
L_002385B8:
    st32((c.r[21].w[0] + 1072u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002385D4; } }
L_002385C4:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 4;
L_002385D4:
    set32(c.r[2], ld32((c.r[21].w[0] + 1064u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 1072u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002385C4u | kUnwind; return; } goto L_002385C4; }
    st32((c.r[21].w[0] + 1080u), c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] << 5);
    st32((c.r[21].w[0] + 1084u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] << 7);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002385FCu) [[unlikely]] return; }
L_002385FC:
    st32((c.r[21].w[0] + 1092u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1076u), c.r[2].w[0]);  if (t) { goto L_00238624; } }
L_00238614:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 4;
L_00238624:
    set32(c.r[2], ld32((c.r[21].w[0] + 1084u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 1092u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238614u | kUnwind; return; } goto L_00238614; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238648u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 8u, depth + 1u); else { c.pc = 0x00238110u; return; } if (c.pc != 0x00238648u) [[unlikely]] return; }
L_00238648:
    st32((c.r[21].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00238680:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 20u);  goto L_0023874C; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 19u);  goto L_00238718; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00238700; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[4].w[0]), c.r[6].w[0]);  goto L_002386E8; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[4].w[0]), 0u);  goto L_002386D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023877C; } }
L_002386D0:
    set32(c.r[3], 0u + 6u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00238778; } }
L_002386E8:
    set32(c.r[3], 0u + 6u);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00238778; } }
L_00238700:
    set32(c.r[2], 0u + 6u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00238778; } }
L_00238718:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0023872C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023872C:
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 7u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00238778; } }
L_0023874C:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00238760; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00238760:
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
L_00238778:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0023877C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00238790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002387BCu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 67u, depth + 1u); else { c.pc = 0x002390A0u; return; } if (c.pc != 0x002387BCu) [[unlikely]] return; }
L_002387BC:
    st32((c.r[19].w[0] + 64u), c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] >> 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    mmi::pmaxw(c.r[4], c.r[4], c.r[5]);
    st32((c.r[19].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    set32(c.r[5], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] >> (c.r[8].w[0] & 31u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] >> (c.r[7].w[0] & 31u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[5].w[0] << 5);
    set32(c.r[6], c.r[7].w[0] >> 5);
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 23;
    if (c.r[5].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), c.r[7].w[0]);  goto L_00238844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[6].w[0] - 1u);  if (t) { goto L_00238828; } }
L_00238820:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 2;
L_00238828:
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238820u | kUnwind; return; } goto L_00238820; } }
    set32(c.r[7], c.r[6].w[0] << 5);
    st32((c.r[19].w[0] + 68u), c.r[7].w[0]);
    c.budget -= 2;
L_00238844:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] ^ c.r[5].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 91u));
    c.budget -= 8;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[19].w[0] + 91u));  goto L_002388B4; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[5].d[0]) { c.r[5].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  goto L_00238898; }
    c.r[5].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_002388B0; }
    c.r[5].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002388B0; } }
L_00238898:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_002388B0; }
    c.r[5].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[19].w[0] + 91u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_002388B0:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 91u));
    c.budget -= 1;
L_002388B4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 40u)));  goto L_00238904; }
    set32(c.r[8], c.r[18].w[0] >> 1);
    set32(c.r[5], c.r[17].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[6], c.r[8].w[0] + 63u);
    set32(c.r[7], c.r[6].w[0] >> 6);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    st32((c.r[19].w[0] + 44u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[8].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[19].w[0] + 56u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[6].w[0]);
    st64((c.r[19].w[0]), c.r[5].d[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00238934; } }
L_00238904:
    set32(c.r[5], 0u + 19u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[19].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st32((c.r[19].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; st32((c.r[19].w[0] + 48u), c.r[6].w[0]);  if (t) { goto L_00238930; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[7].w[0]));  goto L_00238934; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00238930:
    st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00238934:
    c.r[9].d[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[7], c.r[18].w[0] << 1);
    c.r[8].d[0] = ld32((c.r[19].w[0] + 56u));
    c.r[5].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[17].w[0] << 1);
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[19].w[0] + 32u), c.r[8].d[0]);  if (t) { goto L_00238964; } }
    c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 2;
L_00238964:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_00238984; }
    c.r[5].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00238980; } }
    c.r[5].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00238980:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00238984:
    st8((c.r[19].w[0] + 89u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[17].w[0], c.r[4].w[0]);  if (t) { goto L_00238994; } }
    breakpoint(c, 0x00238990u);
    c.budget -= 1;
L_00238994:
    c.r[4].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002389AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    c.budget -= 2;
L_002389AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002389E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00238E64; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00238AEC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00238A84; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238A48u) [[unlikely]] return; }
L_00238A48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00238A7C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A68u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00238A68u) [[unlikely]] return; }
L_00238A68:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A74u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00238A74u) [[unlikely]] return; }
L_00238A74:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238A7C:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_00238AA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_00238AA8:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 17;
L_00238AEC:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 4u);
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 14u);
    mmi::pcpyld(c.r[8], c.r[2], c.r[3]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    set32(c.r[2], 0u + 81u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    mmi::pcpyld(c.r[7], c.r[2], c.r[18]);
    st32((c.r[19].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], 0u + 80u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    mmi::pcpyld(c.r[6], c.r[2], c.r[16]);
    set32(c.r[2], 0u + 83u);
    set32(c.r[3], 0u + 82u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[5]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    c.r[5].d[0] = ld64((c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    mmi::pcpyld(c.r[5], c.r[3], c.r[5]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 12u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 62;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_00238DA4; }
    set32(c.r[21], ld32((c.r[20].w[0] + 8u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld16((c.r[20].w[0] + 16u));
    c.budget -= 3;
L_00238BF0:
    mmi::pminw(c.r[17], c.r[17], c.r[18]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    set32(c.r[2], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    mmi::pcpyld(c.r[2], c.r[22], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00238C44; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00238C44:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C70u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x00238C70u) [[unlikely]] return; }
L_00238C70:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C84u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x00238C84u) [[unlikely]] return; }
L_00238C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x00227200u; return; } if (c.pc != 0x00238C8Cu) [[unlikely]] return; }
L_00238C8C:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00239050; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 20u)));  goto L_00238D88; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00238D20; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238CE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238CE4u) [[unlikely]] return; }
L_00238CE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00238D18; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D04u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00238D04u) [[unlikely]] return; }
L_00238D04:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00238D10u) [[unlikely]] return; }
L_00238D10:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238D18:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238D20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_00238D44; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_00238D44:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 17;
L_00238D88:
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238BF0u | kUnwind; return; } goto L_00238BF0; } }
L_00238DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    mmi::pcpyld(c.r[4], c.r[4], c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00238DF4; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00238DF4:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x00238E28u) [[unlikely]] return; }
L_00238E28:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E3Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x00238E3Cu) [[unlikely]] return; }
L_00238E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x00227200u; return; } if (c.pc != 0x00238E44u) [[unlikely]] return; }
L_00238E44:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00239050; } }
L_00238E64:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00238F34; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00238ECC; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00238E90u) [[unlikely]] return; }
L_00238E90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00238EC4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238EB0u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00238EB0u) [[unlikely]] return; }
L_00238EB0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238EBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00238EBCu) [[unlikely]] return; }
L_00238EBC:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238EC4:
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_00238ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_00238EF0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
L_00238EF0:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 17;
L_00238F34:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 14u);
    mmi::pcpyld(c.r[8], c.r[3], c.r[4]);
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[5].w[0] + 16u);
    mmi::pcpyld(c.r[7], c.r[3], c.r[16]);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1024u);
    st32((c.r[19].w[0] + 24u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], 0u + 82u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[5], c.r[5], c.r[3]);
    set32(c.r[3], c.r[6].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 46;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_00238FF4; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_00238FF4:
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[7].d[0] << 32;  goto L_0023901C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.budget -= 3;
L_0023901C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
L_00239050:
    set32(c.r[3], ld32((c.r[28].w[0] - 28480u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28476u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 28480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 28476u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002390A0:
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[9].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0]), c.r[3].d[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] >> 3);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00239110; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 32767u);
    set32(c.r[5], c.r[5].w[0] >> 3);
    set32(c.r[5], c.r[5].w[0] >> 4);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_00239100; } }
    breakpoint(c, 0x002390FCu);
    c.budget -= 1;
L_00239100:
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00239114; } }
L_00239110:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00239114:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00239120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002391A4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0023918C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00239154u) [[unlikely]] return; }
L_00239154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023915Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0023915Cu) [[unlikely]] return; }
L_0023915C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28488u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 28488u), c.r[2].w[0]);  if (t) { goto L_00239188; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 28484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239178u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 100u, depth + 1u); else { c.pc = 0x00398B50u; return; } if (c.pc != 0x00239178u) [[unlikely]] return; }
L_00239178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239188u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 253u, depth + 1u); else { c.pc = 0x003999D0u; return; } if (c.pc != 0x00239188u) [[unlikely]] return; }
L_00239188:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0023918C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002391A8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002391A4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002391A4u) [[unlikely]] return; }
L_002391A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002391A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002391C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023923C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00239224; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002391F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002391F4u) [[unlikely]] return; }
L_002391F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239204u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239204u) [[unlikely]] return; }
L_00239204:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239220; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239220u) [[unlikely]] return; }
L_00239220:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00239224:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00239240; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023923Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023923Cu) [[unlikely]] return; }
L_0023923C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00239240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002392D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4768u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002392B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] - 4752u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27472u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002392B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002392B4u) [[unlikely]] return; }
L_002392B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002392D4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002392D0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002392D0u) [[unlikely]] return; }
L_002392D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002392D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002392F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00239350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] - 4752u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27472u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239334u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00239334u) [[unlikely]] return; }
L_00239334:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00239354; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239350u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00239350u) [[unlikely]] return; }
L_00239350:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239370:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00239390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239418; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002393F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002393C8u) [[unlikely]] return; }
L_002393C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393D8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002393D8u) [[unlikely]] return; }
L_002393D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002393F4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002393F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002393F4u) [[unlikely]] return; }
L_002393F4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002393F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_00239418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239408u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239408u) [[unlikely]] return; }
L_00239408:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239418u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239418u) [[unlikely]] return; }
L_00239418:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239440:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00239460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00239498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239488u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239488u) [[unlikely]] return; }
L_00239488:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239498u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239498u) [[unlikely]] return; }
L_00239498:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002394B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023952C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00239514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002394E4u) [[unlikely]] return; }
L_002394E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002394F4u) [[unlikely]] return; }
L_002394F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239510; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239510u) [[unlikely]] return; }
L_00239510:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00239514:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00239530; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023952Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023952Cu) [[unlikely]] return; }
L_0023952C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00239530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00239588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239578u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239578u) [[unlikely]] return; }
L_00239578:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239588u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239588u) [[unlikely]] return; }
L_00239588:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002395A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_002395F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002395E0u) [[unlikely]] return; }
L_002395E0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395F0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002395F0u) [[unlikely]] return; }
L_002395F0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002395F4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_00239648; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239614u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239614u) [[unlikely]] return; }
L_00239614:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239624u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239624u) [[unlikely]] return; }
L_00239624:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00239644; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239644u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00239644u) [[unlikely]] return; }
L_00239644:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00239648:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002396F4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_002396D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002396A4u) [[unlikely]] return; }
L_002396A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396B4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002396B4u) [[unlikely]] return; }
L_002396B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002396D0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002396D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002396D0u) [[unlikely]] return; }
L_002396D0:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002396D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002396F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002396E4u) [[unlikely]] return; }
L_002396E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002396F4u) [[unlikely]] return; }
L_002396F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002396F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00239778; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00239760; }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239670u; return; } if (c.pc != 0x00239744u) [[unlikely]] return; }
L_00239744:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239750u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00239750u) [[unlikely]] return; }
L_00239750:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023975Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 121u, depth + 1u); else { c.pc = 0x00239790u; return; } if (c.pc != 0x0023975Cu) [[unlikely]] return; }
L_0023975C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00239760:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0023977C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239778u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00239778u) [[unlikely]] return; }
L_00239778:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023977C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023980C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002397F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002397C4u) [[unlikely]] return; }
L_002397C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397D4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002397D4u) [[unlikely]] return; }
L_002397D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002397F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002397F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002397F0u) [[unlikely]] return; }
L_002397F0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002397F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00239810; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023980Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023980Cu) [[unlikely]] return; }
L_0023980C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00239810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 218u));  c.pc = t; return; }
L_00239840:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 218u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 212u)));  goto L_00239858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00239864; } }
L_00239858:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00239864:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00239870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002398D4; } }
L_00239894:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002398A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002398A4u) [[unlikely]] return; }
L_002398A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002398BC; } }
L_002398AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002398BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002398C8; } }
L_002398BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002398ACu | kUnwind; return; } goto L_002398AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002398C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002398D0; }
L_002398D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002398D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002398F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00239900:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00239910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));  c.pc = t; return; }
L_00239920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002399E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4864u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_002399AC; } }
L_0023995C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_00239994; } }
L_00239964:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239980u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239980u) [[unlikely]] return; }
L_00239980:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239994u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239994u) [[unlikely]] return; }
L_00239994:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239964u | kUnwind; return; } goto L_00239964; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002399AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023995Cu | kUnwind; return; } goto L_0023995C; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002399CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002399CCu) [[unlikely]] return; }
L_002399CC:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002399EC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002399E8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002399E8u) [[unlikely]] return; }
L_002399E8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002399EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00239A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00239AE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4800u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_00239AAC; } }
L_00239A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_00239A94; } }
L_00239A64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239A80u) [[unlikely]] return; }
L_00239A80:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239A94u) [[unlikely]] return; }
L_00239A94:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239A64u | kUnwind; return; } goto L_00239A64; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00239AAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239A5Cu | kUnwind; return; } goto L_00239A5C; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239ACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00239ACCu) [[unlikely]] return; }
L_00239ACC:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_00239AEC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239AE8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00239AE8u) [[unlikely]] return; }
L_00239AE8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00239AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00239B20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00239C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4896u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00239BAC; } }
L_00239B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00239B94; } }
L_00239B64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B80u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239B80u) [[unlikely]] return; }
L_00239B80:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239B94u) [[unlikely]] return; }
L_00239B94:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239B64u | kUnwind; return; } goto L_00239B64; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00239BAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239B5Cu | kUnwind; return; } goto L_00239B5C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00239C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4864u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00239C28; } }
L_00239BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00239C10; } }
L_00239BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BFCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239BFCu) [[unlikely]] return; }
L_00239BFC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239C10u) [[unlikely]] return; }
L_00239C10:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239BE0u | kUnwind; return; } goto L_00239BE0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00239C28:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239BD8u | kUnwind; return; } goto L_00239BD8; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00239C48u) [[unlikely]] return; }
L_00239C48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00239C68; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C64u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00239C64u) [[unlikely]] return; }
L_00239C64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239C90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00239DD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4832u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00239D1C; } }
L_00239CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00239D04; } }
L_00239CD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239CF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239CF0u) [[unlikely]] return; }
L_00239CF0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239D04u) [[unlikely]] return; }
L_00239D04:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239CD4u | kUnwind; return; } goto L_00239CD4; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00239D1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239CCCu | kUnwind; return; } goto L_00239CCC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00239DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4800u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00239D98; } }
L_00239D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00239D80; } }
L_00239D50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D6Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239D6Cu) [[unlikely]] return; }
L_00239D6C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239D80u) [[unlikely]] return; }
L_00239D80:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239D50u | kUnwind; return; } goto L_00239D50; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00239D98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239D48u | kUnwind; return; } goto L_00239D48; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239DB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00239DB8u) [[unlikely]] return; }
L_00239DB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00239DD8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239DD4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00239DD4u) [[unlikely]] return; }
L_00239DD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20312u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00239E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239E54u) [[unlikely]] return; }
L_00239E54:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E64u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239E64u) [[unlikely]] return; }
L_00239E64:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239EB4u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239EB4u) [[unlikely]] return; }
L_00239EB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239EC4u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239EC4u) [[unlikely]] return; }
L_00239EC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00239EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28472u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 28468u)));  goto L_00239F68; }
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00239F08u) [[unlikely]] return; }
L_00239F08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 28472u), c.r[2].w[0]);  if (t) { goto L_00239F64; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F34u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239F34u) [[unlikely]] return; }
L_00239F34:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F44u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239F44u) [[unlikely]] return; }
L_00239F44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00239F64; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F64u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00239F64u) [[unlikely]] return; }
L_00239F64:
    set32(c.r[3], ld32((c.r[28].w[0] - 28468u)));
    c.budget -= 1;
L_00239F68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00239FDC; }
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F7Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00239F7Cu) [[unlikely]] return; }
L_00239F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 28468u), c.r[2].w[0]);  if (t) { goto L_00239FD8; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FA8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00239FA8u) [[unlikely]] return; }
L_00239FA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FB8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00239FB8u) [[unlikely]] return; }
L_00239FB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00239FD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FD8u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00239FD8u) [[unlikely]] return; }
L_00239FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00239FDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00239FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8513u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28472u)));
    c.budget -= 9;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 28468u)));  goto L_0023A07C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A01Cu); st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0023A01Cu) [[unlikely]] return; }
L_0023A01C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 28472u), c.r[2].w[0]);  if (t) { goto L_0023A078; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A048u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A048u) [[unlikely]] return; }
L_0023A048:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A058u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A058u) [[unlikely]] return; }
L_0023A058:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023A078; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A078u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0023A078u) [[unlikely]] return; }
L_0023A078:
    set32(c.r[3], ld32((c.r[28].w[0] - 28468u)));
    c.budget -= 1;
L_0023A07C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 8400u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0023A0F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A094u); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0023A094u) [[unlikely]] return; }
L_0023A094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 28468u), c.r[2].w[0]);  if (t) { goto L_0023A0F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A0C0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A0C0u) [[unlikely]] return; }
L_0023A0C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A0D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A0D0u) [[unlikely]] return; }
L_0023A0D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023A0F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A0F0u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0023A0F0u) [[unlikely]] return; }
L_0023A0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0023A0F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A110:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_0023A120:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[7].w[0]);  c.pc = t; return; }
L_0023A130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A148u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0023A148u) [[unlikely]] return; }
L_0023A148:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_0023A21C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A178u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023A178u) [[unlikely]] return; }
L_0023A178:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A190u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023A190u) [[unlikely]] return; }
L_0023A190:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_0023A1B0:
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
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1B0u | kUnwind; return; } goto L_0023A1B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_0023A204; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_0023A20C; } }
L_0023A204:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0023A20C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_0023A21C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A23Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0023A23Cu) [[unlikely]] return; }
L_0023A23C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A270u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0023A270u) [[unlikely]] return; }
L_0023A270:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A28Cu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0023A28Cu) [[unlikely]] return; }
L_0023A28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0023A2B8u) [[unlikely]] return; }
L_0023A2B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_0023A38C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2E8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023A2E8u) [[unlikely]] return; }
L_0023A2E8:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A300u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023A300u) [[unlikely]] return; }
L_0023A300:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_0023A320:
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
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A320u | kUnwind; return; } goto L_0023A320; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_0023A374; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_0023A37C; } }
L_0023A374:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0023A37C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_0023A38C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3ACu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0023A3ACu) [[unlikely]] return; }
L_0023A3AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3E0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0023A3E0u) [[unlikely]] return; }
L_0023A3E0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3FCu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0023A3FCu) [[unlikely]] return; }
L_0023A3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023A4E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0023A4C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1344u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0023A4C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0023A4A4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023A4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A478u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A478u) [[unlikely]] return; }
L_0023A478:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A488u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A488u) [[unlikely]] return; }
L_0023A488:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A4A4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A4A4u) [[unlikely]] return; }
L_0023A4A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0023A4C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4C4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0023A4C4u) [[unlikely]] return; }
L_0023A4C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0023A4C8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0023A4E4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4E0u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023A4E0u) [[unlikely]] return; }
L_0023A4E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023A4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 8520u);  c.pc = t; return; }
L_0023A510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A524u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 119u, depth + 1u); else { c.pc = 0x0025CF80u; return; } if (c.pc != 0x0023A524u) [[unlikely]] return; }
L_0023A524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A530u); set32(c.r[4], ld32((c.r[2].w[0] + 8520u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0023A530u) [[unlikely]] return; }
L_0023A530:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A544u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0023A544u) [[unlikely]] return; }
L_0023A544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A560:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0057(c, 123u, depth); }
L_0023A570:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0057(c, 124u, depth); }
L_0023A580:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0057(c, 125u, depth); }
L_0023A590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5B0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 126u, depth + 1u); else { c.pc = 0x0025D000u; return; } if (c.pc != 0x0023A5B0u) [[unlikely]] return; }
L_0023A5B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0023A680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0023A5D0u) [[unlikely]] return; }
L_0023A5D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0023A5E0u) [[unlikely]] return; }
L_0023A5E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_0023A600; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 240u, depth + 1u); else { c.pc = 0x0025DD40u; return; } if (c.pc != 0x0023A5F8u) [[unlikely]] return; }
L_0023A5F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0023A600:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0023A66C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_0023A648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A618u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A618u) [[unlikely]] return; }
L_0023A618:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A628u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A628u) [[unlikely]] return; }
L_0023A628:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A644; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A644u) [[unlikely]] return; }
L_0023A644:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_0023A648:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023A668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A658u) [[unlikely]] return; }
L_0023A658:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A668u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A668u) [[unlikely]] return; }
L_0023A668:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0023A66C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A67Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A67Cu) [[unlikely]] return; }
L_0023A67C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0023A680:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 127u, depth + 1u); else { c.pc = 0x0025D010u; return; } if (c.pc != 0x0023A6B4u) [[unlikely]] return; }
L_0023A6B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023A6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0023A6D4u) [[unlikely]] return; }
L_0023A6D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023A6D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A708u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0023A708u) [[unlikely]] return; }
L_0023A708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023A724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 142u, depth + 1u); else { c.pc = 0x0025D1A0u; return; } if (c.pc != 0x0023A718u) [[unlikely]] return; }
L_0023A718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0023A724:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023A800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1344u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0023A7E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0023A7C4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023A7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A798u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0023A798u) [[unlikely]] return; }
L_0023A798:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0023A7A8u) [[unlikely]] return; }
L_0023A7A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A7C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A7C4u) [[unlikely]] return; }
L_0023A7C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0023A7E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7E4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0023A7E4u) [[unlikely]] return; }
L_0023A7E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0023A7E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0023A804; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A800u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023A800u) [[unlikely]] return; }
L_0023A800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023A804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A848u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0023A848u) [[unlikely]] return; }
L_0023A848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023A864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 142u, depth + 1u); else { c.pc = 0x0025D1A0u; return; } if (c.pc != 0x0023A858u) [[unlikely]] return; }
L_0023A858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0023A864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A874u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 128u, depth + 1u); else { c.pc = 0x0025D020u; return; } if (c.pc != 0x0023A874u) [[unlikely]] return; }
L_0023A874:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_0023A8C4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_0023A980; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_0023A8C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0023A94C; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_0023A8F8; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A8F4; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A94C; } }
L_0023A8F4:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0023A8F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_0023A940; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A910u) [[unlikely]] return; }
L_0023A910:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_0023A93C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0023A94C; } }
L_0023A938:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_0023A93C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0023A940:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023A94C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0023A984; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023A9C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A970u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A970u) [[unlikely]] return; }
L_0023A970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A9C4; } }
L_0023A980:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0023A984:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023A9C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A9A4u); set32(c.r[6], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A9A4u) [[unlikely]] return; }
L_0023A9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A9C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 6;
L_0023A9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023A9C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A9E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0023A9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0023AA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023AA40; } }
L_0023AA04:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AA14u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AA14u) [[unlikely]] return; }
L_0023AA14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23648u);  if (t) { goto L_0023AA30; } }
L_0023AA20:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0023AA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0023AA3C; } }
L_0023AA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AA20u | kUnwind; return; } goto L_0023AA20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023AA3C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0023AA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023AA50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[13];  if (t) { goto L_0023AB38; } }
    set32(c.r[20], ld32((c.r[17].w[0])));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023AA9C:
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[18], c.r[19].w[0] + 60u);
    set32(c.r[17], c.r[19].w[0] + 32u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[19].w[0] + 44u);  if (t) { goto L_0023AAE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 156u);
    set32(c.r[7], c.r[29].w[0] + 152u);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAE8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x0023AAE8u) [[unlikely]] return; }
L_0023AAE8:
    set32(c.r[6], ld32((c.r[29].w[0] + 156u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    st32((c.r[19].w[0] + 72u), 0u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    st32((c.r[17].w[0]), c.r[6].w[0]);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[22].w[0]), c.r[16].w[0]);
    st32((c.r[19].w[0] + 72u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AA9Cu | kUnwind; return; } goto L_0023AA9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0023ABA0; } }
L_0023AB38:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 14672u);
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], ld32((c.r[5].w[0])));  if (t) { goto L_0023AB7C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023AB9C; } }
L_0023AB7C:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AB8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AB8Cu) [[unlikely]] return; }
L_0023AB8C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AB9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AB9Cu) [[unlikely]] return; }
L_0023AB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0023ABA0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0023ABD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[13];  if (t) { goto L_0023AD74; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023AC28:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + 208u);
    set32(c.r[3], c.r[2].w[0] + 176u);
    set32(c.r[9], c.r[2].w[0] + 192u);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    c.f[13] = c.f[20];
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], c.r[29].w[0] + 220u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC74u); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x0023AC74u) [[unlikely]] return; }
L_0023AC74:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AC28u | kUnwind; return; } goto L_0023AC28; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023AC94u) [[unlikely]] return; }
L_0023AC94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20704u);
    set32(c.r[6], c.r[6].w[0] - 20784u);
    set32(c.r[7], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ACB4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023ACB4u) [[unlikely]] return; }
L_0023ACB4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ACD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 169u, depth + 1u); else { c.pc = 0x00259580u; return; } if (c.pc != 0x0023ACD4u) [[unlikely]] return; }
L_0023ACD4:
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[17].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[17].w[0] + 36u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[17].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14960u);
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 23;
L_0023AD30:
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);  goto L_0023AD58; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0023AD5C; } }
L_0023AD58:
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0023AD5C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AD30u | kUnwind; return; } goto L_0023AD30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0023AE90; } }
L_0023AD74:
    set32(c.r[6], c.r[4].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] << 1);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0023ADD0; } }
L_0023ADA0:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0023ADD0; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0023ADE0; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
L_0023ADD0:
    c.r[3].d[0] = c.r[7].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[16].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ADA0u | kUnwind; return; } goto L_0023ADA0; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0023ADE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0]), 0u);  goto L_0023AE8C; }
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14384u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AE08u) [[unlikely]] return; }
L_0023AE08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 14240u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[30], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_0023AE80; } }
L_0023AE28:
    set32(c.r[21], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0023AE80; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023AE8C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[30].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AE64u) [[unlikely]] return; }
L_0023AE64:
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 7;
L_0023AE80:
    c.r[3].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[22].w[0], c.r[16].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AE28u | kUnwind; return; } goto L_0023AE28; }
L_0023AE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0023AE90:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0023AED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0023AF04; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0023AF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF00u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023AF00u) [[unlikely]] return; }
L_0023AF00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023AF04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023AF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.f[12];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF48u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x0023AF48u) [[unlikely]] return; }
L_0023AF48:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023AFA0:
    c.r[8].d[0] = c.r[7].d[0] & 255ull;
    st32((c.r[6].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0023AFE0; } }
L_0023AFB0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[6].w[0])));  goto L_0023AFD8; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023AFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023AFF0; } }
L_0023AFD8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0023AFE0:
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AFB0u | kUnwind; return; } goto L_0023AFB0; }
L_0023AFF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023B000:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B018; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023B018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023B020:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F71B0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 389u, depth); }
L_0023B030:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F71D0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 391u, depth); }
L_0023B040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28352u));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023B368; }
    st8((c.r[28].w[0] - 28352u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B068u); set32(c.r[4], c.r[4].w[0] + 8560u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B068u) [[unlikely]] return; }
L_0023B068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B074u); set32(c.r[4], c.r[4].w[0] + 8578u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B074u) [[unlikely]] return; }
L_0023B074:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B080u); set32(c.r[4], c.r[4].w[0] + 8612u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B080u) [[unlikely]] return; }
L_0023B080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B08Cu); set32(c.r[4], c.r[4].w[0] + 8636u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B08Cu) [[unlikely]] return; }
L_0023B08C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B098u); set32(c.r[4], c.r[4].w[0] + 8661u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B098u) [[unlikely]] return; }
L_0023B098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0A4u); set32(c.r[4], c.r[4].w[0] + 8686u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0A4u) [[unlikely]] return; }
L_0023B0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0B0u); set32(c.r[4], c.r[4].w[0] + 8712u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0B0u) [[unlikely]] return; }
L_0023B0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0BCu); set32(c.r[4], c.r[4].w[0] + 8742u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0BCu) [[unlikely]] return; }
L_0023B0BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0C8u); set32(c.r[4], c.r[4].w[0] + 8771u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0C8u) [[unlikely]] return; }
L_0023B0C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0D4u); set32(c.r[4], c.r[4].w[0] + 8791u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0D4u) [[unlikely]] return; }
L_0023B0D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0E0u); set32(c.r[4], c.r[4].w[0] + 8802u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0E0u) [[unlikely]] return; }
L_0023B0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0ECu); set32(c.r[4], c.r[4].w[0] + 8821u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0ECu) [[unlikely]] return; }
L_0023B0EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0F8u); set32(c.r[4], c.r[4].w[0] + 8848u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B0F8u) [[unlikely]] return; }
L_0023B0F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B104u); set32(c.r[4], c.r[4].w[0] + 8867u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B104u) [[unlikely]] return; }
L_0023B104:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B110u); set32(c.r[4], c.r[4].w[0] + 8881u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B110u) [[unlikely]] return; }
L_0023B110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B11Cu); set32(c.r[4], c.r[4].w[0] + 8908u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B11Cu) [[unlikely]] return; }
L_0023B11C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B128u); set32(c.r[4], c.r[4].w[0] + 8939u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B128u) [[unlikely]] return; }
L_0023B128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B134u); set32(c.r[4], c.r[4].w[0] + 8970u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B134u) [[unlikely]] return; }
L_0023B134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B140u); set32(c.r[4], c.r[4].w[0] + 9002u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B140u) [[unlikely]] return; }
L_0023B140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B14Cu); set32(c.r[4], c.r[4].w[0] + 9037u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B14Cu) [[unlikely]] return; }
L_0023B14C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B158u); set32(c.r[4], c.r[4].w[0] + 9064u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B158u) [[unlikely]] return; }
L_0023B158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B164u); set32(c.r[4], c.r[4].w[0] + 9092u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B164u) [[unlikely]] return; }
L_0023B164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B170u); set32(c.r[4], c.r[4].w[0] + 9123u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B170u) [[unlikely]] return; }
L_0023B170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B17Cu); set32(c.r[4], c.r[4].w[0] + 9135u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B17Cu) [[unlikely]] return; }
L_0023B17C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B188u); set32(c.r[4], c.r[4].w[0] + 9162u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B188u) [[unlikely]] return; }
L_0023B188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B194u); set32(c.r[4], c.r[4].w[0] + 9182u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B194u) [[unlikely]] return; }
L_0023B194:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1A0u); set32(c.r[4], c.r[4].w[0] + 9202u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1A0u) [[unlikely]] return; }
L_0023B1A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1ACu); set32(c.r[4], c.r[4].w[0] + 9223u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1ACu) [[unlikely]] return; }
L_0023B1AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1B8u); set32(c.r[4], c.r[4].w[0] + 9240u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1B8u) [[unlikely]] return; }
L_0023B1B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1C4u); set32(c.r[4], c.r[4].w[0] + 9252u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1C4u) [[unlikely]] return; }
L_0023B1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1D0u); set32(c.r[4], c.r[4].w[0] + 9279u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1D0u) [[unlikely]] return; }
L_0023B1D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1DCu); set32(c.r[4], c.r[4].w[0] + 9299u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1DCu) [[unlikely]] return; }
L_0023B1DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1E8u); set32(c.r[4], c.r[4].w[0] + 9327u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1E8u) [[unlikely]] return; }
L_0023B1E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1F4u); set32(c.r[4], c.r[4].w[0] + 9361u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B1F4u) [[unlikely]] return; }
L_0023B1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B200u); set32(c.r[4], c.r[4].w[0] + 9385u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B200u) [[unlikely]] return; }
L_0023B200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B20Cu); set32(c.r[4], c.r[4].w[0] + 9406u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B20Cu) [[unlikely]] return; }
L_0023B20C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B218u); set32(c.r[4], c.r[4].w[0] + 9421u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B218u) [[unlikely]] return; }
L_0023B218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B224u); set32(c.r[4], c.r[4].w[0] + 9444u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B224u) [[unlikely]] return; }
L_0023B224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B230u); set32(c.r[4], c.r[4].w[0] + 9468u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B230u) [[unlikely]] return; }
L_0023B230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B23Cu); set32(c.r[4], c.r[4].w[0] + 9487u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B23Cu) [[unlikely]] return; }
L_0023B23C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B248u); set32(c.r[4], c.r[4].w[0] + 9508u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B248u) [[unlikely]] return; }
L_0023B248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B254u); set32(c.r[4], c.r[4].w[0] + 9534u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B254u) [[unlikely]] return; }
L_0023B254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B260u); set32(c.r[4], c.r[4].w[0] + 9546u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B260u) [[unlikely]] return; }
L_0023B260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B26Cu); set32(c.r[4], c.r[4].w[0] + 9579u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B26Cu) [[unlikely]] return; }
L_0023B26C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B278u); set32(c.r[4], c.r[4].w[0] + 9596u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B278u) [[unlikely]] return; }
L_0023B278:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B284u); set32(c.r[4], c.r[4].w[0] + 9615u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B284u) [[unlikely]] return; }
L_0023B284:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B290u); set32(c.r[4], c.r[4].w[0] + 9636u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B290u) [[unlikely]] return; }
L_0023B290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B29Cu); set32(c.r[4], c.r[4].w[0] + 9646u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B29Cu) [[unlikely]] return; }
L_0023B29C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2A8u); set32(c.r[4], c.r[4].w[0] + 9671u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2A8u) [[unlikely]] return; }
L_0023B2A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2B4u); set32(c.r[4], c.r[4].w[0] + 9688u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2B4u) [[unlikely]] return; }
L_0023B2B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2C0u); set32(c.r[4], c.r[4].w[0] + 9698u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2C0u) [[unlikely]] return; }
L_0023B2C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2CCu); set32(c.r[4], c.r[4].w[0] + 9714u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2CCu) [[unlikely]] return; }
L_0023B2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2D8u); set32(c.r[4], c.r[4].w[0] + 9733u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2D8u) [[unlikely]] return; }
L_0023B2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2E4u); set32(c.r[4], c.r[4].w[0] + 9762u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2E4u) [[unlikely]] return; }
L_0023B2E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2F0u); set32(c.r[4], c.r[4].w[0] + 9784u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2F0u) [[unlikely]] return; }
L_0023B2F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B2FCu); set32(c.r[4], c.r[4].w[0] + 9800u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B2FCu) [[unlikely]] return; }
L_0023B2FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B308u); set32(c.r[4], c.r[4].w[0] + 9824u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B308u) [[unlikely]] return; }
L_0023B308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B314u); set32(c.r[4], c.r[4].w[0] + 9840u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x0023B314u) [[unlikely]] return; }
L_0023B314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B320u); set32(c.r[4], c.r[4].w[0] - 24544u);  if (depth < kMaxDepth) unit_0082(c, 239u, depth + 1u); else { c.pc = 0x0030A070u; return; } if (c.pc != 0x0023B320u) [[unlikely]] return; }
L_0023B320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28464u)));  if (t) { goto L_0023B348; } }
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0023B32C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 26864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B344u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0023B344u) [[unlikely]] return; }
L_0023B344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023B348:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[16], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B32Cu | kUnwind; return; } goto L_0023B32C; }
    st32((c.r[28].w[0] - 28464u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B35Cu); st32((c.r[28].w[0] - 28460u), 0u);  if (depth < kMaxDepth) unit_004E(c, 179u, depth + 1u); else { c.pc = 0x00239EE0u; return; } if (c.pc != 0x0023B35Cu) [[unlikely]] return; }
L_0023B35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B364u);  if (depth < kMaxDepth) unit_0058(c, 134u, depth + 1u); else { c.pc = 0x00261310u; return; } if (c.pc != 0x0023B364u) [[unlikely]] return; }
L_0023B364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023B368:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28352u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0023B844; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8560u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B3B0u); set32(c.r[5], c.r[5].w[0] - 22800u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B3B0u) [[unlikely]] return; }
L_0023B3B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8578u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B3C4u); set32(c.r[5], c.r[5].w[0] - 10352u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B3C4u) [[unlikely]] return; }
L_0023B3C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8612u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B3D8u); set32(c.r[5], c.r[5].w[0] - 816u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B3D8u) [[unlikely]] return; }
L_0023B3D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8636u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B3ECu); set32(c.r[5], c.r[5].w[0] + 1104u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B3ECu) [[unlikely]] return; }
L_0023B3EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8661u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B400u); set32(c.r[5], c.r[5].w[0] + 3104u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B400u) [[unlikely]] return; }
L_0023B400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8686u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B414u); set32(c.r[5], c.r[5].w[0] + 13408u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B414u) [[unlikely]] return; }
L_0023B414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B428u); set32(c.r[5], c.r[5].w[0] + 15376u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B428u) [[unlikely]] return; }
L_0023B428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8742u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B43Cu); set32(c.r[5], c.r[5].w[0] + 17408u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B43Cu) [[unlikely]] return; }
L_0023B43C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8771u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B450u); set32(c.r[5], c.r[5].w[0] + 23184u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B450u) [[unlikely]] return; }
L_0023B450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8791u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B464u); set32(c.r[5], c.r[5].w[0] + 29056u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B464u) [[unlikely]] return; }
L_0023B464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 8802u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B478u); set32(c.r[5], c.r[5].w[0] + 32160u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B478u) [[unlikely]] return; }
L_0023B478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8821u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B48Cu); set32(c.r[5], c.r[5].w[0] - 29744u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B48Cu) [[unlikely]] return; }
L_0023B48C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4A0u); set32(c.r[5], c.r[5].w[0] - 28608u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B4A0u) [[unlikely]] return; }
L_0023B4A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8867u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4B4u); set32(c.r[5], c.r[5].w[0] - 20848u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B4B4u) [[unlikely]] return; }
L_0023B4B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4C8u); set32(c.r[5], c.r[5].w[0] - 27504u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B4C8u) [[unlikely]] return; }
L_0023B4C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8908u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4DCu); set32(c.r[5], c.r[5].w[0] - 26016u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B4DCu) [[unlikely]] return; }
L_0023B4DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8939u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4F0u); set32(c.r[5], c.r[5].w[0] - 24896u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B4F0u) [[unlikely]] return; }
L_0023B4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 8970u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B504u); set32(c.r[5], c.r[5].w[0] - 23744u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B504u) [[unlikely]] return; }
L_0023B504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9002u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B518u); set32(c.r[5], c.r[5].w[0] - 22544u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B518u) [[unlikely]] return; }
L_0023B518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9037u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B52Cu); set32(c.r[5], c.r[5].w[0] - 16816u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B52Cu) [[unlikely]] return; }
L_0023B52C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B540u); set32(c.r[5], c.r[5].w[0] - 13184u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B540u) [[unlikely]] return; }
L_0023B540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9092u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B554u); set32(c.r[5], c.r[5].w[0] - 11488u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B554u) [[unlikely]] return; }
L_0023B554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9123u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B568u); set32(c.r[5], c.r[5].w[0] - 8800u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B568u) [[unlikely]] return; }
L_0023B568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9135u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B57Cu); set32(c.r[5], c.r[5].w[0] - 7184u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B57Cu) [[unlikely]] return; }
L_0023B57C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9162u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B590u); set32(c.r[5], c.r[5].w[0] - 5200u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B590u) [[unlikely]] return; }
L_0023B590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9182u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5A4u); set32(c.r[5], c.r[5].w[0] + 960u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B5A4u) [[unlikely]] return; }
L_0023B5A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] + 9202u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5B8u); set32(c.r[5], c.r[5].w[0] + 18768u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B5B8u) [[unlikely]] return; }
L_0023B5B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9223u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5CCu); set32(c.r[5], c.r[5].w[0] - 21888u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B5CCu) [[unlikely]] return; }
L_0023B5CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5E0u); set32(c.r[5], c.r[5].w[0] - 15008u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B5E0u) [[unlikely]] return; }
L_0023B5E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5F4u); set32(c.r[5], c.r[5].w[0] - 13296u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B5F4u) [[unlikely]] return; }
L_0023B5F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9279u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B608u); set32(c.r[5], c.r[5].w[0] - 10880u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B608u) [[unlikely]] return; }
L_0023B608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9299u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B61Cu); set32(c.r[5], c.r[5].w[0] - 7216u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B61Cu) [[unlikely]] return; }
L_0023B61C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9327u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B630u); set32(c.r[5], c.r[5].w[0] - 5248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B630u) [[unlikely]] return; }
L_0023B630:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9361u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B644u); set32(c.r[5], c.r[5].w[0] - 272u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B644u) [[unlikely]] return; }
L_0023B644:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9385u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B658u); set32(c.r[5], c.r[5].w[0] - 29936u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B658u) [[unlikely]] return; }
L_0023B658:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9406u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B66Cu); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B66Cu) [[unlikely]] return; }
L_0023B66C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9421u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B680u); set32(c.r[5], c.r[5].w[0] + 10016u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B680u) [[unlikely]] return; }
L_0023B680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9444u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B694u); set32(c.r[5], c.r[5].w[0] + 11984u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B694u) [[unlikely]] return; }
L_0023B694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9468u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6A8u); set32(c.r[5], c.r[5].w[0] + 18944u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B6A8u) [[unlikely]] return; }
L_0023B6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9487u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6BCu); set32(c.r[5], c.r[5].w[0] + 21952u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B6BCu) [[unlikely]] return; }
L_0023B6BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9508u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6D0u); set32(c.r[5], c.r[5].w[0] + 27872u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B6D0u) [[unlikely]] return; }
L_0023B6D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[4], c.r[4].w[0] + 9534u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6E4u); set32(c.r[5], c.r[5].w[0] + 31888u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B6E4u) [[unlikely]] return; }
L_0023B6E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9546u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6F8u); set32(c.r[5], c.r[5].w[0] - 31920u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B6F8u) [[unlikely]] return; }
L_0023B6F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9579u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B70Cu); set32(c.r[5], c.r[5].w[0] - 22816u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B70Cu) [[unlikely]] return; }
L_0023B70C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9596u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B720u); set32(c.r[5], c.r[5].w[0] - 14960u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B720u) [[unlikely]] return; }
L_0023B720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9615u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B734u); set32(c.r[5], c.r[5].w[0] - 5808u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B734u) [[unlikely]] return; }
L_0023B734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9636u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B748u); set32(c.r[5], c.r[5].w[0] - 2304u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B748u) [[unlikely]] return; }
L_0023B748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9646u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B75Cu); set32(c.r[5], c.r[5].w[0] + 1536u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B75Cu) [[unlikely]] return; }
L_0023B75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9671u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B770u); set32(c.r[5], c.r[5].w[0] + 7008u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B770u) [[unlikely]] return; }
L_0023B770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B784u); set32(c.r[5], c.r[5].w[0] + 8656u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B784u) [[unlikely]] return; }
L_0023B784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9698u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B798u); set32(c.r[5], c.r[5].w[0] + 19328u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B798u) [[unlikely]] return; }
L_0023B798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9714u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7ACu); set32(c.r[5], c.r[5].w[0] + 30560u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B7ACu) [[unlikely]] return; }
L_0023B7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9733u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7C0u); set32(c.r[5], c.r[5].w[0] + 31856u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B7C0u) [[unlikely]] return; }
L_0023B7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9762u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7D4u); set32(c.r[5], c.r[5].w[0] - 29936u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B7D4u) [[unlikely]] return; }
L_0023B7D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7E8u); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B7E8u) [[unlikely]] return; }
L_0023B7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7FCu); set32(c.r[5], c.r[5].w[0] - 22688u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B7FCu) [[unlikely]] return; }
L_0023B7FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 9824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B810u); set32(c.r[5], c.r[5].w[0] - 17040u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B810u) [[unlikely]] return; }
L_0023B810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] + 9840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B824u); set32(c.r[5], c.r[5].w[0] + 29056u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x0023B824u) [[unlikely]] return; }
L_0023B824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B830u); set32(c.r[4], c.r[4].w[0] - 24544u);  if (depth < kMaxDepth) unit_0082(c, 241u, depth + 1u); else { c.pc = 0x0030A100u; return; } if (c.pc != 0x0023B830u) [[unlikely]] return; }
L_0023B830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B838u);  if (depth < kMaxDepth) unit_004E(c, 188u, depth + 1u); else { c.pc = 0x00239FF0u; return; } if (c.pc != 0x0023B838u) [[unlikely]] return; }
L_0023B838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B840u);  if (depth < kMaxDepth) unit_0058(c, 166u, depth + 1u); else { c.pc = 0x00261670u; return; } if (c.pc != 0x0023B840u) [[unlikely]] return; }
L_0023B840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0023B844:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023B850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28348u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 28348u), c.r[2].w[0]);  if (t) { goto L_0023B884; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] - 19584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B884u); set32(c.r[5], c.r[5].w[0] - 20416u);  if (depth < kMaxDepth) unit_0047(c, 186u, depth + 1u); else { c.pc = 0x0021DB80u; return; } if (c.pc != 0x0023B884u) [[unlikely]] return; }
L_0023B884:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0023B8FC; } }
L_0023B8D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B8E0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 245u, depth + 1u); else { c.pc = 0x0025DDB0u; return; } if (c.pc != 0x0023B8E0u) [[unlikely]] return; }
L_0023B8E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B8ECu); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0023B8ECu) [[unlikely]] return; }
L_0023B8EC:
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B8F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0023B8F8u) [[unlikely]] return; }
L_0023B8F8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0023B8FC:
    c.r[3].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B8D0u | kUnwind; return; } goto L_0023B8D0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023B930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B964u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023B964u) [[unlikely]] return; }
L_0023B964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17856u);
    set32(c.r[6], c.r[6].w[0] - 17936u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B984u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023B984u) [[unlikely]] return; }
L_0023B984:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0023B9BC; } }
L_0023B990:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 249u, depth + 1u); else { c.pc = 0x0025DE00u; return; } if (c.pc != 0x0023B9A0u) [[unlikely]] return; }
L_0023B9A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9ACu); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0023B9ACu) [[unlikely]] return; }
L_0023B9AC:
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0023B9B8u) [[unlikely]] return; }
L_0023B9B8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0023B9BC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B990u | kUnwind; return; } goto L_0023B990; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023B9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0023BA24; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0023BA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA20u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0023BA20u) [[unlikely]] return; }
L_0023BA20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023BA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023BA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0023BA50:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[7], 0u + 16u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA9Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 286u, depth + 1u); else { c.pc = 0x0023AFA0u; return; } if (c.pc != 0x0023BA9Cu) [[unlikely]] return; }
L_0023BA9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0023BC30; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BABCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023BABCu) [[unlikely]] return; }
L_0023BABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17856u);
    set32(c.r[6], c.r[6].w[0] - 17936u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BADCu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023BADCu) [[unlikely]] return; }
L_0023BADC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0023BB10; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0023BB0Cu) [[unlikely]] return; }
L_0023BB0C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0023BB10:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[21].w[0])));  goto L_0023BB44; }
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB40u); set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0023BB40u) [[unlikely]] return; }
L_0023BB40:
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0023BB44:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB58u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0057(c, 253u, depth + 1u); else { c.pc = 0x0025DE50u; return; } if (c.pc != 0x0023BB58u) [[unlikely]] return; }
L_0023BB58:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.f[20]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0023BC04; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0023BC00; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[13] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[6], c.r[29].w[0] + 164u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[17] = ld32((c.r[18].w[0] + 4u));
    c.f[16] = ld32((c.r[18].w[0]));
    c.f[14] = ld32((c.r[16].w[0] + 4u));
    c.f[15] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BBE0u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0058(c, 248u, depth + 1u); else { c.pc = 0x00261EB0u; return; } if (c.pc != 0x0023BBE0u) [[unlikely]] return; }
L_0023BBE0:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_0023BC00:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0023BC04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17936u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BC28u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0023BC28u) [[unlikely]] return; }
L_0023BC28:
    st32((c.r[22].w[0]), c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0023BC30:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0023BC60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 17936u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0023BC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCA0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023BCA0u) [[unlikely]] return; }
L_0023BCA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17856u);
    set32(c.r[6], c.r[6].w[0] - 17936u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCC0u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023BCC0u) [[unlikely]] return; }
L_0023BCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023BCD0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_0023BD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[4].w[0] + 4u));
    c.f[14] = ld32((c.r[4].w[0] + 12u));
    c.f[15] = ld32((c.r[5].w[0] + 4u));
    c.f[16] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BD24u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 250u, depth + 1u); else { c.pc = 0x00261FB0u; return; } if (c.pc != 0x0023BD24u) [[unlikely]] return; }
L_0023BD24:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023BD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BD5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 256u, depth + 1u); else { c.pc = 0x0025DED0u; return; } if (c.pc != 0x0023BD5Cu) [[unlikely]] return; }
L_0023BD5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_0023BD6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023BDA0; } }
L_0023BD6C:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023BD80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023BD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023BDA0; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023BDA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023BDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023BDD0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28336u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);  goto L_0023BDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023BE9C; } }
L_0023BDE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] - 18128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13240u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 18272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14104u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] - 17200u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14248u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], c.r[5].w[0] - 17280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14392u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[4], c.r[4].w[0] - 17312u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14536u), c.r[4].w[0]);
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14962u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[3].w[0] + 13384u), 0u);
    set32(c.r[4], c.r[4].w[0] - 17152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13528u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[3].w[0] + 13672u), 0u);
    set32(c.r[5], c.r[5].w[0] - 17088u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 16960u);
    st32((c.r[3].w[0] + 13816u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 13960u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14824u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 17840u);
    st32((c.r[3].w[0] + 14680u), c.r[4].w[0]);
    c.budget -= 46;
L_0023BE9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023BEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0023BF0C; } }
L_0023BEE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BEF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026FA90u; return; } if (c.pc != 0x0023BEF0u) [[unlikely]] return; }
L_0023BEF0:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BEFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0023BEFCu) [[unlikely]] return; }
L_0023BEFC:
    set32(c.r[4], c.r[19].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BF08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0023BF08u) [[unlikely]] return; }
L_0023BF08:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0023BF0C:
    c.r[3].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023BEE0u | kUnwind; return; } goto L_0023BEE0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023BF40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 6);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BF74u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0023BF74u) [[unlikely]] return; }
L_0023BF74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16304u);
    set32(c.r[6], c.r[6].w[0] - 16384u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BF94u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0023BF94u) [[unlikely]] return; }
L_0023BF94:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0023BFCC; } }
L_0023BFA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BFB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 363u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0023BFB0u) [[unlikely]] return; }
L_0023BFB0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BFBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0023BFBCu) [[unlikely]] return; }
L_0023BFBC:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BFC8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0023BFC8u) [[unlikely]] return; }
L_0023BFC8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0023BFCC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023BFA0u | kUnwind; return; } goto L_0023BFA0; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
}

}
