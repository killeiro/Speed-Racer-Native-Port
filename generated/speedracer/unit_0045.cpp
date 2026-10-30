#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0045[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200,
    0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208,
    0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330,
    0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371,
    0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
};

void unit_0045(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00214000;
    case 2u: goto L_00214014;
    case 3u: goto L_00214030;
    case 4u: goto L_00214040;
    case 5u: goto L_00214050;
    case 6u: goto L_00214060;
    case 7u: goto L_00214070;
    case 8u: goto L_00214080;
    case 9u: goto L_00214098;
    case 10u: goto L_002140A8;
    case 11u: goto L_002140D0;
    case 12u: goto L_002140F8;
    case 13u: goto L_00214108;
    case 14u: goto L_00214124;
    case 15u: goto L_00214140;
    case 16u: goto L_00214168;
    case 17u: goto L_00214174;
    case 18u: goto L_00214210;
    case 19u: goto L_00214240;
    case 20u: goto L_00214254;
    case 21u: goto L_00214280;
    case 22u: goto L_00214290;
    case 23u: goto L_002142B0;
    case 24u: goto L_002142E0;
    case 25u: goto L_00214320;
    case 26u: goto L_0021433C;
    case 27u: goto L_00214360;
    case 28u: goto L_00214370;
    case 29u: goto L_0021438C;
    case 30u: goto L_00214398;
    case 31u: goto L_002143AC;
    case 32u: goto L_002143BC;
    case 33u: goto L_002143D0;
    case 34u: goto L_002143F0;
    case 35u: goto L_00214400;
    case 36u: goto L_0021441C;
    case 37u: goto L_00214428;
    case 38u: goto L_00214440;
    case 39u: goto L_00214450;
    case 40u: goto L_00214460;
    case 41u: goto L_0021447C;
    case 42u: goto L_00214488;
    case 43u: goto L_002144A0;
    case 44u: goto L_002144B8;
    case 45u: goto L_002144C8;
    case 46u: goto L_002144F0;
    case 47u: goto L_0021450C;
    case 48u: goto L_0021453C;
    case 49u: goto L_00214580;
    case 50u: goto L_002145C0;
    case 51u: goto L_002145E8;
    case 52u: goto L_002145F8;
    case 53u: goto L_00214618;
    case 54u: goto L_00214640;
    case 55u: goto L_00214770;
    case 56u: goto L_002147A4;
    case 57u: goto L_002147AC;
    case 58u: goto L_0021482C;
    case 59u: goto L_0021484C;
    case 60u: goto L_00214900;
    case 61u: goto L_002149B4;
    case 62u: goto L_00214AC8;
    case 63u: goto L_00214AFC;
    case 64u: goto L_00214B04;
    case 65u: goto L_00214B84;
    case 66u: goto L_00214BAC;
    case 67u: goto L_00214C78;
    case 68u: goto L_00214D30;
    case 69u: goto L_00214D60;
    case 70u: goto L_00214D7C;
    case 71u: goto L_00214DA0;
    case 72u: goto L_00214DB0;
    case 73u: goto L_00214DC4;
    case 74u: goto L_00214DD0;
    case 75u: goto L_00214DE4;
    case 76u: goto L_00214E00;
    case 77u: goto L_00214E10;
    case 78u: goto L_00214E20;
    case 79u: goto L_00214E30;
    case 80u: goto L_00214E40;
    case 81u: goto L_00214E50;
    case 82u: goto L_00214E68;
    case 83u: goto L_00214E78;
    case 84u: goto L_00214EA0;
    case 85u: goto L_00214EC8;
    case 86u: goto L_00214ED8;
    case 87u: goto L_00214EFC;
    case 88u: goto L_00214F20;
    case 89u: goto L_00214F48;
    case 90u: goto L_00214F54;
    case 91u: goto L_00214F80;
    case 92u: goto L_00214FFC;
    case 93u: goto L_002150A0;
    case 94u: goto L_002150D0;
    case 95u: goto L_002150EC;
    case 96u: goto L_00215110;
    case 97u: goto L_00215120;
    case 98u: goto L_0021513C;
    case 99u: goto L_00215148;
    case 100u: goto L_0021515C;
    case 101u: goto L_0021516C;
    case 102u: goto L_00215180;
    case 103u: goto L_00215190;
    case 104u: goto L_002151A4;
    case 105u: goto L_002151B4;
    case 106u: goto L_002151C8;
    case 107u: goto L_002151D8;
    case 108u: goto L_002151EC;
    case 109u: goto L_002151FC;
    case 110u: goto L_00215210;
    case 111u: goto L_00215220;
    case 112u: goto L_00215234;
    case 113u: goto L_00215244;
    case 114u: goto L_00215258;
    case 115u: goto L_00215270;
    case 116u: goto L_0021528C;
    case 117u: goto L_00215390;
    case 118u: goto L_002153AC;
    case 119u: goto L_002153B8;
    case 120u: goto L_002153C4;
    case 121u: goto L_002153D0;
    case 122u: goto L_002153DC;
    case 123u: goto L_002153F0;
    case 124u: goto L_00215404;
    case 125u: goto L_00215410;
    case 126u: goto L_00215430;
    case 127u: goto L_00215440;
    case 128u: goto L_0021545C;
    case 129u: goto L_00215490;
    case 130u: goto L_002154E0;
    case 131u: goto L_002154F0;
    case 132u: goto L_0021550C;
    case 133u: goto L_00215518;
    case 134u: goto L_0021553C;
    case 135u: goto L_00215548;
    case 136u: goto L_00215554;
    case 137u: goto L_00215560;
    case 138u: goto L_00215578;
    case 139u: goto L_00215590;
    case 140u: goto L_002155B0;
    case 141u: goto L_002155C8;
    case 142u: goto L_002155D8;
    case 143u: goto L_00215640;
    case 144u: goto L_00215668;
    case 145u: goto L_00215678;
    case 146u: goto L_002156D4;
    case 147u: goto L_00215740;
    case 148u: goto L_002157A0;
    case 149u: goto L_002157AC;
    case 150u: goto L_00215818;
    case 151u: goto L_00215828;
    case 152u: goto L_00215838;
    case 153u: goto L_00215878;
    case 154u: goto L_0021589C;
    case 155u: goto L_002158C4;
    case 156u: goto L_00215920;
    case 157u: goto L_00215944;
    case 158u: goto L_00215990;
    case 159u: goto L_002159D0;
    case 160u: goto L_00215A48;
    case 161u: goto L_00215A5C;
    case 162u: goto L_00215A88;
    case 163u: goto L_00215A98;
    case 164u: goto L_00215AB8;
    case 165u: goto L_00215B30;
    case 166u: goto L_00215B60;
    case 167u: goto L_00215B7C;
    case 168u: goto L_00215BA0;
    case 169u: goto L_00215BB0;
    case 170u: goto L_00215BCC;
    case 171u: goto L_00215BD8;
    case 172u: goto L_00215BEC;
    case 173u: goto L_00215BFC;
    case 174u: goto L_00215C10;
    case 175u: goto L_00215C20;
    case 176u: goto L_00215C34;
    case 177u: goto L_00215C44;
    case 178u: goto L_00215C58;
    case 179u: goto L_00215C68;
    case 180u: goto L_00215C7C;
    case 181u: goto L_00215C8C;
    case 182u: goto L_00215CA0;
    case 183u: goto L_00215CB0;
    case 184u: goto L_00215CC4;
    case 185u: goto L_00215CD4;
    case 186u: goto L_00215CE8;
    case 187u: goto L_00215CF8;
    case 188u: goto L_00215D0C;
    case 189u: goto L_00215D20;
    case 190u: goto L_00215D3C;
    case 191u: goto L_00215E00;
    case 192u: goto L_00215E1C;
    case 193u: goto L_00215E28;
    case 194u: goto L_00215E34;
    case 195u: goto L_00215E40;
    case 196u: goto L_00215E4C;
    case 197u: goto L_00215E58;
    case 198u: goto L_00215E64;
    case 199u: goto L_00215E70;
    case 200u: goto L_00215E7C;
    case 201u: goto L_00215E90;
    case 202u: goto L_00215EA0;
    case 203u: goto L_00215EB0;
    case 204u: goto L_00215ECC;
    case 205u: goto L_00215ED8;
    case 206u: goto L_00215EE4;
    case 207u: goto L_00215EF0;
    case 208u: goto L_00215EFC;
    case 209u: goto L_00215F08;
    case 210u: goto L_00215F14;
    case 211u: goto L_00215F20;
    case 212u: goto L_00215F2C;
    case 213u: goto L_00215F40;
    case 214u: goto L_00215F58;
    case 215u: goto L_00215F68;
    case 216u: goto L_00215FB0;
    case 217u: goto L_00215FD8;
    case 218u: goto L_00215FE8;
    case 219u: goto L_0021602C;
    case 220u: goto L_00216090;
    case 221u: goto L_00216200;
    case 222u: goto L_0021624C;
    case 223u: goto L_00216300;
    case 224u: goto L_00216314;
    case 225u: goto L_00216360;
    case 226u: goto L_00216390;
    case 227u: goto L_0021641C;
    case 228u: goto L_0021643C;
    case 229u: goto L_00216450;
    case 230u: goto L_00216460;
    case 231u: goto L_0021646C;
    case 232u: goto L_00216478;
    case 233u: goto L_00216484;
    case 234u: goto L_002164E0;
    case 235u: goto L_00216564;
    case 236u: goto L_0021656C;
    case 237u: goto L_002165D8;
    case 238u: goto L_002165E8;
    case 239u: goto L_002165F8;
    case 240u: goto L_0021661C;
    case 241u: goto L_0021662C;
    case 242u: goto L_00216638;
    case 243u: goto L_0021669C;
    case 244u: goto L_002166AC;
    case 245u: goto L_002166BC;
    case 246u: goto L_002166E0;
    case 247u: goto L_002166F0;
    case 248u: goto L_002166FC;
    case 249u: goto L_00216768;
    case 250u: goto L_00216774;
    case 251u: goto L_002167A0;
    case 252u: goto L_002167B0;
    case 253u: goto L_002167D0;
    case 254u: goto L_00216980;
    case 255u: goto L_002169D0;
    case 256u: goto L_00216A40;
    case 257u: goto L_00216A70;
    case 258u: goto L_00216AC8;
    case 259u: goto L_00216B14;
    case 260u: goto L_00216B30;
    case 261u: goto L_00216B80;
    case 262u: goto L_00216B90;
    case 263u: goto L_00216BE0;
    case 264u: goto L_00216BFC;
    case 265u: goto L_00216C20;
    case 266u: goto L_00216C30;
    case 267u: goto L_00216C4C;
    case 268u: goto L_00216C58;
    case 269u: goto L_00216C6C;
    case 270u: goto L_00216C7C;
    case 271u: goto L_00216C90;
    case 272u: goto L_00216CB0;
    case 273u: goto L_00216CCC;
    case 274u: goto L_00216D10;
    case 275u: goto L_00216D2C;
    case 276u: goto L_00216D38;
    case 277u: goto L_00216D50;
    case 278u: goto L_00216D60;
    case 279u: goto L_00216D70;
    case 280u: goto L_00216D8C;
    case 281u: goto L_00216D98;
    case 282u: goto L_00216DB0;
    case 283u: goto L_00216DC8;
    case 284u: goto L_00216DD8;
    case 285u: goto L_00216E00;
    case 286u: goto L_00216E10;
    case 287u: goto L_00216E38;
    case 288u: goto L_00216E48;
    case 289u: goto L_00216E68;
    case 290u: goto L_00216E90;
    case 291u: goto L_00216ECC;
    case 292u: goto L_00216ED8;
    case 293u: goto L_00216EE4;
    case 294u: goto L_00216EF4;
    case 295u: goto L_00216F00;
    case 296u: goto L_00216F0C;
    case 297u: goto L_00216F18;
    case 298u: goto L_00216F48;
    case 299u: goto L_00216F94;
    case 300u: goto L_00216FE0;
    case 301u: goto L_0021703C;
    case 302u: goto L_00217070;
    case 303u: goto L_002170C8;
    case 304u: goto L_002170D8;
    case 305u: goto L_002170F4;
    case 306u: goto L_00217100;
    case 307u: goto L_0021711C;
    case 308u: goto L_00217140;
    case 309u: goto L_00217150;
    case 310u: goto L_0021716C;
    case 311u: goto L_00217178;
    case 312u: goto L_0021718C;
    case 313u: goto L_002171B0;
    case 314u: goto L_002171C4;
    case 315u: goto L_002171D4;
    case 316u: goto L_002171E8;
    case 317u: goto L_00217200;
    case 318u: goto L_0021721C;
    case 319u: goto L_00217278;
    case 320u: goto L_002172C0;
    case 321u: goto L_002172DC;
    case 322u: goto L_002172F0;
    case 323u: goto L_002172FC;
    case 324u: goto L_00217310;
    case 325u: goto L_00217320;
    case 326u: goto L_0021733C;
    case 327u: goto L_00217344;
    case 328u: goto L_00217360;
    case 329u: goto L_00217374;
    case 330u: goto L_0021737C;
    case 331u: goto L_00217384;
    case 332u: goto L_00217390;
    case 333u: goto L_002173B0;
    case 334u: goto L_002173C4;
    case 335u: goto L_002173F0;
    case 336u: goto L_00217400;
    case 337u: goto L_0021741C;
    case 338u: goto L_0021744C;
    case 339u: goto L_00217490;
    case 340u: goto L_002174D0;
    case 341u: goto L_002174F8;
    case 342u: goto L_00217528;
    case 343u: goto L_0021753C;
    case 344u: goto L_00217560;
    case 345u: goto L_00217580;
    case 346u: goto L_0021759C;
    case 347u: goto L_002175AC;
    case 348u: goto L_002175F0;
    case 349u: goto L_00217638;
    case 350u: goto L_002176C8;
    case 351u: goto L_002176FC;
    case 352u: goto L_00217704;
    case 353u: goto L_00217784;
    case 354u: goto L_002177C0;
    case 355u: goto L_00217808;
    case 356u: goto L_00217860;
    case 357u: goto L_00217870;
    case 358u: goto L_00217950;
    case 359u: goto L_00217BC4;
    case 360u: goto L_00217C00;
    case 361u: goto L_00217C24;
    case 362u: goto L_00217CC4;
    case 363u: goto L_00217CEC;
    case 364u: goto L_00217D30;
    case 365u: goto L_00217D70;
    case 366u: goto L_00217D8C;
    case 367u: goto L_00217DB0;
    case 368u: goto L_00217DC0;
    case 369u: goto L_00217DDC;
    case 370u: goto L_00217DE8;
    case 371u: goto L_00217DFC;
    case 372u: goto L_00217E0C;
    case 373u: goto L_00217E20;
    case 374u: goto L_00217E40;
    case 375u: goto L_00217E5C;
    case 376u: goto L_00217EA0;
    case 377u: goto L_00217EBC;
    case 378u: goto L_00217EC8;
    case 379u: goto L_00217EE0;
    case 380u: goto L_00217EF0;
    case 381u: goto L_00217F00;
    case 382u: goto L_00217F1C;
    case 383u: goto L_00217F28;
    case 384u: goto L_00217F80;
    case 385u: goto L_00217F98;
    case 386u: goto L_00217FA8;
    case 387u: goto L_00217FF0;
    default: bad_entry(c, 0x00214000u); return;
    }
L_00214000:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214014u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00214014u) [[unlikely]] return; }
L_00214014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214030:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00210FC0u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 150u, depth); }
L_00214040:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211040u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 152u, depth); }
L_00214050:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002110B0u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00214060:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211110u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 161u, depth); }
L_00214070:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211140u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 164u, depth); }
L_00214080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214098u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00214098u) [[unlikely]] return; }
L_00214098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002140B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002140A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x002140A8u) [[unlikely]] return; }
L_002140A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002140B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002140D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002140F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002140F8u) [[unlikely]] return; }
L_002140F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00214114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00214108u) [[unlikely]] return; }
L_00214108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00214114:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214124u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x00214124u) [[unlikely]] return; }
L_00214124:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00214140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00214168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00214168u) [[unlikely]] return; }
L_00214168:
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002141E8; } }
L_00214174:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = fp::sub(c.f[20], c.f[1]);
    c.f[3] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[20]);
    c.budget -= 29;
L_002141E8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[8].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00214174u | kUnwind; return; } goto L_00214174; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00214238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00214240; } }
L_00214238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214240u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00214240u) [[unlikely]] return; }
L_00214240:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214254u); set32(c.r[6], 0u + 6000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x00214254u) [[unlikely]] return; }
L_00214254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002142B0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214280u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00214280u) [[unlikely]] return; }
L_00214280:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214290u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00214290u) [[unlikely]] return; }
L_00214290:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002142B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002142B0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002142B0u) [[unlikely]] return; }
L_002142B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7920u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002142E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021433C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00214320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214320u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00214320u) [[unlikely]] return; }
L_00214320:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00214340; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021433Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021433Cu) [[unlikely]] return; }
L_0021433C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00214340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9944u);  c.pc = t; return; }
L_00214370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021438Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00206DB0u; return; } if (c.pc != 0x0021438Cu) [[unlikely]] return; }
L_0021438C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214398u); set32(c.r[4], ld32((c.r[2].w[0] - 9944u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00214398u) [[unlikely]] return; }
L_00214398:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002143ACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002143ACu) [[unlikely]] return; }
L_002143AC:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002143BCu); set32(c.r[4], c.r[4].w[0] - 9936u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002143BCu) [[unlikely]] return; }
L_002143BC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002143D0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002143D0u) [[unlikely]] return; }
L_002143D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002143F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00206ED0u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 388u, depth); }
L_00214400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021441Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 391u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x0021441Cu) [[unlikely]] return; }
L_0021441C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214428u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00214428u) [[unlikely]] return; }
L_00214428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214440:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207040u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 398u, depth); }
L_00214450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207050u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 399u, depth); }
L_00214460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021447Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 402u, depth + 1u); else { c.pc = 0x00207090u; return; } if (c.pc != 0x0021447Cu) [[unlikely]] return; }
L_0021447C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214488u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00214488u) [[unlikely]] return; }
L_00214488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002144A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002144B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002144B8u) [[unlikely]] return; }
L_002144B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002144D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002144C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 415u, depth + 1u); else { c.pc = 0x00207240u; return; } if (c.pc != 0x002144C8u) [[unlikely]] return; }
L_002144C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 4;
L_002144D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002144F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021450Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x0021450Cu) [[unlikely]] return; }
L_0021450C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00214528; } }
    breakpoint(c, 0x00214524u);
    c.budget -= 1;
L_00214528:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0021454C; } }
L_0021453C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0021454C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00214554; } }
L_0021454C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021453Cu | kUnwind; return; } goto L_0021453C; }
L_00214554:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002145AC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0021456C; } }
    breakpoint(c, 0x00214568u);
    c.budget -= 1;
L_0021456C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00214594; } }
L_00214580:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00214594; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002145A0; } }
L_00214594:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00214580u | kUnwind; return; } goto L_00214580; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002145A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_002145AC; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_002145AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002145C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002145E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002145E8u) [[unlikely]] return; }
L_002145E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00214608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002145F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 415u, depth + 1u); else { c.pc = 0x00207240u; return; } if (c.pc != 0x002145F8u) [[unlikely]] return; }
L_002145F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 4;
L_00214608:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214618u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 413u, depth + 1u); else { c.pc = 0x002071E0u; return; } if (c.pc != 0x00214618u) [[unlikely]] return; }
L_00214618:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00214640:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.f[20] = c.f[12];
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 348u), c.f[2]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.budget -= 76;
L_00214770:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00214770u | kUnwind; return; } goto L_00214770; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002147A4u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002147A4u) [[unlikely]] return; }
L_002147A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002147ACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x002147ACu) [[unlikely]] return; }
L_002147AC:
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021482Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0021482Cu) [[unlikely]] return; }
L_0021482C:
    c.f[9] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    c.f[6] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[29].w[0] + 180u));
    c.f[8] = ld32((c.r[29].w[0] + 184u));
    c.f[5] = 0u;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002148D0; } }
L_0021484C:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) == fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_002148CC; }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[7], c.r[7].w[0] + 12u);
    c.f[4] = fp::mul(c.f[9], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[8]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[3] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 22;
L_002148CC:
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002148D0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021484Cu | kUnwind; return; } goto L_0021484C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00214900:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[28] = c.f[12];  if (t) { goto L_00214CE4; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00214CE8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));  goto L_0021497C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00214CE4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 1;
L_0021497C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[3].w[0] + 112u));  goto L_002149C0; }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002149A8; }
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002149BC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002149A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002149B4u); c.f[12] = c.f[28];  if (depth < kMaxDepth) unit_0045(c, 54u, depth + 1u); else { c.pc = 0x00214640u; return; } if (c.pc != 0x002149B4u) [[unlikely]] return; }
L_002149B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00214CE4; } }
L_002149BC:
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.budget -= 1;
L_002149C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 400u), c.f[2]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 412u), c.f[2]);
    st32((c.r[29].w[0] + 416u), c.f[1]);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 424u), c.f[2]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 436u), c.f[2]);
    st32((c.r[29].w[0] + 440u), c.f[1]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 352u), c.f[3]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 66;
L_00214AC8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00214AC8u | kUnwind; return; } goto L_00214AC8; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 284u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214AFCu); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x00214AFCu) [[unlikely]] return; }
L_00214AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214B04u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00214B04u) [[unlikely]] return; }
L_00214B04:
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214B84u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00214B84u) [[unlikely]] return; }
L_00214B84:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    c.f[21] = ld32((c.r[29].w[0] + 244u));
    c.f[22] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[27] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00214CD0; } }
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 1;
L_00214BAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.f[26] = fp::sub(c.f[28], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[26]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_00214CCC; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[25] = fp::sub(c.f[0], c.f[20]);
    c.f[24] = fp::sub(c.f[1], c.f[21]);
    c.f[23] = fp::sub(c.f[2], c.f[22]);
    c.facc = fp::mul(c.f[25], c.f[25]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[24]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 17;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[19].w[0] + 32u));  goto L_00214C34; }
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00214CC8; } }
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_00214C34:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[19].w[0] + 28u));  goto L_00214C58; }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[13] = c.f[27];  goto L_00214C70; }
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.budget -= 1;
L_00214C58:
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[1] = fp::mul(c.f[0], c.f[25]);
    c.f[2] = fp::mul(c.f[0], c.f[24]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[3] = fp::mul(c.f[0], c.f[23]);  if (t) { goto L_00214CA4; } }
    c.f[13] = c.f[27];
    c.budget -= 1;
L_00214C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214C78u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00214C78u) [[unlikely]] return; }
L_00214C78:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[25]);
    c.f[2] = fp::mul(c.f[0], c.f[24]);
    c.f[3] = fp::mul(c.f[0], c.f[23]);
    c.budget -= 11;
L_00214CA4:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 9;
L_00214CC8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00214CCC:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00214CD0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00214BACu | kUnwind; return; } goto L_00214BAC; }
L_00214CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00214CE8:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_00214D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00214D7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214D60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x00214D60u) [[unlikely]] return; }
L_00214D60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00214D80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214D7Cu); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00214D7Cu) [[unlikely]] return; }
L_00214D7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00214D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9896u);  c.pc = t; return; }
L_00214DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214DC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 107u, depth + 1u); else { c.pc = 0x0031D490u; return; } if (c.pc != 0x00214DC4u) [[unlikely]] return; }
L_00214DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214DD0u); set32(c.r[4], ld32((c.r[2].w[0] - 9896u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00214DD0u) [[unlikely]] return; }
L_00214DD0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214DE4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00214DE4u) [[unlikely]] return; }
L_00214DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00214E00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 135u, depth); }
L_00214E10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 137u, depth); }
L_00214E20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 148u, depth); }
L_00214E30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 151u, depth); }
L_00214E40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 159u, depth); }
L_00214E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214E68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00214E68u) [[unlikely]] return; }
L_00214E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00214E8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x00214E78u) [[unlikely]] return; }
L_00214E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7696u);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 5;
L_00214E8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00214EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214EC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00214EC8u) [[unlikely]] return; }
L_00214EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00214EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x00214ED8u) [[unlikely]] return; }
L_00214ED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7696u);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 5;
L_00214EEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00214EFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 171u, depth + 1u); else { c.pc = 0x0031DB00u; return; } if (c.pc != 0x00214EFCu) [[unlikely]] return; }
L_00214EFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00214F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00214F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00214F74; } }
L_00214F3C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00214F48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00214F48u) [[unlikely]] return; }
L_00214F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13368u);  if (t) { goto L_00214F64; } }
L_00214F54:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00214F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00214F70; } }
L_00214F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00214F54u | kUnwind; return; } goto L_00214F54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00214F70:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00214F74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00214F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021508C; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00215038; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00214FE4; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00214FE0; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00215038; } }
L_00214FE0:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00214FE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_0021502C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00214FFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00214FFCu) [[unlikely]] return; }
L_00214FFC:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_00215028; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00215024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00215038; } }
L_00215024:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_00215028:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0021502C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00215038:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 52u));  goto L_0021504C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00215090; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_0021504C:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[16].w[0] + 52u));  goto L_00215068; }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 3;
L_00215068:
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 40u));  goto L_00215088; }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
L_00215088:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_0021508C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00215090:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002150A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002150EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002150D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x002150D0u) [[unlikely]] return; }
L_002150D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002150F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002150ECu); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002150ECu) [[unlikely]] return; }
L_002150EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002150F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9864u);  c.pc = t; return; }
L_00215120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021513Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x0021513Cu) [[unlikely]] return; }
L_0021513C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215148u); set32(c.r[4], ld32((c.r[2].w[0] - 9864u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00215148u) [[unlikely]] return; }
L_00215148:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021515Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0021515Cu) [[unlikely]] return; }
L_0021515C:
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021516Cu); set32(c.r[4], c.r[4].w[0] - 9856u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0021516Cu) [[unlikely]] return; }
L_0021516C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215180u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215180u) [[unlikely]] return; }
L_00215180:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215190u); set32(c.r[4], c.r[4].w[0] - 9833u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215190u) [[unlikely]] return; }
L_00215190:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151A4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002151A4u) [[unlikely]] return; }
L_002151A4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 53u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151B4u); set32(c.r[4], c.r[4].w[0] - 9800u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002151B4u) [[unlikely]] return; }
L_002151B4:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151C8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002151C8u) [[unlikely]] return; }
L_002151C8:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151D8u); set32(c.r[4], c.r[4].w[0] - 9778u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002151D8u) [[unlikely]] return; }
L_002151D8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151ECu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002151ECu) [[unlikely]] return; }
L_002151EC:
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002151FCu); set32(c.r[4], c.r[4].w[0] - 9755u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002151FCu) [[unlikely]] return; }
L_002151FC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215210u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215210u) [[unlikely]] return; }
L_00215210:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215220u); set32(c.r[4], c.r[4].w[0] - 9722u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x00215220u) [[unlikely]] return; }
L_00215220:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215234u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215234u) [[unlikely]] return; }
L_00215234:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215244u); set32(c.r[5], c.r[5].w[0] - 9702u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x00215244u) [[unlikely]] return; }
L_00215244:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215258u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215258u) [[unlikely]] return; }
L_00215258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00215270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021528Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x0021528Cu) [[unlikely]] return; }
L_0021528C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 24u));  goto L_0021529C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00215370; } }
L_0021529C:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_00215370; }
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0021536C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 53u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021536C; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0021536C; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0021536C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021536C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00215320; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00215320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00215340; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00215340; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00215340:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00215364; }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00215360; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00215360:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00215364:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00215370; }
L_0021536C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00215370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x002153ACu) [[unlikely]] return; }
L_002153AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153B8u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002153B8u) [[unlikely]] return; }
L_002153B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153C4u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002153C4u) [[unlikely]] return; }
L_002153C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153D0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002153D0u) [[unlikely]] return; }
L_002153D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153DCu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002153DCu) [[unlikely]] return; }
L_002153DC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 53u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002153F0u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002153F0u) [[unlikely]] return; }
L_002153F0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215404u); st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00215404u) [[unlikely]] return; }
L_00215404:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215410u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00215410u) [[unlikely]] return; }
L_00215410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00215430:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002110B0u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00215440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021545Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x0021545Cu) [[unlikely]] return; }
L_0021545C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[1].d[0] = c.r[1].d[0] | 2ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002154C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002154C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002154A8; } }
L_00215490:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 6;
L_002154A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00215490u | kUnwind; return; } goto L_00215490; }
L_002154C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002154C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002154E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211110u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 161u, depth); }
L_002154F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021550Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x0021550Cu) [[unlikely]] return; }
L_0021550C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215518u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215518u) [[unlikely]] return; }
L_00215518:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00215570; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021553Cu); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0021553Cu) [[unlikely]] return; }
L_0021553C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215548u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215548u) [[unlikely]] return; }
L_00215548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215554u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215554u) [[unlikely]] return; }
L_00215554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215560u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00215560u) [[unlikely]] return; }
L_00215560:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00215570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215578u); set32(c.r[5], c.r[29].w[0] + 62u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00215578u) [[unlikely]] return; }
L_00215578:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 62u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215590u); st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x00215590u) [[unlikely]] return; }
L_00215590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002155B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002155C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002155C8u) [[unlikely]] return; }
L_002155C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00215624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002155D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x002155D8u) [[unlikely]] return; }
L_002155D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 7568u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_00215624:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00215640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215668u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00215668u) [[unlikely]] return; }
L_00215668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002156C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00215678u) [[unlikely]] return; }
L_00215678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 7568u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_002156C4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002156D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x002156D4u) [[unlikely]] return; }
L_002156D4:
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 53u));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00215740:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00215860; } }
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 52u));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[6].w[0] + c.r[4].w[0]);  if (t) { goto L_00215848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002157A0u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x002157A0u) [[unlikely]] return; }
L_002157A0:
    c.f[1] = ld32((c.r[28].w[0] - 32580u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002157ACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x002157ACu) [[unlikely]] return; }
L_002157AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[20], c.f[20]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 124u), c.f[3]);
    c.facc = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.f[0] = fp::mul(c.f[1], c.f[3]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[21] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215818u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00215818u) [[unlikely]] return; }
L_00215818:
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.f[22] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215828u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00215828u) [[unlikely]] return; }
L_00215828:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215838u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00215838u) [[unlikely]] return; }
L_00215838:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[20]);  if (t) { goto L_00215860; } }
L_00215848:
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_00215860:
    set32(c.r[20], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002158F4; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215878u); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00215878u) [[unlikely]] return; }
L_00215878:
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021589Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x0021589Cu) [[unlikely]] return; }
L_0021589C:
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 53u));
    c.f[3] = ld32((c.r[19].w[0] + 28u));
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));  if (t) { goto L_002158E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002158C4u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x002158C4u) [[unlikely]] return; }
L_002158C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[20] ^ fp::kSign;  goto L_002158E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002158E4; } }
L_002158E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 4;
L_002158F4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00215920:
    set32(c.r[10], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002159C8; } }
    set32(c.r[9], ld32((c.r[5].w[0] + 116u)));
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.f[2] = ld32((c.r[28].w[0] - 32576u));
    c.f[3] = 0u;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002159B4; } }
L_00215944:
    set32(c.r[4], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[8], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[9].w[0] + c.r[8].w[0]);
    c.f[5] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[5] = fp::sub(c.f[12], c.f[5]);
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_0021599C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[3]);  if (t) { goto L_002159AC; } }
L_00215990:
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 3;
L_0021599C:
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00215990u | kUnwind; return; } goto L_00215990; } }
L_002159AC:
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002159B4:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[11].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00215944u | kUnwind; return; } goto L_00215944; }
L_002159C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002159D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[8].w[0]));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.f[20] = c.f[15];
    c.budget -= 25;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_00215A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00215A48; } }
L_00215A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215A48u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00215A48u) [[unlikely]] return; }
L_00215A48:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215A5Cu); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x00215A5Cu) [[unlikely]] return; }
L_00215A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00215AB8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215A88u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00215A88u) [[unlikely]] return; }
L_00215A88:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215A98u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00215A98u) [[unlikely]] return; }
L_00215A98:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00215AB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215AB8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00215AB8u) [[unlikely]] return; }
L_00215AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7568u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[20].w[0] + 24u), c.f[23]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 28u), c.f[22]);
    st32((c.r[20].w[0] + 32u), c.f[21]);
    st32((c.r[20].w[0] + 36u), c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[20].w[0] + 40u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[20].w[0] + 44u), c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    st8((c.r[20].w[0] + 52u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 53u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00215B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00215B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215B60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00215B60u) [[unlikely]] return; }
L_00215B60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00215B80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215B7Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00215B7Cu) [[unlikely]] return; }
L_00215B7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00215B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9664u);  c.pc = t; return; }
L_00215BB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215BCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x00215BCCu) [[unlikely]] return; }
L_00215BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215BD8u); set32(c.r[4], ld32((c.r[2].w[0] - 9664u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00215BD8u) [[unlikely]] return; }
L_00215BD8:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215BECu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215BECu) [[unlikely]] return; }
L_00215BEC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215BFCu); set32(c.r[4], c.r[4].w[0] - 9648u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x00215BFCu) [[unlikely]] return; }
L_00215BFC:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C10u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215C10u) [[unlikely]] return; }
L_00215C10:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C20u); set32(c.r[4], c.r[4].w[0] - 9626u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215C20u) [[unlikely]] return; }
L_00215C20:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C34u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215C34u) [[unlikely]] return; }
L_00215C34:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C44u); set32(c.r[4], c.r[4].w[0] - 9607u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x00215C44u) [[unlikely]] return; }
L_00215C44:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C58u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215C58u) [[unlikely]] return; }
L_00215C58:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C68u); set32(c.r[4], c.r[4].w[0] - 9590u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x00215C68u) [[unlikely]] return; }
L_00215C68:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C7Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215C7Cu) [[unlikely]] return; }
L_00215C7C:
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215C8Cu); set32(c.r[4], c.r[4].w[0] - 9573u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215C8Cu) [[unlikely]] return; }
L_00215C8C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CA0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215CA0u) [[unlikely]] return; }
L_00215CA0:
    c.f[12] = ld32((c.r[17].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CB0u); set32(c.r[4], c.r[4].w[0] - 9555u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215CB0u) [[unlikely]] return; }
L_00215CB0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CC4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215CC4u) [[unlikely]] return; }
L_00215CC4:
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CD4u); set32(c.r[4], c.r[4].w[0] - 9539u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215CD4u) [[unlikely]] return; }
L_00215CD4:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CE8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215CE8u) [[unlikely]] return; }
L_00215CE8:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215CF8u); set32(c.r[4], c.r[4].w[0] - 9529u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00215CF8u) [[unlikely]] return; }
L_00215CF8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215D0Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00215D0Cu) [[unlikely]] return; }
L_00215D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00215D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215D3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x00215D3Cu) [[unlikely]] return; }
L_00215D3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 24u));  goto L_00215D4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00215DE0; } }
L_00215D4C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 24u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00215DE0; }
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00215DDC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00215DDC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 34u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00215DDC; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00215DDC; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00215DDC; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00215DDC; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_00215DE0; }
L_00215DDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00215DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x00215E1Cu) [[unlikely]] return; }
L_00215E1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E28u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00215E28u) [[unlikely]] return; }
L_00215E28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E34u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00215E34u) [[unlikely]] return; }
L_00215E34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E40u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00215E40u) [[unlikely]] return; }
L_00215E40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E4Cu); set32(c.r[5], c.r[17].w[0] + 34u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00215E4Cu) [[unlikely]] return; }
L_00215E4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E58u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00215E58u) [[unlikely]] return; }
L_00215E58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E64u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00215E64u) [[unlikely]] return; }
L_00215E64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E70u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00215E70u) [[unlikely]] return; }
L_00215E70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215E7Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00215E7Cu) [[unlikely]] return; }
L_00215E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215E90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002110B0u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00215EA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00211110u | kUnwind; return; } [[clang::musttail]] return unit_0044(c, 161u, depth); }
L_00215EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215ECCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x00215ECCu) [[unlikely]] return; }
L_00215ECC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215ED8u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00215ED8u) [[unlikely]] return; }
L_00215ED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215EE4u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215EE4u) [[unlikely]] return; }
L_00215EE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215EF0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00215EF0u) [[unlikely]] return; }
L_00215EF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215EFCu); set32(c.r[5], c.r[17].w[0] + 34u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00215EFCu) [[unlikely]] return; }
L_00215EFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F08u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215F08u) [[unlikely]] return; }
L_00215F08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F14u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215F14u) [[unlikely]] return; }
L_00215F14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F20u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215F20u) [[unlikely]] return; }
L_00215F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F2Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00215F2Cu) [[unlikely]] return; }
L_00215F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00215F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00215F58u) [[unlikely]] return; }
L_00215F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00215F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00215F68u) [[unlikely]] return; }
L_00215F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 7456u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 13;
L_00215F9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00215FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215FD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00215FD8u) [[unlikely]] return; }
L_00215FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021601C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00215FE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00215FE8u) [[unlikely]] return; }
L_00215FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 7456u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 13;
L_0021601C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021602Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x0021602Cu) [[unlikely]] return; }
L_0021602C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 32u));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 34u));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00216090:
    set32(c.r[29], c.r[29].w[0] - 1424u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] << 3);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    set32(c.r[2], c.r[18].w[0] << 1);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[7], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[8], ld32((c.r[6].w[0] + 220u)));
    c.f[25] = c.f[12];
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 112u)));
    set32(c.r[22], ld32((c.r[8].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[8].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 92u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[30], ld32((c.r[8].w[0] + 84u)));
    set32(c.r[21], c.r[5].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[8].w[0] + 96u)));
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[8].w[0] + 116u)));
    st32((c.r[29].w[0] + 1408u), c.f[0]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 1412u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 1416u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[29].w[0] + 1392u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[29].w[0] + 1396u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 1400u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 56;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.f[20] = c.f[13];  if (t) { goto L_00216378; } }
    c.f[3] = ld32((c.r[6].w[0] + 112u));
    set32(c.r[5], c.r[29].w[0] + 1136u);
    c.f[2] = ld32((c.r[6].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.f[1] = ld32((c.r[6].w[0] + 120u));
    c.f[0] = ld32((c.r[6].w[0] + 124u));
    st32((c.r[29].w[0] + 1136u), c.f[3]);
    st32((c.r[29].w[0] + 1140u), c.f[2]);
    st32((c.r[29].w[0] + 1144u), c.f[1]);
    st32((c.r[29].w[0] + 1148u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 128u));
    c.f[2] = ld32((c.r[6].w[0] + 132u));
    c.f[1] = ld32((c.r[6].w[0] + 136u));
    c.f[0] = ld32((c.r[6].w[0] + 140u));
    st32((c.r[29].w[0] + 1152u), c.f[3]);
    st32((c.r[29].w[0] + 1156u), c.f[2]);
    st32((c.r[29].w[0] + 1160u), c.f[1]);
    st32((c.r[29].w[0] + 1164u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 144u));
    c.f[2] = ld32((c.r[6].w[0] + 148u));
    c.f[1] = ld32((c.r[6].w[0] + 152u));
    c.f[0] = ld32((c.r[6].w[0] + 156u));
    st32((c.r[29].w[0] + 1168u), c.f[3]);
    st32((c.r[29].w[0] + 1172u), c.f[2]);
    st32((c.r[29].w[0] + 1176u), c.f[1]);
    st32((c.r[29].w[0] + 1180u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 160u));
    st32((c.r[29].w[0] + 1184u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 164u));
    st32((c.r[29].w[0] + 1188u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 168u));
    st32((c.r[29].w[0] + 1192u), c.f[0]);
    c.f[21] = ld32((c.r[6].w[0] + 172u));
    set32(c.r[6], c.r[29].w[0] + 1408u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216200u); st32((c.r[29].w[0] + 1196u), c.f[21]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00216200u) [[unlikely]] return; }
L_00216200:
    c.f[0] = ld32((c.r[29].w[0] + 1224u));
    set32(c.r[4], c.r[29].w[0] + 1360u);
    c.f[4] = ld32((c.r[29].w[0] + 1220u));
    set32(c.r[5], c.r[29].w[0] + 1136u);
    c.f[3] = ld32((c.r[29].w[0] + 1216u));
    set32(c.r[6], c.r[29].w[0] + 1392u);
    c.f[5] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1192u));
    c.f[2] = ld32((c.r[29].w[0] + 1184u));
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    c.f[0] = fp::add(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 1416u), c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[3]);
    c.f[2] = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 1188u));
    st32((c.r[29].w[0] + 1408u), c.f[2]);
    c.f[0] = fp::add(c.f[4], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021624Cu); st32((c.r[29].w[0] + 1412u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0021624Cu) [[unlikely]] return; }
L_0021624C:
    c.f[2] = ld32((c.r[29].w[0] + 1360u));
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.f[1] = ld32((c.r[29].w[0] + 1364u));
    set32(c.r[5], c.r[29].w[0] + 1008u);
    c.f[0] = ld32((c.r[29].w[0] + 1368u));
    st32((c.r[29].w[0] + 1392u), c.f[2]);
    st32((c.r[29].w[0] + 1396u), c.f[1]);
    st32((c.r[29].w[0] + 1400u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 1072u), c.f[3]);
    st32((c.r[29].w[0] + 1076u), c.f[2]);
    st32((c.r[29].w[0] + 1080u), c.f[1]);
    st32((c.r[29].w[0] + 1084u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 1088u), c.f[3]);
    st32((c.r[29].w[0] + 1092u), c.f[2]);
    st32((c.r[29].w[0] + 1096u), c.f[1]);
    st32((c.r[29].w[0] + 1100u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 1104u), c.f[3]);
    st32((c.r[29].w[0] + 1108u), c.f[2]);
    st32((c.r[29].w[0] + 1112u), c.f[1]);
    st32((c.r[29].w[0] + 1116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 1120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 1124u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 1128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 1132u), c.f[0]);
    st32((c.r[29].w[0] + 1020u), 0u);
    st32((c.r[29].w[0] + 1036u), 0u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216300u); st32((c.r[29].w[0] + 1052u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x00216300u) [[unlikely]] return; }
L_00216300:
    c.f[21] = ld32((c.r[29].w[0] + 1068u));
    set32(c.r[4], c.r[29].w[0] + 1200u);
    set32(c.r[5], c.r[29].w[0] + 1008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216314u); set32(c.r[6], c.r[29].w[0] + 1408u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00216314u) [[unlikely]] return; }
L_00216314:
    c.f[0] = ld32((c.r[29].w[0] + 1208u));
    set32(c.r[4], c.r[29].w[0] + 1344u);
    c.f[4] = ld32((c.r[29].w[0] + 1204u));
    set32(c.r[5], c.r[29].w[0] + 1008u);
    c.f[3] = ld32((c.r[29].w[0] + 1200u));
    set32(c.r[6], c.r[29].w[0] + 1392u);
    c.f[5] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1064u));
    c.f[2] = ld32((c.r[29].w[0] + 1056u));
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    c.f[0] = fp::add(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 1416u), c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[3]);
    c.f[2] = fp::add(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 1060u));
    st32((c.r[29].w[0] + 1408u), c.f[2]);
    c.f[0] = fp::add(c.f[4], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216360u); st32((c.r[29].w[0] + 1412u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00216360u) [[unlikely]] return; }
L_00216360:
    c.f[2] = ld32((c.r[29].w[0] + 1344u));
    c.f[1] = ld32((c.r[29].w[0] + 1348u));
    c.f[0] = ld32((c.r[29].w[0] + 1352u));
    st32((c.r[29].w[0] + 1392u), c.f[2]);
    st32((c.r[29].w[0] + 1396u), c.f[1]);
    st32((c.r[29].w[0] + 1400u), c.f[0]);
    c.budget -= 6;
L_00216378:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00216390u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00216390u) [[unlikely]] return; }
L_00216390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[3].w[0] - 12480u));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_00216984; }
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[2] = ld32((c.r[29].w[0] + 1392u));
    c.f[1] = ld32((c.r[29].w[0] + 1396u));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1400u));
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.f[24] = fp::sub(c.f[25], c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[17], ld32((c.r[17].w[0] + 116u)));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[21] = fp::sqrt(c.f[21]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021641Cu);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0021641Cu) [[unlikely]] return; }
L_0021641C:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021643Cu); c.f[23] = fp::mul(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0021643Cu) [[unlikely]] return; }
L_0021643C:
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = ld32((c.r[28].w[0] - 32580u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216450u); c.f[22] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216450u) [[unlikely]] return; }
L_00216450:
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216460u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00216460u) [[unlikely]] return; }
L_00216460:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021646Cu); c.f[26] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0021646Cu) [[unlikely]] return; }
L_0021646C:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216478u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00216478u) [[unlikely]] return; }
L_00216478:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216484u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00216484u) [[unlikely]] return; }
L_00216484:
    c.f[1] = fp::mul(c.f[26], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 960u);
    set32(c.r[5], c.r[29].w[0] + 1328u);
    set32(c.r[6], c.r[29].w[0] + 1312u);
    set32(c.r[7], c.r[29].w[0] + 1296u);
    st32((c.r[29].w[0] + 1304u), 0u);
    st32((c.r[29].w[0] + 1312u), 0u);
    st32((c.r[29].w[0] + 1316u), 0u);
    c.f[0] = fp::mul(c.f[26], c.f[20]);
    st32((c.r[29].w[0] + 1328u), 0u);
    st32((c.r[29].w[0] + 1332u), 0u);
    c.f[20] = ld32((c.r[29].w[0] + 1392u));
    st32((c.r[29].w[0] + 1384u), c.f[22]);
    c.f[22] = ld32((c.r[29].w[0] + 1396u));
    st32((c.r[29].w[0] + 1380u), c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 1296u), c.f[0]);
    c.f[0] = c.f[22] ^ fp::kSign;
    st32((c.r[29].w[0] + 1376u), c.f[1]);
    st32((c.r[29].w[0] + 1300u), c.f[0]);
    st32((c.r[29].w[0] + 1320u), c.f[22]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002164E0u); st32((c.r[29].w[0] + 1336u), c.f[20]);  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027DBA0u; return; } if (c.pc != 0x002164E0u) [[unlikely]] return; }
L_002164E0:
    c.f[5] = ld32((c.r[29].w[0] + 1380u));
    c.f[4] = ld32((c.r[29].w[0] + 1400u));
    c.f[3] = ld32((c.r[29].w[0] + 1384u));
    c.f[2] = ld32((c.r[29].w[0] + 1396u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = ld32((c.r[29].w[0] + 1392u));
    c.f[0] = ld32((c.r[29].w[0] + 1376u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[0] = c.f[20] ^ fp::kSign;
    c.f[3] = 0u;
    c.facc = fp::mul(c.f[6], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ld128((c.r[2].w[0] + 15184u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[2].w[0] + 15200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 15204u));
    st32((c.r[29].w[0] + 928u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] + 15208u));
    st32((c.r[29].w[0] + 932u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 15212u));
    st32((c.r[29].w[0] + 936u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 33;
L_00216564:
    c.f[1] = ld32((c.r[2].w[0] + 15216u));
    st32((c.r[29].w[0] + 940u), c.f[0]);
    c.budget -= 2;
L_0021656C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 15220u));
    st32((c.r[29].w[0] + 944u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 15224u));
    st32((c.r[29].w[0] + 948u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 15228u));
    st32((c.r[29].w[0] + 952u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 956u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 10280u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = ld32((c.r[3].w[0] - 10280u));  if (t) { goto L_0021665C; } }
    c.f[1] = fp::mul(c.f[22], c.f[22]);
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.f[0] = ld32((c.r[29].w[0] + 1400u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002165D8u);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x002165D8u) [[unlikely]] return; }
L_002165D8:
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002165E8u); set32(c.r[6], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_005F(c, 78u, depth + 1u); else { c.pc = 0x0027D560u; return; } if (c.pc != 0x002165E8u) [[unlikely]] return; }
L_002165E8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002165F8u); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x002165F8u) [[unlikely]] return; }
L_002165F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 720u);
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021661Cu);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x0021661Cu) [[unlikely]] return; }
L_0021661C:
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021662Cu); set32(c.r[6], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_005F(c, 78u, depth + 1u); else { c.pc = 0x0027D560u; return; } if (c.pc != 0x0021662Cu) [[unlikely]] return; }
L_0021662C:
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00216638:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00216638u | kUnwind; return; } goto L_00216638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[23];  if (t) { goto L_00216794; } }
L_0021665C:
    c.f[0] = c.f[4] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 1400u));  goto L_00216720; }
    c.f[1] = fp::mul(c.f[22], c.f[22]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.f[0] = ld32((c.r[29].w[0] + 1400u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021669Cu);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x0021669Cu) [[unlikely]] return; }
L_0021669C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002166ACu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_005F(c, 77u, depth + 1u); else { c.pc = 0x0027D3C0u; return; } if (c.pc != 0x002166ACu) [[unlikely]] return; }
L_002166AC:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002166BCu); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x002166BCu) [[unlikely]] return; }
L_002166BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 480u);
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002166E0u);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x002166E0u) [[unlikely]] return; }
L_002166E0:
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002166F0u); set32(c.r[6], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_005F(c, 77u, depth + 1u); else { c.pc = 0x0027D3C0u; return; } if (c.pc != 0x002166F0u) [[unlikely]] return; }
L_002166F0:
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_002166FC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002166FCu | kUnwind; return; } goto L_002166FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00216790; } }
L_00216720:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00216790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 1248u), c.f[3]);
    st32((c.r[29].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1252u), c.f[3]);
    set32(c.r[5], c.r[29].w[0] + 1280u);
    st32((c.r[29].w[0] + 1264u), c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 1264u);
    st32((c.r[29].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 1248u);
    st32((c.r[29].w[0] + 1280u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1272u), c.f[3]);
    st32((c.r[29].w[0] + 1284u), c.f[3]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216768u); st32((c.r[29].w[0] + 1288u), c.f[3]);  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027DBA0u; return; } if (c.pc != 0x00216768u) [[unlikely]] return; }
L_00216768:
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00216774:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00216774u | kUnwind; return; } goto L_00216774; } }
L_00216790:
    c.f[12] = c.f[23];
    c.budget -= 1;
L_00216794:
    set32(c.r[4], c.r[29].w[0] + 864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002167A0u); set32(c.r[5], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x002167A0u) [[unlikely]] return; }
L_002167A0:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002167B0u); set32(c.r[6], c.r[29].w[0] + 1376u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002167B0u) [[unlikely]] return; }
L_002167B0:
    c.f[0] = ld32((c.r[29].w[0] + 1232u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1236u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1240u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002167D0u); st32((c.r[16].w[0] + 12u), c.f[24]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x002167D0u) [[unlikely]] return; }
L_002167D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[3] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 44u));
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 1408u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1412u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1416u));
    c.budget -= 25;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00216874; } }
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00216874; } }
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 13;
L_00216874:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002168A4; } }
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002168A4; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[23].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 7;
L_002168A4:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);  goto L_002168D8; }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002168D4; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[30].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 7;
L_002168D4:
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.budget -= 1;
L_002168D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);  goto L_00216924; }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00216920; } }
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 13;
L_00216920:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.budget -= 1;
L_00216924:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 12u));  goto L_0021696C; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00216968; } }
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_00216968:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0021696C:
    c.f[0] = fp::sub(c.f[25], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216980u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 41u, depth + 1u); else { c.pc = 0x001F8600u; return; } if (c.pc != 0x00216980u) [[unlikely]] return; }
L_00216980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_00216984:
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1424u);  c.pc = t; return; }
L_002169D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    c.f[22] = c.f[12];
    set32(c.r[6], ld32((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 112u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 24u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = c.f[13];  if (t) { goto L_00216B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216A40u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216A40u) [[unlikely]] return; }
L_00216A40:
    c.f[1] = ld32((c.r[19].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld16((c.r[19].w[0] + 34u));  goto L_00216A5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00216B4C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 34u));
    c.budget -= 1;
L_00216A5C:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216A70u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216A70u) [[unlikely]] return; }
L_00216A70:
    c.f[12] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[12], c.f[0]);  goto L_00216AA0; }
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00216AB8; } }
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 1;
L_00216AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_00216AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216AC8u); c.r[16].d[0] = c.r[3].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x00216AC8u) [[unlikely]] return; }
L_00216AC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = ld16((c.r[19].w[0] + 32u));  goto L_00216AEC; }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = ld16((c.r[19].w[0] + 32u));
    c.budget -= 3;
L_00216AEC:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[3].d[0] & 65535ull;  goto L_00216B08; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00216B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00216B38; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00216B14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00216B30u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00216B30u) [[unlikely]] return; }
L_00216B30:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00216B38:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00216B14u | kUnwind; return; } goto L_00216B14; }
L_00216B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00216B4C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00216B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00216B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00216BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7344u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00216BE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00216BE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216BE0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00216BE0u) [[unlikely]] return; }
L_00216BE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00216C00; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216BFCu); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00216BFCu) [[unlikely]] return; }
L_00216BFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00216C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00216C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9488u);  c.pc = t; return; }
L_00216C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216C4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x00219CA0u; return; } if (c.pc != 0x00216C4Cu) [[unlikely]] return; }
L_00216C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216C58u); set32(c.r[4], ld32((c.r[2].w[0] - 9488u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00216C58u) [[unlikely]] return; }
L_00216C58:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216C6Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00216C6Cu) [[unlikely]] return; }
L_00216C6C:
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216C7Cu); set32(c.r[4], c.r[4].w[0] - 9472u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00216C7Cu) [[unlikely]] return; }
L_00216C7C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216C90u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00216C90u) [[unlikely]] return; }
L_00216C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00216CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216CCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 202u, depth + 1u); else { c.pc = 0x00219D20u; return; } if (c.pc != 0x00216CCCu) [[unlikely]] return; }
L_00216CCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 96u));  goto L_00216CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00216CF0; } }
L_00216CDC:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00216CF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00216CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00216D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216D2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x00219DA0u; return; } if (c.pc != 0x00216D2Cu) [[unlikely]] return; }
L_00216D2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216D38u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00216D38u) [[unlikely]] return; }
L_00216D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00216D50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 207u, depth); }
L_00216D60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 208u, depth); }
L_00216D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216D8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 211u, depth + 1u); else { c.pc = 0x00219E40u; return; } if (c.pc != 0x00216D8Cu) [[unlikely]] return; }
L_00216D8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216D98u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00216D98u) [[unlikely]] return; }
L_00216D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00216DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216DC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00216DC8u) [[unlikely]] return; }
L_00216DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00216DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x00216DD8u) [[unlikely]] return; }
L_00216DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7344u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 4;
L_00216DE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00216E00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 214u, depth); }
L_00216E10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216E38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00216E38u) [[unlikely]] return; }
L_00216E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00216E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x00216E48u) [[unlikely]] return; }
L_00216E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7344u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 4;
L_00216E58:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216E68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 218u, depth + 1u); else { c.pc = 0x00219F40u; return; } if (c.pc != 0x00216E68u) [[unlikely]] return; }
L_00216E68:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00216E90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216ECCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216ECCu) [[unlikely]] return; }
L_00216ECC:
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216ED8u); c.f[23] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216ED8u) [[unlikely]] return; }
L_00216ED8:
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216EE4u); c.f[21] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00216EE4u) [[unlikely]] return; }
L_00216EE4:
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216EF4u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00216EF4u) [[unlikely]] return; }
L_00216EF4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216F00u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00216F00u) [[unlikely]] return; }
L_00216F00:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216F0Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00216F0Cu) [[unlikely]] return; }
L_00216F0C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216F18u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00216F18u) [[unlikely]] return; }
L_00216F18:
    c.f[1] = fp::mul(c.f[23], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[21], c.f[1]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    st32((c.r[17].w[0]), c.f[2]);
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[20] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216F48u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00216F48u) [[unlikely]] return; }
L_00216F48:
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[5] = ld32((c.r[29].w[0] + 104u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[5] = fp::mul(c.f[20], c.f[5]);
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00216F94u); st32((c.r[17].w[0] + 8u), c.f[2]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00216F94u) [[unlikely]] return; }
L_00216F94:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00216FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[20] = c.f[12];
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.f[12] = c.f[13];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[14];
    c.f[14] = c.f[15];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[15] = c.f[16];
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.f[16] = c.f[17];
    c.f[17] = c.f[18];
    c.f[18] = c.f[19];
    c.f[19] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[29].w[0]), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021703Cu); st32((c.r[29].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0046(c, 229u, depth + 1u); else { c.pc = 0x0021A1F0u; return; } if (c.pc != 0x0021703Cu) [[unlikely]] return; }
L_0021703C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7344u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00217070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021711C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7232u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00217100; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] - 13680u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002170F4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002170F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002170C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002170C8u) [[unlikely]] return; }
L_002170C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002170D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002170D8u) [[unlikely]] return; }
L_002170D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002170F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002170F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002170F4u) [[unlikely]] return; }
L_002170F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002170F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217100u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00217100u) [[unlikely]] return; }
L_00217100:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00217120; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021711Cu); set32(c.r[5], 0u + 208u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021711Cu) [[unlikely]] return; }
L_0021711C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00217120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9440u);  c.pc = t; return; }
L_00217150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021716Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 152u, depth + 1u); else { c.pc = 0x001FDAE0u; return; } if (c.pc != 0x0021716Cu) [[unlikely]] return; }
L_0021716C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217178u); set32(c.r[4], ld32((c.r[2].w[0] - 9440u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00217178u) [[unlikely]] return; }
L_00217178:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021718Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0021718Cu) [[unlikely]] return; }
L_0021718C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002171A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002171A4; } }
L_002171A0:
    set32(c.r[5], c.r[5].w[0] - 9408u);
    c.budget -= 1;
L_002171A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002171B0u); set32(c.r[4], c.r[4].w[0] - 9424u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x002171B0u) [[unlikely]] return; }
L_002171B0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002171C4u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002171C4u) [[unlikely]] return; }
L_002171C4:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002171D4u); set32(c.r[4], c.r[4].w[0] - 9403u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002171D4u) [[unlikely]] return; }
L_002171D4:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002171E8u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002171E8u) [[unlikely]] return; }
L_002171E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021721Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 167u, depth + 1u); else { c.pc = 0x001FDC20u; return; } if (c.pc != 0x0021721Cu) [[unlikely]] return; }
L_0021721C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_0021722C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002172A4; } }
L_0021722C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00217240; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002172A4; }
L_00217240:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00217254; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00217280; } }
L_00217254:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_00217290; }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021728C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00217278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00217278u) [[unlikely]] return; }
L_00217278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021728C; } }
L_00217280:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002172A4; } }
L_0021728C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_00217290:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002172A4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002172A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002172C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002172DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 171u, depth + 1u); else { c.pc = 0x001FDDA0u; return; } if (c.pc != 0x002172DCu) [[unlikely]] return; }
L_002172DC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002172F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002172F0u) [[unlikely]] return; }
L_002172F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002172FCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002172FCu) [[unlikely]] return; }
L_002172FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217310:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDE40u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 179u, depth); }
L_00217320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021733Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 182u, depth + 1u); else { c.pc = 0x001FDEA0u; return; } if (c.pc != 0x0021733Cu) [[unlikely]] return; }
L_0021733C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x00217344u) [[unlikely]] return; }
L_00217344:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00217374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021737Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 192u, depth + 1u); else { c.pc = 0x001FDF70u; return; } if (c.pc != 0x0021737Cu) [[unlikely]] return; }
L_0021737C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217384u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00217384u) [[unlikely]] return; }
L_00217384:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217390u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00217390u) [[unlikely]] return; }
L_00217390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002173B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002173C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002173C4u) [[unlikely]] return; }
L_002173C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002173F4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002173F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0045(c, 360u, depth + 1u); else { c.pc = 0x00217C00u; return; } if (c.pc != 0x002173F0u) [[unlikely]] return; }
L_002173F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002173F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00217400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021741Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 200u, depth + 1u); else { c.pc = 0x001FE000u; return; } if (c.pc != 0x0021741Cu) [[unlikely]] return; }
L_0021741C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00217438; } }
    breakpoint(c, 0x00217434u);
    c.budget -= 1;
L_00217438:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0021745C; } }
L_0021744C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0021745C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00217464; } }
L_0021745C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021744Cu | kUnwind; return; } goto L_0021744C; }
L_00217464:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002174BC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0021747C; } }
    breakpoint(c, 0x00217478u);
    c.budget -= 1;
L_0021747C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002174A4; } }
L_00217490:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_002174A4; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002174B0; } }
L_002174A4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00217490u | kUnwind; return; } goto L_00217490; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002174B0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 44u), c.r[4].w[0]);  goto L_002174BC; }
    st32((c.r[7].w[0] + 44u), c.r[8].w[0]);
    c.budget -= 1;
L_002174BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002174D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002174F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002174F8u) [[unlikely]] return; }
L_002174F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_00217530; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217528u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0045(c, 360u, depth + 1u); else { c.pc = 0x00217C00u; return; } if (c.pc != 0x00217528u) [[unlikely]] return; }
L_00217528:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00217530:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021753Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 206u, depth + 1u); else { c.pc = 0x001FE150u; return; } if (c.pc != 0x0021753Cu) [[unlikely]] return; }
L_0021753C:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217560:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 112u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217580u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x00217580u) [[unlikely]] return; }
L_00217580:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_002175A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021759Cu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x0021759Cu) [[unlikely]] return; }
L_0021759C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_00217848; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_002175A8:
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_002175AC:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002175ACu | kUnwind; return; } goto L_002175AC; } }
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 316u), 0u);
    st32((c.r[29].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_00217630; }
    set32(c.r[6], c.r[2].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_002175F0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002175F0u | kUnwind; return; } goto L_002175F0; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 348u), c.f[0]);  if (t) { goto L_00217638; } }
L_00217630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217638u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x00217638u) [[unlikely]] return; }
L_00217638:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 224u), c.f[3]);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 36;
L_002176C8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002176C8u | kUnwind; return; } goto L_002176C8; } }
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002176FCu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002176FCu) [[unlikely]] return; }
L_002176FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217704u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00217704u) [[unlikely]] return; }
L_00217704:
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217784u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00217784u) [[unlikely]] return; }
L_00217784:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 15;
L_002177C0:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002177C0u | kUnwind; return; } goto L_002177C0; } }
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 192u), c.f[2]);
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    c.budget -= 11;
L_00217808:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00217808u | kUnwind; return; } goto L_00217808; } }
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[16].w[0] + 128u), c.f[2]);
    st32((c.r[16].w[0] + 132u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
L_00217848:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00217864; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00217860u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00217860u) [[unlikely]] return; }
L_00217860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00217864:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00217870:
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.f[6] = fp::sub(c.f[2], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 28u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 68u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = fp::sub(c.f[4], c.f[3]);
    c.f[4] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = ld32((c.r[4].w[0] + 60u));
    c.f[5] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[4] = fp::mul(c.f[0], c.f[6]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[0] = fp::mul(c.f[6], c.f[5]);
    c.f[1] = fp::add(c.f[0], c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[3]);
    c.f[3] = fp::add(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = fp::mul(c.f[6], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 54;
    { st32((c.r[3].w[0] + 8u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE230u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 214u, depth); }
L_00217950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[9].d[0] = c.r[7].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[9].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], c.r[2].w[0] + c.r[9].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[9].w[0] << 3);
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    c.f[6] = ld32((c.r[4].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] - c.r[9].w[0]);
    c.f[7] = ld32((c.r[4].w[0] + 64u));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[9] = ld32((c.r[3].w[0]));
    set32(c.r[8], c.r[2].w[0] << 2);
    c.f[10] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], ld32((c.r[6].w[0] + 112u)));
    c.f[8] = ld32((c.r[4].w[0] + 68u));
    c.f[11] = ld32((c.r[3].w[0] + 8u));
    c.f[15] = fp::sub(c.f[9], c.f[6]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.f[14] = fp::sub(c.f[10], c.f[7]);
    c.f[13] = fp::sub(c.f[11], c.f[8]);
    c.facc = fp::mul(c.f[15], c.f[15]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[14]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    c.f[5] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    c.f[2] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[8], 0u + 1u);  if (t) { goto L_002179E4; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002179E4:
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.f[4] = ld32((c.r[2].w[0]));  goto L_00217A04; }
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00217BBC; }
    c.f[4] = ld32((c.r[2].w[0]));
    c.budget -= 1;
L_00217A04:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::mul(c.f[4], c.f[15]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[14]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[13]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_00217A34; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00217BB8; } }
L_00217A34:
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_div(c, 0u, c.f[0], c.f[13]);
    c.f[1] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[3]);
    c.f[3] = fp::mul(c.f[0], c.f[4]);
    c.f[3] = fp::add(c.f[9], c.f[3]);
    c.f[2] = fp::add(c.f[10], c.f[2]);
    c.f[1] = fp::add(c.f[11], c.f[1]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[2] = fp::sub(c.f[2], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[8]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (t) { goto L_00217A84; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00217BB8; } }
L_00217A84:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = fp::sub(c.f[5], c.f[1]);  if (t) { goto L_00217AF0; } }
    fpu_div(c, 5u, c.f[1], c.f[13]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[9].d[0] = c.r[4].d[0] | 23007ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[8].w[0];
    st32((c.r[29].w[0] + 60u), c.f[5]);
    set32(c.r[8], ld32((c.r[29].w[0] + 60u)));
    c.f[3] = fp::mul(c.f[1], c.f[5]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[2] = 0u;
    c.f[4] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));  if (t) { goto L_00217B50; } }
L_00217AF0:
    fpu_div(c, 5u, c.f[1], c.f[13]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[9].d[0] = c.r[4].d[0] | 23007ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[8].w[0];
    st32((c.r[29].w[0] + 52u), c.f[5]);
    set32(c.r[8], ld32((c.r[29].w[0] + 52u)));
    c.f[3] = fp::mul(c.f[1], c.f[5]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[2] = 0u;
    c.f[4] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    c.budget -= 24;
L_00217B50:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00217BB8; } }
    c.f[1] = fp::add(c.f[12], c.f[0]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = 0u;
    c.facc = fp::add(c.f[5], c.f[1]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[5], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.facc = fp::add(c.f[5], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[3]);
    st32((c.r[17].w[0] + 28u), c.f[6]);
    c.budget -= 21;
L_00217BB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00217BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217BC4u);  if (depth < kMaxDepth) unit_003F(c, 217u, depth + 1u); else { c.pc = 0x001FE2F0u; return; } if (c.pc != 0x00217BC4u) [[unlikely]] return; }
L_00217BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00217BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00217BE4; } }
L_00217BD4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00217BDC; }
L_00217BDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_00217BE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217C24u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_003F(c, 219u, depth + 1u); else { c.pc = 0x001FE340u; return; } if (c.pc != 0x00217C24u) [[unlikely]] return; }
L_00217C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 7232u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_00217C8C; } }
    st32((c.r[16].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_00217C8C:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 15136u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 196u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 14;
L_00217CC4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00217CC4u | kUnwind; return; } goto L_00217CC4; } }
    set32(c.r[5], c.r[16].w[0] + 144u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00217CEC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00217CECu | kUnwind; return; } goto L_00217CEC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 204u), c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00217D8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 7136u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00217D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217D70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00217D70u) [[unlikely]] return; }
L_00217D70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00217D90; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217D8Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00217D8Cu) [[unlikely]] return; }
L_00217D8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00217D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9368u);  c.pc = t; return; }
L_00217DC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217DDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00206DB0u; return; } if (c.pc != 0x00217DDCu) [[unlikely]] return; }
L_00217DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217DE8u); set32(c.r[4], ld32((c.r[2].w[0] - 9368u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00217DE8u) [[unlikely]] return; }
L_00217DE8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217DFCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00217DFCu) [[unlikely]] return; }
L_00217DFC:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217E0Cu); set32(c.r[4], c.r[4].w[0] - 9360u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00217E0Cu) [[unlikely]] return; }
L_00217E0C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217E20u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00217E20u) [[unlikely]] return; }
L_00217E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00217E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217E5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 388u, depth + 1u); else { c.pc = 0x00206ED0u; return; } if (c.pc != 0x00217E5Cu) [[unlikely]] return; }
L_00217E5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 48u));  goto L_00217E6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00217E80; } }
L_00217E6C:
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00217E80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00217E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217EBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 391u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x00217EBCu) [[unlikely]] return; }
L_00217EBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217EC8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00217EC8u) [[unlikely]] return; }
L_00217EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217EE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207040u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 398u, depth); }
L_00217EF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207050u | kUnwind; return; } [[clang::musttail]] return unit_0041(c, 399u, depth); }
L_00217F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217F1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 402u, depth + 1u); else { c.pc = 0x00207090u; return; } if (c.pc != 0x00217F1Cu) [[unlikely]] return; }
L_00217F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217F28u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00217F28u) [[unlikely]] return; }
L_00217F28:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 32584u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00217F54; }
    set32(c.r[3], 0u + 10000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00217F64; } }
L_00217F54:
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00217F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00217F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217F98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00217F98u) [[unlikely]] return; }
L_00217F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00217FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00217FA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 415u, depth + 1u); else { c.pc = 0x00207240u; return; } if (c.pc != 0x00217FA8u) [[unlikely]] return; }
L_00217FA8:
    set32(c.r[2], 0u + 10000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 7136u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 10;
L_00217FD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00217FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0046(c, 1u, depth);
}

}
