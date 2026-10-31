#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CE[4096] = {
    1, 2, 3, 4, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 307,
    0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0,
    0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
};

void unit_00CE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00438000;
    case 2u: goto L_00438004;
    case 3u: goto L_00438008;
    case 4u: goto L_0043800C;
    case 5u: goto L_00438018;
    case 6u: goto L_00438020;
    case 7u: goto L_00438024;
    case 8u: goto L_00438044;
    case 9u: goto L_00438070;
    case 10u: goto L_0043809C;
    case 11u: goto L_004380F0;
    case 12u: goto L_00438108;
    case 13u: goto L_0043811C;
    case 14u: goto L_00438130;
    case 15u: goto L_0043814C;
    case 16u: goto L_00438158;
    case 17u: goto L_0043816C;
    case 18u: goto L_00438180;
    case 19u: goto L_00438198;
    case 20u: goto L_00438220;
    case 21u: goto L_00438254;
    case 22u: goto L_0043826C;
    case 23u: goto L_00438290;
    case 24u: goto L_004382D0;
    case 25u: goto L_004382E0;
    case 26u: goto L_00438304;
    case 27u: goto L_00438320;
    case 28u: goto L_00438384;
    case 29u: goto L_00438390;
    case 30u: goto L_004383C0;
    case 31u: goto L_004383CC;
    case 32u: goto L_004383EC;
    case 33u: goto L_00438478;
    case 34u: goto L_00438484;
    case 35u: goto L_004384A8;
    case 36u: goto L_004384B4;
    case 37u: goto L_004384C8;
    case 38u: goto L_004384EC;
    case 39u: goto L_004384F8;
    case 40u: goto L_00438514;
    case 41u: goto L_00438520;
    case 42u: goto L_00438548;
    case 43u: goto L_00438554;
    case 44u: goto L_00438590;
    case 45u: goto L_004385BC;
    case 46u: goto L_004385C8;
    case 47u: goto L_004385FC;
    case 48u: goto L_00438608;
    case 49u: goto L_00438658;
    case 50u: goto L_00438674;
    case 51u: goto L_00438690;
    case 52u: goto L_0043869C;
    case 53u: goto L_00438728;
    case 54u: goto L_00438734;
    case 55u: goto L_00438794;
    case 56u: goto L_004387B0;
    case 57u: goto L_004387D4;
    case 58u: goto L_004387E0;
    case 59u: goto L_004387EC;
    case 60u: goto L_004387F4;
    case 61u: goto L_00438810;
    case 62u: goto L_00438828;
    case 63u: goto L_00438838;
    case 64u: goto L_0043885C;
    case 65u: goto L_00438870;
    case 66u: goto L_0043887C;
    case 67u: goto L_0043888C;
    case 68u: goto L_0043889C;
    case 69u: goto L_004388C0;
    case 70u: goto L_004388D0;
    case 71u: goto L_004388F0;
    case 72u: goto L_0043892C;
    case 73u: goto L_00438934;
    case 74u: goto L_00438960;
    case 75u: goto L_004389D0;
    case 76u: goto L_004389D8;
    case 77u: goto L_00438A28;
    case 78u: goto L_00438A54;
    case 79u: goto L_00438A7C;
    case 80u: goto L_00438AA8;
    case 81u: goto L_00438AE4;
    case 82u: goto L_00438B10;
    case 83u: goto L_00438B70;
    case 84u: goto L_00438B80;
    case 85u: goto L_00438BAC;
    case 86u: goto L_00438BE0;
    case 87u: goto L_00438C08;
    case 88u: goto L_00438C34;
    case 89u: goto L_00438C5C;
    case 90u: goto L_00438C88;
    case 91u: goto L_00438CAC;
    case 92u: goto L_00438CD8;
    case 93u: goto L_00438D50;
    case 94u: goto L_00438D6C;
    case 95u: goto L_00438DA0;
    case 96u: goto L_00438DCC;
    case 97u: goto L_00438E1C;
    case 98u: goto L_00438E38;
    case 99u: goto L_00438E70;
    case 100u: goto L_00438E9C;
    case 101u: goto L_00438EF4;
    case 102u: goto L_00438F10;
    case 103u: goto L_00438F40;
    case 104u: goto L_00438F64;
    case 105u: goto L_00438F80;
    case 106u: goto L_00438F98;
    case 107u: goto L_00438FB0;
    case 108u: goto L_00438FE4;
    case 109u: goto L_00439024;
    case 110u: goto L_00439050;
    case 111u: goto L_00439060;
    case 112u: goto L_00439070;
    case 113u: goto L_00439080;
    case 114u: goto L_004390C0;
    case 115u: goto L_004390DC;
    case 116u: goto L_00439100;
    case 117u: goto L_0043912C;
    case 118u: goto L_00439144;
    case 119u: goto L_0043914C;
    case 120u: goto L_00439160;
    case 121u: goto L_0043918C;
    case 122u: goto L_004391A0;
    case 123u: goto L_004391E0;
    case 124u: goto L_004391F8;
    case 125u: goto L_00439200;
    case 126u: goto L_00439218;
    case 127u: goto L_00439230;
    case 128u: goto L_0043925C;
    case 129u: goto L_00439264;
    case 130u: goto L_00439270;
    case 131u: goto L_0043927C;
    case 132u: goto L_004392A0;
    case 133u: goto L_004392D8;
    case 134u: goto L_004392E0;
    case 135u: goto L_00439304;
    case 136u: goto L_00439330;
    case 137u: goto L_00439370;
    case 138u: goto L_004393A4;
    case 139u: goto L_004393B4;
    case 140u: goto L_004393C0;
    case 141u: goto L_004393CC;
    case 142u: goto L_004393F8;
    case 143u: goto L_00439404;
    case 144u: goto L_00439430;
    case 145u: goto L_0043943C;
    case 146u: goto L_00439468;
    case 147u: goto L_00439474;
    case 148u: goto L_004394A0;
    case 149u: goto L_004394AC;
    case 150u: goto L_004394D8;
    case 151u: goto L_004394EC;
    case 152u: goto L_00439508;
    case 153u: goto L_0043951C;
    case 154u: goto L_00439528;
    case 155u: goto L_00439538;
    case 156u: goto L_00439548;
    case 157u: goto L_0043955C;
    case 158u: goto L_00439570;
    case 159u: goto L_0043957C;
    case 160u: goto L_0043958C;
    case 161u: goto L_00439598;
    case 162u: goto L_004395A4;
    case 163u: goto L_004395D0;
    case 164u: goto L_004395E0;
    case 165u: goto L_004395FC;
    case 166u: goto L_00439610;
    case 167u: goto L_00439620;
    case 168u: goto L_00439634;
    case 169u: goto L_0043963C;
    case 170u: goto L_00439644;
    case 171u: goto L_0043964C;
    case 172u: goto L_0043965C;
    case 173u: goto L_00439670;
    case 174u: goto L_004396A0;
    case 175u: goto L_004396CC;
    case 176u: goto L_004396E8;
    case 177u: goto L_004396F0;
    case 178u: goto L_004396F8;
    case 179u: goto L_00439718;
    case 180u: goto L_00439730;
    case 181u: goto L_00439758;
    case 182u: goto L_00439768;
    case 183u: goto L_004397AC;
    case 184u: goto L_004397C8;
    case 185u: goto L_004397E0;
    case 186u: goto L_00439838;
    case 187u: goto L_00439850;
    case 188u: goto L_00439870;
    case 189u: goto L_00439880;
    case 190u: goto L_00439890;
    case 191u: goto L_004398A0;
    case 192u: goto L_004398B0;
    case 193u: goto L_004398B8;
    case 194u: goto L_004398C0;
    case 195u: goto L_004398D0;
    case 196u: goto L_004398E0;
    case 197u: goto L_00439910;
    case 198u: goto L_00439928;
    case 199u: goto L_00439940;
    case 200u: goto L_0043995C;
    case 201u: goto L_00439980;
    case 202u: goto L_00439990;
    case 203u: goto L_004399A0;
    case 204u: goto L_004399B0;
    case 205u: goto L_004399B8;
    case 206u: goto L_004399C0;
    case 207u: goto L_004399C8;
    case 208u: goto L_004399D0;
    case 209u: goto L_004399E0;
    case 210u: goto L_004399F4;
    case 211u: goto L_00439A00;
    case 212u: goto L_00439A0C;
    case 213u: goto L_00439A18;
    case 214u: goto L_00439A24;
    case 215u: goto L_00439A30;
    case 216u: goto L_00439A40;
    case 217u: goto L_00439A50;
    case 218u: goto L_00439A60;
    case 219u: goto L_00439A70;
    case 220u: goto L_00439A80;
    case 221u: goto L_00439AB8;
    case 222u: goto L_00439AE8;
    case 223u: goto L_00439AF8;
    case 224u: goto L_00439B0C;
    case 225u: goto L_00439BB8;
    case 226u: goto L_00439BC0;
    case 227u: goto L_00439C10;
    case 228u: goto L_00439CB0;
    case 229u: goto L_00439D30;
    case 230u: goto L_00439D38;
    case 231u: goto L_00439D80;
    case 232u: goto L_00439E60;
    case 233u: goto L_00439E84;
    case 234u: goto L_00439E98;
    case 235u: goto L_0043A014;
    case 236u: goto L_0043A018;
    case 237u: goto L_0043A02C;
    case 238u: goto L_0043A058;
    case 239u: goto L_0043A144;
    case 240u: goto L_0043A224;
    case 241u: goto L_0043A318;
    case 242u: goto L_0043A320;
    case 243u: goto L_0043A390;
    case 244u: goto L_0043A3A8;
    case 245u: goto L_0043A3D0;
    case 246u: goto L_0043A414;
    case 247u: goto L_0043A448;
    case 248u: goto L_0043A468;
    case 249u: goto L_0043A4A8;
    case 250u: goto L_0043A4C8;
    case 251u: goto L_0043A50C;
    case 252u: goto L_0043A514;
    case 253u: goto L_0043A548;
    case 254u: goto L_0043A568;
    case 255u: goto L_0043A59C;
    case 256u: goto L_0043A5BC;
    case 257u: goto L_0043A5D8;
    case 258u: goto L_0043A6C4;
    case 259u: goto L_0043A6E4;
    case 260u: goto L_0043A6FC;
    case 261u: goto L_0043A71C;
    case 262u: goto L_0043A804;
    case 263u: goto L_0043A824;
    case 264u: goto L_0043A83C;
    case 265u: goto L_0043A858;
    case 266u: goto L_0043A940;
    case 267u: goto L_0043A960;
    case 268u: goto L_0043A978;
    case 269u: goto L_0043A984;
    case 270u: goto L_0043A9AC;
    case 271u: goto L_0043A9EC;
    case 272u: goto L_0043AA38;
    case 273u: goto L_0043AAA0;
    case 274u: goto L_0043AAB4;
    case 275u: goto L_0043AAF0;
    case 276u: goto L_0043AB00;
    case 277u: goto L_0043AB2C;
    case 278u: goto L_0043AB40;
    case 279u: goto L_0043AB4C;
    case 280u: goto L_0043AB70;
    case 281u: goto L_0043AB80;
    case 282u: goto L_0043AB94;
    case 283u: goto L_0043ABA8;
    case 284u: goto L_0043ABB4;
    case 285u: goto L_0043ABD8;
    case 286u: goto L_0043ABE8;
    case 287u: goto L_0043ABF4;
    case 288u: goto L_0043AC08;
    case 289u: goto L_0043AC14;
    case 290u: goto L_0043AC38;
    case 291u: goto L_0043AC48;
    case 292u: goto L_0043AC54;
    case 293u: goto L_0043AC60;
    case 294u: goto L_0043AC6C;
    case 295u: goto L_0043AC78;
    case 296u: goto L_0043AC84;
    case 297u: goto L_0043ACA0;
    case 298u: goto L_0043ACC4;
    case 299u: goto L_0043ACD8;
    case 300u: goto L_0043ACEC;
    case 301u: goto L_0043AD00;
    case 302u: goto L_0043AD14;
    case 303u: goto L_0043AD40;
    case 304u: goto L_0043AD5C;
    case 305u: goto L_0043AD64;
    case 306u: goto L_0043AD70;
    case 307u: goto L_0043AD7C;
    case 308u: goto L_0043AD88;
    case 309u: goto L_0043AD98;
    case 310u: goto L_0043ADC4;
    case 311u: goto L_0043ADD0;
    case 312u: goto L_0043ADF0;
    case 313u: goto L_0043AE00;
    case 314u: goto L_0043AE30;
    case 315u: goto L_0043AE50;
    case 316u: goto L_0043AE70;
    case 317u: goto L_0043AF1C;
    case 318u: goto L_0043AF48;
    case 319u: goto L_0043AF70;
    case 320u: goto L_0043AF8C;
    case 321u: goto L_0043B020;
    case 322u: goto L_0043B040;
    case 323u: goto L_0043B054;
    case 324u: goto L_0043B080;
    case 325u: goto L_0043B0BC;
    case 326u: goto L_0043B130;
    case 327u: goto L_0043B16C;
    case 328u: goto L_0043B214;
    case 329u: goto L_0043B270;
    case 330u: goto L_0043B2EC;
    case 331u: goto L_0043B3AC;
    case 332u: goto L_0043B3CC;
    case 333u: goto L_0043B418;
    case 334u: goto L_0043B438;
    case 335u: goto L_0043B4E4;
    case 336u: goto L_0043B504;
    case 337u: goto L_0043B514;
    case 338u: goto L_0043B520;
    case 339u: goto L_0043B590;
    case 340u: goto L_0043B5B0;
    case 341u: goto L_0043B5C0;
    case 342u: goto L_0043B5CC;
    case 343u: goto L_0043B628;
    case 344u: goto L_0043B638;
    case 345u: goto L_0043B6B4;
    case 346u: goto L_0043B6F0;
    case 347u: goto L_0043B748;
    case 348u: goto L_0043B760;
    case 349u: goto L_0043B780;
    case 350u: goto L_0043B7C0;
    case 351u: goto L_0043B7D0;
    case 352u: goto L_0043B7E8;
    case 353u: goto L_0043B7FC;
    case 354u: goto L_0043B810;
    case 355u: goto L_0043B838;
    case 356u: goto L_0043B840;
    case 357u: goto L_0043B854;
    case 358u: goto L_0043B890;
    case 359u: goto L_0043B8B8;
    case 360u: goto L_0043B8C0;
    case 361u: goto L_0043B8C8;
    case 362u: goto L_0043B910;
    case 363u: goto L_0043B920;
    case 364u: goto L_0043B944;
    case 365u: goto L_0043B958;
    case 366u: goto L_0043B968;
    case 367u: goto L_0043B978;
    case 368u: goto L_0043B988;
    case 369u: goto L_0043B998;
    case 370u: goto L_0043B9A8;
    case 371u: goto L_0043B9B4;
    case 372u: goto L_0043B9C8;
    case 373u: goto L_0043B9DC;
    case 374u: goto L_0043BA04;
    case 375u: goto L_0043BA18;
    case 376u: goto L_0043BA2C;
    case 377u: goto L_0043BA50;
    case 378u: goto L_0043BA5C;
    case 379u: goto L_0043BA70;
    case 380u: goto L_0043BA84;
    case 381u: goto L_0043BAA4;
    case 382u: goto L_0043BAD0;
    case 383u: goto L_0043BAFC;
    case 384u: goto L_0043BB28;
    case 385u: goto L_0043BB50;
    case 386u: goto L_0043BB5C;
    case 387u: goto L_0043BB8C;
    case 388u: goto L_0043BBB4;
    case 389u: goto L_0043BBDC;
    case 390u: goto L_0043BC04;
    case 391u: goto L_0043BC2C;
    case 392u: goto L_0043BC54;
    case 393u: goto L_0043BC60;
    case 394u: goto L_0043BC90;
    case 395u: goto L_0043BCB8;
    case 396u: goto L_0043BCC4;
    case 397u: goto L_0043BCD8;
    case 398u: goto L_0043BD24;
    case 399u: goto L_0043BD4C;
    case 400u: goto L_0043BD58;
    case 401u: goto L_0043BD88;
    case 402u: goto L_0043BDB0;
    case 403u: goto L_0043BDD0;
    case 404u: goto L_0043BE24;
    case 405u: goto L_0043BE40;
    case 406u: goto L_0043BE98;
    case 407u: goto L_0043BED8;
    case 408u: goto L_0043BF18;
    case 409u: goto L_0043BF24;
    case 410u: goto L_0043BF30;
    case 411u: goto L_0043BF3C;
    case 412u: goto L_0043BF48;
    case 413u: goto L_0043BF54;
    case 414u: goto L_0043BF68;
    case 415u: goto L_0043BF74;
    case 416u: goto L_0043BF8C;
    case 417u: goto L_0043BFB0;
    case 418u: goto L_0043BFD4;
    case 419u: goto L_0043BFF0;
    default: bad_entry(c, 0x00438000u); return;
    }
L_00438000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00438004:
    st32((c.r[17].w[0] + 128u), c.r[16].w[0]);
    c.budget -= 1;
L_00438008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0043800C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00438018:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
    c.pc = 0x0043801Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00438020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_00438024:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043805C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438044u); set32(c.r[6], c.r[6].w[0] + 22056u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00438044u) [[unlikely]] return; }
L_00438044:
    set32(c.r[3], ld32((c.r[28].w[0] - 25072u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 52u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00438060; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0043805C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00438060:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00438070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 78u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004380D4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043809Cu); set32(c.r[6], c.r[6].w[0] + 22086u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0043809Cu) [[unlikely]] return; }
L_0043809C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004380D8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004380D4; } }
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25072u)));
    st32((c.r[3].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25072u)));
    st32((c.r[3].w[0] + 60u), 0u);
    c.budget -= 5;
L_004380D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004380D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004380F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438108u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00438108u) [[unlikely]] return; }
L_00438108:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00438120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043811Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043811Cu) [[unlikely]] return; }
L_0043811C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00438120:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00438134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438130u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00438130u) [[unlikely]] return; }
L_00438130:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00438134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043814Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0043814Cu) [[unlikely]] return; }
L_0043814C:
    set32(c.r[17], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00438158u) [[unlikely]] return; }
L_00438158:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00438170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043816Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043816Cu) [[unlikely]] return; }
L_0043816C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00438170:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_00438184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438180u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00438180u) [[unlikely]] return; }
L_00438180:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00438184:
    set32(c.r[4], c.r[16].w[0] + 104u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438198u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00438198u) [[unlikely]] return; }
L_00438198:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st8((c.r[16].w[0] + 75u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00438220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043826C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00438258; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00438254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 103u, depth + 1u); else { c.pc = 0x00438F40u; return; } if (c.pc != 0x00438254u) [[unlikely]] return; }
L_00438254:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00438258:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00438270; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043826Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043826Cu) [[unlikely]] return; }
L_0043826C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00438270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00438290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 78u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00438308; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 74u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_004382C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043830C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004382C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_004382E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004382D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 107u, depth + 1u); else { c.pc = 0x00549520u; return; } if (c.pc != 0x004382D0u) [[unlikely]] return; }
L_004382D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004382E0u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0112(c, 113u, depth + 1u); else { c.pc = 0x005495C0u; return; } if (c.pc != 0x004382E0u) [[unlikely]] return; }
L_004382E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_004382E4:
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00438308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438304u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x00438304u) [[unlikely]] return; }
L_00438304:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00438308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043830C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00438320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00438794; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 78u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 60u));  goto L_00438354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00438798; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 1;
L_00438354:
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));  goto L_004383F0; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004383EC; } }
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438384u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x00438384u) [[unlikely]] return; }
L_00438384:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438390u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438390u) [[unlikely]] return; }
L_00438390:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004383D8; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004383D8; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004383D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004383C0u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004383C0u) [[unlikely]] return; }
L_004383C0:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004383CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004383CCu) [[unlikely]] return; }
L_004383CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004383EC; } }
L_004383D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004383ECu); set32(c.r[6], c.r[6].w[0] + 22120u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004383ECu) [[unlikely]] return; }
L_004383EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 1;
L_004383F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_00438524; }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00438520; } }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 3u);  goto L_00438490; }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00438520; } }
    fpu_div(c, 2u, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 30100u));
    c.f[0] = ld32((c.r[28].w[0] - 30096u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438478u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));  if (depth < kMaxDepth) unit_0112(c, 113u, depth + 1u); else { c.pc = 0x005495C0u; return; } if (c.pc != 0x00438478u) [[unlikely]] return; }
L_00438478:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438484u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438484u) [[unlikely]] return; }
L_00438484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00438520; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00438490:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004384B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004384A8u);  if (depth < kMaxDepth) unit_0112(c, 107u, depth + 1u); else { c.pc = 0x00549520u; return; } if (c.pc != 0x004384A8u) [[unlikely]] return; }
L_004384A8:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004384B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004384B4u) [[unlikely]] return; }
L_004384B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004384C8u); set32(c.r[6], c.r[6].w[0] + 22154u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004384C8u) [[unlikely]] return; }
L_004384C8:
    st32((c.r[29].w[0] + 56u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] + 22185u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004384ECu); set32(c.r[7], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004384ECu) [[unlikely]] return; }
L_004384EC:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004384F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004384F8u) [[unlikely]] return; }
L_004384F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00438514u); set32(c.r[7], c.r[16].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00438514u) [[unlikely]] return; }
L_00438514:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438520u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438520u) [[unlikely]] return; }
L_00438520:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00438524:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_00438594; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00438590; } }
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438548u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x00438548u) [[unlikely]] return; }
L_00438548:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438554u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438554u) [[unlikely]] return; }
L_00438554:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043857C; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043857C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00438590; } }
L_0043857C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438590u); set32(c.r[6], c.r[6].w[0] + 22190u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00438590u) [[unlikely]] return; }
L_00438590:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00438594:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_004385D8; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004385D4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004385D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004385BCu);  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004385BCu) [[unlikely]] return; }
L_004385BC:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004385C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004385C8u) [[unlikely]] return; }
L_004385C8:
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004385D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004385D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 84u)));  goto L_004386A4; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004386A0; } }
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004385FCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0112(c, 98u, depth + 1u); else { c.pc = 0x00549410u; return; } if (c.pc != 0x004385FCu) [[unlikely]] return; }
L_004385FC:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438608u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438608u) [[unlikely]] return; }
L_00438608:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00438644; } }
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004386A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004386A0; } }
L_00438644:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438658u); set32(c.r[6], c.r[6].w[0] + 22229u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00438658u) [[unlikely]] return; }
L_00438658:
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438674u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x00438674u) [[unlikely]] return; }
L_00438674:
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), 0u);  goto L_004386A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 107u, depth + 1u); else { c.pc = 0x00549520u; return; } if (c.pc != 0x00438690u) [[unlikely]] return; }
L_00438690:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043869Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x0043869Cu) [[unlikely]] return; }
L_0043869C:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_004386A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004386A4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 124u));  goto L_00438768; }
    c.f[5] = ld32((c.r[16].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    fpu_div(c, 2u, c.f[5], c.f[4]);
    c.f[0] = c.r[3].w[0];
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 30092u));
    c.f[0] = ld32((c.r[28].w[0] - 30088u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 25;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00438718; }
    c.f[20] = c.f[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_00438718:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00438738; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438728u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0112(c, 113u, depth + 1u); else { c.pc = 0x005495C0u; return; } if (c.pc != 0x00438728u) [[unlikely]] return; }
L_00438728:
    st32((c.r[28].w[0] - 25076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438734u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00438734u) [[unlikely]] return; }
L_00438734:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00438738:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00438764; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 3;
L_00438764:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 124u));
    c.budget -= 1;
L_00438768:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00438794; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00438794; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00438794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 467u, depth + 1u); else { c.pc = 0x00437AD0u; return; } if (c.pc != 0x00438794u) [[unlikely]] return; }
L_00438794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00438798:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004387B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 25072u), 0u);  goto L_004387F8; }
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004387D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004387D4u) [[unlikely]] return; }
L_004387D4:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004387E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00CE(c, 20u, depth + 1u); else { c.pc = 0x00438220u; return; } if (c.pc != 0x004387E0u) [[unlikely]] return; }
L_004387E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004387ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 307u, depth + 1u); else { c.pc = 0x001273D0u; return; } if (c.pc != 0x004387ECu) [[unlikely]] return; }
L_004387EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004387F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004387F4u) [[unlikely]] return; }
L_004387F4:
    st32((c.r[28].w[0] - 25072u), 0u);
    c.budget -= 1;
L_004387F8:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00438810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 132u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438828u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00438828u) [[unlikely]] return; }
L_00438828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  goto L_0043883C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438838u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 11u, depth + 1u); else { c.pc = 0x004380F0u; return; } if (c.pc != 0x00438838u) [[unlikely]] return; }
L_00438838:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 1;
L_0043883C:
    st32((c.r[28].w[0] - 25072u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25072u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043885Cu); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 429u, depth + 1u); else { c.pc = 0x004376A0u; return; } if (c.pc != 0x0043885Cu) [[unlikely]] return; }
L_0043885C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438870u); set32(c.r[6], c.r[6].w[0] + 21839u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00438870u) [[unlikely]] return; }
L_00438870:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043887Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0043887Cu) [[unlikely]] return; }
L_0043887C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043888Cu); set32(c.r[5], c.r[5].w[0] + 21743u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0043888Cu) [[unlikely]] return; }
L_0043888C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043889Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043889Cu) [[unlikely]] return; }
L_0043889C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  goto L_004388C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004388C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004388C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004388C0u) [[unlikely]] return; }
L_004388C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 1;
L_004388C4:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004388D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 375u, depth + 1u); else { c.pc = 0x00436FC0u; return; } if (c.pc != 0x004388D0u) [[unlikely]] return; }
L_004388D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004388F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00438934; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043892Cu); set32(c.r[5], c.r[5].w[0] + 22254u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0043892Cu) [[unlikely]] return; }
L_0043892C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438934u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00438934u) [[unlikely]] return; }
L_00438934:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] << 3);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00438960:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
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
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00438D6C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004389DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004389D0u); set32(c.r[5], c.r[5].w[0] + 22338u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004389D0u) [[unlikely]] return; }
L_004389D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004389D8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004389D8u) [[unlikely]] return; }
L_004389D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004389DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_00438B88; }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], 0u + 24u);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  goto L_00438AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00438A68; } }
L_00438A28:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00438A58; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438A54u); st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438A54u) [[unlikely]] return; }
L_00438A54:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00438A58:
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00438A68:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438A28u | kUnwind; return; } goto L_00438A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00438ABC; } }
L_00438A7C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00438AAC; }
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[5], c.r[22].w[0] + 8u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 4u));
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438AA8u); st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438AA8u) [[unlikely]] return; }
L_00438AA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00438AAC:
    set32(c.r[22], c.r[22].w[0] + 24u);
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00438ABC:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438A7Cu | kUnwind; return; } goto L_00438A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00438B74; } }
L_00438AD0:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[2].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[30].w[0]);  if (t) { goto L_00438B24; } }
L_00438AE4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00438B14; }
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[5], c.r[22].w[0] + 8u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 4u));
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438B10u); st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438B10u) [[unlikely]] return; }
L_00438B10:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00438B14:
    set32(c.r[22], c.r[22].w[0] + 24u);
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00438B24:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438AE4u | kUnwind; return; } goto L_00438AE4; } }
    set32(c.r[3], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);  goto L_00438B64; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00438B60; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_00438B60:
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00438B64:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438B70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 99u, depth + 1u); else { c.pc = 0x00438E70u; return; } if (c.pc != 0x00438B70u) [[unlikely]] return; }
L_00438B70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00438B74:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438B80u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 95u, depth + 1u); else { c.pc = 0x00438DA0u; return; } if (c.pc != 0x00438B80u) [[unlikely]] return; }
L_00438B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00438D70; } }
L_00438B88:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_00438BA4; }
L_00438BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00438BC0; } }
L_00438BAC:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_00438BC0; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_00438BC0:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00438BACu | kUnwind; return; } goto L_00438BAC; }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438BE0u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00438BE0u) [[unlikely]] return; }
L_00438BE0:
    st32((c.r[29].w[0] + 164u), c.r[20].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_00438C48; } }
L_00438C08:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00438C38; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[22].w[0] + 8u);
    set32(c.r[5], c.r[21].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 4u));
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438C34u); st8((c.r[22].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438C34u) [[unlikely]] return; }
L_00438C34:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00438C38:
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[22], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_00438C48:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438C08u | kUnwind; return; } goto L_00438C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00438C9C; } }
L_00438C5C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00438C8C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[22].w[0] + 8u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438C88u); st8((c.r[22].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438C88u) [[unlikely]] return; }
L_00438C88:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00438C8C:
    set32(c.r[22], c.r[22].w[0] + 24u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_00438C9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438C5Cu | kUnwind; return; } goto L_00438C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_00438CF0; } }
L_00438CAC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00438CDC; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[22].w[0] + 8u);
    set32(c.r[5], c.r[21].w[0] + 8u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 4u));
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 5u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438CD8u); st8((c.r[22].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00438CD8u) [[unlikely]] return; }
L_00438CD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00438CDC:
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[22], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00438CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00438CACu | kUnwind; return; } goto L_00438CAC; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00438D48; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_00438D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438D50u);  if (depth < kMaxDepth) unit_00CE(c, 107u, depth + 1u); else { c.pc = 0x00438FB0u; return; } if (c.pc != 0x00438D50u) [[unlikely]] return; }
L_00438D50:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00438D6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00438D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438D6Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00438D6Cu) [[unlikely]] return; }
L_00438D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00438D70:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00438DA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00438E40; } }
L_00438DCC:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 9u);  goto L_00438DF4; }
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00438DF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));  goto L_00438E0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_00438E14; } }
L_00438E0C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00438E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438E1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00438E1Cu) [[unlikely]] return; }
L_00438E1C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438E38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00438E38u) [[unlikely]] return; }
L_00438E38:
    set32(c.r[19], c.r[19].w[0] + 24u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00438E40:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00438DCCu | kUnwind; return; } goto L_00438DCC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00438E70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00438F10; } }
L_00438E9C:
    set32(c.r[17], c.r[17].w[0] - 24u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[18].w[0] + 9u);  goto L_00438ECC; }
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_00438ECC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));  goto L_00438EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00438EEC; } }
L_00438EE4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00438EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438EF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00438EF4u) [[unlikely]] return; }
L_00438EF4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438F10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00438F10u) [[unlikely]] return; }
L_00438F10:
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00438E9Cu | kUnwind; return; } goto L_00438E9C; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00438F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00438F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438F64u);  if (depth < kMaxDepth) unit_00CE(c, 107u, depth + 1u); else { c.pc = 0x00438FB0u; return; } if (c.pc != 0x00438F64u) [[unlikely]] return; }
L_00438F64:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00438F84; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00438F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438F80u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00438F80u) [[unlikely]] return; }
L_00438F80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00438F84:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00438F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00438F98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00438F98u) [[unlikely]] return; }
L_00438F98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00438F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00438FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00439024; } }
L_00438FE4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_00439028; }
    set32(c.r[3], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00439024; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00439024; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00439024; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00439024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439024u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00439024u) [[unlikely]] return; }
L_00439024:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00439028:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00438FE4u | kUnwind; return; } goto L_00438FE4; }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00439050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00439060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00439070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00439080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004390DC; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004390C0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 260u, depth + 1u); else { c.pc = 0x00162260u; return; } if (c.pc != 0x004390C0u) [[unlikely]] return; }
L_004390C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004390E0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004390DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 260u, depth + 1u); else { c.pc = 0x00162260u; return; } if (c.pc != 0x004390DCu) [[unlikely]] return; }
L_004390DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004390E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00439100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 22368u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 4096u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043912Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0043912Cu) [[unlikely]] return; }
L_0043912C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0043913C; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0043913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439144u);  if (depth < kMaxDepth) unit_0018(c, 423u, depth + 1u); else { c.pc = 0x00163690u; return; } if (c.pc != 0x00439144u) [[unlikely]] return; }
L_00439144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043914Cu);  if (depth < kMaxDepth) unit_0010(c, 350u, depth + 1u); else { c.pc = 0x00142BC0u; return; } if (c.pc != 0x0043914Cu) [[unlikely]] return; }
L_0043914C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00439160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00439190; }
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043918C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043918Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 48u, depth + 1u); else { c.pc = 0x004443E0u; return; } if (c.pc != 0x0043918Cu) [[unlikely]] return; }
L_0043918C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00439190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004391A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00439218; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0043921C; }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004391E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004391E0u);  if (depth < kMaxDepth) unit_00C1(c, 54u, depth + 1u); else { c.pc = 0x00404570u; return; } if (c.pc != 0x004391E0u) [[unlikely]] return; }
L_004391E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  goto L_004391F0; }
L_004391E8:
    c.f[20] = 0u;
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 2;
L_004391F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004391F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D1(c, 46u, depth + 1u); else { c.pc = 0x004443B0u; return; } if (c.pc != 0x004391F8u) [[unlikely]] return; }
L_004391F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439200u);  if (depth < kMaxDepth) unit_0018(c, 438u, depth + 1u); else { c.pc = 0x00163830u; return; } if (c.pc != 0x00439200u) [[unlikely]] return; }
L_00439200:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00439218; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 268u, depth + 1u); else { c.pc = 0x00162360u; return; } if (c.pc != 0x00439218u) [[unlikely]] return; }
L_00439218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0043921C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00439230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043925C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043925Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043925Cu) [[unlikely]] return; }
L_0043925C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439264u);  if (depth < kMaxDepth) unit_0018(c, 423u, depth + 1u); else { c.pc = 0x00163690u; return; } if (c.pc != 0x00439264u) [[unlikely]] return; }
L_00439264:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439270u); st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x00439270u) [[unlikely]] return; }
L_00439270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043927Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x0043927Cu) [[unlikely]] return; }
L_0043927C:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004392A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004392CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043934C; } }
L_004392CC:
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004392D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x004392D8u) [[unlikely]] return; }
L_004392D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004392E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x004392E0u) [[unlikely]] return; }
L_004392E0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004392F4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 22389u);  if (t) { goto L_004392F8; } }
L_004392F4:
    set32(c.r[6], c.r[6].w[0] + 22423u);
    c.budget -= 1;
L_004392F8:
    set32(c.r[4], 0u + 4096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439304u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00439304u) [[unlikely]] return; }
L_00439304:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  goto L_00439318; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00439344; } }
L_00439318:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00439330; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00439330u); set32(c.r[5], 0u + 1337u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00439330u) [[unlikely]] return; }
L_00439330:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00439348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043934C; } }
L_00439344:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00439348:
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0043934C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00439370:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043939C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00439678; } }
L_0043939C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004393A4u);  if (depth < kMaxDepth) unit_0017(c, 341u, depth + 1u); else { c.pc = 0x0015F1D0u; return; } if (c.pc != 0x004393A4u) [[unlikely]] return; }
L_004393A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_004393B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004393B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 39u, depth + 1u); else { c.pc = 0x001684F0u; return; } if (c.pc != 0x004393B4u) [[unlikely]] return; }
L_004393B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004393B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004393C0u);  if (depth < kMaxDepth) unit_0018(c, 26u, depth + 1u); else { c.pc = 0x001603D0u; return; } if (c.pc != 0x004393C0u) [[unlikely]] return; }
L_004393C0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004393CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004393CCu) [[unlikely]] return; }
L_004393CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004393F0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 22096u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_004393F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004393F8u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x004393F8u) [[unlikely]] return; }
L_004393F8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00439404u) [[unlikely]] return; }
L_00439404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00439428; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 22160u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_00439428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439430u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x00439430u) [[unlikely]] return; }
L_00439430:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043943Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043943Cu) [[unlikely]] return; }
L_0043943C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00439460; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 21936u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_00439460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439468u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x00439468u) [[unlikely]] return; }
L_00439468:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00439474u) [[unlikely]] return; }
L_00439474:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00439498; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 22128u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_00439498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004394A0u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x004394A0u) [[unlikely]] return; }
L_004394A0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004394ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004394ACu) [[unlikely]] return; }
L_004394AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004394D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 22064u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_004394D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004394D8u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x004394D8u) [[unlikely]] return; }
L_004394D8:
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004394ECu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004394ECu) [[unlikely]] return; }
L_004394EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00439540; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439508u); set32(c.r[5], c.r[5].w[0] + 22450u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00439508u) [[unlikely]] return; }
L_00439508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 22458u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043951Cu); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0043951Cu) [[unlikely]] return; }
L_0043951C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439528u); c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x00439528u) [[unlikely]] return; }
L_00439528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439538u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001A(c, 33u, depth + 1u); else { c.pc = 0x00168410u; return; } if (c.pc != 0x00439538u) [[unlikely]] return; }
L_00439538:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00439540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439548u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x00439548u) [[unlikely]] return; }
L_00439548:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0043955C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043955Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043955Cu) [[unlikely]] return; }
L_0043955C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00439574; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00439570u) [[unlikely]] return; }
L_00439570:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00439574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043957Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043957Cu) [[unlikely]] return; }
L_0043957C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00439590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043958Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 440u, depth + 1u); else { c.pc = 0x00167F40u; return; } if (c.pc != 0x0043958Cu) [[unlikely]] return; }
L_0043958C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00439590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439598u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x00439598u) [[unlikely]] return; }
L_00439598:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004395A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004395A4u) [[unlikely]] return; }
L_004395A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004395C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] - 22000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_004395C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004395D0u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x004395D0u) [[unlikely]] return; }
L_004395D0:
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004395E0u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004395E0u) [[unlikely]] return; }
L_004395E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00439618; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004395FCu); set32(c.r[5], c.r[5].w[0] + 22464u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004395FCu) [[unlikely]] return; }
L_004395FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439610u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 407u, depth + 1u); else { c.pc = 0x00167BE0u; return; } if (c.pc != 0x00439610u) [[unlikely]] return; }
L_00439610:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00439618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439620u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x00439620u) [[unlikely]] return; }
L_00439620:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00439634; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00439634u) [[unlikely]] return; }
L_00439634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043963Cu);  if (depth < kMaxDepth) unit_00B0(c, 17u, depth + 1u); else { c.pc = 0x003C0130u; return; } if (c.pc != 0x0043963Cu) [[unlikely]] return; }
L_0043963C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439644u);  if (depth < kMaxDepth) unit_00FF(c, 503u, depth + 1u); else { c.pc = 0x004FFA40u; return; } if (c.pc != 0x00439644u) [[unlikely]] return; }
L_00439644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043964Cu);  if (depth < kMaxDepth) unit_00FF(c, 147u, depth + 1u); else { c.pc = 0x004FD2F0u; return; } if (c.pc != 0x0043964Cu) [[unlikely]] return; }
L_0043964C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043965Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x0043965Cu) [[unlikely]] return; }
L_0043965C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439670u); set32(c.r[7], 0u + 620u);  if (depth < kMaxDepth) unit_0019(c, 34u, depth + 1u); else { c.pc = 0x00164510u; return; } if (c.pc != 0x00439670u) [[unlikely]] return; }
L_00439670:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00439678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004396A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));  goto L_00439700; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004396FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004396CCu);  if (depth < kMaxDepth) unit_0019(c, 31u, depth + 1u); else { c.pc = 0x001644C0u; return; } if (c.pc != 0x004396CCu) [[unlikely]] return; }
L_004396CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004396E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004396E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004396E8u) [[unlikely]] return; }
L_004396E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004396F0u);  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001684E0u; return; } if (c.pc != 0x004396F0u) [[unlikely]] return; }
L_004396F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004396F8u);  if (depth < kMaxDepth) unit_0018(c, 24u, depth + 1u); else { c.pc = 0x00160390u; return; } if (c.pc != 0x004396F8u) [[unlikely]] return; }
L_004396F8:
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004396FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 1;
L_00439700:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043971C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00439718u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00439718u) [[unlikely]] return; }
L_00439718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043971C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00439730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 72u);  goto L_00439750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004397C8; } }
L_00439750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00439758u) [[unlikely]] return; }
L_00439758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004397AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 282u, depth + 1u); else { c.pc = 0x001625B0u; return; } if (c.pc != 0x00439768u) [[unlikely]] return; }
L_00439768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 22240u);
    set32(c.r[2], c.r[2].w[0] + 27952u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27984u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[5], 0u + 6u);
    st32((c.r[28].w[0] - 25052u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004397ACu); st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0018(c, 277u, depth + 1u); else { c.pc = 0x001624B0u; return; } if (c.pc != 0x004397ACu) [[unlikely]] return; }
L_004397AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004397C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004397C8; } }
L_004397C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004397C8u);  if (depth < kMaxDepth) unit_00CE(c, 137u, depth + 1u); else { c.pc = 0x00439370u; return; } if (c.pc != 0x004397C8u) [[unlikely]] return; }
L_004397C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004397E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00439850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27952u);
    set32(c.r[3], c.r[3].w[0] + 27984u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 25052u), 0u);  if (t) { goto L_0043982C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22240u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0043982C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 278u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x00439838u) [[unlikely]] return; }
L_00439838:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00439854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00439850u) [[unlikely]] return; }
L_00439850:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00439854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00439870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00439050u | kUnwind; return; } goto L_00439050; }
L_00439880:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004397E0u | kUnwind; return; } goto L_004397E0; }
L_00439890:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00433560u | kUnwind; return; } [[clang::musttail]] return unit_00CC(c, 481u, depth); }
L_004398A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004398B0u);  if (depth < kMaxDepth) unit_00CC(c, 491u, depth + 1u); else { c.pc = 0x00433620u; return; } if (c.pc != 0x004398B0u) [[unlikely]] return; }
L_004398B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004398B8u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 351u, depth + 1u); else { c.pc = 0x003D3950u; return; } if (c.pc != 0x004398B8u) [[unlikely]] return; }
L_004398B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004398C0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x004398C0u) [[unlikely]] return; }
L_004398C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004398D0u); set32(c.r[5], c.r[5].w[0] + 22496u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x004398D0u) [[unlikely]] return; }
L_004398D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004398E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00439928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439910u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 545u, depth + 1u); else { c.pc = 0x00433BC0u; return; } if (c.pc != 0x00439910u) [[unlikely]] return; }
L_00439910:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043992C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00439928u) [[unlikely]] return; }
L_00439928:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043992C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00439940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 22516u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043995Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 548u, depth + 1u); else { c.pc = 0x00433C20u; return; } if (c.pc != 0x0043995Cu) [[unlikely]] return; }
L_0043995C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 28016u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00439980:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00363B10u | kUnwind; return; } [[clang::musttail]] return unit_0098(c, 237u, depth); }
L_00439990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25016u), c.r[4].w[0]);  c.pc = t; return; }
L_004399A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 113u, depth + 1u); else { c.pc = 0x0033A0F0u; return; } if (c.pc != 0x004399B0u) [[unlikely]] return; }
L_004399B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 112u, depth + 1u); else { c.pc = 0x0033A0E0u; return; } if (c.pc != 0x004399B8u) [[unlikely]] return; }
L_004399B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 111u, depth + 1u); else { c.pc = 0x0033A0D0u; return; } if (c.pc != 0x004399C0u) [[unlikely]] return; }
L_004399C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 236u, depth + 1u); else { c.pc = 0x00363B00u; return; } if (c.pc != 0x004399C8u) [[unlikely]] return; }
L_004399C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 235u, depth + 1u); else { c.pc = 0x00363AF0u; return; } if (c.pc != 0x004399D0u) [[unlikely]] return; }
L_004399D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004399E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004399F4u); set32(c.r[4], c.r[4].w[0] - 26000u);  if (depth < kMaxDepth) unit_008E(c, 113u, depth + 1u); else { c.pc = 0x0033A0F0u; return; } if (c.pc != 0x004399F4u) [[unlikely]] return; }
L_004399F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439A00u); set32(c.r[4], c.r[4].w[0] - 26016u);  if (depth < kMaxDepth) unit_008E(c, 112u, depth + 1u); else { c.pc = 0x0033A0E0u; return; } if (c.pc != 0x00439A00u) [[unlikely]] return; }
L_00439A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439A0Cu); set32(c.r[4], c.r[4].w[0] - 26032u);  if (depth < kMaxDepth) unit_008E(c, 111u, depth + 1u); else { c.pc = 0x0033A0D0u; return; } if (c.pc != 0x00439A0Cu) [[unlikely]] return; }
L_00439A0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439A18u); set32(c.r[4], c.r[4].w[0] - 26048u);  if (depth < kMaxDepth) unit_0098(c, 236u, depth + 1u); else { c.pc = 0x00363B00u; return; } if (c.pc != 0x00439A18u) [[unlikely]] return; }
L_00439A18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439A24u); set32(c.r[4], c.r[4].w[0] - 26064u);  if (depth < kMaxDepth) unit_0098(c, 235u, depth + 1u); else { c.pc = 0x00363AF0u; return; } if (c.pc != 0x00439A24u) [[unlikely]] return; }
L_00439A24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00439A30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102450u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 160u, depth); }
L_00439A40:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[28].w[0] - 25016u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001024B0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 163u, depth); }
L_00439A50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102450u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 160u, depth); }
L_00439A60:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[6], ld32((c.r[28].w[0] - 25016u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102250u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 144u, depth); }
L_00439A70:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[28].w[0] - 25016u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001024B0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 163u, depth); }
L_00439A80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[6].w[0] + 84u)));
    c.f[20] = c.f[12];
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439AB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x00439AB8u) [[unlikely]] return; }
L_00439AB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 24u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32528u));
    st32((c.r[17].w[0] + 4u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439AE8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 161u, depth + 1u); else { c.pc = 0x0033A920u; return; } if (c.pc != 0x00439AE8u) [[unlikely]] return; }
L_00439AE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439AF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 145u, depth + 1u); else { c.pc = 0x0033A690u; return; } if (c.pc != 0x00439AF8u) [[unlikely]] return; }
L_00439AF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439B0Cu); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00F4(c, 330u, depth + 1u); else { c.pc = 0x004D3F10u; return; } if (c.pc != 0x00439B0Cu) [[unlikely]] return; }
L_00439B0C:
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    c.f[3] = ld32((c.r[17].w[0] + 64u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[16].w[0] + 116u));
    c.f[5] = ld32((c.r[17].w[0] + 72u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[7] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull; c.f[4] = ld32((c.r[17].w[0] + 48u));  if (t) { goto L_00439BEC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32316u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00439BF0; }
    c.f[1] = ld32((c.r[28].w[0] - 24996u));
    c.f[0] = ld32((c.r[28].w[0] - 32252u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00439BEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    set32(c.r[4], c.r[4].w[0] + 22658u);
    st32((c.r[29].w[0] + 100u), c.f[3]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439BB8u); st32((c.r[29].w[0] + 104u), c.f[2]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x00439BB8u) [[unlikely]] return; }
L_00439BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439BC0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x00439BC0u) [[unlikely]] return; }
L_00439BC0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32248u));
    c.f[0] = ld32((c.r[28].w[0] - 32244u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 24996u), c.f[0]);
    c.budget -= 11;
L_00439BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00439BF0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00439C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32456u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0] + 68u));
    c.f[3] = ld32((c.r[4].w[0] + 112u));
    c.f[5] = ld32((c.r[4].w[0] + 108u));
    c.f[4] = ld32((c.r[5].w[0] + 64u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[4].w[0] + 116u));
    c.f[6] = ld32((c.r[5].w[0] + 72u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1195u));
    c.budget -= 29;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[17].w[0] + 1202u));  goto L_00439CC0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 424u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00439CBC; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00439CBC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32256u));
    set32(c.r[4], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439CB0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00F9(c, 69u, depth + 1u); else { c.pc = 0x004E4DF0u; return; } if (c.pc != 0x00439CB0u) [[unlikely]] return; }
L_00439CB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1195u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00439CBC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1202u));
    c.budget -= 1;
L_00439CC0:
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 1202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00439D64; } }
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00439D68; }
    c.f[1] = ld32((c.r[28].w[0] - 24996u));
    c.f[0] = ld32((c.r[28].w[0] - 32252u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00439D64; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 22658u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439D30u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x00439D30u) [[unlikely]] return; }
L_00439D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439D38u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x00439D38u) [[unlikely]] return; }
L_00439D38:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32248u));
    c.f[0] = ld32((c.r[28].w[0] - 32244u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 24996u), c.f[0]);
    c.budget -= 11;
L_00439D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00439D68:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00439D80:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[5] = 0u;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[6].w[0] + 56u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 200u), c.f[2]);
    c.f[8] = ld32((c.r[6].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[7] = ld32((c.r[6].w[0] + 64u));
    c.f[3] = ld32((c.r[4].w[0] + 108u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[6] = ld32((c.r[6].w[0] + 72u));
    c.f[4] = ld32((c.r[4].w[0] + 116u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.f[0] = ld32((c.r[5].w[0] + 112u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.f[1] = ld32((c.r[5].w[0] + 108u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[2] = ld32((c.r[5].w[0] + 116u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[2] = fp::add(c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[4], c.f[2]);
    c.f[0] = fp::max(c.f[0], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[24] = fp::min(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[3], c.f[2]);
    c.f[0] = fp::max(c.f[0], c.f[5]);
    c.f[23] = fp::min(c.f[0], c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.f[21] = c.f[2] & fp::kAbs;
    c.f[25] = fp::mul(c.f[24], c.f[21]);
    c.f[20] = fp::mul(c.f[23], c.f[21]);
    c.f[13] = c.f[24];
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439E60u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00B9(c, 284u, depth + 1u); else { c.pc = 0x003E6200u; return; } if (c.pc != 0x00439E60u) [[unlikely]] return; }
L_00439E60:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.f[6] = ld32((c.r[28].w[0] - 29056u));  goto L_00439E9C; }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[23]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_00439E90; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439E84u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00F6(c, 14u, depth + 1u); else { c.pc = 0x004D8410u; return; } if (c.pc != 0x00439E84u) [[unlikely]] return; }
L_00439E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00439E98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_00439E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00439E98u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00F6(c, 14u, depth + 1u); else { c.pc = 0x004D8410u; return; } if (c.pc != 0x00439E98u) [[unlikely]] return; }
L_00439E98:
    c.f[6] = ld32((c.r[28].w[0] - 29056u));
    c.budget -= 1;
L_00439E9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[3] = ld32((c.r[17].w[0] + 100u));
    c.f[1] = ld32((c.r[17].w[0] + 96u));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.f[5] = fp::mul(c.f[0], c.f[6]);
    set32(c.r[19], ld32((c.r[3].w[0] + 12u)));
    c.f[4] = ld32((c.r[29].w[0] + 200u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 184u), c.f[4]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = ld32((c.r[17].w[0] + 116u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 30;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 160u), 0u);  goto L_00439F44; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_00439F4C; } }
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 1;
L_00439F44:
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 2;
L_00439F4C:
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 144u), 0u);  goto L_00439FAC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00439FB4; } }
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 1;
L_00439FAC:
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 2;
L_00439FB4:
    c.f[7] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[6] = ld32((c.r[20].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[4] = ld32((c.r[29].w[0] + 168u));
    c.f[5] = ld32((c.r[20].w[0] + 72u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[22] = c.f[3] & fp::kAbs;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    c.budget -= 18;
    { const bool t = c.r[19].d[0] == 0ull; c.f[21] = c.f[0] & fp::kAbs;  if (t) { goto L_0043A224; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A014u); set32(c.r[7], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_00FD(c, 567u, depth + 1u); else { c.pc = 0x004F7A10u; return; } if (c.pc != 0x0043A014u) [[unlikely]] return; }
L_0043A014:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0043A018:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[12] = c.f[22];
    set32(c.r[6], c.r[16].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A02Cu); set32(c.r[7], c.r[17].w[0] + 76u);  if (depth < kMaxDepth) unit_00FD(c, 567u, depth + 1u); else { c.pc = 0x004F7A10u; return; } if (c.pc != 0x0043A02Cu) [[unlikely]] return; }
L_0043A02C:
    set32(c.r[3], ld32((c.r[17].w[0] + 424u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[19], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_0043A224; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 124u)));  goto L_0043A228; }
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A058u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x0043A058u) [[unlikely]] return; }
L_0043A058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043A224; } }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[23]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], ld32((c.r[16].w[0] + 124u)));  goto L_0043A150; }
    set32(c.r[6], ld32((c.r[17].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 2336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A224; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[25]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0043A0C4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0] + 1052u)));  if (t) { goto L_0043A0DC; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0043A0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[6].w[0] + 1052u)));
    c.budget -= 6;
L_0043A0DC:
    set32(c.r[3], 0u + 150u);
    mmi::pminw(c.r[6], c.r[5], c.r[3]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 50u);  goto L_0043A0FC; }
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
L_0043A0FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0043A224; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043A224; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A144u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00D3(c, 6u, depth + 1u); else { c.pc = 0x0044C080u; return; } if (c.pc != 0x0043A144u) [[unlikely]] return; }
L_0043A144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043A224; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0043A150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 2336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A224; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0043A1A4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0] + 1052u)));  if (t) { goto L_0043A1BC; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_0043A1A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[6].w[0] + 1052u)));
    c.budget -= 6;
L_0043A1BC:
    set32(c.r[3], 0u + 150u);
    mmi::pminw(c.r[6], c.r[5], c.r[3]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 50u);  goto L_0043A1DC; }
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
L_0043A1DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0043A224; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043A224; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A224u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00D3(c, 6u, depth + 1u); else { c.pc = 0x0044C080u; return; } if (c.pc != 0x0043A224u) [[unlikely]] return; }
L_0043A224:
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0043A228:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st8((c.r[3].w[0] + 2316u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 2318u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[3].w[0] + 2320u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[3].w[0] + 2324u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[3].w[0] + 2328u), c.f[0]);
    st32((c.r[3].w[0] + 2332u), c.f[22]);
    st32((c.r[3].w[0] + 2336u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[3].w[0] + 2316u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 2318u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[3].w[0] + 2320u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[3].w[0] + 2324u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[3].w[0] + 2328u), c.f[0]);
    st32((c.r[3].w[0] + 2332u), c.f[21]);
    st32((c.r[3].w[0] + 2336u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 27;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0043A350; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));  goto L_0043A2B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043A34C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.budget -= 1;
L_0043A2B0:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043A34C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 24996u));  goto L_0043A2E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043A34C; } }
    c.f[1] = ld32((c.r[28].w[0] - 24996u));
    c.budget -= 1;
L_0043A2E0:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A34C; } }
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[4], c.r[4].w[0] + 22658u);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A318u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x0043A318u) [[unlikely]] return; }
L_0043A318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A320u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0043A320u) [[unlikely]] return; }
L_0043A320:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32248u));
    c.f[0] = ld32((c.r[28].w[0] - 32244u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 24996u), c.f[0]);
    c.budget -= 11;
L_0043A34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0043A350:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0043A390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A3A8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 131u, depth + 1u); else { c.pc = 0x0033A510u; return; } if (c.pc != 0x0043A3A8u) [[unlikely]] return; }
L_0043A3A8:
    c.f[0] = ld32((c.r[28].w[0] - 24996u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[28].w[0] - 24996u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043A3D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A414u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 147u, depth + 1u); else { c.pc = 0x0033A750u; return; } if (c.pc != 0x0043A414u) [[unlikely]] return; }
L_0043A414:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0043A47C; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 80u)));  goto L_0043A45C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A448u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0043A448u) [[unlikely]] return; }
L_0043A448:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 5;
L_0043A45C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A468u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A468u) [[unlikely]] return; }
L_0043A468:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 5;
L_0043A47C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0043A4DC; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 80u)));  goto L_0043A4BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A4A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0043A4A8u) [[unlikely]] return; }
L_0043A4A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 5;
L_0043A4BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A4C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A4C8u) [[unlikely]] return; }
L_0043A4C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 5;
L_0043A4DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_0043A4FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_0043A504; } }
L_0043A4FC:
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_0043A504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_0043AA80; } }
L_0043A50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A514u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0043A514u) [[unlikely]] return; }
L_0043A514:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[19], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 116u)));  if (t) { goto L_0043A578; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 80u)));  goto L_0043A55C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A548u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0043A548u) [[unlikely]] return; }
L_0043A548:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 5;
L_0043A55C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A568u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A568u) [[unlikely]] return; }
L_0043A568:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0043A578:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 236u), 0u);  goto L_0043A5D0; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_0043A5B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A59Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0043A59Cu) [[unlikely]] return; }
L_0043A59C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_0043A5B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A5BCu) [[unlikely]] return; }
L_0043A5BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 236u), 0u);
    c.budget -= 5;
L_0043A5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043A9CC; } }
L_0043A5D8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 1884u)));
    set32(c.r[20], ld32((c.r[23].w[0] + 392u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));  goto L_0043A604; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[20] = ld32((c.r[22].w[0] + 116u));  goto L_0043A700; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_0043A604:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0043A62C; }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
L_0043A62C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[19], c.r[16].w[0] + 40u);
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[20].w[0] + 40u);  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A6FC; } }
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A6FC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A6C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A6C4u) [[unlikely]] return; }
L_0043A6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A6FC; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 80u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A6E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A6E4u) [[unlikely]] return; }
L_0043A6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A6FC; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A6FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 316u, depth + 1u); else { c.pc = 0x0043AE70u; return; } if (c.pc != 0x0043A6FCu) [[unlikely]] return; }
L_0043A6FC:
    c.f[20] = ld32((c.r[22].w[0] + 116u));
    c.budget -= 1;
L_0043A700:
    c.f[0] = ld32((c.r[28].w[0] - 32220u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32564u));  goto L_0043A840; }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A71Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x0043A71Cu) [[unlikely]] return; }
L_0043A71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A83C; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 392u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));  goto L_0043A744; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043A83C; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_0043A744:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0043A76C; }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
L_0043A76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[19], c.r[16].w[0] + 40u);
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[20].w[0] + 40u);  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A83C; } }
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A83C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A804u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A804u) [[unlikely]] return; }
L_0043A804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A83C; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 80u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A824u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A824u) [[unlikely]] return; }
L_0043A824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A83C; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A83Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 316u, depth + 1u); else { c.pc = 0x0043AE70u; return; } if (c.pc != 0x0043A83Cu) [[unlikely]] return; }
L_0043A83C:
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 1;
L_0043A840:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[19].d[0] = 0ull + 0ull;  goto L_0043A9B0; }
    set32(c.r[4], ld32((c.r[22].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A858u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 117u, depth + 1u); else { c.pc = 0x00465390u; return; } if (c.pc != 0x0043A858u) [[unlikely]] return; }
L_0043A858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A978; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 392u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));  goto L_0043A880; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043A978; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_0043A880:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0043A8A8; }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
L_0043A8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[19], c.r[16].w[0] + 40u);
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[20].w[0] + 40u);  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043A978; } }
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043A978; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A940u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A940u) [[unlikely]] return; }
L_0043A940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A978; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 80u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A960u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043A960u) [[unlikely]] return; }
L_0043A960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043A978; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A978u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 316u, depth + 1u); else { c.pc = 0x0043AE70u; return; } if (c.pc != 0x0043A978u) [[unlikely]] return; }
L_0043A978:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043A9B0; } }
L_0043A984:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2296u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 236u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043A9ACu); set32(c.r[7], c.r[7].w[0] - 25984u);  if (depth < kMaxDepth) unit_00DC(c, 160u, depth + 1u); else { c.pc = 0x004730B0u; return; } if (c.pc != 0x0043A9ACu) [[unlikely]] return; }
L_0043A9AC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0043A9B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 2300u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { mmi::divu(c, 0, c.r[19].w[0], c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043A984u | kUnwind; return; } goto L_0043A984; }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 3;
L_0043A9CC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[18].w[0] + 2304u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[23], ld32((c.r[22].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043A5D8u | kUnwind; return; } goto L_0043A5D8; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043A9EC:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2300u)));
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2296u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    mmi::divu(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AA38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 160u, depth + 1u); else { c.pc = 0x004730B0u; return; } if (c.pc != 0x0043AA38u) [[unlikely]] return; }
L_0043AA38:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043A9ECu | kUnwind; return; } goto L_0043A9EC; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
L_0043AA80:
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[30].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043A50Cu | kUnwind; return; } goto L_0043A50C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AAA0u); set32(c.r[6], c.r[6].w[0] - 20880u);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00329680u; return; } if (c.pc != 0x0043AAA0u) [[unlikely]] return; }
L_0043AAA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AAB4u); set32(c.r[6], c.r[6].w[0] - 20880u);  if (depth < kMaxDepth) unit_008A(c, 30u, depth + 1u); else { c.pc = 0x00329680u; return; } if (c.pc != 0x0043AAB4u) [[unlikely]] return; }
L_0043AAB4:
    st32((c.r[28].w[0] - 24252u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0043AAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043AB00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 22670u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB2Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00C6(c, 204u, depth + 1u); else { c.pc = 0x00419820u; return; } if (c.pc != 0x0043AB2Cu) [[unlikely]] return; }
L_0043AB2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB40u); set32(c.r[6], c.r[6].w[0] + 22690u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0043AB40u) [[unlikely]] return; }
L_0043AB40:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB4Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043AB4Cu) [[unlikely]] return; }
L_0043AB4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 172u));  goto L_0043AB74; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043AB70; } }
    c.f[12] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB70u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043AB70u) [[unlikely]] return; }
L_0043AB70:
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 1;
L_0043AB74:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043AB80u) [[unlikely]] return; }
L_0043AB80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AB94u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 134u, depth + 1u); else { c.pc = 0x0033A540u; return; } if (c.pc != 0x0043AB94u) [[unlikely]] return; }
L_0043AB94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ABA8u); set32(c.r[6], c.r[6].w[0] + 22698u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0043ABA8u) [[unlikely]] return; }
L_0043ABA8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ABB4u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043ABB4u) [[unlikely]] return; }
L_0043ABB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 168u));  goto L_0043ABDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043ABD8; } }
    c.f[12] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ABD8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043ABD8u) [[unlikely]] return; }
L_0043ABD8:
    c.f[20] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 1;
L_0043ABDC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ABE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043ABE8u) [[unlikely]] return; }
L_0043ABE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ABF4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_008E(c, 132u, depth + 1u); else { c.pc = 0x0033A520u; return; } if (c.pc != 0x0043ABF4u) [[unlikely]] return; }
L_0043ABF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC08u); set32(c.r[6], c.r[6].w[0] + 22709u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0043AC08u) [[unlikely]] return; }
L_0043AC08:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC14u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0043AC14u) [[unlikely]] return; }
L_0043AC14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 164u));  goto L_0043AC3C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043AC38; } }
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC38u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0043AC38u) [[unlikely]] return; }
L_0043AC38:
    c.f[20] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 1;
L_0043AC3C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0043AC48u) [[unlikely]] return; }
L_0043AC48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC54u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_008E(c, 133u, depth + 1u); else { c.pc = 0x0033A530u; return; } if (c.pc != 0x0043AC54u) [[unlikely]] return; }
L_0043AC54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC60u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_008E(c, 130u, depth + 1u); else { c.pc = 0x0033A500u; return; } if (c.pc != 0x0043AC60u) [[unlikely]] return; }
L_0043AC60:
    c.f[12] = ld32((c.r[28].w[0] - 32432u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC6Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 129u, depth + 1u); else { c.pc = 0x0033A4F0u; return; } if (c.pc != 0x0043AC6Cu) [[unlikely]] return; }
L_0043AC6C:
    c.f[12] = ld32((c.r[28].w[0] - 32268u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008E(c, 128u, depth + 1u); else { c.pc = 0x0033A4E0u; return; } if (c.pc != 0x0043AC78u) [[unlikely]] return; }
L_0043AC78:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AC84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C6(c, 201u, depth + 1u); else { c.pc = 0x004197A0u; return; } if (c.pc != 0x0043AC84u) [[unlikely]] return; }
L_0043AC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0043ACA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_0043ACC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ACC4u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x0033A890u; return; } if (c.pc != 0x0043ACC4u) [[unlikely]] return; }
L_0043ACC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0043ACC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0043ACDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ACD8u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x0043ACD8u) [[unlikely]] return; }
L_0043ACD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0043ACDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0043ACF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ACECu);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x0043ACECu) [[unlikely]] return; }
L_0043ACEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0043ACF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0043AD04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD00u);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x0043AD00u) [[unlikely]] return; }
L_0043AD00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0043AD04:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0043AD18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD14u);  if (depth < kMaxDepth) unit_008E(c, 135u, depth + 1u); else { c.pc = 0x0033A550u; return; } if (c.pc != 0x0043AD14u) [[unlikely]] return; }
L_0043AD14:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0043AD18:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043AD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD5Cu); set32(c.r[4], c.r[4].w[0] - 21008u);  if (depth < kMaxDepth) unit_008E(c, 25u, depth + 1u); else { c.pc = 0x00338900u; return; } if (c.pc != 0x0043AD5Cu) [[unlikely]] return; }
L_0043AD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD64u);  if (depth < kMaxDepth) unit_008E(c, 142u, depth + 1u); else { c.pc = 0x0033A600u; return; } if (c.pc != 0x0043AD64u) [[unlikely]] return; }
L_0043AD64:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 34u, depth + 1u); else { c.pc = 0x003296C0u; return; } if (c.pc != 0x0043AD70u) [[unlikely]] return; }
L_0043AD70:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD7Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 158u, depth + 1u); else { c.pc = 0x0033A8E0u; return; } if (c.pc != 0x0043AD7Cu) [[unlikely]] return; }
L_0043AD7C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AD88u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008A(c, 34u, depth + 1u); else { c.pc = 0x003296C0u; return; } if (c.pc != 0x0043AD88u) [[unlikely]] return; }
L_0043AD88:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0043ADB4; } }
L_0043AD98:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043AD98u | kUnwind; return; } goto L_0043AD98; } }
L_0043ADB4:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ADC4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 65u, depth + 1u); else { c.pc = 0x00369F10u; return; } if (c.pc != 0x0043ADC4u) [[unlikely]] return; }
L_0043ADC4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ADD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 276u, depth + 1u); else { c.pc = 0x0043AB00u; return; } if (c.pc != 0x0043ADD0u) [[unlikely]] return; }
L_0043ADD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043ADF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043AE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0043AE34; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043AE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AE30u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043AE30u) [[unlikely]] return; }
L_0043AE30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043AE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043AE50:
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0043AE70:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 236u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0043AECC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_0043AED0; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0043AECC:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0043AED0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 236u)));  goto L_0043AF08; }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0043AEF8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_0043AEFC; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0043AEF8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0043AEFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_0043AF28; }
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_0043AF08:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AF1Cu); set32(c.r[7], c.r[7].w[0] - 20880u);  if (depth < kMaxDepth) unit_008A(c, 21u, depth + 1u); else { c.pc = 0x003294F0u; return; } if (c.pc != 0x0043AF1Cu) [[unlikely]] return; }
L_0043AF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0043B6B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0043AF28:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AF48u); set32(c.r[8], 0u + 116u);  if (depth < kMaxDepth) unit_0089(c, 259u, depth + 1u); else { c.pc = 0x00327F80u; return; } if (c.pc != 0x0043AF48u) [[unlikely]] return; }
L_0043AF48:
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_0043B6B4; } }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0043AF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AF70u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043AF70u) [[unlikely]] return; }
L_0043AF70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043AF74:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043AF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043AF8Cu); set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043AF8Cu) [[unlikely]] return; }
L_0043AF8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043AF90:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[5].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043AFD4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043AFD0; } }
    c.f[0] = ld32((c.r[18].w[0] + 408u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043B6B4; } }
    c.f[0] = ld32((c.r[17].w[0] + 408u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043AFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043B6B4; } }
L_0043AFD0:
    c.r[5].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 1;
L_0043AFD4:
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));  goto L_0043AFF0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2312u), c.r[17].w[0]);  if (t) { goto L_0043B6B4; } }
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.budget -= 1;
L_0043AFF0:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 128ull;  goto L_0043B00C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2312u), c.r[18].w[0]);  if (t) { goto L_0043B6B4; } }
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 1;
L_0043B00C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 128ull;  goto L_0043B02C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B020u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 590u, depth + 1u); else { c.pc = 0x004D7CD0u; return; } if (c.pc != 0x0043B020u) [[unlikely]] return; }
L_0043B020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043B6B4; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_0043B02C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_0043B04C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B040u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 590u, depth + 1u); else { c.pc = 0x004D7CD0u; return; } if (c.pc != 0x0043B040u) [[unlikely]] return; }
L_0043B040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043B6B4; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_0043B04C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_0043B070; } }
L_0043B054:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043B054u | kUnwind; return; } goto L_0043B054; } }
L_0043B070:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0043B63C; } }
    set32(c.r[3], c.r[23].w[0] << 3);
    c.budget -= 1;
L_0043B080:
    set32(c.r[3], c.r[3].w[0] - c.r[23].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[21], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 256u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[22], c.r[3].w[0] + 4u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[3].d[0] = ld64((c.r[19].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0043B1FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B0BCu); set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043B0BCu) [[unlikely]] return; }
L_0043B0BC:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043B130; } }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], c.r[3].w[0] + 256u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = c.r[5].d[0] | 12292ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[6].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B134; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043B130; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1202u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B130u); st8((c.r[16].w[0] + 1202u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x0043B130u) [[unlikely]] return; }
L_0043B130:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 1;
L_0043B134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B170; }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[3].w[0] + 256u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 12292ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B16Cu); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CE(c, 227u, depth + 1u); else { c.pc = 0x00439C10u; return; } if (c.pc != 0x0043B16Cu) [[unlikely]] return; }
L_0043B16C:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 1;
L_0043B170:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B1B0; }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 256u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[28].w[0] - 32240u));
    c.f[0] = ld32((c.r[28].w[0] - 32620u));
    c.r[3].d[0] = c.r[3].d[0] | 24ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 11;
L_0043B1B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B200; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_0043B1E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1964u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1965u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0043B1F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0043B1E8:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1966u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[3].w[0] + 1967u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0043B1F8:
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 1;
L_0043B1FC:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 1;
L_0043B200:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B214u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043B214u) [[unlikely]] return; }
L_0043B214:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043B270; } }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], c.r[3].w[0] + 256u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = c.r[5].d[0] | 12292ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[6].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));  goto L_0043B274; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043B270; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x0043B270u) [[unlikely]] return; }
L_0043B270:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.budget -= 1;
L_0043B274:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));  goto L_0043B2B4; }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 256u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[28].w[0] - 32240u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].d[0] = c.r[3].d[0] | 24ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.budget -= 11;
L_0043B2B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));  goto L_0043B2F0; }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[3].w[0] + 256u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 12292ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B2ECu); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CE(c, 227u, depth + 1u); else { c.pc = 0x00439C10u; return; } if (c.pc != 0x0043B2ECu) [[unlikely]] return; }
L_0043B2EC:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.budget -= 1;
L_0043B2F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043B33C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_0043B328; }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1964u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1965u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0043B338; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0043B328:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1966u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[3].w[0] + 1967u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0043B338:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043B33C:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 1;
L_0043B340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);  goto L_0043B364; }
    c.r[3].d[0] = ld64((c.r[19].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));  goto L_0043B388; }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_0043B364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[3].w[0] + 256u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 12292ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[4].d[0] = ld64((c.r[20].w[0] + 64u));
    c.budget -= 9;
L_0043B388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));  goto L_0043B3F4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  goto L_0043B3B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B3ACu);  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043B3ACu) [[unlikely]] return; }
L_0043B3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_0043B3BC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0043B3B8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043B3BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B3CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043B3CCu) [[unlikely]] return; }
L_0043B3CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0043B3E4; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043B3F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0043B3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0043B3F0; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043B3F0:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 64u));
    c.budget -= 1;
L_0043B3F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043B45C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_0043B424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B418u);  if (depth < kMaxDepth) unit_008E(c, 215u, depth + 1u); else { c.pc = 0x0033B240u; return; } if (c.pc != 0x0043B418u) [[unlikely]] return; }
L_0043B418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_0043B428; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0043B424:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0043B428:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B438u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043B438u) [[unlikely]] return; }
L_0043B438:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0043B450; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043B45C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0043B450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0043B45C; } }
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 1;
L_0043B45C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 192u));  goto L_0043B608; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043B604; } }
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[16], c.r[3].w[0] + 256u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[3], 0u + 4u);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.f[4] = ld32((c.r[29].w[0] + 244u));
    c.f[5] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[4]);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 248u), c.f[2]);  if (t) { goto L_0043B530; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_0043B558; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 22720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B4E4u); st32((c.r[29].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x0043B4E4u) [[unlikely]] return; }
L_0043B4E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 632u);  goto L_0043B4FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043B524; } }
    set32(c.r[4], c.r[29].w[0] + 632u);
    c.budget -= 1;
L_0043B4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B504u); set32(c.r[5], c.r[22].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x0043B504u) [[unlikely]] return; }
L_0043B504:
    set32(c.r[5], c.r[22].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 628u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B514u); set32(c.r[6], c.r[29].w[0] + 636u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x0043B514u) [[unlikely]] return; }
L_0043B514:
    set32(c.r[4], c.r[29].w[0] + 632u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B520u); set32(c.r[5], c.r[29].w[0] + 628u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x0043B520u) [[unlikely]] return; }
L_0043B520:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043B524:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043B554; } }
L_0043B530:
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    c.f[0] = ld32((c.r[28].w[0] - 32240u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[30], ld32((c.r[5].w[0] + 1880u)));
    c.r[4].d[0] = c.r[4].d[0] | 24ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
L_0043B554:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0043B558:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 124u)));  goto L_0043B5E0; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043B604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 22720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B590u); st32((c.r[29].w[0] + 624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x0043B590u) [[unlikely]] return; }
L_0043B590:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 620u);  goto L_0043B5A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043B5D0; } }
    set32(c.r[4], c.r[29].w[0] + 620u);
    c.budget -= 1;
L_0043B5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B5B0u); set32(c.r[5], c.r[22].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x0043B5B0u) [[unlikely]] return; }
L_0043B5B0:
    set32(c.r[5], c.r[22].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 616u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B5C0u); set32(c.r[6], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x0043B5C0u) [[unlikely]] return; }
L_0043B5C0:
    set32(c.r[4], c.r[29].w[0] + 620u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B5CCu); set32(c.r[5], c.r[29].w[0] + 616u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x0043B5CCu) [[unlikely]] return; }
L_0043B5CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043B5D0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043B604; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0043B5E0:
    c.f[0] = ld32((c.r[28].w[0] - 32240u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1880u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | 24ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 9;
L_0043B604:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_0043B608:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_0043B63C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B628u); set32(c.r[6], c.r[3].w[0] + 256u);  if (depth < kMaxDepth) unit_008E(c, 161u, depth + 1u); else { c.pc = 0x0033A920u; return; } if (c.pc != 0x0043B628u) [[unlikely]] return; }
L_0043B628:
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B638u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 145u, depth + 1u); else { c.pc = 0x0033A690u; return; } if (c.pc != 0x0043B638u) [[unlikely]] return; }
L_0043B638:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0043B63C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[23].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043B080u | kUnwind; return; } goto L_0043B080; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0043B6B4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043B6B4; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[2], c.f[4]);
    fpu_div(c, 2u, c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[29].w[0] + 304u), c.f[3]);
    fpu_div(c, 1u, c.f[0], c.f[4]);
    fpu_div(c, 0u, c.f[20], c.f[4]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B6B4u); st32((c.r[29].w[0] + 336u), c.f[0]);  if (depth < kMaxDepth) unit_00CE(c, 231u, depth + 1u); else { c.pc = 0x00439D80u; return; } if (c.pc != 0x0043B6B4u) [[unlikely]] return; }
L_0043B6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0043B6B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0043B6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043B760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28064u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043B748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043B748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043B748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043B748u) [[unlikely]] return; }
L_0043B748:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043B764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043B760u) [[unlikely]] return; }
L_0043B760:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043B764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043B780:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0043B7A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0043B7A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0043B7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043B7AC; } }
L_0043B7A8:
    set32(c.r[2], c.r[2].w[0] + 22816u);
    c.budget -= 1;
L_0043B7AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043B7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22880u);  c.pc = t; return; }
L_0043B7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 388u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B7E8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043B7E8u) [[unlikely]] return; }
L_0043B7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043B800; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B7FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 363u, depth + 1u); else { c.pc = 0x0043B920u; return; } if (c.pc != 0x0043B7FCu) [[unlikely]] return; }
L_0043B7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043B800:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043B810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26976u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 28u);  if (t) { goto L_0043B858; } }
L_0043B838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B840u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 28u, depth + 1u); else { c.pc = 0x0043C370u; return; } if (c.pc != 0x0043B840u) [[unlikely]] return; }
L_0043B840:
    set32(c.r[3], ld32((c.r[18].w[0] + 360u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B854u); c.r[5].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B3(c, 412u, depth + 1u); else { c.pc = 0x003CF6B0u; return; } if (c.pc != 0x0043B854u) [[unlikely]] return; }
L_0043B854:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0043B858:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0043B87C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043B838u | kUnwind; return; } goto L_0043B838; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0043B87C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043B890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26976u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 28u);  if (t) { goto L_0043B8D8; } }
L_0043B8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B8C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 28u, depth + 1u); else { c.pc = 0x0043C370u; return; } if (c.pc != 0x0043B8C0u) [[unlikely]] return; }
L_0043B8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B8C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 413u, depth + 1u); else { c.pc = 0x003CF6D0u; return; } if (c.pc != 0x0043B8C8u) [[unlikely]] return; }
L_0043B8C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0043B8D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0043B8FC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043B8B8u | kUnwind; return; } goto L_0043B8B8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0043B8FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043B910:
    c.budget -= 2;
    { set32(c.r[5], c.r[5].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E8E0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 258u, depth); }
L_0043B920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B944u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x0043B944u) [[unlikely]] return; }
L_0043B944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[19].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 28224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B958u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0043B958u) [[unlikely]] return; }
L_0043B958:
    set32(c.r[4], c.r[19].w[0] + 28u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B968u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043B968u) [[unlikely]] return; }
L_0043B968:
    set32(c.r[4], c.r[19].w[0] + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B978u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043B978u) [[unlikely]] return; }
L_0043B978:
    set32(c.r[4], c.r[19].w[0] + 152u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B988u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043B988u) [[unlikely]] return; }
L_0043B988:
    set32(c.r[4], c.r[19].w[0] + 212u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B998u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043B998u) [[unlikely]] return; }
L_0043B998:
    set32(c.r[4], c.r[19].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B9A8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0043B9A8u) [[unlikely]] return; }
L_0043B9A8:
    set32(c.r[16], c.r[19].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0043B9B4u) [[unlikely]] return; }
L_0043B9B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0043B9CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B9C8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043B9C8u) [[unlikely]] return; }
L_0043B9C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0043B9CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0043B9E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043B9DCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0043B9DCu) [[unlikely]] return; }
L_0043B9DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0043B9E0:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[19].w[0] + 348u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0043BA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0043BA04u) [[unlikely]] return; }
L_0043BA04:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0043BA1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA18u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043BA18u) [[unlikely]] return; }
L_0043BA18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0043BA1C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0043BA30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA2Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0043BA2Cu) [[unlikely]] return; }
L_0043BA2C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0043BA30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 625u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], c.r[29].w[0] + 95u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA50u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00CF(c, 25u, depth + 1u); else { c.pc = 0x0043C300u; return; } if (c.pc != 0x0043BA50u) [[unlikely]] return; }
L_0043BA50:
    set32(c.r[16], c.r[19].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0043BA5Cu) [[unlikely]] return; }
L_0043BA5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0043BA74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA70u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0043BA70u) [[unlikely]] return; }
L_0043BA70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0043BA74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  goto L_0043BA88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BA84u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0043BA84u) [[unlikely]] return; }
L_0043BA84:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0043BA88:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[29].w[0] + 92u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BAA4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C0(c, 7u, depth + 1u); else { c.pc = 0x004000B0u; return; } if (c.pc != 0x0043BAA4u) [[unlikely]] return; }
L_0043BAA4:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043BAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 22336u);
    set32(c.r[5], c.r[5].w[0] + 22983u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BAFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0043BAFCu) [[unlikely]] return; }
L_0043BAFC:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 23002u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 23015u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BB28u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BB28u) [[unlikely]] return; }
L_0043BB28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23022u);
    set32(c.r[6], c.r[6].w[0] + 23038u);
    set32(c.r[7], 0u + 88u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BB50u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BB50u) [[unlikely]] return; }
L_0043BB50:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BB5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043BB5Cu) [[unlikely]] return; }
L_0043BB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BB7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 26656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0043BB7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BB8Cu); set32(c.r[4], c.r[4].w[0] + 23042u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0043BB8Cu) [[unlikely]] return; }
L_0043BB8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23061u);
    set32(c.r[6], c.r[6].w[0] + 23042u);
    set32(c.r[7], 0u + 28u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BBB4u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BBB4u) [[unlikely]] return; }
L_0043BBB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23074u);
    set32(c.r[6], c.r[6].w[0] + 23042u);
    set32(c.r[7], 0u + 92u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BBDCu); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BBDCu) [[unlikely]] return; }
L_0043BBDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23089u);
    set32(c.r[6], c.r[6].w[0] + 23042u);
    set32(c.r[7], 0u + 152u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BC04u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BC04u) [[unlikely]] return; }
L_0043BC04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23101u);
    set32(c.r[6], c.r[6].w[0] + 23042u);
    set32(c.r[7], 0u + 212u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BC2Cu); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BC2Cu) [[unlikely]] return; }
L_0043BC2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23122u);
    set32(c.r[6], c.r[6].w[0] + 23042u);
    set32(c.r[7], 0u + 272u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BC54u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BC54u) [[unlikely]] return; }
L_0043BC54:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BC60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043BC60u) [[unlikely]] return; }
L_0043BC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BC80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] + 28192u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0043BC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BC90u); set32(c.r[4], c.r[4].w[0] + 23137u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0043BC90u) [[unlikely]] return; }
L_0043BC90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23166u);
    set32(c.r[6], c.r[6].w[0] + 23137u);
    set32(c.r[7], 0u + 332u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BCB8u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BCB8u) [[unlikely]] return; }
L_0043BCB8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BCC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043BCC4u) [[unlikely]] return; }
L_0043BCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043BD14; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BCD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043BCD8u) [[unlikely]] return; }
L_0043BCD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BCF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] + 28160u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0043BCF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] + 28128u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_0043BD14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BD24u); set32(c.r[4], c.r[4].w[0] + 23188u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0043BD24u) [[unlikely]] return; }
L_0043BD24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23210u);
    set32(c.r[6], c.r[6].w[0] + 23188u);
    set32(c.r[7], 0u + 348u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BD4Cu); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BD4Cu) [[unlikely]] return; }
L_0043BD4C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BD58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0043BD58u) [[unlikely]] return; }
L_0043BD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BD78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] + 28096u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0043BD78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BD88u); set32(c.r[4], c.r[4].w[0] + 23231u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0043BD88u) [[unlikely]] return; }
L_0043BD88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23249u);
    set32(c.r[6], c.r[6].w[0] + 23231u);
    set32(c.r[7], 0u + 364u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BDB0u); set32(c.r[9], c.r[9].w[0] + 22912u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0043BDB0u) [[unlikely]] return; }
L_0043BDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043BDD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043BF8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 340u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_0043BE4C; } }
L_0043BE24:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_0043BE44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BE40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043BE40u) [[unlikely]] return; }
L_0043BE40:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_0043BE44:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0043BE4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BE24u | kUnwind; return; } goto L_0043BE24; }
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 340u), 0u);  if (t) { goto L_0043BE98; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 348u);  goto L_0043BE9C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043BE98; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0043BE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BE98u);  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x0043BE98u) [[unlikely]] return; }
L_0043BE98:
    set32(c.r[2], c.r[17].w[0] + 348u);
    c.budget -= 1;
L_0043BE9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 332u);  goto L_0043BEDC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BED8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BED8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BED8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043BED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043BED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BED8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043BED8u) [[unlikely]] return; }
L_0043BED8:
    set32(c.r[2], c.r[17].w[0] + 332u);
    c.budget -= 1;
L_0043BEDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 272u);  goto L_0043BF1C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BF18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BF18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043BF18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043BF18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043BF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF18u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0043BF18u) [[unlikely]] return; }
L_0043BF18:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 1;
L_0043BF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043BF24u) [[unlikely]] return; }
L_0043BF24:
    set32(c.r[4], c.r[17].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043BF30u) [[unlikely]] return; }
L_0043BF30:
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043BF3Cu) [[unlikely]] return; }
L_0043BF3C:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043BF48u) [[unlikely]] return; }
L_0043BF48:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0043BF54u) [[unlikely]] return; }
L_0043BF54:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0043BF6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0043BF68u) [[unlikely]] return; }
L_0043BF68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043BF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0043BF74u) [[unlikely]] return; }
L_0043BF74:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043BF90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BF8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0043BF8Cu) [[unlikely]] return; }
L_0043BF8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043BF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043BFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30084u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0043BFCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043BFDC; } }
L_0043BFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043BFD4u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x0043BFD4u) [[unlikely]] return; }
L_0043BFD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0043BFDC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043BFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_00CF(c, 1u, depth);
}

}
