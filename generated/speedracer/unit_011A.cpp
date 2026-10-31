#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_011A[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
};

void unit_011A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00568000;
    case 2u: goto L_00568010;
    case 3u: goto L_00568018;
    case 4u: goto L_00568050;
    case 5u: goto L_00568090;
    case 6u: goto L_005680B0;
    case 7u: goto L_005680C0;
    case 8u: goto L_00568100;
    case 9u: goto L_00568148;
    case 10u: goto L_00568164;
    case 11u: goto L_00568184;
    case 12u: goto L_005681A8;
    case 13u: goto L_005681CC;
    case 14u: goto L_0056826C;
    case 15u: goto L_00568290;
    case 16u: goto L_005682B4;
    case 17u: goto L_005682D8;
    case 18u: goto L_005682FC;
    case 19u: goto L_00568324;
    case 20u: goto L_00568334;
    case 21u: goto L_00568344;
    case 22u: goto L_00568384;
    case 23u: goto L_005683A4;
    case 24u: goto L_005683C0;
    case 25u: goto L_005683E0;
    case 26u: goto L_005683F0;
    case 27u: goto L_00568428;
    case 28u: goto L_0056844C;
    case 29u: goto L_00568470;
    case 30u: goto L_00568498;
    case 31u: goto L_005684A8;
    case 32u: goto L_005684DC;
    case 33u: goto L_005684FC;
    case 34u: goto L_00568518;
    case 35u: goto L_00568538;
    case 36u: goto L_00568548;
    case 37u: goto L_00568580;
    case 38u: goto L_005685A8;
    case 39u: goto L_005685B8;
    case 40u: goto L_005685E4;
    case 41u: goto L_00568604;
    case 42u: goto L_00568620;
    case 43u: goto L_00568640;
    case 44u: goto L_00568650;
    case 45u: goto L_00568670;
    case 46u: goto L_00568680;
    case 47u: goto L_00568690;
    case 48u: goto L_005686A0;
    case 49u: goto L_005686B0;
    case 50u: goto L_005686C0;
    case 51u: goto L_005686D0;
    case 52u: goto L_005686E0;
    case 53u: goto L_005686F0;
    case 54u: goto L_00568710;
    case 55u: goto L_00568720;
    case 56u: goto L_00568730;
    case 57u: goto L_00568740;
    case 58u: goto L_00568750;
    case 59u: goto L_00568760;
    case 60u: goto L_00568770;
    case 61u: goto L_00568780;
    case 62u: goto L_00568790;
    case 63u: goto L_005687A0;
    case 64u: goto L_005687B0;
    case 65u: goto L_005687C0;
    case 66u: goto L_005687D0;
    case 67u: goto L_005687E0;
    case 68u: goto L_005687F0;
    case 69u: goto L_00568800;
    case 70u: goto L_00568810;
    case 71u: goto L_00568820;
    case 72u: goto L_00568830;
    case 73u: goto L_00568840;
    case 74u: goto L_00568850;
    case 75u: goto L_00568860;
    case 76u: goto L_005688A0;
    case 77u: goto L_005688F0;
    case 78u: goto L_00568914;
    case 79u: goto L_0056892C;
    case 80u: goto L_00568950;
    case 81u: goto L_00568990;
    case 82u: goto L_005689B8;
    case 83u: goto L_005689CC;
    case 84u: goto L_005689E8;
    case 85u: goto L_00568A14;
    case 86u: goto L_00568A24;
    case 87u: goto L_00568A48;
    case 88u: goto L_00568A50;
    case 89u: goto L_00568A6C;
    case 90u: goto L_00568A88;
    case 91u: goto L_00568AAC;
    case 92u: goto L_00568AC4;
    case 93u: goto L_00568AE0;
    case 94u: goto L_00568AFC;
    case 95u: goto L_00568B20;
    case 96u: goto L_00568B38;
    case 97u: goto L_00568B74;
    case 98u: goto L_00568BB4;
    case 99u: goto L_00568BD8;
    case 100u: goto L_00568BFC;
    case 101u: goto L_00568C20;
    case 102u: goto L_00568C70;
    case 103u: goto L_00568C80;
    case 104u: goto L_00568CD0;
    case 105u: goto L_00568CF8;
    case 106u: goto L_00568D10;
    case 107u: goto L_00568D30;
    case 108u: goto L_00568D50;
    case 109u: goto L_00568D60;
    case 110u: goto L_00568D70;
    case 111u: goto L_00568D80;
    case 112u: goto L_00568D90;
    case 113u: goto L_00568DB0;
    case 114u: goto L_00568DD0;
    case 115u: goto L_00568DF0;
    case 116u: goto L_00568E10;
    case 117u: goto L_00568E30;
    case 118u: goto L_00568E7C;
    case 119u: goto L_00568E90;
    case 120u: goto L_00568EC0;
    case 121u: goto L_00568ED4;
    case 122u: goto L_00568EF4;
    case 123u: goto L_00568F10;
    case 124u: goto L_00568F50;
    case 125u: goto L_00568F64;
    case 126u: goto L_00568F80;
    case 127u: goto L_00568FA0;
    case 128u: goto L_00568FF8;
    case 129u: goto L_00569090;
    case 130u: goto L_005690DC;
    case 131u: goto L_005690F0;
    case 132u: goto L_00569128;
    case 133u: goto L_00569140;
    case 134u: goto L_00569168;
    case 135u: goto L_00569188;
    case 136u: goto L_005691A8;
    case 137u: goto L_005691C8;
    case 138u: goto L_005691F0;
    case 139u: goto L_0056920C;
    case 140u: goto L_00569230;
    case 141u: goto L_0056924C;
    case 142u: goto L_00569270;
    case 143u: goto L_0056928C;
    case 144u: goto L_005692B0;
    case 145u: goto L_005692CC;
    case 146u: goto L_005692F0;
    case 147u: goto L_0056930C;
    case 148u: goto L_00569330;
    case 149u: goto L_0056934C;
    case 150u: goto L_00569370;
    case 151u: goto L_0056938C;
    case 152u: goto L_005693B0;
    case 153u: goto L_005693C0;
    case 154u: goto L_005693E4;
    case 155u: goto L_005693FC;
    case 156u: goto L_00569428;
    case 157u: goto L_00569440;
    case 158u: goto L_0056945C;
    case 159u: goto L_00569480;
    case 160u: goto L_005694B4;
    case 161u: goto L_005694C4;
    case 162u: goto L_005694E4;
    case 163u: goto L_00569514;
    case 164u: goto L_00569530;
    case 165u: goto L_00569560;
    case 166u: goto L_00569570;
    case 167u: goto L_005695A0;
    case 168u: goto L_005695D8;
    case 169u: goto L_005695F0;
    case 170u: goto L_0056962C;
    case 171u: goto L_0056964C;
    case 172u: goto L_00569670;
    case 173u: goto L_005696B4;
    case 174u: goto L_005696BC;
    case 175u: goto L_005696D0;
    case 176u: goto L_005696EC;
    case 177u: goto L_0056970C;
    case 178u: goto L_00569724;
    case 179u: goto L_00569760;
    case 180u: goto L_00569780;
    case 181u: goto L_00569790;
    case 182u: goto L_005697B0;
    case 183u: goto L_005697C0;
    case 184u: goto L_005697D0;
    case 185u: goto L_005697F0;
    case 186u: goto L_00569800;
    case 187u: goto L_0056985C;
    case 188u: goto L_00569870;
    case 189u: goto L_00569894;
    case 190u: goto L_00569970;
    case 191u: goto L_00569A30;
    case 192u: goto L_00569AD8;
    case 193u: goto L_00569B60;
    case 194u: goto L_00569B94;
    case 195u: goto L_00569BAC;
    case 196u: goto L_00569C64;
    case 197u: goto L_00569C98;
    case 198u: goto L_00569CB0;
    case 199u: goto L_00569CC8;
    case 200u: goto L_00569D14;
    case 201u: goto L_00569D6C;
    case 202u: goto L_00569DB8;
    case 203u: goto L_00569DE4;
    case 204u: goto L_00569E00;
    case 205u: goto L_00569E18;
    case 206u: goto L_00569E50;
    case 207u: goto L_00569FE8;
    case 208u: goto L_0056A064;
    case 209u: goto L_0056A088;
    case 210u: goto L_0056A0C0;
    case 211u: goto L_0056A150;
    case 212u: goto L_0056A1A8;
    case 213u: goto L_0056A1C4;
    case 214u: goto L_0056A1E8;
    case 215u: goto L_0056A254;
    case 216u: goto L_0056A27C;
    case 217u: goto L_0056A298;
    case 218u: goto L_0056A2E0;
    case 219u: goto L_0056A310;
    case 220u: goto L_0056A328;
    case 221u: goto L_0056A374;
    case 222u: goto L_0056A3B0;
    case 223u: goto L_0056A444;
    case 224u: goto L_0056A468;
    case 225u: goto L_0056A4A4;
    case 226u: goto L_0056A4C8;
    case 227u: goto L_0056A4E0;
    case 228u: goto L_0056A4F0;
    case 229u: goto L_0056A568;
    case 230u: goto L_0056A58C;
    case 231u: goto L_0056A600;
    case 232u: goto L_0056A66C;
    case 233u: goto L_0056A6A0;
    case 234u: goto L_0056A6CC;
    case 235u: goto L_0056A6E8;
    case 236u: goto L_0056A740;
    case 237u: goto L_0056A75C;
    case 238u: goto L_0056A77C;
    case 239u: goto L_0056A7C0;
    case 240u: goto L_0056A7E0;
    case 241u: goto L_0056A820;
    case 242u: goto L_0056A830;
    case 243u: goto L_0056A848;
    case 244u: goto L_0056A8A4;
    case 245u: goto L_0056A8D0;
    case 246u: goto L_0056A8F0;
    case 247u: goto L_0056A8FC;
    case 248u: goto L_0056A950;
    case 249u: goto L_0056A96C;
    case 250u: goto L_0056A980;
    case 251u: goto L_0056A9F0;
    case 252u: goto L_0056AA64;
    case 253u: goto L_0056AACC;
    case 254u: goto L_0056AB90;
    case 255u: goto L_0056ABEC;
    case 256u: goto L_0056AC24;
    case 257u: goto L_0056AC60;
    case 258u: goto L_0056AC6C;
    case 259u: goto L_0056AC88;
    case 260u: goto L_0056AD80;
    case 261u: goto L_0056ADB0;
    case 262u: goto L_0056AE20;
    case 263u: goto L_0056AE48;
    case 264u: goto L_0056AEBC;
    case 265u: goto L_0056AF00;
    case 266u: goto L_0056AF30;
    case 267u: goto L_0056AF70;
    case 268u: goto L_0056AFA0;
    case 269u: goto L_0056AFD0;
    case 270u: goto L_0056B00C;
    case 271u: goto L_0056B038;
    case 272u: goto L_0056B0A4;
    case 273u: goto L_0056B0DC;
    case 274u: goto L_0056B158;
    case 275u: goto L_0056B184;
    case 276u: goto L_0056B1D0;
    case 277u: goto L_0056B214;
    case 278u: goto L_0056B224;
    case 279u: goto L_0056B22C;
    case 280u: goto L_0056B2D0;
    case 281u: goto L_0056B318;
    case 282u: goto L_0056B324;
    case 283u: goto L_0056B374;
    case 284u: goto L_0056B3A0;
    case 285u: goto L_0056B3F0;
    case 286u: goto L_0056B438;
    case 287u: goto L_0056B444;
    case 288u: goto L_0056B47C;
    case 289u: goto L_0056B4C4;
    case 290u: goto L_0056B4DC;
    case 291u: goto L_0056B4F4;
    case 292u: goto L_0056B578;
    case 293u: goto L_0056B590;
    case 294u: goto L_0056B5C0;
    case 295u: goto L_0056B664;
    case 296u: goto L_0056B688;
    case 297u: goto L_0056B6D8;
    case 298u: goto L_0056B6F0;
    case 299u: goto L_0056B780;
    case 300u: goto L_0056B7A8;
    case 301u: goto L_0056B86C;
    case 302u: goto L_0056B8A8;
    case 303u: goto L_0056B8CC;
    case 304u: goto L_0056B900;
    case 305u: goto L_0056B914;
    case 306u: goto L_0056B930;
    case 307u: goto L_0056B964;
    case 308u: goto L_0056B97C;
    case 309u: goto L_0056B994;
    case 310u: goto L_0056B9C0;
    case 311u: goto L_0056B9D4;
    case 312u: goto L_0056BA04;
    case 313u: goto L_0056BA20;
    case 314u: goto L_0056BA48;
    case 315u: goto L_0056BA60;
    case 316u: goto L_0056BAA0;
    case 317u: goto L_0056BAC4;
    case 318u: goto L_0056BB08;
    case 319u: goto L_0056BB58;
    case 320u: goto L_0056BB90;
    case 321u: goto L_0056BC60;
    case 322u: goto L_0056BC90;
    case 323u: goto L_0056BCF0;
    case 324u: goto L_0056BD34;
    case 325u: goto L_0056BD50;
    case 326u: goto L_0056BD7C;
    case 327u: goto L_0056BE00;
    case 328u: goto L_0056BE20;
    case 329u: goto L_0056BE40;
    case 330u: goto L_0056BE68;
    case 331u: goto L_0056BE94;
    case 332u: goto L_0056BF20;
    case 333u: goto L_0056BF60;
    case 334u: goto L_0056BFE0;
    default: bad_entry(c, 0x00568000u); return;
    }
L_00568000:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00568018; } }
L_00568010:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00568018:
    c.r[1].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00568038; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00568010u | kUnwind; return; } goto L_00568010; }
L_00568038:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[8].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00568050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00568080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056809C; } }
L_00568080:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568090u); set32(c.r[6], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00568090u) [[unlikely]] return; }
L_00568090:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0056809C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005680B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_005680F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_005680C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_005680E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_005680F4; } }
L_005680E0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005680C0u | kUnwind; return; } goto L_005680C0; } }
L_005680F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005680F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00568100:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00568190; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_00568148; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568148u) [[unlikely]] return; }
L_00568148:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_00568168; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568164u) [[unlikely]] return; }
L_00568164:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00568168:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00568654; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568184u) [[unlikely]] return; }
L_00568184:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_00568190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005681A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005681A8u) [[unlikely]] return; }
L_005681A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005681B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568228; } }
L_005681B8:
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005681CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005681CCu) [[unlikely]] return; }
L_005681CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00300000u);  goto L_005681DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568228; } }
L_005681DC:
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00568228; }
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 16;
L_00568228:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_00568238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_00568238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D720000u);
    c.r[2].d[0] = c.r[2].d[0] | 28771ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 33u);  goto L_0056824C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056824C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20730000u);  goto L_005683F8; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 111u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056826Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0056826Cu) [[unlikely]] return; }
L_0056826C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_0056827C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_0056827C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 110u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568290u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00568290u) [[unlikely]] return; }
L_00568290:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005682A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_005682A0:
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005682B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005682B4u) [[unlikely]] return; }
L_005682B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005682C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_005682C4:
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005682D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005682D8u) [[unlikely]] return; }
L_005682D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005682E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_005682E8:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005682FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005682FCu) [[unlikely]] return; }
L_005682FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0056830C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_0056830C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 18736u);
    set32(c.r[7], 0u + 146u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568324u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00568324u) [[unlikely]] return; }
L_00568324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00568338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568334u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 103u, depth + 1u); else { c.pc = 0x00568C80u; return; } if (c.pc != 0x00568334u) [[unlikely]] return; }
L_00568334:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00568338:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 102u, depth + 1u); else { c.pc = 0x00568C70u; return; } if (c.pc != 0x00568344u) [[unlikely]] return; }
L_00568344:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 111u)));
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 110u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00568388; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568384u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568384u) [[unlikely]] return; }
L_00568384:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00568388:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  goto L_005683A8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005683A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005683A4u) [[unlikely]] return; }
L_005683A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_005683A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_005683C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005683C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005683C0u) [[unlikely]] return; }
L_005683C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_005683C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_005683E4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005683E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005683E0u) [[unlikely]] return; }
L_005683E0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_005683E4:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005683F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005683F0u) [[unlikely]] return; }
L_005683F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00568654; } }
L_005683F8:
    c.r[2].d[0] = c.r[2].d[0] | 28003ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 33u);  goto L_00568408; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568408:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20200000u);  goto L_00568550; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 109u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568428u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00568428u) [[unlikely]] return; }
L_00568428:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00568438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_00568438:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056844Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0056844Cu) [[unlikely]] return; }
L_0056844C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0056845C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_0056845C:
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568470u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00568470u) [[unlikely]] return; }
L_00568470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00568480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_00568480:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] - 18736u);
    set32(c.r[7], 0u + 165u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568498u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00568498u) [[unlikely]] return; }
L_00568498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005684AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005684A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 80u, depth + 1u); else { c.pc = 0x00568950u; return; } if (c.pc != 0x005684A8u) [[unlikely]] return; }
L_005684A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_005684AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 109u)));
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_005684E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005684DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005684DCu) [[unlikely]] return; }
L_005684DC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_005684E0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00568500; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005684FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005684FCu) [[unlikely]] return; }
L_005684FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_00568500:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_0056851C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568518u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568518u) [[unlikely]] return; }
L_00568518:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0056851C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0056853C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568538u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568538u) [[unlikely]] return; }
L_00568538:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0056853C:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568548u) [[unlikely]] return; }
L_00568548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568650; } }
L_00568550:
    c.r[2].d[0] = c.r[2].d[0] | 25443ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 33u);  goto L_00568560; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568560:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 33u);  goto L_00568654; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568580u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00568580u) [[unlikely]] return; }
L_00568580:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00568590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568654; } }
L_00568590:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] - 18736u);
    set32(c.r[7], 0u + 178u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005685A8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x005685A8u) [[unlikely]] return; }
L_005685A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005685BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005685B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 75u, depth + 1u); else { c.pc = 0x00568860u; return; } if (c.pc != 0x005685B8u) [[unlikely]] return; }
L_005685B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_005685BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_005685E8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005685E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005685E4u) [[unlikely]] return; }
L_005685E4:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_005685E8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  goto L_00568608; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568604u) [[unlikely]] return; }
L_00568604:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00568608:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_00568624; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568620u) [[unlikely]] return; }
L_00568620:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00568624:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00568644; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568640u) [[unlikely]] return; }
L_00568640:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00568644:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568650u) [[unlikely]] return; }
L_00568650:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00568670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[12]);  c.pc = t; return; }
L_00568680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 8u));  c.pc = t; return; }
L_00568690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_005686A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_005686B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 26483ull;  c.pc = t; return; }
L_005686C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 26740ull;  c.pc = t; return; }
L_005686D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736E0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 25459ull;  c.pc = t; return; }
L_005686E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 29296ull;  c.pc = t; return; }
L_005686F0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 20u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 21u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00568710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 24u));  c.pc = t; return; }
L_00568720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 28u));  c.pc = t; return; }
L_00568730:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00568740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_00568750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00568760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00568770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));  c.pc = t; return; }
L_00568780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));  c.pc = t; return; }
L_00568790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_005687A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005675A0u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 238u, depth); }
L_005687B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005686E0u | kUnwind; return; } goto L_005686E0; }
L_005687C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00566E70u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 207u, depth); }
L_005687D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005686D0u | kUnwind; return; } goto L_005686D0; }
L_005687E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00566750u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 174u, depth); }
L_005687F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005686C0u | kUnwind; return; } goto L_005686C0; }
L_00568800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005659A0u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 117u, depth); }
L_00568810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005686B0u | kUnwind; return; } goto L_005686B0; }
L_00568820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00564810u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 46u, depth); }
L_00568830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00564330u | kUnwind; return; } [[clang::musttail]] return unit_0119(c, 21u, depth); }
L_00568840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_00568850:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00568860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 17600u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17504u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_005688A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0056891C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[7].w[0])));  goto L_00568904; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[7].w[0])));  goto L_005688E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0056893C; } }
L_005688E4:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005688F0u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005688F0u) [[unlikely]] return; }
L_005688F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00568938; } }
L_00568904:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568914u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568914u) [[unlikely]] return; }
L_00568914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00568938; } }
L_0056891C:
    set32(c.r[25], ld32((c.r[7].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056892Cu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056892Cu) [[unlikely]] return; }
L_0056892C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00568938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0056893C:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00568950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17600u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17504u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17568u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_00568990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005689B8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_011A(c, 116u, depth + 1u); else { c.pc = 0x00568E10u; return; } if (c.pc != 0x005689B8u) [[unlikely]] return; }
L_005689B8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005689CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005689CCu) [[unlikely]] return; }
L_005689CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_005689DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00568C50; } }
L_005689DC:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005689E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005689E8u) [[unlikely]] return; }
L_005689E8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00568C30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 18704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568A14:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568A24u); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00568A24u) [[unlikely]] return; }
L_00568A24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EE40000u);
    c.r[3].d[0] = 0ull | 35043ull;
    c.r[4].d[0] = c.r[4].d[0] | 63669ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 26865ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568A48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00568A48u) [[unlikely]] return; }
L_00568A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00568C30; } }
L_00568A50:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00568A64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00568C30; } }
L_00568A6C:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00568AB8; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568A88u); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00568A88u) [[unlikely]] return; }
L_00568A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EE40000u);
    c.r[3].d[0] = 0ull | 35043ull;
    c.r[4].d[0] = c.r[4].d[0] | 63669ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 26865ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568AACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00568AACu) [[unlikely]] return; }
L_00568AAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_00568C30; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568AB8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568C30; } }
L_00568AC4:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00568AD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00568C30; } }
L_00568AE0:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00568B2C; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568AFCu); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00568AFCu) [[unlikely]] return; }
L_00568AFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EE40000u);
    c.r[3].d[0] = 0ull | 35043ull;
    c.r[4].d[0] = c.r[4].d[0] | 63669ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 26865ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568B20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00568B20u) [[unlikely]] return; }
L_00568B20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_00568C30; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568B2C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568C30; } }
L_00568B38:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00568B4C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568B4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00568C30; }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00568B68; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568B68:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00568C30; } }
L_00568B74:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00568BA0; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00568BA0; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00568BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00568BE4; } }
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568BB4u); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00568BB4u) [[unlikely]] return; }
L_00568BB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EE40000u);
    c.r[3].d[0] = 0ull | 35043ull;
    c.r[4].d[0] = c.r[4].d[0] | 63669ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 26865ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568BD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00568BD8u) [[unlikely]] return; }
L_00568BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00568BE4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568BE4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));  goto L_00568C30; }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568BFCu); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00568BFCu) [[unlikely]] return; }
L_00568BFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EE40000u);
    c.r[3].d[0] = 0ull | 35043ull;
    c.r[4].d[0] = c.r[4].d[0] | 63669ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 26865ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568C20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00568C20u) [[unlikely]] return; }
L_00568C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00568C2C; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568C2C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 1;
L_00568C30:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00568C50; }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00568C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00568C70:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00568C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17600u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17504u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00568CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00568CF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568CF8u) [[unlikely]] return; }
L_00568CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00568D10:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00568D30:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18672u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { set32(c.r[5], c.r[2].w[0] + 188u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00559ED0u | kUnwind; return; } [[clang::musttail]] return unit_0116(c, 179u, depth); }
L_00568D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00568D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00568D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 21844u)));  c.pc = t; return; }
L_00568D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 21844u), c.r[4].w[0]);  c.pc = t; return; }
L_00568D90:
    set32(c.r[4], ld32((c.r[28].w[0] - 21844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568DB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 21844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568DD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 21844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568DF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 21844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568E10:
    set32(c.r[4], ld32((c.r[28].w[0] - 21844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00568000u < 16384u) { entry = entries_011A[(t - 0x00568000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00568E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00568E80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17472u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00568E64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00568E64:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00568E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00568E7Cu) [[unlikely]] return; }
L_00568E7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00568E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00568E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00568EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00568EF8; } }
L_00568EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568EC0u);  if (depth < kMaxDepth) unit_011A(c, 116u, depth + 1u); else { c.pc = 0x00568E10u; return; } if (c.pc != 0x00568EC0u) [[unlikely]] return; }
L_00568EC0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568ED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568ED4u) [[unlikely]] return; }
L_00568ED4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_00568EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00568EF8; } }
L_00568EE4:
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568EF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568EF4u) [[unlikely]] return; }
L_00568EF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00568EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00568F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00568F34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00568F88; } }
L_00568F34:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00568F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00568F88; } }
L_00568F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568F50u);  if (depth < kMaxDepth) unit_011A(c, 116u, depth + 1u); else { c.pc = 0x00568E10u; return; } if (c.pc != 0x00568F50u) [[unlikely]] return; }
L_00568F50:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568F64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568F64u) [[unlikely]] return; }
L_00568F64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_00568F74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00568F88; } }
L_00568F74:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00568F80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00568F80u) [[unlikely]] return; }
L_00568F80:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00568F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00568FA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00568FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00569074; } }
L_00568FCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00568FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569074; } }
L_00568FE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 18624u);
    set32(c.r[7], 0u + 318u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00568FF8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00568FF8u) [[unlikely]] return; }
L_00568FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569038; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 17408u);
    set32(c.r[4], c.r[4].w[0] - 17280u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 17312u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 14;
L_00569038:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_00569048; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00569074; } }
L_00569048:
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_0056906C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569074; } }
L_0056906C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00569074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00569090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005690E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_005690C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_005690C4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_005690DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005690DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005690DCu) [[unlikely]] return; }
L_005690DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_005690E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005690F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0056912C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 17408u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00569128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569128u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00569128u) [[unlikely]] return; }
L_00569128:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0056912C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00569140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0056915C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005691D8; } }
L_0056915C:
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569168u); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569168u) [[unlikely]] return; }
L_00569168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_00569178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005691DC; } }
L_00569178:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569188u) [[unlikely]] return; }
L_00569188:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_00569198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005691D8; } }
L_00569198:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005691A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005691A8u) [[unlikely]] return; }
L_005691A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_005691B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005691D8; } }
L_005691B8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005691C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005691C8u) [[unlikely]] return; }
L_005691C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005691D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005691D8; } }
L_005691D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005691DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005691F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056920Cu);  if (depth < kMaxDepth) unit_011B(c, 98u, depth + 1u); else { c.pc = 0x0056CEB0u; return; } if (c.pc != 0x0056920Cu) [[unlikely]] return; }
L_0056920C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056921C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00569224; } }
L_0056921C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00569224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056924Cu);  if (depth < kMaxDepth) unit_011B(c, 100u, depth + 1u); else { c.pc = 0x0056CEE0u; return; } if (c.pc != 0x0056924Cu) [[unlikely]] return; }
L_0056924C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056925C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00569264; } }
L_0056925C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00569264:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005692A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056928Cu);  if (depth < kMaxDepth) unit_011B(c, 102u, depth + 1u); else { c.pc = 0x0056CF10u; return; } if (c.pc != 0x0056928Cu) [[unlikely]] return; }
L_0056928C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056929C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005692A4; } }
L_0056929C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005692A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005692A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005692B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005692E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005692CCu);  if (depth < kMaxDepth) unit_011B(c, 103u, depth + 1u); else { c.pc = 0x0056CF30u; return; } if (c.pc != 0x005692CCu) [[unlikely]] return; }
L_005692CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005692DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005692E4; } }
L_005692DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005692E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005692E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005692F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056930Cu);  if (depth < kMaxDepth) unit_011B(c, 106u, depth + 1u); else { c.pc = 0x0056CFC0u; return; } if (c.pc != 0x0056930Cu) [[unlikely]] return; }
L_0056930C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056931C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00569324; } }
L_0056931C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00569324:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569360; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056934Cu);  if (depth < kMaxDepth) unit_011B(c, 108u, depth + 1u); else { c.pc = 0x0056CFF0u; return; } if (c.pc != 0x0056934Cu) [[unlikely]] return; }
L_0056934C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056935C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00569364; } }
L_0056935C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00569364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005693A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056938Cu);  if (depth < kMaxDepth) unit_011B(c, 110u, depth + 1u); else { c.pc = 0x0056D020u; return; } if (c.pc != 0x0056938Cu) [[unlikely]] return; }
L_0056938C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056939C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005693A4; } }
L_0056939C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005693A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005693A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005693B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_005693C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00569410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005693E4u);  if (depth < kMaxDepth) unit_011B(c, 115u, depth + 1u); else { c.pc = 0x0056D140u; return; } if (c.pc != 0x005693E4u) [[unlikely]] return; }
L_005693E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_005693F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00569430; } }
L_005693F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005693FCu);  if (depth < kMaxDepth) unit_011B(c, 122u, depth + 1u); else { c.pc = 0x0056D260u; return; } if (c.pc != 0x005693FCu) [[unlikely]] return; }
L_005693FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056940C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056942C; } }
L_0056940C:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_00569410:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18624u);
    set32(c.r[7], 0u + 199u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569428u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x00569428u) [[unlikely]] return; }
L_00569428:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056942C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00569430:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00569440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056945Cu);  if (depth < kMaxDepth) unit_011B(c, 86u, depth + 1u); else { c.pc = 0x0056CD10u; return; } if (c.pc != 0x0056945Cu) [[unlikely]] return; }
L_0056945C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056946C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00569474; } }
L_0056946C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569470:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00569474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 18624u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 161u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005694B4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x005694B4u) [[unlikely]] return; }
L_005694B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  goto L_005694C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005694C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011B(c, 141u, depth + 1u); else { c.pc = 0x0056D5F0u; return; } if (c.pc != 0x005694C4u) [[unlikely]] return; }
L_005694C4:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_005694C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  goto L_005694D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00569540; } }
L_005694D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005694E4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_011B(c, 131u, depth + 1u); else { c.pc = 0x0056D3A0u; return; } if (c.pc != 0x005694E4u) [[unlikely]] return; }
L_005694E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005694F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00569544; } }
L_005694F4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00569528; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00569524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569514u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x00569514u) [[unlikely]] return; }
L_00569514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569540; } }
L_00569524:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00569528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569530u);  if (depth < kMaxDepth) unit_011B(c, 119u, depth + 1u); else { c.pc = 0x0056D1E0u; return; } if (c.pc != 0x00569530u) [[unlikely]] return; }
L_00569530:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569540; } }
L_00569540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00569544:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00569560:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00569570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17376u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17472u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_005695A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005695DC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 17376u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_005695D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005695D8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005695D8u) [[unlikely]] return; }
L_005695D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_005695DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005695F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00569610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569660; } }
L_00569610:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 16u);  goto L_00569624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_00569660; } }
L_00569624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056962Cu);  if (depth < kMaxDepth) unit_011B(c, 53u, depth + 1u); else { c.pc = 0x0056C7D0u; return; } if (c.pc != 0x0056962Cu) [[unlikely]] return; }
L_0056962C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_0056963C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00569664; } }
L_0056963C:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056964Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_011B(c, 48u, depth + 1u); else { c.pc = 0x0056C690u; return; } if (c.pc != 0x0056964Cu) [[unlikely]] return; }
L_0056964C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  goto L_0056965C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569660; } }
L_0056965C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00569664:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00569670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00569694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569740; } }
L_00569694:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0] + 20u)));  goto L_005696A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_00569740; } }
L_005696A8:
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005696B4u); set32(c.r[4], c.r[2].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005696B4u) [[unlikely]] return; }
L_005696B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005696BCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 115u, depth + 1u); else { c.pc = 0x00568DF0u; return; } if (c.pc != 0x005696BCu) [[unlikely]] return; }
L_005696BC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005696D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005696D0u) [[unlikely]] return; }
L_005696D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_005696E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00569740; } }
L_005696E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005696ECu); set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_011B(c, 50u, depth + 1u); else { c.pc = 0x0056C6F0u; return; } if (c.pc != 0x005696ECu) [[unlikely]] return; }
L_005696EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_005696FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00569744; } }
L_005696FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056970Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056970Cu) [[unlikely]] return; }
L_0056970C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00569738; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569724u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_011B(c, 64u, depth + 1u); else { c.pc = 0x0056C940u; return; } if (c.pc != 0x00569724u) [[unlikely]] return; }
L_00569724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569740; } }
L_00569734:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00569738:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00569740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00569744:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00569760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 18624u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[7], 0u + 31u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569780u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x00569780u) [[unlikely]] return; }
L_00569780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569790:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));  goto L_005697A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_005697A8; } }
L_005697A0:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_005697A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_005697B0:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_005697C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_005697D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 18624u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[7], 0u + 31u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005697F0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005697F0u) [[unlikely]] return; }
L_005697F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00569800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00569860; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17312u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00569844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00569844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00569844:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0056985C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056985Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0056985Cu) [[unlikely]] return; }
L_0056985C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00569860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00569870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 9;
L_00569894:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_005698C8; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_005698B4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_005698B4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_005698E0; } }
    c.budget -= 1;
L_005698C8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_005698DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005698DC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_005698DC:
    c.budget -= 1;
L_005698E0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569A00; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00569928; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00569918; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00569918:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00569940; } }
L_00569928:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056993C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056993C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056993C:
    c.budget -= 1;
L_00569940:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00569968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569988; } }
    c.budget -= 1;
L_00569968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569970u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x00569970u) [[unlikely]] return; }
L_00569970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569988; } }
L_00569980:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00569988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00569A00; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_005699C8; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_005699B4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_005699B4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_005699E0; } }
    c.budget -= 1;
L_005699C8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_005699DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005699DC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_005699DC:
    c.budget -= 1;
L_005699E0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    st64((c.r[3].w[0] + 56u), c.r[2].d[0]);
    c.budget -= 8;
L_00569A00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00569894u | kUnwind; return; } goto L_00569894; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00569A30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00569A60; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  goto L_00569A68; }
L_00569A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00569E2C; } }
L_00569A68:
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    if (c.r[4].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] & 1ull;  goto L_00569A98; }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00569A88; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00569A88:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00569AAC; } }
L_00569A98:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00569AAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00569AAC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00569AAC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[29].w[0] + 88u);  goto L_00569AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00569AE4; } }
L_00569AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569AD8u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x00569AD8u) [[unlikely]] return; }
L_00569AD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00569AE4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569AE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  goto L_00569AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00569E2C; } }
L_00569AF4:
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    if (c.r[4].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] & 1ull;  goto L_00569B24; }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00569B14; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00569B14:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00569B38; } }
L_00569B24:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00569B38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00569B38; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00569B38:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[16], c.r[2].w[0] + 24u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569B60u); set32(c.r[5], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569B60u) [[unlikely]] return; }
L_00569B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00569B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00569E30; } }
L_00569B70:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  goto L_00569BC0; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569B94u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 27u, depth + 1u); else { c.pc = 0x005382E0u; return; } if (c.pc != 0x00569B94u) [[unlikely]] return; }
L_00569B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_00569BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569E2C; } }
L_00569BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569BACu); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0105(c, 228u, depth + 1u); else { c.pc = 0x005164A0u; return; } if (c.pc != 0x00569BACu) [[unlikely]] return; }
L_00569BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569E2C; } }
L_00569BBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_00569BC0:
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[4].sd[0] >= 0) { c.r[5].d[0] = c.r[4].d[0] & 1ull;  goto L_00569BF4; }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00569BE4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00569BE4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00569C08; } }
L_00569BF4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00569C08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00569C08; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_00569C08:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[3].w[0] + 24u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00569C30; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569C30:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));  goto L_00569C44; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_00569C9C; } }
L_00569C44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_00569C58; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 80u), c.r[2].d[0]);  if (t) { goto L_00569C80; } }
L_00569C58:
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569C64u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x00569C64u) [[unlikely]] return; }
L_00569C64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld32((c.r[18].w[0] + 160u));  goto L_00569C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569E2C; } }
L_00569C74:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 3;
L_00569C80:
    set32(c.r[4], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_00569CA0; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569C98u); c.r[5].d[0] = ld64((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_011B(c, 142u, depth + 1u); else { c.pc = 0x0056D670u; return; } if (c.pc != 0x00569C98u) [[unlikely]] return; }
L_00569C98:
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 1;
L_00569C9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00569CA0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569CB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569CB0u) [[unlikely]] return; }
L_00569CB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569CC8u); set32(c.r[4], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569CC8u) [[unlikely]] return; }
L_00569CC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_00569D5C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00569D58; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    st64((c.r[3].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 93u));
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[2].w[0] + 4u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569D14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569D14u) [[unlikely]] return; }
L_00569D14:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 129u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569D58; } }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st64((c.r[2].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[2].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 9;
L_00569D58:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00569D5C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569D6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569D6Cu) [[unlikely]] return; }
L_00569D6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00569D84; }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_00569D9C; } }
L_00569D84:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_00569D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569DB8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x00569DB8u) [[unlikely]] return; }
L_00569DB8:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 80u));
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[5].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[16].w[0] + 32u), c.r[2].d[0]);  if (t) { goto L_00569DE4; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569DE4u); c.r[5].d[0] = c.r[2].d[0] - c.r[5].d[0];  if (depth < kMaxDepth) unit_011A(c, 188u, depth + 1u); else { c.pc = 0x00569870u; return; } if (c.pc != 0x00569DE4u) [[unlikely]] return; }
L_00569DE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00569E2C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569E00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x00569E00u) [[unlikely]] return; }
L_00569E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_00569E10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569E2C; } }
L_00569E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00569E18u); c.r[5].d[0] = ld8((c.r[18].w[0] + 116u));  if (depth < kMaxDepth) unit_0105(c, 267u, depth + 1u); else { c.pc = 0x005168F0u; return; } if (c.pc != 0x00569E18u) [[unlikely]] return; }
L_00569E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00569E2C; } }
L_00569E28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00569E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00569E30:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00569E50:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] >= 0; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00569EB0; } }
    set32(c.r[4], 0u - c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00569EA0; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00569EA0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00569EC4; } }
L_00569EB0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[6].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_00569EC4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00569EC4; } }
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.budget -= 1;
L_00569EC4:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[20], ld32((c.r[21].w[0] + 108u)));  goto L_00569EF0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[3].w[0] - 1u);  if (t) { goto L_00569F04; } }
L_00569EF0:
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00569F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A384; } }
L_00569F04:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = c.r[5].d[0] & 1ull;  goto L_00569F30; }
    set32(c.r[4], 0u - c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00569F20; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00569F20:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00569F44; } }
L_00569F30:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00569F44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00569F44; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00569F44:
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    c.r[22].d[0] = ld64((c.r[3].w[0] + 56u));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00569F90; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00569F80; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00569F80:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00569FA4; } }
L_00569F90:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00569FA4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00569FA4; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_00569FA4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 24u);  if (t) { goto L_00569FF8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  goto L_00569FFC; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00569FD8; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_00569FD8:
    set32(c.r[7], ld32((c.r[21].w[0] + 188u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00569FE8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00569FE8u) [[unlikely]] return; }
L_00569FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00569FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0056A388; } }
L_00569FF8:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_00569FFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 20u)));  goto L_0056A00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0056A044; } }
L_0056A00C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 14;
L_0056A044:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0056A180; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A064u) [[unlikely]] return; }
L_0056A064:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0056A17C; } }
    c.r[18].d[0] = c.r[16].d[0] << 32;
    set32(c.r[19], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { goto L_0056A128; } }
L_0056A088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056A0D0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056A0D0; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0056A0D0; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[7], ld32((c.r[21].w[0] + 188u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A0C0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A0C0u) [[unlikely]] return; }
L_0056A0C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_0056A0D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A384; } }
L_0056A0D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[18].d[0] = c.r[16].d[0] << 32;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { goto L_0056A0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0056A128; } }
L_0056A0E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
L_0056A128:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056A168; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A150u) [[unlikely]] return; }
L_0056A150:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056A088u | kUnwind; return; } goto L_0056A088; }
    c.budget -= 1;
L_0056A168:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056A17C; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0056A17C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0056A180:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0056A21C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[29].w[0] + 232u);  goto L_0056A1A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A1B4; } }
L_0056A1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A1A8u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056A1A8u) [[unlikely]] return; }
L_0056A1A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0056A1B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056A1B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0056A1D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A1C4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x0056A1C4u) [[unlikely]] return; }
L_0056A1C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056A384; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0056A1D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0056A1F4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A1E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A1E8u) [[unlikely]] return; }
L_0056A1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056A210; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0056A1F4:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[17].w[0] + 24u), 0ull);
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st64((c.r[17].w[0] + 32u), 0ull);
    c.budget -= 7;
L_0056A210:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A384; } }
L_0056A21C:
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_0056A244; }
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056A240; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_0056A240:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0056A244:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A254u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A254u) [[unlikely]] return; }
L_0056A254:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 3u);  goto L_0056A2B8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A27Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A27Cu) [[unlikely]] return; }
L_0056A27C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_0056A2B0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A298u); set32(c.r[5], c.r[17].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A298u) [[unlikely]] return; }
L_0056A298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0056A2A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A384; } }
L_0056A2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0056A2BC; } }
L_0056A2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0056A2BC; } }
L_0056A2B8:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0056A2BC:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 192u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_0056A2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 224u), c.r[22].d[0]);  if (t) { goto L_0056A314; } }
L_0056A2D4:
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A2E0u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056A2E0u) [[unlikely]] return; }
L_0056A2E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld32((c.r[21].w[0] + 156u));  goto L_0056A2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A384; } }
L_0056A2F0:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[5].d[0] = c.r[2].d[0] + c.r[3].d[0];
    st64((c.r[29].w[0] + 224u), c.r[5].d[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_0056A318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A310u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 180u)));  if (depth < kMaxDepth) unit_011B(c, 142u, depth + 1u); else { c.pc = 0x0056D670u; return; } if (c.pc != 0x0056A310u) [[unlikely]] return; }
L_0056A310:
    st64((c.r[29].w[0] + 224u), c.r[2].d[0]);
    c.budget -= 1;
L_0056A314:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0056A318:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A328u) [[unlikely]] return; }
L_0056A328:
    set32(c.r[2], ld32((c.r[21].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0056A340; }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0056A358; } }
L_0056A340:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_0056A358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A374u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056A374u) [[unlikely]] return; }
L_0056A374:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    st64((c.r[17].w[0] + 32u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0056A384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0056A388:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0056A3B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0056A3F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0056A5D0; } }
L_0056A3F4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));  goto L_0056A40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A40C:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] - c.r[6].d[0];  if (t) { goto L_0056A478; } }
    c.r[2].d[0] = c.r[2].d[0] - c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[16].d[0];
    st64((c.r[29].w[0] + 144u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st64((c.r[29].w[0] + 128u), c.r[18].d[0]);  goto L_0056A454; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A444u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x0056A444u) [[unlikely]] return; }
L_0056A444:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));  goto L_0056A5A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0056A5D4; } }
L_0056A454:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A468u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x0056A468u) [[unlikely]] return; }
L_0056A468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A478:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[3].d[0] = c.r[6].d[0] - c.r[2].d[0];  if (t) { goto L_0056A490; } }
    c.r[2].d[0] = 0ull - c.r[19].d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0056A494; }
L_0056A490:
    c.r[21].d[0] = c.r[3].d[0] + c.r[19].d[0];
    c.budget -= 1;
L_0056A494:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A4A4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_010B(c, 245u, depth + 1u); else { c.pc = 0x0052F5E0u; return; } if (c.pc != 0x0056A4A4u) [[unlikely]] return; }
L_0056A4A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0056A4B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A4B4:
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A4C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 257u, depth + 1u); else { c.pc = 0x0052F7A0u; return; } if (c.pc != 0x0056A4C8u) [[unlikely]] return; }
L_0056A4C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0056A4D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A4E0u);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056A4E0u) [[unlikely]] return; }
L_0056A4E0:
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A4F0u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056A4F0u) [[unlikely]] return; }
L_0056A4F0:
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0056A534; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_0056A54C; } }
L_0056A534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 6;
L_0056A54C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0056A55C; }
L_0056A55C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A568u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0105(c, 240u, depth + 1u); else { c.pc = 0x005165C0u; return; } if (c.pc != 0x0056A568u) [[unlikely]] return; }
L_0056A568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0] + 136u), c.r[18].d[0]);  goto L_0056A578; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A578:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A58Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x0056A58Cu) [[unlikely]] return; }
L_0056A58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A5D0; } }
L_0056A59C:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));
    c.budget -= 1;
L_0056A5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] - c.r[19].d[0];
    st64((c.r[20].w[0] + 24u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] - c.r[19].d[0];
    st64((c.r[20].w[0] + 32u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[16].d[0];
    st64((c.r[20].w[0] + 24u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[16].d[0];
    st64((c.r[20].w[0] + 32u), c.r[3].d[0]);
    c.budget -= 12;
L_0056A5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0056A5D4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0056A600:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0056A640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A7F4; } }
L_0056A640:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[19].d[0] - c.r[5].d[0];  if (t) { goto L_0056A6B0; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[29].w[0] + 132u);  goto L_0056A664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A678; } }
L_0056A664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A66Cu);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056A66Cu) [[unlikely]] return; }
L_0056A66C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0056A678; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056A678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));  goto L_0056A790; }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    st64((c.r[29].w[0] + 120u), c.r[2].d[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A6A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x0056A6A0u) [[unlikely]] return; }
L_0056A6A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0056A7F8; } }
L_0056A6B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] - c.r[2].d[0];
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A6CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 257u, depth + 1u); else { c.pc = 0x0052F7A0u; return; } if (c.pc != 0x0056A6CCu) [[unlikely]] return; }
L_0056A6CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_0056A6DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A7F4; } }
L_0056A6DC:
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A6E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0105(c, 237u, depth + 1u); else { c.pc = 0x00516560u; return; } if (c.pc != 0x0056A6E8u) [[unlikely]] return; }
L_0056A6E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 136u)));  goto L_0056A6F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A7F4; } }
L_0056A6F8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0056A70C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056A724; } }
L_0056A70C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0056A724:
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A740u);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056A740u) [[unlikely]] return; }
L_0056A740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A75Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[20]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056A75Cu) [[unlikely]] return; }
L_0056A75C:
    c.r[2].d[0] = c.r[19].d[0] + c.r[2].d[0];
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] - c.r[16].d[0];
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A77Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 252u, depth + 1u); else { c.pc = 0x00516760u; return; } if (c.pc != 0x0056A77Cu) [[unlikely]] return; }
L_0056A77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A7F4; } }
L_0056A78C:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.budget -= 1;
L_0056A790:
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[17].d[0];
    st64((c.r[20].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[29].w[0] + 128u);  goto L_0056A7B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056A7CC; } }
L_0056A7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A7C0u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056A7C0u) [[unlikely]] return; }
L_0056A7C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0056A7CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056A7CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056A7F4; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A7E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0105(c, 267u, depth + 1u); else { c.pc = 0x005168F0u; return; } if (c.pc != 0x0056A7E0u) [[unlikely]] return; }
L_0056A7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A7F4; } }
L_0056A7F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056A7F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0056A7F8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0056A820:
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 188u), c.r[6].w[0]);  c.pc = t; return; }
L_0056A830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0056A888; } }
L_0056A848:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056A848u | kUnwind; return; } goto L_0056A848; } }
    c.budget -= 1;
L_0056A888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_0056A89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0056A8E4; } }
L_0056A89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A8A4u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 327u, depth + 1u); else { c.pc = 0x0056BE00u; return; } if (c.pc != 0x0056A8A4u) [[unlikely]] return; }
L_0056A8A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 129u), static_cast<std::uint8_t>(0u));  goto L_0056A8B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A8E0; } }
L_0056A8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st64((c.r[16].w[0] + 144u), 0ull);
    st64((c.r[16].w[0] + 136u), 0ull);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A8D0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0056A8D0u) [[unlikely]] return; }
L_0056A8D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056A8E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056A8E0; } }
L_0056A8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0056A8E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0056A8F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056A938; } }
L_0056A8FC:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056A8FCu | kUnwind; return; } goto L_0056A8FC; } }
L_0056A938:
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0056A950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A96Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 113u, depth + 1u); else { c.pc = 0x00568DB0u; return; } if (c.pc != 0x0056A96Cu) [[unlikely]] return; }
L_0056A96C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056A980u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056A980u) [[unlikely]] return; }
L_0056A980:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_0056A990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0056A9D8; } }
L_0056A990:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056A9D8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_0056A9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0056A9F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0056AA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0056AB78; } }
L_0056AA18:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] + 24u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 112u)));  goto L_0056AB70; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0056AA58; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 72u), c.r[2].d[0]);  if (t) { goto L_0056AA74; } }
L_0056AA58:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AA64u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056AA64u) [[unlikely]] return; }
L_0056AA64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));  goto L_0056AA78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056AB7C; } }
L_0056AA74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_0056AA78:
    set32(c.r[2], 0u + 2u);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0056AAB0; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));  goto L_0056AAA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056AAB4; } }
L_0056AAA0:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];  goto L_0056AAB0; }
    c.r[4].d[0] = c.r[6].d[0] - c.r[3].d[0];
    c.budget -= 1;
L_0056AAB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056AAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056AAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056AB78; } }
L_0056AAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AACCu);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056AACCu) [[unlikely]] return; }
L_0056AACC:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0056AAE4; }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0056AAFC; } }
L_0056AAE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0056AAFC:
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0056AB50; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0056AB68; } }
L_0056AB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0056AB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056AB78; } }
L_0056AB70:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0056AB78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0056AB7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0056AB90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0056ABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056ABF8; } }
L_0056ABE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056ABECu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056ABECu) [[unlikely]] return; }
L_0056ABEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0056ABF8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056ABF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[20].w[0]);  goto L_0056AED8; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 116u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0056AC18; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 112u), c.r[2].d[0]);  if (t) { goto L_0056AC34; } }
L_0056AC18:
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AC24u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056AC24u) [[unlikely]] return; }
L_0056AC24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));  goto L_0056AC38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0056AEE0; } }
L_0056AC34:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    c.budget -= 1;
L_0056AC38:
    c.r[18].d[0] = ld32((c.r[16].w[0] + 164u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0056AC8C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AC60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056AC60u) [[unlikely]] return; }
L_0056AC60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AC6Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056AC6Cu) [[unlikely]] return; }
L_0056AC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AC88u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[20]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056AC88u) [[unlikely]] return; }
L_0056AC88:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0056AC8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));  goto L_0056ACA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056AEDC; } }
L_0056ACA0:
    set32(c.r[2], 0u + 2u);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0056ACD8; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[17].w[0] + 32u));  goto L_0056ACC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056ACDC; } }
L_0056ACC8:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] - c.r[3].d[0];  goto L_0056ACD8; }
    c.r[18].d[0] = c.r[6].d[0] - c.r[3].d[0];
    c.budget -= 1;
L_0056ACD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056ACDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056ACEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056AEDC; } }
L_0056ACEC:
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { set32(c.r[3], c.r[20].w[0] >> 1);  goto L_0056AD00; }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056AD18; } }
L_0056AD00:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0056AD18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0056AD48; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056AD64; } }
L_0056AD48:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0056AD64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AD80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0056AD80u) [[unlikely]] return; }
L_0056AD80:
    set32(c.r[3], 0u - 1u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[19].d[0] + c.r[3].d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_0056AD98; }
L_0056AD98:
    c.r[18].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.r[2].d[0] = ld8((c.r[16].w[0] + 116u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0056AE44; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_0056ADB0:
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056ADE0; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056ADD0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056ADD0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056ADF8; } }
L_0056ADE0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056ADF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056ADF4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056ADF4:
    c.budget -= 1;
L_0056ADF8:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 120u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[8].d[0] = ld32((c.r[16].w[0] + 164u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AE20u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 222u, depth + 1u); else { c.pc = 0x0056A3B0u; return; } if (c.pc != 0x0056AE20u) [[unlikely]] return; }
L_0056AE20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0056AE30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056AEDC; } }
L_0056AE30:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056ADB0u | kUnwind; return; } goto L_0056ADB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056AEDC; } }
L_0056AE44:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_0056AE48:
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056AE78; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056AE68; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056AE68:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056AE90; } }
L_0056AE78:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056AE8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0056AE8C; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_0056AE8C:
    c.budget -= 1;
L_0056AE90:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = ld32((c.r[16].w[0] + 160u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[8].d[0] = ld32((c.r[16].w[0] + 164u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 24u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056AEBCu); c.r[7].d[0] = c.r[6].d[0] + c.r[2].d[0];  if (depth < kMaxDepth) unit_011A(c, 222u, depth + 1u); else { c.pc = 0x0056A3B0u; return; } if (c.pc != 0x0056AEBCu) [[unlikely]] return; }
L_0056AEBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0056AECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056AEDC; } }
L_0056AECC:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056AE48u | kUnwind; return; } goto L_0056AE48; }
L_0056AED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056AEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0056AEE0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0056AF00:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056AF24; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0056AF24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056AF30:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056AF64; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0056AF64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056AF70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 129u));
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0056AF94; } }
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 144u), 0ull);
    st64((c.r[4].w[0] + 136u), 0ull);
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_0056AF94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056AFA0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 128u));
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0056AFC4; } }
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 144u), 0ull);
    st64((c.r[4].w[0] + 136u), 0ull);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_0056AFC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0056AFD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 116u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0056B1A4; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B00Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056B00Cu) [[unlikely]] return; }
L_0056B00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056B1AC; } }
L_0056B01C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0056B0D8; }
    c.r[3].d[0] = ld32((c.r[19].w[0] + 160u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 5;
L_0056B038:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B068; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B058; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B058:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B080; } }
L_0056B068:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056B07C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B07C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056B07C:
    c.budget -= 1;
L_0056B080:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld32((c.r[19].w[0] + 164u));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = ld64((c.r[19].w[0] + 120u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B0A4u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 231u, depth + 1u); else { c.pc = 0x0056A600u; return; } if (c.pc != 0x0056B0A4u) [[unlikely]] return; }
L_0056B0A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056B038u | kUnwind; return; } goto L_0056B038; }
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st8((c.r[19].w[0] + 116u), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_0056B1A4; }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 120u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[17].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_0056B1A0; } }
L_0056B0D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_0056B0DC:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B110; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B0FC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B0FC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B128; } }
    c.budget -= 1;
L_0056B110:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056B124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B124; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056B124:
    c.budget -= 1;
L_0056B128:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + 24u);  if (t) { goto L_0056B150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056B170; } }
    c.budget -= 1;
L_0056B150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B158u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056B158u) [[unlikely]] return; }
L_0056B158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056B170; } }
L_0056B168:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0056B170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B188; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B184u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 267u, depth + 1u); else { c.pc = 0x005168F0u; return; } if (c.pc != 0x0056B184u) [[unlikely]] return; }
L_0056B184:
    c.budget -= 1;
L_0056B188:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056B0DCu | kUnwind; return; } goto L_0056B0DC; }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    st64((c.r[19].w[0] + 120u), c.r[2].d[0]);
    c.budget -= 2;
L_0056B1A0:
    st8((c.r[19].w[0] + 116u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0056B1A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0056B1AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0056B1D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[29].w[0] + 88u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B214u); set32(c.r[17], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_010E(c, 8u, depth + 1u); else { c.pc = 0x005380E0u; return; } if (c.pc != 0x0056B214u) [[unlikely]] return; }
L_0056B214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056B8E4; } }
L_0056B224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B22Cu); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 323u, depth + 1u); else { c.pc = 0x0056BCF0u; return; } if (c.pc != 0x0056B22Cu) [[unlikely]] return; }
L_0056B22C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 104u)));  goto L_0056B23C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B23C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[2].w[0] + 24u);
    c.budget -= 5;
L_0056B250:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056B280; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056B280; } }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 32u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056B224u | kUnwind; return; } goto L_0056B224; } }
L_0056B280:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 168u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));  goto L_0056B7BC; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 129u));  goto L_0056B3B0; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 136u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 136u));  goto L_0056B2E4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B2E0; } }
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st64((c.r[18].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[18].w[0] + 144u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B2D0u); set32(c.r[5], c.r[18].w[0] + 152u);  if (depth < kMaxDepth) unit_0106(c, 249u, depth + 1u); else { c.pc = 0x0051B920u; return; } if (c.pc != 0x0056B2D0u) [[unlikely]] return; }
L_0056B2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B2E0:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 136u));
    c.budget -= 1;
L_0056B2E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));  goto L_0056B4B4; }
    c.f[1] = 0u;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[18].w[0] + 144u));  if (t) { goto L_0056B350; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0056B354; }
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056B350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B318u); c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056B318u) [[unlikely]] return; }
L_0056B318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B324u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056B324u) [[unlikely]] return; }
L_0056B324:
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_0056B350; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B350; } }
L_0056B350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0056B354:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 152u));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B374u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0056B374u) [[unlikely]] return; }
L_0056B374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B384:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0056B4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B3A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 242u, depth + 1u); else { c.pc = 0x0056A830u; return; } if (c.pc != 0x0056B3A0u) [[unlikely]] return; }
L_0056B3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B4B0; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 136u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 136u));  goto L_0056B404; }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B400; } }
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st64((c.r[18].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 24u));
    st64((c.r[18].w[0] + 144u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B3F0u); set32(c.r[5], c.r[18].w[0] + 152u);  if (depth < kMaxDepth) unit_0106(c, 249u, depth + 1u); else { c.pc = 0x0051B920u; return; } if (c.pc != 0x0056B3F0u) [[unlikely]] return; }
L_0056B3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B400:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 136u));
    c.budget -= 1;
L_0056B404:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B4B0; } }
    c.f[20] = 0u;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[18].w[0] + 144u));  if (t) { goto L_0056B470; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0056B474; }
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056B470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B438u); c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056B438u) [[unlikely]] return; }
L_0056B438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B444u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x0056B444u) [[unlikely]] return; }
L_0056B444:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = c.f[0];  goto L_0056B470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B470; } }
L_0056B470:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0056B474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B47Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0056B47Cu) [[unlikely]] return; }
L_0056B47C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0056B48C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B48C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0056B4B0; } }
    st8((c.r[18].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st64((c.r[18].w[0] + 144u), 0ull);
    st64((c.r[18].w[0] + 136u), 0ull);
    c.budget -= 4;
L_0056B4B0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    c.budget -= 1;
L_0056B4B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 108u)));  goto L_0056B504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B4C4u); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 327u, depth + 1u); else { c.pc = 0x0056BE00u; return; } if (c.pc != 0x0056B4C4u) [[unlikely]] return; }
L_0056B4C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0056B4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B4DCu);  if (depth < kMaxDepth) unit_011A(c, 206u, depth + 1u); else { c.pc = 0x00569E50u; return; } if (c.pc != 0x0056B4DCu) [[unlikely]] return; }
L_0056B4DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 24u);  goto L_0056B4EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B4F4u);  if (depth < kMaxDepth) unit_011A(c, 323u, depth + 1u); else { c.pc = 0x0056BCF0u; return; } if (c.pc != 0x0056B4F4u) [[unlikely]] return; }
L_0056B4F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0056B58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B504:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[4].sd[0] >= 0) { c.r[5].d[0] = c.r[4].d[0] & 1ull;  goto L_0056B53C; }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B52C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B52C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B550; } }
L_0056B53C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B550; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0056B550; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_0056B550:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056B588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B578u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 206u, depth + 1u); else { c.pc = 0x00569E50u; return; } if (c.pc != 0x0056B578u) [[unlikely]] return; }
L_0056B578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B588:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056B58C:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_0056B590:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B5C0; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B5B0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B5B0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B5D8; } }
L_0056B5C0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056B5D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B5D4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056B5D4:
    c.budget -= 1;
L_0056B5D8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0056B69C; }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B628; } }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B614; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B614:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B640; } }
    c.budget -= 1;
L_0056B628:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0056B63C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B63C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056B63C:
    c.budget -= 1;
L_0056B640:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B664u); set32(c.r[5], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056B664u) [[unlikely]] return; }
L_0056B664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_0056B674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0056B6A8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B688u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 191u, depth + 1u); else { c.pc = 0x00569A30u; return; } if (c.pc != 0x0056B688u) [[unlikely]] return; }
L_0056B688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B698:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0056B69C:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056B590u | kUnwind; return; } goto L_0056B590; }
L_0056B6A8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056B7B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 112u)));  goto L_0056B798; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B6D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056B6D8u) [[unlikely]] return; }
L_0056B6D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B6F0u); set32(c.r[4], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056B6F0u) [[unlikely]] return; }
L_0056B6F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 104u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 104u));
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0056B72C; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 97u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 105u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0056B72C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056B72C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[17].w[0] + 24u));  goto L_0056B74C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_0056B770; }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0056B74C:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st64((c.r[2].w[0] + 8u), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 105u));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[2].w[0] + 4u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 9;
L_0056B770:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B780u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056B780u) [[unlikely]] return; }
L_0056B780:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 6;
L_0056B798:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0056B7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B7A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 254u, depth + 1u); else { c.pc = 0x0056AB90u; return; } if (c.pc != 0x0056B7A8u) [[unlikely]] return; }
L_0056B7A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 112u), 0u);  goto L_0056B7B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B7B8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.budget -= 1;
L_0056B7BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 184u)));  goto L_0056B880; }
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056B87C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056B87C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[4].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] & 1ull;  goto L_0056B824; }
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0056B814; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0056B814:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0056B838; } }
L_0056B824:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0056B838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0056B838; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0056B838:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].d[0] = ld32((c.r[18].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056B87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B86Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 206u, depth + 1u); else { c.pc = 0x00569E50u; return; } if (c.pc != 0x0056B86Cu) [[unlikely]] return; }
L_0056B86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B87C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B87C:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 1;
L_0056B880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056B8E0; }
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0056B89C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0056B89C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B8A8u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_011A(c, 251u, depth + 1u); else { c.pc = 0x0056A9F0u; return; } if (c.pc != 0x0056B8A8u) [[unlikely]] return; }
L_0056B8A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 100u)));  goto L_0056B8B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B8B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B8CCu); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056B8CCu) [[unlikely]] return; }
L_0056B8CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056B8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B8E0; } }
L_0056B8DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056B8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0056B8E4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0056B900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B914u); set32(c.r[4], c.r[4].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 327u, depth + 1u); else { c.pc = 0x0056BE00u; return; } if (c.pc != 0x0056B914u) [[unlikely]] return; }
L_0056B914:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056B91C; }
L_0056B91C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0056B930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0056B95C; } }
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056B9AC; } }
L_0056B95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B964u);  if (depth < kMaxDepth) unit_011A(c, 304u, depth + 1u); else { c.pc = 0x0056B900u; return; } if (c.pc != 0x0056B964u) [[unlikely]] return; }
L_0056B964:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0056B974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0056B9B0; } }
L_0056B974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B97Cu);  if (depth < kMaxDepth) unit_011A(c, 206u, depth + 1u); else { c.pc = 0x00569E50u; return; } if (c.pc != 0x0056B97Cu) [[unlikely]] return; }
L_0056B97C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 24u);  goto L_0056B98C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B9AC; } }
L_0056B98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B994u);  if (depth < kMaxDepth) unit_011A(c, 323u, depth + 1u); else { c.pc = 0x0056BCF0u; return; } if (c.pc != 0x0056B994u) [[unlikely]] return; }
L_0056B994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0056B9A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056B9AC; } }
L_0056B9A4:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0056B9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0056B9B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0056B9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056B9D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 304u, depth + 1u); else { c.pc = 0x0056B900u; return; } if (c.pc != 0x0056B9D4u) [[unlikely]] return; }
L_0056B9D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0056B9E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0056BA50; } }
L_0056B9E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056BA08; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18592u);
    set32(c.r[7], 0u + 88u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BA04u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056BA04u) [[unlikely]] return; }
L_0056BA04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056BA08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0056BA18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BA4C; } }
L_0056BA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BA20u);  if (depth < kMaxDepth) unit_0106(c, 255u, depth + 1u); else { c.pc = 0x0051B9A0u; return; } if (c.pc != 0x0056BA20u) [[unlikely]] return; }
L_0056BA20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_0056BA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BA4C; } }
L_0056BA30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18592u);
    set32(c.r[7], 0u + 322u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BA48u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0056BA48u) [[unlikely]] return; }
L_0056BA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056BA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0056BA50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0056BA60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BAA0u); set32(c.r[5], c.r[5].w[0] - 18568u);  if (depth < kMaxDepth) unit_010E(c, 33u, depth + 1u); else { c.pc = 0x00538390u; return; } if (c.pc != 0x0056BAA0u) [[unlikely]] return; }
L_0056BAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0056BC44; } }
L_0056BAB0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  goto L_0056BAD8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BAC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0056BAC4u) [[unlikely]] return; }
L_0056BAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BC40; } }
L_0056BAD4:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 1;
L_0056BAD8:
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056BB1C; }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18592u);
    set32(c.r[7], 0u + 73u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BB08u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0056BB08u) [[unlikely]] return; }
L_0056BB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0056BB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0056BB1C; } }
L_0056BB18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056BB1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 112u), 0u);  goto L_0056BB2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BC40; } }
L_0056BB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 160u);
    st8((c.r[17].w[0] + 129u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[17].w[0] + 136u), 0ull);
    st64((c.r[17].w[0] + 144u), 0ull);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BB58u); st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010E(c, 86u, depth + 1u); else { c.pc = 0x005389E0u; return; } if (c.pc != 0x0056BB58u) [[unlikely]] return; }
L_0056BB58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 160u)));  goto L_0056BB68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BC40; } }
L_0056BB68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BB90u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 89u, depth + 1u); else { c.pc = 0x00538A30u; return; } if (c.pc != 0x0056BB90u) [[unlikely]] return; }
L_0056BB90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_0056BBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BC40; } }
L_0056BBA0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0056BBB4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0056BBD0; } }
L_0056BBB4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0056BBD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0056BC0C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_0056BC24; } }
L_0056BC0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 6;
L_0056BC24:
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 168u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st8((c.r[17].w[0] + 180u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    c.budget -= 7;
L_0056BC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0056BC44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0056BC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BC90u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_011A(c, 332u, depth + 1u); else { c.pc = 0x0056BF20u; return; } if (c.pc != 0x0056BC90u) [[unlikely]] return; }
L_0056BC90:
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 120u), 0ull);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st64((c.r[16].w[0] + 136u), 0ull);
    st64((c.r[16].w[0] + 144u), 0ull);
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st8((c.r[16].w[0] + 180u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0056BCF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 13;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[29].w[0] + 92u);  goto L_0056BD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056BD40; } }
L_0056BD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BD34u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056BD34u) [[unlikely]] return; }
L_0056BD34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0056BD40; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0056BD40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0056BD64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BD50u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x0056BD50u) [[unlikely]] return; }
L_0056BD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BDB0; } }
L_0056BD60:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0056BD64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0056BD90; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BD7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056BD7Cu) [[unlikely]] return; }
L_0056BD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BDB0; } }
L_0056BD8C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0056BD90:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[17].w[0] + 24u), 0ull);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st64((c.r[17].w[0] + 32u), 0ull);
    c.budget -= 8;
L_0056BDB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0056BDC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0056BDF0; } }
L_0056BDC0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0056BDEC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0056BDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0056BDF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0056BE00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
L_0056BE20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0056BE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056BE58; } }
    c.budget -= 1;
L_0056BE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BE40u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0056BE40u) [[unlikely]] return; }
L_0056BE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0056BE58; } }
L_0056BE50:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0056BE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BE68u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x0056BE68u) [[unlikely]] return; }
L_0056BE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BED0; } }
L_0056BE78:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0056BEA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0056BE94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0056BE94u) [[unlikely]] return; }
L_0056BE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0056BEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0056BED0; } }
    c.budget -= 1;
L_0056BEA8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[16].w[0] + 24u), 0ull);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st64((c.r[16].w[0] + 32u), 0ull);
    c.budget -= 10;
L_0056BED0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0056BEE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0056BF00; } }
L_0056BEE0:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0056BE20u | kUnwind; return; } goto L_0056BE20; } }
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
L_0056BF00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0056BF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[4].w[0] + 40u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[4].w[0] + 80u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 24u), 0ull);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[4].w[0] + 32u), 0ull);  if (t) { goto L_0056BF88; } }
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0056BF88; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_0056BF60:
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[5].w[0] + 24u), 0ull);
    st64((c.r[5].w[0] + 32u), 0ull);
    set32(c.r[5], c.r[5].w[0] + 40u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0056BF60u | kUnwind; return; } goto L_0056BF60; }
L_0056BF88:
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 24u), 0ull);
    st64((c.r[4].w[0] + 32u), 0ull);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 64u), 0ull);
    st64((c.r[4].w[0] + 72u), 0ull);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0056BFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_011B(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_011B(c, 1u, depth);
}

}
