#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0117[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0117(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0055C000;
    case 2u: goto L_0055C004;
    case 3u: goto L_0055C01C;
    case 4u: goto L_0055C034;
    case 5u: goto L_0055C06C;
    case 6u: goto L_0055C090;
    case 7u: goto L_0055C0A8;
    case 8u: goto L_0055C0E4;
    case 9u: goto L_0055C0F4;
    case 10u: goto L_0055C110;
    case 11u: goto L_0055C11C;
    case 12u: goto L_0055C144;
    case 13u: goto L_0055C15C;
    case 14u: goto L_0055C184;
    case 15u: goto L_0055C1C8;
    case 16u: goto L_0055C1E8;
    case 17u: goto L_0055C1F8;
    case 18u: goto L_0055C204;
    case 19u: goto L_0055C218;
    case 20u: goto L_0055C250;
    case 21u: goto L_0055C2C0;
    case 22u: goto L_0055C2D0;
    case 23u: goto L_0055C2F0;
    case 24u: goto L_0055C32C;
    case 25u: goto L_0055C360;
    case 26u: goto L_0055C380;
    case 27u: goto L_0055C390;
    case 28u: goto L_0055C3B0;
    case 29u: goto L_0055C3E8;
    case 30u: goto L_0055C41C;
    case 31u: goto L_0055C468;
    case 32u: goto L_0055C494;
    case 33u: goto L_0055C4A8;
    case 34u: goto L_0055C4CC;
    case 35u: goto L_0055C4F0;
    case 36u: goto L_0055C518;
    case 37u: goto L_0055C550;
    case 38u: goto L_0055C588;
    case 39u: goto L_0055C5AC;
    case 40u: goto L_0055C5D0;
    case 41u: goto L_0055C68C;
    case 42u: goto L_0055C6B0;
    case 43u: goto L_0055C6B8;
    case 44u: goto L_0055C6D0;
    case 45u: goto L_0055C708;
    case 46u: goto L_0055C740;
    case 47u: goto L_0055C780;
    case 48u: goto L_0055C7A4;
    case 49u: goto L_0055C7C8;
    case 50u: goto L_0055C7EC;
    case 51u: goto L_0055C810;
    case 52u: goto L_0055C848;
    case 53u: goto L_0055C878;
    case 54u: goto L_0055C898;
    case 55u: goto L_0055C8C8;
    case 56u: goto L_0055C8E8;
    case 57u: goto L_0055C90C;
    case 58u: goto L_0055C93C;
    case 59u: goto L_0055C970;
    case 60u: goto L_0055C99C;
    case 61u: goto L_0055CA20;
    case 62u: goto L_0055CA48;
    case 63u: goto L_0055CA98;
    case 64u: goto L_0055CAB4;
    case 65u: goto L_0055CACC;
    case 66u: goto L_0055CADC;
    case 67u: goto L_0055CB04;
    case 68u: goto L_0055CB2C;
    case 69u: goto L_0055CB54;
    case 70u: goto L_0055CB78;
    case 71u: goto L_0055CB9C;
    case 72u: goto L_0055CBC0;
    case 73u: goto L_0055CBE4;
    case 74u: goto L_0055CC08;
    case 75u: goto L_0055CC2C;
    case 76u: goto L_0055CC50;
    case 77u: goto L_0055CC74;
    case 78u: goto L_0055CC98;
    case 79u: goto L_0055CCBC;
    case 80u: goto L_0055CCE0;
    case 81u: goto L_0055CD04;
    case 82u: goto L_0055CD3C;
    case 83u: goto L_0055CD60;
    case 84u: goto L_0055CD88;
    case 85u: goto L_0055CDAC;
    case 86u: goto L_0055CDD0;
    case 87u: goto L_0055CDF4;
    case 88u: goto L_0055CE18;
    case 89u: goto L_0055CE3C;
    case 90u: goto L_0055CE50;
    case 91u: goto L_0055CE68;
    case 92u: goto L_0055CE90;
    case 93u: goto L_0055CEA8;
    case 94u: goto L_0055CEDC;
    case 95u: goto L_0055CF00;
    case 96u: goto L_0055CF24;
    case 97u: goto L_0055CF48;
    case 98u: goto L_0055CF6C;
    case 99u: goto L_0055CF90;
    case 100u: goto L_0055CFB4;
    case 101u: goto L_0055CFD4;
    case 102u: goto L_0055CFE4;
    case 103u: goto L_0055D030;
    case 104u: goto L_0055D088;
    case 105u: goto L_0055D09C;
    case 106u: goto L_0055D0C0;
    case 107u: goto L_0055D194;
    case 108u: goto L_0055D1F0;
    case 109u: goto L_0055D20C;
    case 110u: goto L_0055D220;
    case 111u: goto L_0055D23C;
    case 112u: goto L_0055D250;
    case 113u: goto L_0055D26C;
    case 114u: goto L_0055D280;
    case 115u: goto L_0055D29C;
    case 116u: goto L_0055D2B0;
    case 117u: goto L_0055D2CC;
    case 118u: goto L_0055D2EC;
    case 119u: goto L_0055D304;
    case 120u: goto L_0055D330;
    case 121u: goto L_0055D34C;
    case 122u: goto L_0055D374;
    case 123u: goto L_0055D384;
    case 124u: goto L_0055D3A0;
    case 125u: goto L_0055D3B8;
    case 126u: goto L_0055D3E0;
    case 127u: goto L_0055D3FC;
    case 128u: goto L_0055D420;
    case 129u: goto L_0055D458;
    case 130u: goto L_0055D46C;
    case 131u: goto L_0055D484;
    case 132u: goto L_0055D4B0;
    case 133u: goto L_0055D4C8;
    case 134u: goto L_0055D4F0;
    case 135u: goto L_0055D4FC;
    case 136u: goto L_0055D518;
    case 137u: goto L_0055D51C;
    case 138u: goto L_0055D520;
    case 139u: goto L_0055D550;
    case 140u: goto L_0055D570;
    case 141u: goto L_0055D5A8;
    case 142u: goto L_0055D5DC;
    case 143u: goto L_0055D600;
    case 144u: goto L_0055D618;
    case 145u: goto L_0055D644;
    case 146u: goto L_0055D65C;
    case 147u: goto L_0055D678;
    case 148u: goto L_0055D69C;
    case 149u: goto L_0055D6B4;
    case 150u: goto L_0055D6CC;
    case 151u: goto L_0055D6F0;
    case 152u: goto L_0055D724;
    case 153u: goto L_0055D74C;
    case 154u: goto L_0055D770;
    case 155u: goto L_0055D7A4;
    case 156u: goto L_0055D7CC;
    case 157u: goto L_0055D800;
    case 158u: goto L_0055D828;
    case 159u: goto L_0055D84C;
    case 160u: goto L_0055D880;
    case 161u: goto L_0055D8B8;
    case 162u: goto L_0055D8F0;
    case 163u: goto L_0055D910;
    case 164u: goto L_0055D950;
    case 165u: goto L_0055D9B0;
    case 166u: goto L_0055D9E0;
    case 167u: goto L_0055DA04;
    case 168u: goto L_0055DA50;
    case 169u: goto L_0055DA70;
    case 170u: goto L_0055DAB8;
    case 171u: goto L_0055DB10;
    case 172u: goto L_0055DC00;
    case 173u: goto L_0055DCAC;
    case 174u: goto L_0055DCCC;
    case 175u: goto L_0055DCE8;
    case 176u: goto L_0055DD90;
    case 177u: goto L_0055DDC0;
    case 178u: goto L_0055DDFC;
    case 179u: goto L_0055DE10;
    case 180u: goto L_0055DE40;
    case 181u: goto L_0055DE90;
    case 182u: goto L_0055DEA8;
    case 183u: goto L_0055DEBC;
    case 184u: goto L_0055DECC;
    case 185u: goto L_0055DF00;
    case 186u: goto L_0055DF28;
    case 187u: goto L_0055DF60;
    case 188u: goto L_0055DF80;
    case 189u: goto L_0055DF9C;
    case 190u: goto L_0055DFC8;
    case 191u: goto L_0055DFF8;
    case 192u: goto L_0055E030;
    case 193u: goto L_0055E06C;
    case 194u: goto L_0055E078;
    case 195u: goto L_0055E0A4;
    case 196u: goto L_0055E0C0;
    case 197u: goto L_0055E0D0;
    case 198u: goto L_0055E10C;
    case 199u: goto L_0055E128;
    case 200u: goto L_0055E150;
    case 201u: goto L_0055E174;
    case 202u: goto L_0055E18C;
    case 203u: goto L_0055E1C0;
    case 204u: goto L_0055E1E8;
    case 205u: goto L_0055E1F8;
    case 206u: goto L_0055E228;
    case 207u: goto L_0055E248;
    case 208u: goto L_0055E278;
    case 209u: goto L_0055E29C;
    case 210u: goto L_0055E2B4;
    case 211u: goto L_0055E2CC;
    case 212u: goto L_0055E2E4;
    case 213u: goto L_0055E2FC;
    case 214u: goto L_0055E314;
    case 215u: goto L_0055E32C;
    case 216u: goto L_0055E33C;
    case 217u: goto L_0055E358;
    case 218u: goto L_0055E360;
    case 219u: goto L_0055E374;
    case 220u: goto L_0055E39C;
    case 221u: goto L_0055E3CC;
    case 222u: goto L_0055E408;
    case 223u: goto L_0055E41C;
    case 224u: goto L_0055E454;
    case 225u: goto L_0055E478;
    case 226u: goto L_0055E488;
    case 227u: goto L_0055E4C8;
    case 228u: goto L_0055E4FC;
    case 229u: goto L_0055E544;
    case 230u: goto L_0055E570;
    case 231u: goto L_0055E5A8;
    case 232u: goto L_0055E5C0;
    case 233u: goto L_0055E5F8;
    case 234u: goto L_0055E614;
    case 235u: goto L_0055E644;
    case 236u: goto L_0055E654;
    case 237u: goto L_0055E670;
    case 238u: goto L_0055E67C;
    case 239u: goto L_0055E6A8;
    case 240u: goto L_0055E6E0;
    case 241u: goto L_0055E734;
    case 242u: goto L_0055E740;
    case 243u: goto L_0055E790;
    case 244u: goto L_0055E7BC;
    case 245u: goto L_0055E7F4;
    case 246u: goto L_0055E830;
    case 247u: goto L_0055E85C;
    case 248u: goto L_0055E898;
    case 249u: goto L_0055E8E0;
    case 250u: goto L_0055E92C;
    case 251u: goto L_0055E934;
    case 252u: goto L_0055E980;
    case 253u: goto L_0055E9CC;
    case 254u: goto L_0055E9D4;
    case 255u: goto L_0055EA20;
    case 256u: goto L_0055EA58;
    case 257u: goto L_0055EA6C;
    case 258u: goto L_0055EA84;
    case 259u: goto L_0055EAD0;
    case 260u: goto L_0055EB1C;
    case 261u: goto L_0055EB40;
    case 262u: goto L_0055EB84;
    case 263u: goto L_0055EB90;
    case 264u: goto L_0055EBA0;
    case 265u: goto L_0055EBC0;
    case 266u: goto L_0055EC18;
    case 267u: goto L_0055EC28;
    case 268u: goto L_0055EC50;
    case 269u: goto L_0055ED30;
    case 270u: goto L_0055EE60;
    case 271u: goto L_0055EE98;
    case 272u: goto L_0055EEB0;
    case 273u: goto L_0055EEC0;
    case 274u: goto L_0055EED0;
    case 275u: goto L_0055EEE0;
    case 276u: goto L_0055EEF0;
    case 277u: goto L_0055EF00;
    case 278u: goto L_0055EF28;
    case 279u: goto L_0055EF6C;
    case 280u: goto L_0055EFA4;
    case 281u: goto L_0055EFDC;
    case 282u: goto L_0055F040;
    case 283u: goto L_0055F094;
    case 284u: goto L_0055F0FC;
    case 285u: goto L_0055F128;
    case 286u: goto L_0055F14C;
    case 287u: goto L_0055F170;
    case 288u: goto L_0055F1C0;
    case 289u: goto L_0055F250;
    case 290u: goto L_0055F2A0;
    case 291u: goto L_0055F340;
    case 292u: goto L_0055F3E0;
    case 293u: goto L_0055F4CC;
    case 294u: goto L_0055F544;
    case 295u: goto L_0055F570;
    case 296u: goto L_0055F58C;
    case 297u: goto L_0055F644;
    case 298u: goto L_0055F670;
    case 299u: goto L_0055F690;
    case 300u: goto L_0055F6CC;
    case 301u: goto L_0055F6D4;
    case 302u: goto L_0055F740;
    case 303u: goto L_0055F7B4;
    case 304u: goto L_0055F7BC;
    case 305u: goto L_0055F828;
    case 306u: goto L_0055F8B0;
    case 307u: goto L_0055F90C;
    case 308u: goto L_0055F928;
    case 309u: goto L_0055F960;
    case 310u: goto L_0055F990;
    case 311u: goto L_0055F9B4;
    case 312u: goto L_0055F9E0;
    case 313u: goto L_0055FA10;
    case 314u: goto L_0055FA70;
    case 315u: goto L_0055FAA0;
    case 316u: goto L_0055FB00;
    case 317u: goto L_0055FB18;
    case 318u: goto L_0055FB30;
    case 319u: goto L_0055FB50;
    case 320u: goto L_0055FB70;
    case 321u: goto L_0055FBA0;
    case 322u: goto L_0055FBD0;
    case 323u: goto L_0055FC1C;
    case 324u: goto L_0055FC30;
    case 325u: goto L_0055FC50;
    case 326u: goto L_0055FC84;
    case 327u: goto L_0055FCC0;
    case 328u: goto L_0055FCE4;
    case 329u: goto L_0055FD14;
    case 330u: goto L_0055FD2C;
    case 331u: goto L_0055FD48;
    case 332u: goto L_0055FD64;
    case 333u: goto L_0055FDD0;
    case 334u: goto L_0055FDF0;
    case 335u: goto L_0055FE0C;
    case 336u: goto L_0055FE40;
    case 337u: goto L_0055FE94;
    case 338u: goto L_0055FF00;
    case 339u: goto L_0055FF18;
    case 340u: goto L_0055FF44;
    case 341u: goto L_0055FF64;
    case 342u: goto L_0055FF84;
    case 343u: goto L_0055FFA0;
    case 344u: goto L_0055FFC0;
    case 345u: goto L_0055FFE0;
    default: bad_entry(c, 0x0055C000u); return;
    }
L_0055C000:
    c.budget -= 1;
L_0055C004:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C01Cu); set32(c.r[6], c.r[29].w[0] + 800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055C01Cu) [[unlikely]] return; }
L_0055C01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055C060; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 113u, depth + 1u); else { c.pc = 0x00559270u; return; } if (c.pc != 0x0055C034u) [[unlikely]] return; }
L_0055C034:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[20].w[0] + 76u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 80u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[17].w[0]);  if (t) { goto L_0055C07C; } }
L_0055C060:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C06Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0116(c, 88u, depth + 1u); else { c.pc = 0x00558FC0u; return; } if (c.pc != 0x0055C06Cu) [[unlikely]] return; }
L_0055C06C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 820u)));  goto L_0055C080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055C07C:
    set32(c.r[2], ld32((c.r[29].w[0] + 820u)));
    c.budget -= 1;
L_0055C080:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 800u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055BED4u | kUnwind; return; } [[clang::musttail]] return unit_0116(c, 345u, depth); }
L_0055C090:
    set32(c.r[4], ld32((c.r[20].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C0A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 82u, depth + 1u); else { c.pc = 0x005610D0u; return; } if (c.pc != 0x0055C0A8u) [[unlikely]] return; }
L_0055C0A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055C170; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1751u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C0E4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055C0E4u) [[unlikely]] return; }
L_0055C0E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 164u), c.r[2].w[0]);  goto L_0055C0F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C0F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 116u, depth + 1u); else { c.pc = 0x005616C0u; return; } if (c.pc != 0x0055C0F4u) [[unlikely]] return; }
L_0055C0F4:
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0055C0F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0055C108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055D51C; } }
L_0055C108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C110u);  if (depth < kMaxDepth) unit_0118(c, 115u, depth + 1u); else { c.pc = 0x00561660u; return; } if (c.pc != 0x0055C110u) [[unlikely]] return; }
L_0055C110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C11Cu); set32(c.r[4], c.r[4].w[0] - 18992u);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0055C11Cu) [[unlikely]] return; }
L_0055C11C:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 160u)));  goto L_0055C13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055D51C; } }
L_0055C13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C144u);  if (depth < kMaxDepth) unit_0118(c, 62u, depth + 1u); else { c.pc = 0x00560D80u; return; } if (c.pc != 0x0055C144u) [[unlikely]] return; }
L_0055C144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 160u)));  goto L_0055C154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055C154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C15Cu); set32(c.r[5], ld32((c.r[20].w[0] + 164u)));  if (depth < kMaxDepth) unit_0118(c, 48u, depth + 1u); else { c.pc = 0x00560A50u; return; } if (c.pc != 0x0055C15Cu) [[unlikely]] return; }
L_0055C15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055C16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055C16C:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 1;
L_0055C170:
    set32(c.r[5], c.r[29].w[0] + 832u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C184u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C184u) [[unlikely]] return; }
L_0055C184:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 832u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 832u)));  goto L_0055C1DC; }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[7], 0u + 1791u);
    set32(c.r[5], c.r[2].w[0] + 188u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C1C8u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055C1C8u) [[unlikely]] return; }
L_0055C1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0055C1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C1D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 832u)));
    c.budget -= 1;
L_0055C1DC:
    set32(c.r[21], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0055C290; } }
L_0055C1E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0055C1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C1F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 97u, depth + 1u); else { c.pc = 0x00549380u; return; } if (c.pc != 0x0055C1F8u) [[unlikely]] return; }
L_0055C1F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C204u); set32(c.r[21], c.r[21].w[0] + 92u);  if (depth < kMaxDepth) unit_0112(c, 96u, depth + 1u); else { c.pc = 0x00549340u; return; } if (c.pc != 0x0055C204u) [[unlikely]] return; }
L_0055C204:
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 69u, depth + 1u); else { c.pc = 0x00544D60u; return; } if (c.pc != 0x0055C218u) [[unlikely]] return; }
L_0055C218:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[19].w[0] + 28u);
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0055C270; } }
L_0055C250:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055C250u | kUnwind; return; } goto L_0055C250; } }
    c.budget -= 1;
L_0055C270:
    set32(c.r[2], c.r[5].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 832u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055C1E8u | kUnwind; return; } goto L_0055C1E8; } }
    c.budget -= 1;
L_0055C290:
    set32(c.r[2], ld32((c.r[29].w[0] + 804u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 836u)));  goto L_0055C304; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1826u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C2C0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055C2C0u) [[unlikely]] return; }
L_0055C2C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  goto L_0055C2D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C2D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0119(c, 20u, depth + 1u); else { c.pc = 0x00564310u; return; } if (c.pc != 0x0055C2D0u) [[unlikely]] return; }
L_0055C2D0:
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_0055C2D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 804u)));  goto L_0055C2E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055D51C; } }
L_0055C2E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C2F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0119(c, 15u, depth + 1u); else { c.pc = 0x00564230u; return; } if (c.pc != 0x0055C2F0u) [[unlikely]] return; }
L_0055C2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055C300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055D51C; } }
L_0055C300:
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 1;
L_0055C304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055C3D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 824u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C32Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C32Cu) [[unlikely]] return; }
L_0055C32C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 824u)));  goto L_0055C374; }
    set32(c.r[4], c.r[2].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1848u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C360u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055C360u) [[unlikely]] return; }
L_0055C360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0055C370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C370:
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    c.budget -= 1;
L_0055C374:
    set32(c.r[17], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0055C3D0; } }
L_0055C380:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0055C390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C390u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 316u, depth + 1u); else { c.pc = 0x0055FB00u; return; } if (c.pc != 0x0055C390u) [[unlikely]] return; }
L_0055C390:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 836u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C3B0u); set32(c.r[17], c.r[17].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055C3B0u) [[unlikely]] return; }
L_0055C3B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055C380u | kUnwind; return; } goto L_0055C380; } }
L_0055C3D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 828u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C3E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C3E8u) [[unlikely]] return; }
L_0055C3E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 836u)));  goto L_0055C430; }
    set32(c.r[4], c.r[2].w[0] << 5);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1880u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C41Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055C41Cu) [[unlikely]] return; }
L_0055C41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0055C42C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C42C:
    set32(c.r[2], ld32((c.r[29].w[0] + 836u)));
    c.budget -= 1;
L_0055C430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 64u)));  goto L_0055C47C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 824u), c.r[2].w[0]);  if (t) { goto L_0055C478; } }
    set32(c.r[4], c.r[2].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1895u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C468u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055C468u) [[unlikely]] return; }
L_0055C468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0055C478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C478:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_0055C47C:
    set32(c.r[30], ld32((c.r[19].w[0] + 68u)));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_0055CA10; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_0055C494:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055C4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C4A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 312u, depth + 1u); else { c.pc = 0x0055F9E0u; return; } if (c.pc != 0x0055C4A8u) [[unlikely]] return; }
L_0055C4A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C4CCu); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C4CCu) [[unlikely]] return; }
L_0055C4CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 816u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C4F0u); set32(c.r[7], 0u + 1919u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x0055C4F0u) [[unlikely]] return; }
L_0055C4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0055C500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C500:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C518u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C518u) [[unlikely]] return; }
L_0055C518:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055C578; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 792u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C550u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C550u) [[unlikely]] return; }
L_0055C550:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 792u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0055C5B8; } }
    c.budget -= 1;
L_0055C578:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0055C588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C588u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 316u, depth + 1u); else { c.pc = 0x0055FB00u; return; } if (c.pc != 0x0055C588u) [[unlikely]] return; }
L_0055C588:
    st32((c.r[17].w[0] + 12u), c.r[30].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 836u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C5ACu); set32(c.r[30], c.r[30].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055C5ACu) [[unlikely]] return; }
L_0055C5AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
L_0055C5B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 796u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C5D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C5D0u) [[unlikely]] return; }
L_0055C5D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 796u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0055C660; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055C660; } }
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055C660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0055C660; } }
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0055C660; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0055C660:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 796u)));  goto L_0055C6A0; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[5], c.r[2].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C68Cu); set32(c.r[7], 0u + 1966u);  if (depth < kMaxDepth) unit_0119(c, 9u, depth + 1u); else { c.pc = 0x005640B0u; return; } if (c.pc != 0x0055C68Cu) [[unlikely]] return; }
L_0055C68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0055C69C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055C69C:
    set32(c.r[2], ld32((c.r[29].w[0] + 796u)));
    c.budget -= 1;
L_0055C6A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0055C9B8; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055C6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C6B8u); set32(c.r[4], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0117(c, 321u, depth + 1u); else { c.pc = 0x0055FBA0u; return; } if (c.pc != 0x0055C6B8u) [[unlikely]] return; }
L_0055C6B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 788u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C6D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C6D0u) [[unlikely]] return; }
L_0055C6D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 100u);  goto L_0055C71C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 784u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C708u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C708u) [[unlikely]] return; }
L_0055C708:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055C720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D4B0; } }
L_0055C71C:
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    c.budget -= 1;
L_0055C720:
    set32(c.r[3], ld32((c.r[29].w[0] + 788u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0055C8AC; }
    set32(c.r[22], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0055C740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C740u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 321u, depth + 1u); else { c.pc = 0x0055FBA0u; return; } if (c.pc != 0x0055C740u) [[unlikely]] return; }
L_0055C740:
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055C760; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 740u), c.r[2].w[0]);  if (t) { goto L_0055C768; } }
L_0055C760:
    set32(c.r[2], 0u + 100u);
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    c.budget -= 2;
L_0055C768:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C780u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C780u) [[unlikely]] return; }
L_0055C780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C7A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C7A4u) [[unlikely]] return; }
L_0055C7A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C7C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C7C8u) [[unlikely]] return; }
L_0055C7C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C7ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C7ECu) [[unlikely]] return; }
L_0055C7EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[22].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C810u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C810u) [[unlikely]] return; }
L_0055C810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 752u), 0u);  goto L_0055C85C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[22].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C848u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C848u) [[unlikely]] return; }
L_0055C848:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055C860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D4B0; } }
L_0055C85C:
    c.budget -= 1;
L_0055C860:
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055C880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C878u); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0055C878u) [[unlikely]] return; }
L_0055C878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 756u), c.r[2].w[0]);  if (t) { goto L_0055C978; } }
L_0055C880:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[22].w[0] + 8u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C898u); set32(c.r[5], c.r[29].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055C898u) [[unlikely]] return; }
L_0055C898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055C978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D4B0; } }
L_0055C8AC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0055C920; }
    set32(c.r[22], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0055C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C8C8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 320u, depth + 1u); else { c.pc = 0x0055FB70u; return; } if (c.pc != 0x0055C8C8u) [[unlikely]] return; }
L_0055C8C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[22].w[0] + 8u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C8E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C8E8u) [[unlikely]] return; }
L_0055C8E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[22].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C90Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055C90Cu) [[unlikely]] return; }
L_0055C90C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0055C978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D4B0; } }
L_0055C920:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055C950; } }
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055C940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C93Cu);  if (depth < kMaxDepth) unit_0117(c, 319u, depth + 1u); else { c.pc = 0x0055FB50u; return; } if (c.pc != 0x0055C93Cu) [[unlikely]] return; }
L_0055C93C:
    c.budget -= 1;
L_0055C940:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 740u), c.r[2].w[0]);  if (t) { goto L_0055C978; } }
    c.budget -= 1;
L_0055C950:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055C978; } }
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055C970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C970u);  if (depth < kMaxDepth) unit_0117(c, 318u, depth + 1u); else { c.pc = 0x0055FB30u; return; } if (c.pc != 0x0055C970u) [[unlikely]] return; }
L_0055C970:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    c.budget -= 2;
L_0055C978:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055C9A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 736u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055C99Cu); set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0055C99Cu) [[unlikely]] return; }
L_0055C99C:
    c.budget -= 1;
L_0055C9A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 796u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055C6B0u | kUnwind; return; } goto L_0055C6B0; } }
    c.budget -= 1;
L_0055C9B8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0055C9C8; } }
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0055C9C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[20].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 92u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055C494u | kUnwind; return; } goto L_0055C494; }
    c.budget -= 1;
L_0055CA10:
    set32(c.r[17], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0055CA68; } }
L_0055CA20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0055CA30; } }
    set32(c.r[5], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_0055CA30:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[29].w[0] + 836u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CA48u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055CA48u) [[unlikely]] return; }
L_0055CA48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055CA20u | kUnwind; return; } goto L_0055CA20; } }
    c.budget -= 1;
L_0055CA68:
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055D020; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 780u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CA98u); st32((c.r[29].w[0] + 780u), 0u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CA98u) [[unlikely]] return; }
L_0055CA98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0055D020; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_0055CAB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 144u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2116u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CACCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055CACCu) [[unlikely]] return; }
L_0055CACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055CAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CADCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 187u, depth + 1u); else { c.pc = 0x00563140u; return; } if (c.pc != 0x0055CADCu) [[unlikely]] return; }
L_0055CADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0055CAE0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055CAF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055CAF0:
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CB04u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CB04u) [[unlikely]] return; }
L_0055CB04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2129u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CB2Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055CB2Cu) [[unlikely]] return; }
L_0055CB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0055CB3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 42u);  if (t) { goto L_0055D4B0; } }
L_0055CB3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CB54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CB54u) [[unlikely]] return; }
L_0055CB54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CB78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CB78u) [[unlikely]] return; }
L_0055CB78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 36u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CB9Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CB9Cu) [[unlikely]] return; }
L_0055CB9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 124u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CBC0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CBC0u) [[unlikely]] return; }
L_0055CBC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 44u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CBE4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CBE4u) [[unlikely]] return; }
L_0055CBE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CC08u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CC08u) [[unlikely]] return; }
L_0055CC08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 56u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CC2Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CC2Cu) [[unlikely]] return; }
L_0055CC2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 60u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CC50u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CC50u) [[unlikely]] return; }
L_0055CC50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 76u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CC74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CC74u) [[unlikely]] return; }
L_0055CC74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 80u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CC98u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CC98u) [[unlikely]] return; }
L_0055CC98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 128u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CCBCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CCBCu) [[unlikely]] return; }
L_0055CCBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 132u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CCE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CCE0u) [[unlikely]] return; }
L_0055CCE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 116u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CD04u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CD04u) [[unlikely]] return; }
L_0055CD04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055CD70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 40u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CD3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CD3Cu) [[unlikely]] return; }
L_0055CD3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 120u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CD60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CD60u) [[unlikely]] return; }
L_0055CD60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    c.budget -= 1;
L_0055CD70:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CD88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CD88u) [[unlikely]] return; }
L_0055CD88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 20u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CDACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CDACu) [[unlikely]] return; }
L_0055CDAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CDD0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CDD0u) [[unlikely]] return; }
L_0055CDD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 28u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CDF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CDF4u) [[unlikely]] return; }
L_0055CDF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 40u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CE18u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CE18u) [[unlikely]] return; }
L_0055CE18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 52u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CE3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CE3Cu) [[unlikely]] return; }
L_0055CE3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0055CE50:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[21].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CE68u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CE68u) [[unlikely]] return; }
L_0055CE68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055CE50u | kUnwind; return; } goto L_0055CE50; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0055CE90:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[21].w[0] + 84u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CEA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CEA8u) [[unlikely]] return; }
L_0055CEA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055CE90u | kUnwind; return; } goto L_0055CE90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 96u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CEDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CEDCu) [[unlikely]] return; }
L_0055CEDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 100u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CF00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CF00u) [[unlikely]] return; }
L_0055CF00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 104u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CF24u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CF24u) [[unlikely]] return; }
L_0055CF24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 108u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CF48u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CF48u) [[unlikely]] return; }
L_0055CF48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 112u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CF6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CF6Cu) [[unlikely]] return; }
L_0055CF6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 120u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CF90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CF90u) [[unlikely]] return; }
L_0055CF90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[18].w[0] + 136u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CFB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055CFB4u) [[unlikely]] return; }
L_0055CFB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CFD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0117(c, 240u, depth + 1u); else { c.pc = 0x0055E6E0u; return; } if (c.pc != 0x0055CFD4u) [[unlikely]] return; }
L_0055CFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055CFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055CFE4u); set32(c.r[4], ld32((c.r[29].w[0] + 776u)));  if (depth < kMaxDepth) unit_0118(c, 184u, depth + 1u); else { c.pc = 0x005630B0u; return; } if (c.pc != 0x0055CFE4u) [[unlikely]] return; }
L_0055CFE4:
    c.budget -= 1;
L_0055CFE8:
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], c.r[20].w[0] + 100u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 104u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[18].w[0]);
    st32((c.r[18].w[0] + 140u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 780u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055CAB4u | kUnwind; return; } goto L_0055CAB4; }
    c.budget -= 1;
L_0055D020:
    set32(c.r[5], ld32((c.r[20].w[0] + 208u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D030u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 248u, depth + 1u); else { c.pc = 0x00563D00u; return; } if (c.pc != 0x0055D030u) [[unlikely]] return; }
L_0055D030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 64u)));  goto L_0055D040; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D040:
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[20].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[5], c.r[6].w[0] + 124u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 128u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055D328; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 1;
L_0055D088:
    set32(c.r[5], c.r[29].w[0] + 760u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D09Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D09Cu) [[unlikely]] return; }
L_0055D09C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[29].w[0] + 764u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D0C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D0C0u) [[unlikely]] return; }
L_0055D0C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 836u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055D120; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
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
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    c.budget -= 16;
L_0055D120:
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x736D0000u);
    c.r[2].d[0] = c.r[3].d[0] | 26483ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D2A8; } }
    c.r[2].d[0] = c.r[3].d[0] | 26740ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25459ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D248; } }
    c.r[2].d[0] = c.r[3].d[0] | 29296ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x736B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28268ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D1E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x706D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28515ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055D188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D2D8; } }
    c.budget -= 1;
L_0055D188:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D194u); set32(c.r[5], c.r[29].w[0] + 812u);  if (depth < kMaxDepth) unit_010A(c, 158u, depth + 1u); else { c.pc = 0x0052A3B0u; return; } if (c.pc != 0x0055D194u) [[unlikely]] return; }
L_0055D194:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 760u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[3], c.r[4].w[0] - 8u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 812u), c.r[2].w[0]);  if (t) { goto L_0055D2F0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 24u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0055D1D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 78u);  if (t) { goto L_0055D4B0; } }
L_0055D1D0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D1F0u);  if (depth < kMaxDepth) unit_0119(c, 44u, depth + 1u); else { c.pc = 0x00564770u; return; } if (c.pc != 0x0055D1F0u) [[unlikely]] return; }
L_0055D1F0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D20Cu); set32(c.r[5], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D20Cu) [[unlikely]] return; }
L_0055D20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D220u);  if (depth < kMaxDepth) unit_0119(c, 236u, depth + 1u); else { c.pc = 0x00567510u; return; } if (c.pc != 0x0055D220u) [[unlikely]] return; }
L_0055D220:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D23Cu); set32(c.r[5], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D23Cu) [[unlikely]] return; }
L_0055D23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D250u);  if (depth < kMaxDepth) unit_0119(c, 205u, depth + 1u); else { c.pc = 0x00566DE0u; return; } if (c.pc != 0x0055D250u) [[unlikely]] return; }
L_0055D250:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D26Cu); set32(c.r[5], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D26Cu) [[unlikely]] return; }
L_0055D26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D280u);  if (depth < kMaxDepth) unit_0119(c, 172u, depth + 1u); else { c.pc = 0x005666C0u; return; } if (c.pc != 0x0055D280u) [[unlikely]] return; }
L_0055D280:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D29Cu); set32(c.r[5], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D29Cu) [[unlikely]] return; }
L_0055D29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D2B0u);  if (depth < kMaxDepth) unit_0119(c, 96u, depth + 1u); else { c.pc = 0x005653A0u; return; } if (c.pc != 0x0055D2B0u) [[unlikely]] return; }
L_0055D2B0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 844u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D2CCu); set32(c.r[5], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D2CCu) [[unlikely]] return; }
L_0055D2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0055D2F0; } }
    c.budget -= 1;
L_0055D2D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 760u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D2ECu); set32(c.r[5], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x0055D2ECu) [[unlikely]] return; }
L_0055D2EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0055D2F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D304u); set32(c.r[5], c.r[29].w[0] + 808u);  if (depth < kMaxDepth) unit_010A(c, 158u, depth + 1u); else { c.pc = 0x0052A3B0u; return; } if (c.pc != 0x0055D304u) [[unlikely]] return; }
L_0055D304:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055D4B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 808u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055D088u | kUnwind; return; } goto L_0055D088; }
    c.budget -= 1;
L_0055D328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D330u); set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  if (depth < kMaxDepth) unit_010A(c, 195u, depth + 1u); else { c.pc = 0x0052B3F0u; return; } if (c.pc != 0x0055D330u) [[unlikely]] return; }
L_0055D330:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2412u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D34Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055D34Cu) [[unlikely]] return; }
L_0055D34C:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_0055D378; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2416u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D374u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055D374u) [[unlikely]] return; }
L_0055D374:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0055D378:
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D384u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D384u) [[unlikely]] return; }
L_0055D384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 28u)));  goto L_0055D394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D394:
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055D3D8; } }
L_0055D3A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055D3B0; } }
    set32(c.r[4], c.r[16].w[0] - 4u);
    c.budget -= 2;
L_0055D3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D3B8u);  if (depth < kMaxDepth) unit_0112(c, 63u, depth + 1u); else { c.pc = 0x00548BA0u; return; } if (c.pc != 0x0055D3B8u) [[unlikely]] return; }
L_0055D3B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055D3C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D3C8:
    set32(c.r[2], c.r[19].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055D3A0u | kUnwind; return; } goto L_0055D3A0; } }
    c.budget -= 1;
L_0055D3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D3E0u); set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_011A(c, 152u, depth + 1u); else { c.pc = 0x005693B0u; return; } if (c.pc != 0x0055D3E0u) [[unlikely]] return; }
L_0055D3E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  goto L_0055D498; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055D494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D3FCu);  if (depth < kMaxDepth) unit_011A(c, 110u, depth + 1u); else { c.pc = 0x00568D70u; return; } if (c.pc != 0x0055D3FCu) [[unlikely]] return; }
L_0055D3FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 164u)));  goto L_0055D45C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2449u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D420u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055D420u) [[unlikely]] return; }
L_0055D420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055D440; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 18896u);
    set32(c.r[3], c.r[3].w[0] - 18928u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0055D440:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0055D450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055D51C; } }
L_0055D450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D458u);  if (depth < kMaxDepth) unit_011A(c, 111u, depth + 1u); else { c.pc = 0x00568D80u; return; } if (c.pc != 0x0055D458u) [[unlikely]] return; }
L_0055D458:
    set32(c.r[4], ld32((c.r[20].w[0] + 164u)));
    c.budget -= 1;
L_0055D45C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D46Cu); set32(c.r[5], c.r[29].w[0] + 772u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D46Cu) [[unlikely]] return; }
L_0055D46C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0055D47C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D484u); set32(c.r[5], ld32((c.r[29].w[0] + 772u)));  if (depth < kMaxDepth) unit_011A(c, 159u, depth + 1u); else { c.pc = 0x00569480u; return; } if (c.pc != 0x0055D484u) [[unlikely]] return; }
L_0055D484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055D494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D494:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0055D498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055D51C; }
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D51C; } }
L_0055D4B0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_0055D4CC; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D4C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055D4C8u) [[unlikely]] return; }
L_0055D4C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 1;
L_0055D4CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 844u)));  goto L_0055D4F4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2482u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D4F0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055D4F0u) [[unlikely]] return; }
L_0055D4F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    c.budget -= 1;
L_0055D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D4FCu);  if (depth < kMaxDepth) unit_010A(c, 195u, depth + 1u); else { c.pc = 0x0052B3F0u; return; } if (c.pc != 0x0055D4FCu) [[unlikely]] return; }
L_0055D4FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 2485u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D518u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055D518u) [[unlikely]] return; }
L_0055D518:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055D51C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0055D520:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_0055D550:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  goto L_0055D560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055D568; } }
L_0055D560:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0055D568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055D570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D5A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D5A8u) [[unlikely]] return; }
L_0055D5A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);  goto L_0055D5B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055D8D0; } }
L_0055D5B8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);  goto L_0055D620; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D5DCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D5DCu) [[unlikely]] return; }
L_0055D5DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D5EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D5EC:
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D600u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D600u) [[unlikely]] return; }
L_0055D600:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0055D610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D618u);  if (depth < kMaxDepth) unit_0117(c, 314u, depth + 1u); else { c.pc = 0x0055FA70u; return; } if (c.pc != 0x0055D618u) [[unlikely]] return; }
L_0055D618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0055D6B8; } }
L_0055D620:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D664; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D644u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D644u) [[unlikely]] return; }
L_0055D644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 76u));  goto L_0055D654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D65Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 313u, depth + 1u); else { c.pc = 0x0055FA10u; return; } if (c.pc != 0x0055D65Cu) [[unlikely]] return; }
L_0055D65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D6B4; } }
L_0055D664:
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D678u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D678u) [[unlikely]] return; }
L_0055D678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D688:
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D69Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D69Cu) [[unlikely]] return; }
L_0055D69C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0055D6AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D6B4u);  if (depth < kMaxDepth) unit_0117(c, 314u, depth + 1u); else { c.pc = 0x0055FA70u; return; } if (c.pc != 0x0055D6B4u) [[unlikely]] return; }
L_0055D6B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0055D6B8:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D6CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D6CCu) [[unlikely]] return; }
L_0055D6CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D6DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D6DC:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D6F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D6F0u) [[unlikely]] return; }
L_0055D6F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_0055D700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D700:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));  goto L_0055D734; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D724u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D724u) [[unlikely]] return; }
L_0055D724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D738; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D734:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0055D738:
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D74Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D74Cu) [[unlikely]] return; }
L_0055D74C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D75C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D75C:
    set32(c.r[5], c.r[16].w[0] + 24u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D770u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D770u) [[unlikely]] return; }
L_0055D770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_0055D780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D780:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0055D7B4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 28u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D7A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D7A4u) [[unlikely]] return; }
L_0055D7A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D7B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D7B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0055D7B8:
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D7CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D7CCu) [[unlikely]] return; }
L_0055D7CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_0055D7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D7DC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));  goto L_0055D810; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 52u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D800u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D800u) [[unlikely]] return; }
L_0055D800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D810:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0055D814:
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D828u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D828u) [[unlikely]] return; }
L_0055D828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055D838; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D838:
    set32(c.r[5], c.r[16].w[0] + 44u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D84Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D84Cu) [[unlikely]] return; }
L_0055D84C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_0055D85C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D85C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_0055D890; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D880u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D880u) [[unlikely]] return; }
L_0055D880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x002A0000u);  goto L_0055D894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.budget -= 1;
L_0055D894:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_0055D8C8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 56u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D8B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0055D8B8u) [[unlikely]] return; }
L_0055D8B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055D8CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055D8CC; } }
L_0055D8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055D8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055D8D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055D8F0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_0055D900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055D908; } }
L_0055D900:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0055D908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055D910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[19].w[0] + 76u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[17], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0055D970; } }
L_0055D950:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055D950u | kUnwind; return; } goto L_0055D950; } }
    c.budget -= 1;
L_0055D970:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[20], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 200u)));  goto L_0055D9BC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 204u), c.r[20].w[0]);  goto L_0055D9B8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1049u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D9B0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055D9B0u) [[unlikely]] return; }
L_0055D9B0:
    st32((c.r[19].w[0] + 200u), 0u);
    st32((c.r[19].w[0] + 204u), c.r[20].w[0]);
    c.budget -= 2;
L_0055D9B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 1;
L_0055D9BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  goto L_0055D9F4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 1058u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055D9E0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055D9E0u) [[unlikely]] return; }
L_0055D9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_0055D9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055DD6C; } }
L_0055D9F0:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0055D9F4:
    set32(c.r[2], c.r[19].w[0] + 76u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0055DC90; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055DA04:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055DAA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DA50u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_010B(c, 242u, depth + 1u); else { c.pc = 0x0052F580u; return; } if (c.pc != 0x0055DA50u) [[unlikely]] return; }
L_0055DA50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_0055DA60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0055DD70; } }
L_0055DA60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0055DAA8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055DA70:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DA70u | kUnwind; return; } goto L_0055DA70; } }
    c.budget -= 1;
L_0055DAA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0055DAD8; } }
L_0055DAB8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DAB8u | kUnwind; return; } goto L_0055DAB8; } }
    c.budget -= 1;
L_0055DAD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0055DB40; } }
L_0055DB10:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DB30; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_0055DB30:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DB10u | kUnwind; return; } goto L_0055DB10; } }
    c.budget -= 1;
L_0055DB40:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 512ull;  goto L_0055DB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055DB68; } }
L_0055DB58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_0055DB68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0055DB68; } }
L_0055DB68:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 32u)));  goto L_0055DBEC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 28u);  if (t) { goto L_0055DBB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0055DBB8; } }
L_0055DBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055DBD8; } }
L_0055DBB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0055DBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055DBD8; } }
L_0055DBC8:
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0055DBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055DD6C; } }
L_0055DBE8:
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_0055DBEC:
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0055DC80; } }
    set32(c.r[5], 0u + 37u);
    c.budget -= 2;
L_0055DC00:
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DC70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055DC28; } }
    c.budget -= 1;
L_0055DC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055DC48; } }
L_0055DC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055DC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055DC48; } }
L_0055DC38:
    set32(c.r[3], ld32((c.r[2].w[0] + 244u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_0055DC48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_0055DC58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055DD6C; } }
L_0055DC58:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_0055DC70:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DC00u | kUnwind; return; } goto L_0055DC00; } }
    c.budget -= 1;
L_0055DC80:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + 76u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DA04u | kUnwind; return; } goto L_0055DA04; } }
L_0055DC90:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 108u);
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DCACu); set32(c.r[7], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055DCACu) [[unlikely]] return; }
L_0055DCAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[10], ld32((c.r[19].w[0] + 124u)));  goto L_0055DCBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055DD6C; } }
L_0055DCBC:
    set32(c.r[6], c.r[19].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[6].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0055DD38; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055DCCC:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[2].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0055DCD8; } }
    set32(c.r[2], c.r[10].w[0] - 4u);
    c.budget -= 1;
L_0055DCD8:
    set32(c.r[5], c.r[2].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0055DD28; } }
L_0055DCE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[9], ld32((c.r[2].w[0])));  if (t) { goto L_0055DD18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055DD18; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0055DD18:
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DCE8u | kUnwind; return; } goto L_0055DCE8; } }
L_0055DD28:
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DCCCu | kUnwind; return; } goto L_0055DCCC; } }
    c.budget -= 1;
L_0055DD38:
    st32((c.r[18].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 188u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 13;
L_0055DD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0055DD70:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055DD90:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  goto L_0055DDA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055DDAC; } }
L_0055DDA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 5648ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0055DDAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055DDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055DE00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 980u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DDFCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055DDFCu) [[unlikely]] return; }
L_0055DDFC:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_0055DE00:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055DE24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DE10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0055DE10u) [[unlikely]] return; }
L_0055DE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0055DE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055DE24; } }
L_0055DE20:
    set32(c.r[2], 0u + 42u);
    c.budget -= 1;
L_0055DE24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055DE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055DE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 31u);  if (t) { goto L_0055DEE8; } }
L_0055DE68:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_0055DE98; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 949u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DE90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055DE90u) [[unlikely]] return; }
L_0055DE90:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0055DE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055DEA8u) [[unlikely]] return; }
L_0055DEA8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0055DEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055DEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0055DEBCu) [[unlikely]] return; }
L_0055DEBC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055DEE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0055DECCu) [[unlikely]] return; }
L_0055DECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0055DEDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055DEE0; } }
L_0055DEDC:
    set32(c.r[2], 0u + 42u);
    c.budget -= 1;
L_0055DEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055DEE8; } }
L_0055DEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055DF00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DF28u); set32(c.r[6], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_010E(c, 75u, depth + 1u); else { c.pc = 0x005388C0u; return; } if (c.pc != 0x0055DF28u) [[unlikely]] return; }
L_0055DF28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0055DF38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055E018; } }
L_0055DF38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_0055DF74; }
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 896u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DF60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055DF60u) [[unlikely]] return; }
L_0055DF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0055DF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055E014; } }
L_0055DF70:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_0055DF74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0055E010; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055DF80:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[8], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DF9Cu); set32(c.r[9], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_010E(c, 72u, depth + 1u); else { c.pc = 0x00538840u; return; } if (c.pc != 0x0055DF9Cu) [[unlikely]] return; }
L_0055DF9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0055DFAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E014; } }
L_0055DFAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 914u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DFC8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055DFC8u) [[unlikely]] return; }
L_0055DFC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);  goto L_0055DFE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055E014; } }
L_0055DFE8:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055DFF8u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0055DFF8u) [[unlikely]] return; }
L_0055DFF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055DF80u | kUnwind; return; } goto L_0055DF80; } }
    c.budget -= 1;
L_0055E010:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055E014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055E018:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0055E030:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055E0F8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 108u);  goto L_0055E070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E06Cu); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0055E06Cu) [[unlikely]] return; }
L_0055E06C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 1;
L_0055E070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E078u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0055E078u) [[unlikely]] return; }
L_0055E078:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[3].d[0] + 0ull;  goto L_0055E090; }
    set32(c.r[18], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0055E090:
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + 124u);
    set32(c.r[17], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0055E0F8; } }
L_0055E0A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0055E0B0; } }
    set32(c.r[16], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_0055E0B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0055E0E8; } }
L_0055E0C0:
    set32(c.r[20], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E0D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 204u, depth + 1u); else { c.pc = 0x0054F950u; return; } if (c.pc != 0x0055E0D0u) [[unlikely]] return; }
L_0055E0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055E0E8; } }
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E0C0u | kUnwind; return; } goto L_0055E0C0; } }
    c.budget -= 1;
L_0055E0E8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[19].w[0] + 124u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E0A4u | kUnwind; return; } goto L_0055E0A4; } }
L_0055E0F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_0055E120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E10Cu);  if (depth < kMaxDepth) unit_011A(c, 157u, depth + 1u); else { c.pc = 0x00569440u; return; } if (c.pc != 0x0055E10Cu) [[unlikely]] return; }
L_0055E10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0055E12C; } }
L_0055E11C:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0055E120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E128u);  if (depth < kMaxDepth) unit_010E(c, 66u, depth + 1u); else { c.pc = 0x005387A0u; return; } if (c.pc != 0x0055E128u) [[unlikely]] return; }
L_0055E128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0055E12C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055E150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055E174u) [[unlikely]] return; }
L_0055E174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055E550; } }
L_0055E184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E18Cu);  if (depth < kMaxDepth) unit_0115(c, 241u, depth + 1u); else { c.pc = 0x00556E20u; return; } if (c.pc != 0x0055E18Cu) [[unlikely]] return; }
L_0055E18C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  goto L_0055E19C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E19C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0055E1C4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 631u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E1C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E1C0u) [[unlikely]] return; }
L_0055E1C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0055E1C4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0055E1EC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 636u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E1E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E1E8u) [[unlikely]] return; }
L_0055E1E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0055E1EC:
    set32(c.r[2], c.r[16].w[0] + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055E238; } }
L_0055E1F8:
    set32(c.r[17], ld32((c.r[4].w[0])));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E228u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0116(c, 88u, depth + 1u); else { c.pc = 0x00558FC0u; return; } if (c.pc != 0x0055E228u) [[unlikely]] return; }
L_0055E228:
    set32(c.r[2], c.r[16].w[0] + 76u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E1F8u | kUnwind; return; } goto L_0055E1F8; } }
    c.budget -= 1;
L_0055E238:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[16].w[0] + 88u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0055E288; } }
L_0055E248:
    set32(c.r[17], ld32((c.r[4].w[0])));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E278u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0117(c, 306u, depth + 1u); else { c.pc = 0x0055F8B0u; return; } if (c.pc != 0x0055E278u) [[unlikely]] return; }
L_0055E278:
    set32(c.r[2], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E248u | kUnwind; return; } goto L_0055E248; } }
    c.budget -= 1;
L_0055E288:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055E2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E29Cu);  if (depth < kMaxDepth) unit_011A(c, 153u, depth + 1u); else { c.pc = 0x005693C0u; return; } if (c.pc != 0x0055E29Cu) [[unlikely]] return; }
L_0055E29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E2AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E2B4u);  if (depth < kMaxDepth) unit_0119(c, 233u, depth + 1u); else { c.pc = 0x005674B0u; return; } if (c.pc != 0x0055E2B4u) [[unlikely]] return; }
L_0055E2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E2CCu);  if (depth < kMaxDepth) unit_0119(c, 202u, depth + 1u); else { c.pc = 0x00566D80u; return; } if (c.pc != 0x0055E2CCu) [[unlikely]] return; }
L_0055E2CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E2E4u);  if (depth < kMaxDepth) unit_0119(c, 169u, depth + 1u); else { c.pc = 0x00566660u; return; } if (c.pc != 0x0055E2E4u) [[unlikely]] return; }
L_0055E2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E2F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E2FCu);  if (depth < kMaxDepth) unit_0119(c, 93u, depth + 1u); else { c.pc = 0x00565340u; return; } if (c.pc != 0x0055E2FCu) [[unlikely]] return; }
L_0055E2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E314u);  if (depth < kMaxDepth) unit_0119(c, 41u, depth + 1u); else { c.pc = 0x00564710u; return; } if (c.pc != 0x0055E314u) [[unlikely]] return; }
L_0055E314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E32Cu);  if (depth < kMaxDepth) unit_011A(c, 110u, depth + 1u); else { c.pc = 0x00568D70u; return; } if (c.pc != 0x0055E32Cu) [[unlikely]] return; }
L_0055E32C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_0055E364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E33Cu);  if (depth < kMaxDepth) unit_011A(c, 110u, depth + 1u); else { c.pc = 0x00568D70u; return; } if (c.pc != 0x0055E33Cu) [[unlikely]] return; }
L_0055E33C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 668u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E358u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055E358u) [[unlikely]] return; }
L_0055E358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E360u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_011A(c, 111u, depth + 1u); else { c.pc = 0x00568D80u; return; } if (c.pc != 0x0055E360u) [[unlikely]] return; }
L_0055E360:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_0055E364:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0055E388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E374u);  if (depth < kMaxDepth) unit_0118(c, 106u, depth + 1u); else { c.pc = 0x00561500u; return; } if (c.pc != 0x0055E374u) [[unlikely]] return; }
L_0055E374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E384:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_0055E388:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_0055E40C; }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0055E3E8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055E39C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0055E3D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 687u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E3CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E3CCu) [[unlikely]] return; }
L_0055E3CC:
    c.budget -= 1;
L_0055E3D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E39Cu | kUnwind; return; } goto L_0055E39C; } }
    c.budget -= 1;
L_0055E3E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 691u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E408u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E408u) [[unlikely]] return; }
L_0055E408:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0055E40C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  goto L_0055E430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E41Cu);  if (depth < kMaxDepth) unit_010E(c, 102u, depth + 1u); else { c.pc = 0x00538BA0u; return; } if (c.pc != 0x0055E41Cu) [[unlikely]] return; }
L_0055E41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055E42C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E54C; } }
L_0055E42C:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0055E430:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_0055E458; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 705u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E454u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E454u) [[unlikely]] return; }
L_0055E454:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 1;
L_0055E458:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 136u)));  goto L_0055E47C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 710u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E478u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055E478u) [[unlikely]] return; }
L_0055E478:
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_0055E47C:
    set32(c.r[2], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0055E4D8; } }
L_0055E488:
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 721u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[5].w[0]), c.r[5].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E4C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E4C8u) [[unlikely]] return; }
L_0055E4C8:
    set32(c.r[2], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E488u | kUnwind; return; } goto L_0055E488; } }
    c.budget -= 1;
L_0055E4D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0055E500; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 729u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E4FCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055E4FCu) [[unlikely]] return; }
L_0055E4FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0055E500:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 733u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E544u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055E544u) [[unlikely]] return; }
L_0055E544:
    st32((c.r[28].w[0] - 21868u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0055E54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055E550:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055E570:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E5A8u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0055E5A8u) [[unlikely]] return; }
L_0055E5A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0055E5B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0055E6C0; } }
L_0055E5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E5C0u);  if (depth < kMaxDepth) unit_00AE(c, 84u, depth + 1u); else { c.pc = 0x003B8D38u; return; } if (c.pc != 0x0055E5C0u) [[unlikely]] return; }
L_0055E5C0:
    st32((c.r[19].w[0] + 176u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 180u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_0055E5E8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
L_0055E5E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E5F8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 69u, depth + 1u); else { c.pc = 0x005387E0u; return; } if (c.pc != 0x0055E5F8u) [[unlikely]] return; }
L_0055E5F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0055E608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E6BC; } }
L_0055E608:
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E614u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055E614u) [[unlikely]] return; }
L_0055E614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0055E624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E6BC; } }
L_0055E624:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 563u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E644u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0055E644u) [[unlikely]] return; }
L_0055E644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 160u), c.r[2].w[0]);  goto L_0055E658; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E654u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 116u, depth + 1u); else { c.pc = 0x005616C0u; return; } if (c.pc != 0x0055E654u) [[unlikely]] return; }
L_0055E654:
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0055E658:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0055E668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055E6BC; } }
L_0055E668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E670u);  if (depth < kMaxDepth) unit_0118(c, 115u, depth + 1u); else { c.pc = 0x00561660u; return; } if (c.pc != 0x0055E670u) [[unlikely]] return; }
L_0055E670:
    set32(c.r[4], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E67Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 62u, depth + 1u); else { c.pc = 0x00560D80u; return; } if (c.pc != 0x0055E67Cu) [[unlikely]] return; }
L_0055E67C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 220u)));  goto L_0055E68C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055E6BC; } }
L_0055E68C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 576u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E6A8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0055E6A8u) [[unlikely]] return; }
L_0055E6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0055E6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055E6BC; } }
L_0055E6B8:
    set32(c.r[2], 0u + 42u);
    c.budget -= 1;
L_0055E6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0055E6C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055E6E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0055E71C; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { st32((c.r[19].w[0]), 0u);  goto L_0055E724; }
L_0055E71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055E76C; } }
L_0055E724:
    set32(c.r[2], c.r[21].w[0] + 100u);
    set32(c.r[16], ld32((c.r[21].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0055E768; } }
L_0055E734:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E740u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055E740u) [[unlikely]] return; }
L_0055E740:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055E75C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_0055E754; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0055E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055E76C; } }
L_0055E75C:
    set32(c.r[2], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E734u | kUnwind; return; } goto L_0055E734; } }
L_0055E768:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055E76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055E790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[18].w[0] + 76u);
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055E810; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055E7BC:
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_0055E804; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E7F4u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0116(c, 88u, depth + 1u); else { c.pc = 0x00558FC0u; return; } if (c.pc != 0x0055E7F4u) [[unlikely]] return; }
L_0055E7F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 76u);  goto L_0055E808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055E818; } }
L_0055E804:
    set32(c.r[2], c.r[18].w[0] + 76u);
    c.budget -= 1;
L_0055E808:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E7BCu | kUnwind; return; } goto L_0055E7BC; }
L_0055E810:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0055E818:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055E830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[18].w[0] + 88u);
    set32(c.r[16], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055E8B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055E85C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_0055E8A8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E898u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0117(c, 306u, depth + 1u); else { c.pc = 0x0055F8B0u; return; } if (c.pc != 0x0055E898u) [[unlikely]] return; }
L_0055E898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 88u);  goto L_0055E8AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055E8C0; } }
L_0055E8A8:
    set32(c.r[2], c.r[18].w[0] + 88u);
    c.budget -= 1;
L_0055E8AC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E85Cu | kUnwind; return; } goto L_0055E85C; }
    c.budget -= 1;
L_0055E8B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0055E8C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055E8E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055E910; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0055E918; }
L_0055E910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055E95C; } }
L_0055E918:
    set32(c.r[2], c.r[19].w[0] + 88u);
    set32(c.r[16], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055E958; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0055E92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E934u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055E934u) [[unlikely]] return; }
L_0055E934:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055E948; }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055E95C; } }
L_0055E948:
    set32(c.r[2], c.r[19].w[0] + 88u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E92Cu | kUnwind; return; } goto L_0055E92C; }
    c.budget -= 1;
L_0055E958:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055E95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055E980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0055E9B0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0055E9B8; }
L_0055E9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055E9FC; } }
L_0055E9B8:
    set32(c.r[2], c.r[19].w[0] + 76u);
    set32(c.r[16], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0055E9F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0055E9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055E9D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055E9D4u) [[unlikely]] return; }
L_0055E9D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055E9E8; }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0055E9FC; } }
L_0055E9E8:
    set32(c.r[2], c.r[19].w[0] + 76u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055E9CCu | kUnwind; return; } goto L_0055E9CC; }
    c.budget -= 1;
L_0055E9F8:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0055E9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055EA20:
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
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0055EAA0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055EA58:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EA6Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055EA6Cu) [[unlikely]] return; }
L_0055EA6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_0055EA8C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EA84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 36u, depth + 1u); else { c.pc = 0x005383E0u; return; } if (c.pc != 0x0055EA84u) [[unlikely]] return; }
L_0055EA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0055EAA8; } }
L_0055EA8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EA58u | kUnwind; return; } goto L_0055EA58; } }
    c.budget -= 1;
L_0055EAA0:
    set32(c.r[2], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_0055EAA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0055EAD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055EB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0055EB50; } }
L_0055EB1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0055EB28; } }
    set32(c.r[5], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_0055EB28:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EB40u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055EB40u) [[unlikely]] return; }
L_0055EB40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0055EB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0055ECF8; } }
L_0055EB50:
    set32(c.r[3], ld32((c.r[23].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055EB68; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_0055EB68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EB1Cu | kUnwind; return; } goto L_0055EB1C; } }
L_0055EB70:
    set32(c.r[21], ld32((c.r[23].w[0] + 48u)));
    set32(c.r[2], c.r[23].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0055ECF0; } }
    set32(c.r[19], ld32((c.r[21].w[0] + 324u)));
    c.budget -= 1;
L_0055EB84:
    set32(c.r[2], c.r[21].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0055ECE0; } }
L_0055EB90:
    set32(c.r[18], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0055ECD0; } }
L_0055EBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0055EC08; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] + 88u);  if (t) { goto L_0055EBC8; } }
L_0055EBC0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0055EBC8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0055EBE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EBC0u | kUnwind; return; } goto L_0055EBC0; } }
    c.budget -= 1;
L_0055EBE8:
    set32(c.r[2], c.r[20].w[0] + 88u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0055EBFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055ECF4; } }
L_0055EBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0055EC80; } }
    c.budget -= 1;
L_0055EC08:
    set32(c.r[2], c.r[20].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0055EC70; } }
    c.budget -= 1;
L_0055EC18:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EC28u); set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0055EC28u) [[unlikely]] return; }
L_0055EC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055EC60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 18976u);
    set32(c.r[7], 0u + 322u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EC50u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055EC50u) [[unlikely]] return; }
L_0055EC50:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0055EC70; } }
L_0055EC60:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[20].w[0] + 88u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EC18u | kUnwind; return; } goto L_0055EC18; } }
L_0055EC70:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_0055EC84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055ECF4; } }
L_0055EC80:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0055EC84:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055ECC0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 412u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 12;
L_0055ECC0:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EBA0u | kUnwind; return; } goto L_0055EBA0; } }
L_0055ECD0:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[21].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EB90u | kUnwind; return; } goto L_0055EB90; } }
L_0055ECE0:
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[23].w[0] + 48u);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[21].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EB84u | kUnwind; return; } goto L_0055EB84; }
L_0055ECF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055ECF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0055ECF8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0055ED30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 18864u);
    set32(c.r[5], c.r[5].w[0] - 19152u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 76u);
    set32(c.r[2], c.r[4].w[0] + 4u);
    set32(c.r[10], c.r[4].w[0] + 100u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[9], c.r[4].w[0] + 112u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[8], c.r[4].w[0] + 124u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[4].w[0] + 88u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[7], c.r[4].w[0] + 136u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[6], c.r[4].w[0] + 148u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], 0u + 32u);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[3], 0u + 10000u);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 100u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 188u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 200u), 0u);
    st32((c.r[4].w[0] + 204u), 0u);
    st32((c.r[4].w[0] + 212u), 0u);
    st32((c.r[4].w[0] + 216u), 0u);
    st32((c.r[4].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 136u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[7].w[0]);
    c.budget -= 75;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), 0u);  c.pc = t; return; }
L_0055EE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0055EE9C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 18864u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0055EE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EE98u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0055EE98u) [[unlikely]] return; }
L_0055EE98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055EE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0055EEB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0119(c, 236u, depth); }
L_0055EEC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0119(c, 205u, depth); }
L_0055EED0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0119(c, 172u, depth); }
L_0055EEE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0119(c, 96u, depth); }
L_0055EEF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0119(c, 44u, depth); }
L_0055EF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0055EF44; } }
L_0055EF28:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055EF28u | kUnwind; return; } goto L_0055EF28; } }
L_0055EF44:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 64u));  goto L_0055F014; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EF6Cu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055EF6Cu) [[unlikely]] return; }
L_0055EF6C:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EFA4u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055EFA4u) [[unlikely]] return; }
L_0055EFA4:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055EFDCu); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055EFDCu) [[unlikely]] return; }
L_0055EFDC:
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 14;
L_0055F014:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0055F040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.f[21] = 0u;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055F104; } }
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = fp::mul(c.f[2], c.f[1]);  if (t) { goto L_0055F0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F094u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F094u) [[unlikely]] return; }
L_0055F094:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[5].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = c.f[21];
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.budget -= 22;
L_0055F0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F0FCu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055F0FCu) [[unlikely]] return; }
L_0055F0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_0055F230; } }
L_0055F104:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[0] = c.f[21];  goto L_0055F234; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F128u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055F128u) [[unlikely]] return; }
L_0055F128:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F14Cu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055F14Cu) [[unlikely]] return; }
L_0055F14C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.f[12] = c.r[4].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F170u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055F170u) [[unlikely]] return; }
L_0055F170:
    c.f[2] = fp::sub(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[1]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = fp::mul(c.f[21], c.f[0]);  goto L_0055F1F8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0055F1B8; } }
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055F1F8; } }
L_0055F1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F1C0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F1C0u) [[unlikely]] return; }
L_0055F1C0:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 14;
L_0055F1F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  goto L_0055F218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_0055F230; } }
L_0055F218:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055F230; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0055F230:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_0055F234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055F250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = ld32((c.r[4].w[0] + 16u));  if (t) { goto L_0055F2E0; } }
    c.f[21] = ld32((c.r[4].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055F390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F2A0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F2A0u) [[unlikely]] return; }
L_0055F2A0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[21]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0055F390; } }
L_0055F2E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0055F390; } }
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 24u));  goto L_0055F318; }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055F390; } }
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.budget -= 1;
L_0055F318:
    c.f[0] = 0u;
    c.f[21] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0055F338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[1]);  if (t) { goto L_0055F390; } }
L_0055F338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F340u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F340u) [[unlikely]] return; }
L_0055F340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 20;
L_0055F390:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0055F3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0055F3C4; } }
L_0055F3AC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[20];  goto L_0055F3C8; }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0055F3C4:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_0055F3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0055F3E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0055F428; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0055F884; }
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0055F434; }
L_0055F428:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055F884; } }
L_0055F434:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0055F450; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_0055F470; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0055F450:
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 52u), c.r[5].w[0]);  goto L_0055F874; }
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055F874; } }
L_0055F470:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0055F5F8; }
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0055F5F4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0055F560; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] - 8u);  if (t) { goto L_0055F520; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055F4C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055F4C0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0055F4C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0055F520; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0055F4CC:
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[7], ld32((c.r[3].w[0] + 28u)));
    c.r[6].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[10], c.r[19].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[10], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 172u)));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[19], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F4CCu | kUnwind; return; } goto L_0055F4CC; } }
    c.budget -= 1;
L_0055F520:
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0055F560; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0055F544:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 24u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F544u | kUnwind; return; } goto L_0055F544; } }
L_0055F560:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0055F874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F570u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F570u) [[unlikely]] return; }
L_0055F570:
    mmi::div(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0055F5B8; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_0055F58C:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0055F5A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0055F5B8; } }
L_0055F5A8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F58Cu | kUnwind; return; } goto L_0055F58C; } }
    c.budget -= 1;
L_0055F5B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055F874; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0055F874; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055F874; } }
L_0055F5F4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0055F5F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0055F874; } }
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0055F874; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055F624; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  goto L_0055F778; }
L_0055F624:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), 0u);  goto L_0055F648; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18944u);
    set32(c.r[7], 0u + 404u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F644u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055F644u) [[unlikely]] return; }
L_0055F644:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_0055F648:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] - 18944u);
    set32(c.r[7], 0u + 409u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F670u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x0055F670u) [[unlikely]] return; }
L_0055F670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0055F680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055F884; } }
L_0055F680:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0055F6B0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055F690:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F690u | kUnwind; return; } goto L_0055F690; } }
L_0055F6B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0055F728; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055F6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F6D4u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F6D4u) [[unlikely]] return; }
L_0055F6D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F6CCu | kUnwind; return; } goto L_0055F6CC; } }
    c.budget -= 1;
L_0055F728:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0055F774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F740u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F740u) [[unlikely]] return; }
L_0055F740:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 13;
L_0055F774:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_0055F778:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_0055F860; }
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0055F810; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055F7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F7BCu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F7BCu) [[unlikely]] return; }
L_0055F7BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F7B4u | kUnwind; return; } goto L_0055F7B4; } }
    c.budget -= 1;
L_0055F810:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0055F85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F828u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0055F828u) [[unlikely]] return; }
L_0055F828:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 13;
L_0055F85C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_0055F860:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 5;
L_0055F874:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 4;
L_0055F884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0055F8B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055F8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 52u)));  if (t) { goto L_0055F8EC; } }
L_0055F8E8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055F8EC:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_0055F910; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F90Cu); set32(c.r[7], 0u + 304u);  if (depth < kMaxDepth) unit_0118(c, 259u, depth + 1u); else { c.pc = 0x00563F70u; return; } if (c.pc != 0x0055F90Cu) [[unlikely]] return; }
L_0055F90C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_0055F910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055F990; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0055F978; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055F928:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055F960; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0055F960; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 18944u);
    set32(c.r[7], 0u + 57u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F960u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055F960u) [[unlikely]] return; }
L_0055F960:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055F928u | kUnwind; return; } goto L_0055F928; } }
    c.budget -= 1;
L_0055F978:
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F990u); set32(c.r[7], 0u + 319u);  if (depth < kMaxDepth) unit_0118(c, 259u, depth + 1u); else { c.pc = 0x00563F70u; return; } if (c.pc != 0x0055F990u) [[unlikely]] return; }
L_0055F990:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0055F9B8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18944u);
    set32(c.r[7], 0u + 331u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055F9B4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0055F9B4u) [[unlikely]] return; }
L_0055F9B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0055F9B8:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0055F9E0:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_0055FA10:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 8u), 0u);  goto L_0055FA5C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.f[0] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0055FA60; } }
L_0055FA5C:
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 1;
L_0055FA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0055FA70:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0055FA80; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055FA80:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_0055FA94; }
L_0055FA94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_0055FAA0:
    set32(c.r[2], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_0055FB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FB18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 315u, depth + 1u); else { c.pc = 0x0055FAA0u; return; } if (c.pc != 0x0055FB18u) [[unlikely]] return; }
L_0055FB18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0055FB30:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0055FB50:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0055FB70:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0055FBA0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_0055FBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0055FC20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 18704u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0055FC04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 18608u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0055FC04:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0055FC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0055FC1Cu) [[unlikely]] return; }
L_0055FC1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0055FC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0055FC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FC50u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x0055FC50u) [[unlikely]] return; }
L_0055FC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0055FC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0055FDD8; } }
L_0055FC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_0055FC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055FDD4; } }
L_0055FC7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0055FCA8; } }
L_0055FC84:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0055FC98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0055FCA8; } }
L_0055FC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055FCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055FC84u | kUnwind; return; } goto L_0055FC84; } }
L_0055FCA8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 372u)));  goto L_0055FCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 87u);  if (t) { goto L_0055FDD4; } }
L_0055FCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FCC0u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0106(c, 222u, depth + 1u); else { c.pc = 0x0051B630u; return; } if (c.pc != 0x0055FCC0u) [[unlikely]] return; }
L_0055FCC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));  goto L_0055FCD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FCD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FCE4u); set32(c.r[5], ld32((c.r[2].w[0] + 372u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0055FCE4u) [[unlikely]] return; }
L_0055FCE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0055FCF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FCF4:
    set32(c.r[2], ld32((c.r[2].w[0] + 324u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  goto L_0055FD08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0055FDD4; } }
L_0055FD08:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FD14u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0106(c, 225u, depth + 1u); else { c.pc = 0x0051B670u; return; } if (c.pc != 0x0055FD14u) [[unlikely]] return; }
L_0055FD14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  goto L_0055FD24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FD2Cu); set32(c.r[5], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0055FD2Cu) [[unlikely]] return; }
L_0055FD2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0055FD3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FD3C:
    set32(c.r[4], ld32((c.r[2].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FD48u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0106(c, 219u, depth + 1u); else { c.pc = 0x0051B5F0u; return; } if (c.pc != 0x0055FD48u) [[unlikely]] return; }
L_0055FD48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  goto L_0055FD58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FD58:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FD64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 8u, depth + 1u); else { c.pc = 0x005280E0u; return; } if (c.pc != 0x0055FD64u) [[unlikely]] return; }
L_0055FD64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_0055FD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FDD4; } }
L_0055FD74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0055FD90; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  goto L_0055FD8C; }
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0055FD8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0055FD90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18896u);
    set32(c.r[7], 0u + 1532u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FDD0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055FDD0u) [[unlikely]] return; }
L_0055FDD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055FDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0055FDD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0055FDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FE0Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x0055FE0Cu) [[unlikely]] return; }
L_0055FE0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0055FE1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0055FFF8; } }
L_0055FE1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  goto L_0055FE38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055FFF4; } }
L_0055FE38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0055FE68; } }
L_0055FE40:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_0055FE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0055FE68; } }
L_0055FE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0055FE68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055FE40u | kUnwind; return; } goto L_0055FE40; } }
    c.budget -= 1;
L_0055FE68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0055FE78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055FFF4; } }
L_0055FE78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] - 18896u);
    set32(c.r[7], 0u + 1345u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FE94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0055FE94u) [[unlikely]] return; }
L_0055FE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055FEA8; } }
    st32((c.r[2].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0055FEA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[2].w[0]);  goto L_0055FEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0055FFF4; } }
L_0055FEB8:
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  goto L_0055FEEC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0055FEEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0055FFF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FF00u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0106(c, 222u, depth + 1u); else { c.pc = 0x0051B630u; return; } if (c.pc != 0x0055FF00u) [[unlikely]] return; }
L_0055FF00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0055FF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FF18u);  if (depth < kMaxDepth) unit_0113(c, 183u, depth + 1u); else { c.pc = 0x0054F4E0u; return; } if (c.pc != 0x0055FF18u) [[unlikely]] return; }
L_0055FF18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_0055FF28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FF28:
    set32(c.r[2], ld32((c.r[2].w[0] + 324u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  goto L_0055FF3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0055FFF4; } }
L_0055FF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FF44u); set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0055FF44u) [[unlikely]] return; }
L_0055FF44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0055FF54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FF64u);  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0055FF64u) [[unlikely]] return; }
L_0055FF64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0055FF74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FF74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FF84u);  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x0055FF84u) [[unlikely]] return; }
L_0055FF84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_0055FF94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FF94:
    set32(c.r[5], ld32((c.r[2].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FFA0u); set32(c.r[4], ld32((c.r[29].w[0] + 40u)));  if (depth < kMaxDepth) unit_0106(c, 228u, depth + 1u); else { c.pc = 0x0051B6C0u; return; } if (c.pc != 0x0055FFA0u) [[unlikely]] return; }
L_0055FFA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  goto L_0055FFB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FFC0u); set32(c.r[4], ld32((c.r[3].w[0] + 372u)));  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0055FFC0u) [[unlikely]] return; }
L_0055FFC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  goto L_0055FFD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055FFE0u); set32(c.r[4], ld32((c.r[3].w[0] + 372u)));  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x0055FFE0u) [[unlikely]] return; }
L_0055FFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055FFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0055FFF4; } }
L_0055FFF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055FFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0055FFF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
