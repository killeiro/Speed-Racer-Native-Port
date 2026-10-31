#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B5[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0,
    21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30,
    0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51,
    0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67,
    0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0,
    0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0,
};

void unit_00B5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D4000;
    case 2u: goto L_003D4010;
    case 3u: goto L_003D4020;
    case 4u: goto L_003D4090;
    case 5u: goto L_003D40C8;
    case 6u: goto L_003D4154;
    case 7u: goto L_003D4174;
    case 8u: goto L_003D41B0;
    case 9u: goto L_003D41D0;
    case 10u: goto L_003D4208;
    case 11u: goto L_003D4228;
    case 12u: goto L_003D4240;
    case 13u: goto L_003D427C;
    case 14u: goto L_003D4288;
    case 15u: goto L_003D4290;
    case 16u: goto L_003D42A4;
    case 17u: goto L_003D42BC;
    case 18u: goto L_003D42D4;
    case 19u: goto L_003D42EC;
    case 20u: goto L_003D42F8;
    case 21u: goto L_003D4300;
    case 22u: goto L_003D4308;
    case 23u: goto L_003D4310;
    case 24u: goto L_003D4318;
    case 25u: goto L_003D4340;
    case 26u: goto L_003D4368;
    case 27u: goto L_003D43A0;
    case 28u: goto L_003D43D8;
    case 29u: goto L_003D43F4;
    case 30u: goto L_003D43FC;
    case 31u: goto L_003D4404;
    case 32u: goto L_003D440C;
    case 33u: goto L_003D4434;
    case 34u: goto L_003D4444;
    case 35u: goto L_003D4454;
    case 36u: goto L_003D4460;
    case 37u: goto L_003D4470;
    case 38u: goto L_003D4478;
    case 39u: goto L_003D44A4;
    case 40u: goto L_003D44D4;
    case 41u: goto L_003D44E0;
    case 42u: goto L_003D44E8;
    case 43u: goto L_003D44F0;
    case 44u: goto L_003D44F8;
    case 45u: goto L_003D4504;
    case 46u: goto L_003D4540;
    case 47u: goto L_003D455C;
    case 48u: goto L_003D4564;
    case 49u: goto L_003D456C;
    case 50u: goto L_003D4574;
    case 51u: goto L_003D457C;
    case 52u: goto L_003D4584;
    case 53u: goto L_003D458C;
    case 54u: goto L_003D4594;
    case 55u: goto L_003D459C;
    case 56u: goto L_003D45C4;
    case 57u: goto L_003D45D4;
    case 58u: goto L_003D45DC;
    case 59u: goto L_003D45E4;
    case 60u: goto L_003D45EC;
    case 61u: goto L_003D45F4;
    case 62u: goto L_003D4618;
    case 63u: goto L_003D4628;
    case 64u: goto L_003D4640;
    case 65u: goto L_003D4650;
    case 66u: goto L_003D4660;
    case 67u: goto L_003D467C;
    case 68u: goto L_003D4684;
    case 69u: goto L_003D4690;
    case 70u: goto L_003D46B0;
    case 71u: goto L_003D46F8;
    case 72u: goto L_003D4708;
    case 73u: goto L_003D4728;
    case 74u: goto L_003D473C;
    case 75u: goto L_003D4788;
    case 76u: goto L_003D4790;
    case 77u: goto L_003D4798;
    case 78u: goto L_003D47A4;
    case 79u: goto L_003D47AC;
    case 80u: goto L_003D47B4;
    case 81u: goto L_003D47C0;
    case 82u: goto L_003D47C8;
    case 83u: goto L_003D47D4;
    case 84u: goto L_003D47E0;
    case 85u: goto L_003D47EC;
    case 86u: goto L_003D47F8;
    case 87u: goto L_003D4804;
    case 88u: goto L_003D480C;
    case 89u: goto L_003D4814;
    case 90u: goto L_003D481C;
    case 91u: goto L_003D4828;
    case 92u: goto L_003D4830;
    case 93u: goto L_003D4838;
    case 94u: goto L_003D4840;
    case 95u: goto L_003D4848;
    case 96u: goto L_003D4850;
    case 97u: goto L_003D4858;
    case 98u: goto L_003D4860;
    case 99u: goto L_003D4878;
    case 100u: goto L_003D48BC;
    case 101u: goto L_003D4938;
    case 102u: goto L_003D4974;
    case 103u: goto L_003D499C;
    case 104u: goto L_003D49E0;
    case 105u: goto L_003D4A5C;
    case 106u: goto L_003D4A98;
    case 107u: goto L_003D4ABC;
    case 108u: goto L_003D4B00;
    case 109u: goto L_003D4B74;
    case 110u: goto L_003D4BA4;
    case 111u: goto L_003D4BD0;
    case 112u: goto L_003D4BE4;
    case 113u: goto L_003D4C28;
    case 114u: goto L_003D4C9C;
    case 115u: goto L_003D4CCC;
    case 116u: goto L_003D4D00;
    case 117u: goto L_003D4D1C;
    case 118u: goto L_003D4D60;
    case 119u: goto L_003D4DD4;
    case 120u: goto L_003D4E10;
    case 121u: goto L_003D4E38;
    case 122u: goto L_003D4E80;
    case 123u: goto L_003D4F0C;
    case 124u: goto L_003D4F38;
    case 125u: goto L_003D4F60;
    case 126u: goto L_003D4FA4;
    case 127u: goto L_003D5030;
    case 128u: goto L_003D505C;
    case 129u: goto L_003D5084;
    case 130u: goto L_003D50CC;
    case 131u: goto L_003D5158;
    case 132u: goto L_003D5184;
    case 133u: goto L_003D51AC;
    case 134u: goto L_003D51F0;
    case 135u: goto L_003D527C;
    case 136u: goto L_003D52A8;
    case 137u: goto L_003D52D0;
    case 138u: goto L_003D5314;
    case 139u: goto L_003D53A8;
    case 140u: goto L_003D53E0;
    case 141u: goto L_003D5408;
    case 142u: goto L_003D5450;
    case 143u: goto L_003D54DC;
    case 144u: goto L_003D5508;
    case 145u: goto L_003D551C;
    case 146u: goto L_003D5528;
    case 147u: goto L_003D5560;
    case 148u: goto L_003D55A0;
    case 149u: goto L_003D55D8;
    case 150u: goto L_003D5664;
    case 151u: goto L_003D5684;
    case 152u: goto L_003D56A4;
    case 153u: goto L_003D56C0;
    case 154u: goto L_003D57C0;
    case 155u: goto L_003D5834;
    case 156u: goto L_003D5950;
    case 157u: goto L_003D59B4;
    case 158u: goto L_003D59DC;
    case 159u: goto L_003D59F4;
    case 160u: goto L_003D5A0C;
    case 161u: goto L_003D5A6C;
    case 162u: goto L_003D5AB0;
    case 163u: goto L_003D5AC8;
    case 164u: goto L_003D5AE0;
    case 165u: goto L_003D5B00;
    case 166u: goto L_003D5B90;
    case 167u: goto L_003D5BC0;
    case 168u: goto L_003D5BDC;
    case 169u: goto L_003D5C00;
    case 170u: goto L_003D5C38;
    case 171u: goto L_003D5C44;
    case 172u: goto L_003D5C64;
    case 173u: goto L_003D5C88;
    case 174u: goto L_003D5C9C;
    case 175u: goto L_003D5CC0;
    case 176u: goto L_003D5CF0;
    case 177u: goto L_003D5D18;
    case 178u: goto L_003D5D28;
    case 179u: goto L_003D5D48;
    case 180u: goto L_003D5D54;
    case 181u: goto L_003D5D74;
    case 182u: goto L_003D5D88;
    case 183u: goto L_003D5DA4;
    case 184u: goto L_003D5DBC;
    case 185u: goto L_003D5DC4;
    case 186u: goto L_003D5DD4;
    case 187u: goto L_003D5DF0;
    case 188u: goto L_003D5E10;
    case 189u: goto L_003D5E2C;
    case 190u: goto L_003D5E44;
    case 191u: goto L_003D5E54;
    case 192u: goto L_003D5E70;
    case 193u: goto L_003D5E88;
    case 194u: goto L_003D5E98;
    case 195u: goto L_003D5EB4;
    case 196u: goto L_003D5ECC;
    case 197u: goto L_003D5EDC;
    case 198u: goto L_003D5EF4;
    case 199u: goto L_003D5F0C;
    case 200u: goto L_003D5F1C;
    case 201u: goto L_003D5F34;
    case 202u: goto L_003D5F4C;
    case 203u: goto L_003D5F5C;
    case 204u: goto L_003D5F74;
    case 205u: goto L_003D5F8C;
    case 206u: goto L_003D5F9C;
    case 207u: goto L_003D5FB4;
    case 208u: goto L_003D5FCC;
    case 209u: goto L_003D5FDC;
    case 210u: goto L_003D5FF4;
    case 211u: goto L_003D600C;
    case 212u: goto L_003D601C;
    case 213u: goto L_003D6034;
    case 214u: goto L_003D604C;
    case 215u: goto L_003D605C;
    case 216u: goto L_003D6074;
    case 217u: goto L_003D608C;
    case 218u: goto L_003D609C;
    case 219u: goto L_003D60B4;
    case 220u: goto L_003D60CC;
    case 221u: goto L_003D60DC;
    case 222u: goto L_003D60F4;
    case 223u: goto L_003D610C;
    case 224u: goto L_003D6124;
    case 225u: goto L_003D6130;
    case 226u: goto L_003D6140;
    case 227u: goto L_003D6154;
    case 228u: goto L_003D6170;
    case 229u: goto L_003D6190;
    case 230u: goto L_003D61D0;
    case 231u: goto L_003D6218;
    case 232u: goto L_003D6458;
    case 233u: goto L_003D6464;
    case 234u: goto L_003D6484;
    case 235u: goto L_003D64A0;
    case 236u: goto L_003D64B8;
    case 237u: goto L_003D64D0;
    case 238u: goto L_003D64EC;
    case 239u: goto L_003D6500;
    case 240u: goto L_003D6510;
    case 241u: goto L_003D6528;
    case 242u: goto L_003D654C;
    case 243u: goto L_003D6564;
    case 244u: goto L_003D657C;
    case 245u: goto L_003D659C;
    case 246u: goto L_003D65AC;
    case 247u: goto L_003D65C0;
    case 248u: goto L_003D65C8;
    case 249u: goto L_003D65E0;
    case 250u: goto L_003D664C;
    case 251u: goto L_003D665C;
    case 252u: goto L_003D666C;
    case 253u: goto L_003D667C;
    case 254u: goto L_003D6694;
    case 255u: goto L_003D669C;
    case 256u: goto L_003D66A4;
    case 257u: goto L_003D66AC;
    case 258u: goto L_003D66B4;
    case 259u: goto L_003D6740;
    case 260u: goto L_003D6760;
    case 261u: goto L_003D6770;
    case 262u: goto L_003D677C;
    case 263u: goto L_003D679C;
    case 264u: goto L_003D67B4;
    case 265u: goto L_003D67DC;
    case 266u: goto L_003D6810;
    case 267u: goto L_003D6828;
    case 268u: goto L_003D6898;
    case 269u: goto L_003D68B0;
    case 270u: goto L_003D68BC;
    case 271u: goto L_003D68F0;
    case 272u: goto L_003D6910;
    case 273u: goto L_003D6924;
    case 274u: goto L_003D692C;
    case 275u: goto L_003D6938;
    case 276u: goto L_003D6948;
    case 277u: goto L_003D6960;
    case 278u: goto L_003D6990;
    case 279u: goto L_003D69B0;
    case 280u: goto L_003D69B8;
    case 281u: goto L_003D69C8;
    case 282u: goto L_003D69E0;
    case 283u: goto L_003D69F0;
    case 284u: goto L_003D6A30;
    case 285u: goto L_003D6A68;
    case 286u: goto L_003D6A74;
    case 287u: goto L_003D6A8C;
    case 288u: goto L_003D6AAC;
    case 289u: goto L_003D6AC8;
    case 290u: goto L_003D6AE8;
    case 291u: goto L_003D6B00;
    case 292u: goto L_003D6B20;
    case 293u: goto L_003D6B38;
    case 294u: goto L_003D6B58;
    case 295u: goto L_003D6B70;
    case 296u: goto L_003D6B90;
    case 297u: goto L_003D6BA8;
    case 298u: goto L_003D6BC8;
    case 299u: goto L_003D6BE0;
    case 300u: goto L_003D6BEC;
    case 301u: goto L_003D6C38;
    case 302u: goto L_003D6CA8;
    case 303u: goto L_003D6D2C;
    case 304u: goto L_003D6D44;
    case 305u: goto L_003D6D78;
    case 306u: goto L_003D6DB4;
    case 307u: goto L_003D6DCC;
    case 308u: goto L_003D6DD8;
    case 309u: goto L_003D6DE8;
    case 310u: goto L_003D6E10;
    case 311u: goto L_003D6E3C;
    case 312u: goto L_003D6E5C;
    case 313u: goto L_003D6E9C;
    case 314u: goto L_003D6F6C;
    case 315u: goto L_003D7020;
    case 316u: goto L_003D7038;
    case 317u: goto L_003D704C;
    case 318u: goto L_003D7078;
    case 319u: goto L_003D7094;
    case 320u: goto L_003D70E0;
    case 321u: goto L_003D70EC;
    case 322u: goto L_003D71C0;
    case 323u: goto L_003D71E0;
    case 324u: goto L_003D71FC;
    case 325u: goto L_003D720C;
    case 326u: goto L_003D7218;
    case 327u: goto L_003D7260;
    case 328u: goto L_003D7278;
    case 329u: goto L_003D7294;
    case 330u: goto L_003D72BC;
    case 331u: goto L_003D72D4;
    case 332u: goto L_003D72F0;
    case 333u: goto L_003D7314;
    case 334u: goto L_003D7340;
    case 335u: goto L_003D7358;
    case 336u: goto L_003D738C;
    case 337u: goto L_003D73C8;
    case 338u: goto L_003D74A8;
    case 339u: goto L_003D74E0;
    case 340u: goto L_003D74EC;
    case 341u: goto L_003D7534;
    case 342u: goto L_003D7594;
    case 343u: goto L_003D7608;
    case 344u: goto L_003D7614;
    case 345u: goto L_003D7630;
    case 346u: goto L_003D7644;
    case 347u: goto L_003D7674;
    case 348u: goto L_003D768C;
    case 349u: goto L_003D76A0;
    case 350u: goto L_003D76D4;
    case 351u: goto L_003D76F0;
    case 352u: goto L_003D7708;
    case 353u: goto L_003D7738;
    case 354u: goto L_003D7750;
    case 355u: goto L_003D7764;
    case 356u: goto L_003D7794;
    case 357u: goto L_003D77AC;
    case 358u: goto L_003D77C0;
    case 359u: goto L_003D77F0;
    case 360u: goto L_003D7808;
    case 361u: goto L_003D781C;
    case 362u: goto L_003D784C;
    case 363u: goto L_003D785C;
    case 364u: goto L_003D7890;
    case 365u: goto L_003D78E8;
    case 366u: goto L_003D7908;
    case 367u: goto L_003D7928;
    case 368u: goto L_003D79DC;
    case 369u: goto L_003D7A24;
    case 370u: goto L_003D7A44;
    case 371u: goto L_003D7A68;
    case 372u: goto L_003D7A9C;
    case 373u: goto L_003D7AD8;
    case 374u: goto L_003D7AF4;
    case 375u: goto L_003D7B30;
    case 376u: goto L_003D7B40;
    case 377u: goto L_003D7B5C;
    case 378u: goto L_003D7BAC;
    case 379u: goto L_003D7BC8;
    case 380u: goto L_003D7CB4;
    case 381u: goto L_003D7CD0;
    case 382u: goto L_003D7DBC;
    case 383u: goto L_003D7DD8;
    case 384u: goto L_003D7E00;
    case 385u: goto L_003D7EA0;
    case 386u: goto L_003D7EB8;
    case 387u: goto L_003D7EEC;
    case 388u: goto L_003D7F10;
    case 389u: goto L_003D7F28;
    case 390u: goto L_003D7F38;
    case 391u: goto L_003D7F48;
    case 392u: goto L_003D7F58;
    case 393u: goto L_003D7F68;
    case 394u: goto L_003D7F84;
    case 395u: goto L_003D7FA4;
    case 396u: goto L_003D7FB4;
    case 397u: goto L_003D7FC4;
    case 398u: goto L_003D7FD4;
    case 399u: goto L_003D7FE4;
    case 400u: goto L_003D7FF4;
    default: bad_entry(c, 0x003D4000u); return;
    }
L_003D4000:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4010u) [[unlikely]] return; }
L_003D4010:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D41B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22152u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4174; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D40E4; } }
L_003D4090:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D40C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D40C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D40C8u) [[unlikely]] return; }
L_003D40C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
L_003D40E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 808u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D4090u | kUnwind; return; } goto L_003D4090; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0] + 808u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 812u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4154; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 816u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4154; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 816u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4154; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 816u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4154; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4154u);  if (depth < kMaxDepth) unit_00B6(c, 96u, depth + 1u); else { c.pc = 0x003D8CF0u; return; } if (c.pc != 0x003D4154u) [[unlikely]] return; }
L_003D4154:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] + 16848u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4174u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x003D4174u) [[unlikely]] return; }
L_003D4174:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4190; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25232u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D4190:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D41B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D41B0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D41B0u) [[unlikely]] return; }
L_003D41B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D41D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4228; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4208; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4208u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D4208u) [[unlikely]] return; }
L_003D4208:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D4228; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4228u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D4228u) [[unlikely]] return; }
L_003D4228:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4240:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D427Cu);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D427Cu) [[unlikely]] return; }
L_003D427C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4288u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D4288u) [[unlikely]] return; }
L_003D4288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4290u);  if (depth < kMaxDepth) unit_00D2(c, 215u, depth + 1u); else { c.pc = 0x00449ED0u; return; } if (c.pc != 0x003D4290u) [[unlikely]] return; }
L_003D4290:
    set32(c.r[30], ld32((c.r[28].w[0] - 22500u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42A4u);  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x003D42A4u) [[unlikely]] return; }
L_003D42A4:
    set32(c.r[23], ld32((c.r[28].w[0] - 22944u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19774u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42BCu);  if (depth < kMaxDepth) unit_00ED(c, 508u, depth + 1u); else { c.pc = 0x004B7820u; return; } if (c.pc != 0x003D42BCu) [[unlikely]] return; }
L_003D42BC:
    set32(c.r[22], ld32((c.r[28].w[0] - 22944u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19771u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42D4u);  if (depth < kMaxDepth) unit_00ED(c, 508u, depth + 1u); else { c.pc = 0x004B7820u; return; } if (c.pc != 0x003D42D4u) [[unlikely]] return; }
L_003D42D4:
    set32(c.r[21], ld32((c.r[28].w[0] - 22944u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42ECu);  if (depth < kMaxDepth) unit_00ED(c, 508u, depth + 1u); else { c.pc = 0x004B7820u; return; } if (c.pc != 0x003D42ECu) [[unlikely]] return; }
L_003D42EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42F8u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D42F8u) [[unlikely]] return; }
L_003D42F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4300u);  if (depth < kMaxDepth) unit_00F9(c, 268u, depth + 1u); else { c.pc = 0x004E64A0u; return; } if (c.pc != 0x003D4300u) [[unlikely]] return; }
L_003D4300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4308u);  if (depth < kMaxDepth) unit_00C2(c, 235u, depth + 1u); else { c.pc = 0x0040A0F0u; return; } if (c.pc != 0x003D4308u) [[unlikely]] return; }
L_003D4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4310u);  if (depth < kMaxDepth) unit_00DD(c, 353u, depth + 1u); else { c.pc = 0x00476F60u; return; } if (c.pc != 0x003D4310u) [[unlikely]] return; }
L_003D4310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4318u);  if (depth < kMaxDepth) unit_00D2(c, 365u, depth + 1u); else { c.pc = 0x0044B110u; return; } if (c.pc != 0x003D4318u) [[unlikely]] return; }
L_003D4318:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D4340; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4340u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4340u) [[unlikely]] return; }
L_003D4340:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[20], ld32((c.r[28].w[0] - 28808u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0] + 144u)));
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4368u);  if (depth < kMaxDepth) unit_0030(c, 91u, depth + 1u); else { c.pc = 0x001C1300u; return; } if (c.pc != 0x003D4368u) [[unlikely]] return; }
L_003D4368:
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
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D43A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D43D8u);  if (depth < kMaxDepth) unit_00CE(c, 203u, depth + 1u); else { c.pc = 0x004399A0u; return; } if (c.pc != 0x003D43D8u) [[unlikely]] return; }
L_003D43D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D43FC; } }
    set32(c.r[23], ld32((c.r[28].w[0] - 25052u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D43F4u);  if (depth < kMaxDepth) unit_00CE(c, 127u, depth + 1u); else { c.pc = 0x00439230u; return; } if (c.pc != 0x003D43F4u) [[unlikely]] return; }
L_003D43F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D43FCu);  if (depth < kMaxDepth) unit_00CE(c, 174u, depth + 1u); else { c.pc = 0x004396A0u; return; } if (c.pc != 0x003D43FCu) [[unlikely]] return; }
L_003D43FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4404u);  if (depth < kMaxDepth) unit_00D1(c, 123u, depth + 1u); else { c.pc = 0x00444A20u; return; } if (c.pc != 0x003D4404u) [[unlikely]] return; }
L_003D4404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D440Cu);  if (depth < kMaxDepth) unit_00D1(c, 51u, depth + 1u); else { c.pc = 0x00444440u; return; } if (c.pc != 0x003D440Cu) [[unlikely]] return; }
L_003D440C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D4434; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D4434u) [[unlikely]] return; }
L_003D4434:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4444u);  if (depth < kMaxDepth) unit_00FD(c, 61u, depth + 1u); else { c.pc = 0x004F4610u; return; } if (c.pc != 0x003D4444u) [[unlikely]] return; }
L_003D4444:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19765u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4454u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x003D4454u) [[unlikely]] return; }
L_003D4454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4460u);  if (depth < kMaxDepth) unit_00B6(c, 89u, depth + 1u); else { c.pc = 0x003D8B00u; return; } if (c.pc != 0x003D4460u) [[unlikely]] return; }
L_003D4460:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4470u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003D4470u) [[unlikely]] return; }
L_003D4470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4478u);  if (depth < kMaxDepth) unit_0015(c, 278u, depth + 1u); else { c.pc = 0x001565A0u; return; } if (c.pc != 0x003D4478u) [[unlikely]] return; }
L_003D4478:
    set32(c.r[22], ld32((c.r[28].w[0] - 28960u)));
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D44A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D44A4u) [[unlikely]] return; }
L_003D44A4:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[28].w[0] - 28956u)));
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D44D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D44D4u) [[unlikely]] return; }
L_003D44D4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44E0u);  if (depth < kMaxDepth) unit_002F(c, 232u, depth + 1u); else { c.pc = 0x001BEB70u; return; } if (c.pc != 0x003D44E0u) [[unlikely]] return; }
L_003D44E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44E8u);  if (depth < kMaxDepth) unit_002F(c, 233u, depth + 1u); else { c.pc = 0x001BEB80u; return; } if (c.pc != 0x003D44E8u) [[unlikely]] return; }
L_003D44E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44F0u);  if (depth < kMaxDepth) unit_00C0(c, 265u, depth + 1u); else { c.pc = 0x00403BF0u; return; } if (c.pc != 0x003D44F0u) [[unlikely]] return; }
L_003D44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44F8u);  if (depth < kMaxDepth) unit_002F(c, 34u, depth + 1u); else { c.pc = 0x001BC5A0u; return; } if (c.pc != 0x003D44F8u) [[unlikely]] return; }
L_003D44F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4504u);  if (depth < kMaxDepth) unit_002C(c, 304u, depth + 1u); else { c.pc = 0x001B3F10u; return; } if (c.pc != 0x003D4504u) [[unlikely]] return; }
L_003D4504:
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
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D4540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D455Cu);  if (depth < kMaxDepth) unit_00C9(c, 383u, depth + 1u); else { c.pc = 0x00426D00u; return; } if (c.pc != 0x003D455Cu) [[unlikely]] return; }
L_003D455C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4564u);  if (depth < kMaxDepth) unit_00B6(c, 263u, depth + 1u); else { c.pc = 0x003DA4B0u; return; } if (c.pc != 0x003D4564u) [[unlikely]] return; }
L_003D4564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D456Cu);  if (depth < kMaxDepth) unit_00BF(c, 210u, depth + 1u); else { c.pc = 0x003FDA20u; return; } if (c.pc != 0x003D456Cu) [[unlikely]] return; }
L_003D456C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4574u);  if (depth < kMaxDepth) unit_00B1(c, 211u, depth + 1u); else { c.pc = 0x003C5FE0u; return; } if (c.pc != 0x003D4574u) [[unlikely]] return; }
L_003D4574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D457Cu);  if (depth < kMaxDepth) unit_00DB(c, 278u, depth + 1u); else { c.pc = 0x0046FDD0u; return; } if (c.pc != 0x003D457Cu) [[unlikely]] return; }
L_003D457C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4584u);  if (depth < kMaxDepth) unit_00D0(c, 28u, depth + 1u); else { c.pc = 0x00440270u; return; } if (c.pc != 0x003D4584u) [[unlikely]] return; }
L_003D4584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D458Cu);  if (depth < kMaxDepth) unit_00CD(c, 199u, depth + 1u); else { c.pc = 0x004353A0u; return; } if (c.pc != 0x003D458Cu) [[unlikely]] return; }
L_003D458C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4594u);  if (depth < kMaxDepth) unit_0003(c, 457u, depth + 1u); else { c.pc = 0x0010FED0u; return; } if (c.pc != 0x003D4594u) [[unlikely]] return; }
L_003D4594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D459Cu);  if (depth < kMaxDepth) unit_0006(c, 261u, depth + 1u); else { c.pc = 0x0011A020u; return; } if (c.pc != 0x003D459Cu) [[unlikely]] return; }
L_003D459C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 680u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D45C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D45C4u) [[unlikely]] return; }
L_003D45C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[2].w[0] + 680u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45D4u);  if (depth < kMaxDepth) unit_00CD(c, 21u, depth + 1u); else { c.pc = 0x00434330u; return; } if (c.pc != 0x003D45D4u) [[unlikely]] return; }
L_003D45D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45DCu);  if (depth < kMaxDepth) unit_0101(c, 105u, depth + 1u); else { c.pc = 0x00504C00u; return; } if (c.pc != 0x003D45DCu) [[unlikely]] return; }
L_003D45DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45E4u);  if (depth < kMaxDepth) unit_00CD(c, 25u, depth + 1u); else { c.pc = 0x00434390u; return; } if (c.pc != 0x003D45E4u) [[unlikely]] return; }
L_003D45E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45ECu);  if (depth < kMaxDepth) unit_000A(c, 154u, depth + 1u); else { c.pc = 0x00129460u; return; } if (c.pc != 0x003D45ECu) [[unlikely]] return; }
L_003D45EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45F4u);  if (depth < kMaxDepth) unit_0000(c, 291u, depth + 1u); else { c.pc = 0x00103390u; return; } if (c.pc != 0x003D45F4u) [[unlikely]] return; }
L_003D45F4:
    set32(c.r[16], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D4604; } }
    set32(c.r[16], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_003D4604:
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4618u);  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x003D4618u) [[unlikely]] return; }
L_003D4618:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4628u);  if (depth < kMaxDepth) unit_0015(c, 220u, depth + 1u); else { c.pc = 0x00155F70u; return; } if (c.pc != 0x003D4628u) [[unlikely]] return; }
L_003D4628:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4640u);  if (depth < kMaxDepth) unit_0015(c, 218u, depth + 1u); else { c.pc = 0x00155F20u; return; } if (c.pc != 0x003D4640u) [[unlikely]] return; }
L_003D4640:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4650u);  if (depth < kMaxDepth) unit_0015(c, 220u, depth + 1u); else { c.pc = 0x00155F70u; return; } if (c.pc != 0x003D4650u) [[unlikely]] return; }
L_003D4650:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4660u);  if (depth < kMaxDepth) unit_0015(c, 217u, depth + 1u); else { c.pc = 0x00155F00u; return; } if (c.pc != 0x003D4660u) [[unlikely]] return; }
L_003D4660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D467C; } }
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D467Cu);  if (depth < kMaxDepth) unit_0015(c, 215u, depth + 1u); else { c.pc = 0x00155ED0u; return; } if (c.pc != 0x003D467Cu) [[unlikely]] return; }
L_003D467C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4684u);  if (depth < kMaxDepth) unit_00B9(c, 62u, depth + 1u); else { c.pc = 0x003E4840u; return; } if (c.pc != 0x003D4684u) [[unlikely]] return; }
L_003D4684:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4690u);  if (depth < kMaxDepth) unit_002C(c, 301u, depth + 1u); else { c.pc = 0x001B3EE0u; return; } if (c.pc != 0x003D4690u) [[unlikely]] return; }
L_003D4690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D46B0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 480u), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 512u);
    set32(c.r[6], 0u + 512u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D46F8u);  if (depth < kMaxDepth) unit_0006(c, 265u, depth + 1u); else { c.pc = 0x0011A050u; return; } if (c.pc != 0x003D46F8u) [[unlikely]] return; }
L_003D46F8:
    set32(c.r[4], 0u + 836u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4708u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4708u) [[unlikely]] return; }
L_003D4708:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D476C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4728u);  if (depth < kMaxDepth) unit_000E(c, 131u, depth + 1u); else { c.pc = 0x00139710u; return; } if (c.pc != 0x003D4728u) [[unlikely]] return; }
L_003D4728:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D473Cu);  if (depth < kMaxDepth) unit_00B5(c, 156u, depth + 1u); else { c.pc = 0x003D5950u; return; } if (c.pc != 0x003D473Cu) [[unlikely]] return; }
L_003D473C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 22128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22152u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 224u), c.r[17].w[0]);
    c.budget -= 12;
L_003D476C:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[2].w[0] + 680u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 680u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4788u);  if (depth < kMaxDepth) unit_0007(c, 77u, depth + 1u); else { c.pc = 0x0011C8C0u; return; } if (c.pc != 0x003D4788u) [[unlikely]] return; }
L_003D4788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4790u);  if (depth < kMaxDepth) unit_0006(c, 224u, depth + 1u); else { c.pc = 0x00119A40u; return; } if (c.pc != 0x003D4790u) [[unlikely]] return; }
L_003D4790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4798u);  if (depth < kMaxDepth) unit_0016(c, 575u, depth + 1u); else { c.pc = 0x0015B9C0u; return; } if (c.pc != 0x003D4798u) [[unlikely]] return; }
L_003D4798:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47A4u);  if (depth < kMaxDepth) unit_0005(c, 174u, depth + 1u); else { c.pc = 0x00116EF0u; return; } if (c.pc != 0x003D47A4u) [[unlikely]] return; }
L_003D47A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47ACu);  if (depth < kMaxDepth) unit_0005(c, 173u, depth + 1u); else { c.pc = 0x00116ED0u; return; } if (c.pc != 0x003D47ACu) [[unlikely]] return; }
L_003D47AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47B4u);  if (depth < kMaxDepth) unit_0005(c, 175u, depth + 1u); else { c.pc = 0x00116F10u; return; } if (c.pc != 0x003D47B4u) [[unlikely]] return; }
L_003D47B4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47C0u);  if (depth < kMaxDepth) unit_00FC(c, 343u, depth + 1u); else { c.pc = 0x004F2920u; return; } if (c.pc != 0x003D47C0u) [[unlikely]] return; }
L_003D47C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47C8u);  if (depth < kMaxDepth) unit_00CE(c, 382u, depth + 1u); else { c.pc = 0x0043BAD0u; return; } if (c.pc != 0x003D47C8u) [[unlikely]] return; }
L_003D47C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47D4u);  if (depth < kMaxDepth) unit_00C4(c, 284u, depth + 1u); else { c.pc = 0x00411F20u; return; } if (c.pc != 0x003D47D4u) [[unlikely]] return; }
L_003D47D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47E0u);  if (depth < kMaxDepth) unit_00B3(c, 417u, depth + 1u); else { c.pc = 0x003CF760u; return; } if (c.pc != 0x003D47E0u) [[unlikely]] return; }
L_003D47E0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47ECu);  if (depth < kMaxDepth) unit_00B1(c, 205u, depth + 1u); else { c.pc = 0x003C5F10u; return; } if (c.pc != 0x003D47ECu) [[unlikely]] return; }
L_003D47EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47F8u);  if (depth < kMaxDepth) unit_00F0(c, 153u, depth + 1u); else { c.pc = 0x004C1340u; return; } if (c.pc != 0x003D47F8u) [[unlikely]] return; }
L_003D47F8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4804u);  if (depth < kMaxDepth) unit_00F0(c, 143u, depth + 1u); else { c.pc = 0x004C11E0u; return; } if (c.pc != 0x003D4804u) [[unlikely]] return; }
L_003D4804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D480Cu);  if (depth < kMaxDepth) unit_00C6(c, 144u, depth + 1u); else { c.pc = 0x00419230u; return; } if (c.pc != 0x003D480Cu) [[unlikely]] return; }
L_003D480C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4814u);  if (depth < kMaxDepth) unit_00FC(c, 10u, depth + 1u); else { c.pc = 0x004F00A0u; return; } if (c.pc != 0x003D4814u) [[unlikely]] return; }
L_003D4814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D481Cu);  if (depth < kMaxDepth) unit_00BF(c, 479u, depth + 1u); else { c.pc = 0x003FF850u; return; } if (c.pc != 0x003D481Cu) [[unlikely]] return; }
L_003D481C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4828u);  if (depth < kMaxDepth) unit_00CF(c, 156u, depth + 1u); else { c.pc = 0x0043D8F0u; return; } if (c.pc != 0x003D4828u) [[unlikely]] return; }
L_003D4828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4830u);  if (depth < kMaxDepth) unit_00D6(c, 229u, depth + 1u); else { c.pc = 0x00459AB0u; return; } if (c.pc != 0x003D4830u) [[unlikely]] return; }
L_003D4830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4838u);  if (depth < kMaxDepth) unit_00D6(c, 401u, depth + 1u); else { c.pc = 0x0045AEB0u; return; } if (c.pc != 0x003D4838u) [[unlikely]] return; }
L_003D4838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4840u);  if (depth < kMaxDepth) unit_00D0(c, 462u, depth + 1u); else { c.pc = 0x00443190u; return; } if (c.pc != 0x003D4840u) [[unlikely]] return; }
L_003D4840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4848u);  if (depth < kMaxDepth) unit_00EE(c, 45u, depth + 1u); else { c.pc = 0x004B8540u; return; } if (c.pc != 0x003D4848u) [[unlikely]] return; }
L_003D4848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4850u);  if (depth < kMaxDepth) unit_00D1(c, 241u, depth + 1u); else { c.pc = 0x004459B0u; return; } if (c.pc != 0x003D4850u) [[unlikely]] return; }
L_003D4850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4858u);  if (depth < kMaxDepth) unit_00BE(c, 288u, depth + 1u); else { c.pc = 0x003FAF40u; return; } if (c.pc != 0x003D4858u) [[unlikely]] return; }
L_003D4858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4860u);  if (depth < kMaxDepth) unit_00DB(c, 224u, depth + 1u); else { c.pc = 0x0046F740u; return; } if (c.pc != 0x003D4860u) [[unlikely]] return; }
L_003D4860:
    set32(c.r[3], ld32((c.r[28].w[0] - 29076u)));
    st32((c.r[29].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4878u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4878u) [[unlikely]] return; }
L_003D4878:
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D48F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[4], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48BCu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D48BCu) [[unlikely]] return; }
L_003D48BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27696u);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 23728u);
    set32(c.r[16], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[29].w[0] + 468u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    c.budget -= 14;
L_003D48F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 808u)));
    set32(c.r[21], 0u + 39u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_003D4984; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 808u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 13136u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4938u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4938u) [[unlikely]] return; }
L_003D4938:
    set32(c.r[3], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 808u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[4], c.r[2].w[0] + 812u);
    set32(c.r[5], ld32((c.r[3].w[0] + 808u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4974u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003D4974u) [[unlikely]] return; }
L_003D4974:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 808u), c.r[3].w[0]);
    c.budget -= 4;
L_003D4984:
    set32(c.r[2], ld32((c.r[28].w[0] - 29076u)));
    st32((c.r[29].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D499Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D499Cu) [[unlikely]] return; }
L_003D499C:
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4A18; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 456u)));
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D49E0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D49E0u) [[unlikely]] return; }
L_003D49E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27696u);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 24768u);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 452u)));
    st32((c.r[29].w[0] + 456u), c.r[20].w[0]);
    c.budget -= 14;
L_003D4A18:
    set32(c.r[3], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 808u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003D4AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19744u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A5Cu);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4A5Cu) [[unlikely]] return; }
L_003D4A5C:
    set32(c.r[6], ld32((c.r[29].w[0] + 456u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[4], c.r[3].w[0] + 812u);
    set32(c.r[5], ld32((c.r[2].w[0] + 808u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A98u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003D4A98u) [[unlikely]] return; }
L_003D4A98:
    set32(c.r[4], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 4;
L_003D4AA8:
    set32(c.r[30], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4ABCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4ABCu) [[unlikely]] return; }
L_003D4ABC:
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4B38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4B00u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D4B00u) [[unlikely]] return; }
L_003D4B00:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27696u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], c.r[19].w[0] - 27760u);
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[29].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 440u)));
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 14;
L_003D4B38:
    set32(c.r[3], ld32((c.r[30].w[0] + 808u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D4BB0; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 13568u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4B74u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4B74u) [[unlikely]] return; }
L_003D4B74:
    set32(c.r[6], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 808u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[30].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], c.r[30].w[0] + 812u);
    set32(c.r[5], ld32((c.r[30].w[0] + 808u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4BA4u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003D4BA4u) [[unlikely]] return; }
L_003D4BA4:
    set32(c.r[2], ld32((c.r[30].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[30].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 3;
L_003D4BB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 22240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19720u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4BD0u);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003D4BD0u) [[unlikely]] return; }
L_003D4BD0:
    set32(c.r[23], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4BE4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4BE4u) [[unlikely]] return; }
L_003D4BE4:
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4C60; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    st32((c.r[29].w[0] + 424u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 424u)));
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C28u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D4C28u) [[unlikely]] return; }
L_003D4C28:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27696u);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[18].w[0] + 25776u);
    set32(c.r[3], ld32((c.r[29].w[0] + 424u)));
    st32((c.r[3].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    st32((c.r[29].w[0] + 428u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 14;
L_003D4C60:
    set32(c.r[3], ld32((c.r[23].w[0] + 808u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D4CD8; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22240u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C9Cu);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4C9Cu) [[unlikely]] return; }
L_003D4C9C:
    set32(c.r[6], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[2], ld32((c.r[23].w[0] + 808u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], c.r[23].w[0] + 812u);
    set32(c.r[5], ld32((c.r[23].w[0] + 808u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4CCCu);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003D4CCCu) [[unlikely]] return; }
L_003D4CCC:
    set32(c.r[2], ld32((c.r[23].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 3;
L_003D4CD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22272u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19693u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D00u);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003D4D00u) [[unlikely]] return; }
L_003D4D00:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29076u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D1Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4D1Cu) [[unlikely]] return; }
L_003D4D1C:
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4D98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 412u)));
    st32((c.r[29].w[0] + 296u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[4], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D60u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D4D60u) [[unlikely]] return; }
L_003D4D60:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27696u);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], c.r[17].w[0] - 21680u);
    set32(c.r[3], ld32((c.r[29].w[0] + 412u)));
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 14;
L_003D4D98:
    set32(c.r[4], ld32((c.r[22].w[0] + 808u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003D4E1C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 808u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22272u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DD4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4DD4u) [[unlikely]] return; }
L_003D4DD4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[22].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[22].w[0] + 812u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0] + 808u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E10u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003D4E10u) [[unlikely]] return; }
L_003D4E10:
    set32(c.r[2], ld32((c.r[22].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0] + 808u), c.r[2].w[0]);
    c.budget -= 3;
L_003D4E1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E38u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4E38u) [[unlikely]] return; }
L_003D4E38:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4EB8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 404u)));
    st32((c.r[29].w[0] + 396u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D4E80u) [[unlikely]] return; }
L_003D4E80:
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28064u);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 400u)));
    st32((c.r[29].w[0] + 404u), c.r[16].w[0]);
    c.budget -= 14;
L_003D4EB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 680u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[21].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D4F44; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 804u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22336u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F0Cu);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D4F0Cu) [[unlikely]] return; }
L_003D4F0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 804u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 808u);
    set32(c.r[5], ld32((c.r[21].w[0] + 804u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F38u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D4F38u) [[unlikely]] return; }
L_003D4F38:
    set32(c.r[3], ld32((c.r[21].w[0] + 804u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 804u), c.r[4].w[0]);
    c.budget -= 3;
L_003D4F44:
    set32(c.r[5], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 392u), c.r[5].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D4F60u) [[unlikely]] return; }
L_003D4F60:
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4FDC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    st32((c.r[29].w[0] + 380u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FA4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D4FA4u) [[unlikely]] return; }
L_003D4FA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21584u);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 25664u);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0] + 388u), c.r[3].w[0]);
    c.budget -= 14;
L_003D4FDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 680u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[20], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[20].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D5068; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22296u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5030u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D5030u) [[unlikely]] return; }
L_003D5030:
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 804u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[20].w[0] + 808u);
    set32(c.r[5], ld32((c.r[20].w[0] + 804u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D505Cu);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D505Cu) [[unlikely]] return; }
L_003D505C:
    set32(c.r[3], ld32((c.r[20].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 3;
L_003D5068:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5084u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5084u) [[unlikely]] return; }
L_003D5084:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 372u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D5104; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 372u)));
    st32((c.r[29].w[0] + 364u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[30].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D50CCu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D50CCu) [[unlikely]] return; }
L_003D50CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21584u);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21520u);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 368u)));
    st32((c.r[29].w[0] + 372u), c.r[4].w[0]);
    c.budget -= 14;
L_003D5104:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 680u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[19], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[19].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D5190; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 804u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24864u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5158u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D5158u) [[unlikely]] return; }
L_003D5158:
    set32(c.r[3], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 804u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 808u);
    set32(c.r[5], ld32((c.r[19].w[0] + 804u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5184u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D5184u) [[unlikely]] return; }
L_003D5184:
    set32(c.r[3], ld32((c.r[19].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 3;
L_003D5190:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 360u), c.r[4].w[0]);
    set32(c.r[5], 0u + 24u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D51ACu) [[unlikely]] return; }
L_003D51AC:
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5228; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 236u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[23].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51F0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D51F0u) [[unlikely]] return; }
L_003D51F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21584u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 25008u);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[29].w[0] + 356u), c.r[4].w[0]);
    c.budget -= 14;
L_003D5228:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 680u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[18].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D52B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 804u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22320u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D527Cu);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D527Cu) [[unlikely]] return; }
L_003D527C:
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 804u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 808u);
    set32(c.r[5], ld32((c.r[18].w[0] + 804u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52A8u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D52A8u) [[unlikely]] return; }
L_003D52A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 3;
L_003D52B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 344u), c.r[4].w[0]);
    set32(c.r[5], 0u + 24u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52D0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D52D0u) [[unlikely]] return; }
L_003D52D0:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D534C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 232u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] - 27728u);
    set32(c.r[7], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5314u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D5314u) [[unlikely]] return; }
L_003D5314:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 21584u);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23936u);
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    c.budget -= 14;
L_003D534C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 680u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D53EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 804u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 22360u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D53A8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D53A8u) [[unlikely]] return; }
L_003D53A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 804u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 808u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 804u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D53E0u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D53E0u) [[unlikely]] return; }
L_003D53E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 3;
L_003D53EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5408u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5408u) [[unlikely]] return; }
L_003D5408:
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5488; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[4].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5450u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D5450u) [[unlikely]] return; }
L_003D5450:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21584u);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 21920u);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 14;
L_003D5488:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 680u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D5514; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22816u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54DCu);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003D54DCu) [[unlikely]] return; }
L_003D54DC:
    set32(c.r[6], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 808u);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5508u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003D5508u) [[unlikely]] return; }
L_003D5508:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    c.budget -= 3;
L_003D5514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D551Cu);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9630u; return; } if (c.pc != 0x003D551Cu) [[unlikely]] return; }
L_003D551C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5528u);  if (depth < kMaxDepth) unit_0006(c, 485u, depth + 1u); else { c.pc = 0x0011B950u; return; } if (c.pc != 0x003D5528u) [[unlikely]] return; }
L_003D5528:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
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
    set32(c.r[29], c.r[29].w[0] + 496u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D56A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D55F4; } }
L_003D55A0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D55D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D55D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D55D8u) [[unlikely]] return; }
L_003D55D8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
L_003D55F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 804u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D55A0u | kUnwind; return; } goto L_003D55A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[2].w[0] + 804u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 808u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5664; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 812u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5664; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 812u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5664; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 812u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5664; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 812u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5664u);  if (depth < kMaxDepth) unit_00B6(c, 96u, depth + 1u); else { c.pc = 0x003D8CF0u; return; } if (c.pc != 0x003D5664u) [[unlikely]] return; }
L_003D5664:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] + 16848u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5684u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x003D5684u) [[unlikely]] return; }
L_003D5684:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D56A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D56A4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D56A4u) [[unlikely]] return; }
L_003D56A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D56C0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 223u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 223u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5770; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D579C; } }
L_003D5770:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 11;
L_003D579C:
    st32((c.r[29].w[0] + 188u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 216u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D57F4; } }
L_003D57C0:
    set32(c.r[17], c.r[17].w[0] << 4);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[22].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003D57F4; } }
    set32(c.r[3], c.r[22].w[0] >> 24);
    c.r[17].d[0] = c.r[17].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_003D57F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D57C0u | kUnwind; return; } goto L_003D57C0; } }
    st32((c.r[29].w[0] + 212u), c.r[17].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    mmi::divu(c, 0, c.r[30].w[0], c.r[3].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5864; } }
L_003D5834:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D585C; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5860; } }
L_003D585C:
    set32(c.r[21], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003D5860:
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003D5864:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5834u | kUnwind; return; } goto L_003D5834; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[3].w[0]), c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5950:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] + 23216u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[6], c.r[6].w[0] + 16848u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[8], 0u + 40u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59B4u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x003D59B4u) [[unlikely]] return; }
L_003D59B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[18], c.r[2].w[0] + 808u);
    set32(c.r[19], c.r[18].w[0] + 4u);
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D5A10; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59DCu);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003D59DCu) [[unlikely]] return; }
L_003D59DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D59F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59F4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003D59F4u) [[unlikely]] return; }
L_003D59F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D59F8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D5A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A0Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003D5A0Cu) [[unlikely]] return; }
L_003D5A0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5A10:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), c.r[21].w[0]);
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 31328u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A6Cu);  if (depth < kMaxDepth) unit_00B6(c, 93u, depth + 1u); else { c.pc = 0x003D8BC0u; return; } if (c.pc != 0x003D5A6Cu) [[unlikely]] return; }
L_003D5A6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[2].w[0] + 804u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5AC8u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D5AC8u) [[unlikely]] return; }
L_003D5AC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 680u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5B00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[3].w[0] + 12u);
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5BE8; } }
    set32(c.r[4], 0u + 36u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5BC0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5BC0u) [[unlikely]] return; }
L_003D5BC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D5BE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5BDCu);  if (depth < kMaxDepth) unit_00CD(c, 320u, depth + 1u); else { c.pc = 0x00436400u; return; } if (c.pc != 0x003D5BDCu) [[unlikely]] return; }
L_003D5BDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5BE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[3].w[0] + 156u), c.r[16].w[0]);
    c.budget -= 2;
L_003D5BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D5C00:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C38u);  if (depth < kMaxDepth) unit_00B9(c, 67u, depth + 1u); else { c.pc = 0x003E48E0u; return; } if (c.pc != 0x003D5C38u) [[unlikely]] return; }
L_003D5C38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C44u);  if (depth < kMaxDepth) unit_00CD(c, 208u, depth + 1u); else { c.pc = 0x004354D0u; return; } if (c.pc != 0x003D5C44u) [[unlikely]] return; }
L_003D5C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D5C70; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19612u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C64u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D5C64u) [[unlikely]] return; }
L_003D5C64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6194; } }
L_003D5C70:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19571u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C88u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D5C88u) [[unlikely]] return; }
L_003D5C88:
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C9Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5C9Cu) [[unlikely]] return; }
L_003D5C9C:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5CF4; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19543u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CC0u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x003D5CC0u) [[unlikely]] return; }
L_003D5CC0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19765u);
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CF0u);  if (depth < kMaxDepth) unit_00AF(c, 427u, depth + 1u); else { c.pc = 0x003BF5E0u; return; } if (c.pc != 0x003D5CF0u) [[unlikely]] return; }
L_003D5CF0:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5CF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 239u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5D18; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D18u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003D5D18u) [[unlikely]] return; }
L_003D5D18:
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D28u);  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003D5D28u) [[unlikely]] return; }
L_003D5D28:
    set32(c.r[2], ld32((c.r[28].w[0] - 28960u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19500u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D48u);  if (depth < kMaxDepth) unit_0014(c, 330u, depth + 1u); else { c.pc = 0x00153190u; return; } if (c.pc != 0x003D5D48u) [[unlikely]] return; }
L_003D5D48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D54u);  if (depth < kMaxDepth) unit_00D0(c, 30u, depth + 1u); else { c.pc = 0x004402B0u; return; } if (c.pc != 0x003D5D54u) [[unlikely]] return; }
L_003D5D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D5D80; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19484u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D74u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D5D74u) [[unlikely]] return; }
L_003D5D74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6194; } }
L_003D5D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D88u);  if (depth < kMaxDepth) unit_00D0(c, 33u, depth + 1u); else { c.pc = 0x00440300u; return; } if (c.pc != 0x003D5D88u) [[unlikely]] return; }
L_003D5D88:
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19443u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DA4u);  if (depth < kMaxDepth) unit_00CF(c, 442u, depth + 1u); else { c.pc = 0x0043FA30u; return; } if (c.pc != 0x003D5DA4u) [[unlikely]] return; }
L_003D5DA4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19435u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DBCu);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D5DBCu) [[unlikely]] return; }
L_003D5DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DC4u);  if (depth < kMaxDepth) unit_00CE(c, 180u, depth + 1u); else { c.pc = 0x00439730u; return; } if (c.pc != 0x003D5DC4u) [[unlikely]] return; }
L_003D5DC4:
    set32(c.r[4], 0u + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DD4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5DD4u) [[unlikely]] return; }
L_003D5DD4:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5DF4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5DF0u);  if (depth < kMaxDepth) unit_00AF(c, 333u, depth + 1u); else { c.pc = 0x003BEB90u; return; } if (c.pc != 0x003D5DF0u) [[unlikely]] return; }
L_003D5DF0:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5DF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E10u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5E10u) [[unlikely]] return; }
L_003D5E10:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5E30; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E2Cu);  if (depth < kMaxDepth) unit_00CC(c, 56u, depth + 1u); else { c.pc = 0x00430650u; return; } if (c.pc != 0x003D5E2Cu) [[unlikely]] return; }
L_003D5E2C:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5E30:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E44u);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5E44u) [[unlikely]] return; }
L_003D5E44:
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E54u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5E54u) [[unlikely]] return; }
L_003D5E54:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5E74; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E70u);  if (depth < kMaxDepth) unit_00CC(c, 162u, depth + 1u); else { c.pc = 0x00431160u; return; } if (c.pc != 0x003D5E70u) [[unlikely]] return; }
L_003D5E70:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5E74:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E88u);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5E88u) [[unlikely]] return; }
L_003D5E88:
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E98u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5E98u) [[unlikely]] return; }
L_003D5E98:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5EB8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EB4u);  if (depth < kMaxDepth) unit_00B7(c, 123u, depth + 1u); else { c.pc = 0x003DD9A0u; return; } if (c.pc != 0x003D5EB4u) [[unlikely]] return; }
L_003D5EB4:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5EB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5ECCu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5ECCu) [[unlikely]] return; }
L_003D5ECC:
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EDCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5EDCu) [[unlikely]] return; }
L_003D5EDC:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003D5EF8; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EF4u);  if (depth < kMaxDepth) unit_00CE(c, 199u, depth + 1u); else { c.pc = 0x00439940u; return; } if (c.pc != 0x003D5EF4u) [[unlikely]] return; }
L_003D5EF4:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5EF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F0Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5F0Cu) [[unlikely]] return; }
L_003D5F0C:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F1Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5F1Cu) [[unlikely]] return; }
L_003D5F1C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D5F38; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F34u);  if (depth < kMaxDepth) unit_00CD(c, 111u, depth + 1u); else { c.pc = 0x00434B10u; return; } if (c.pc != 0x003D5F34u) [[unlikely]] return; }
L_003D5F34:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5F38:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F4Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5F4Cu) [[unlikely]] return; }
L_003D5F4C:
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F5Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5F5Cu) [[unlikely]] return; }
L_003D5F5C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003D5F78; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F74u);  if (depth < kMaxDepth) unit_00CD(c, 186u, depth + 1u); else { c.pc = 0x00435240u; return; } if (c.pc != 0x003D5F74u) [[unlikely]] return; }
L_003D5F74:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5F78:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F8Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5F8Cu) [[unlikely]] return; }
L_003D5F8C:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F9Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5F9Cu) [[unlikely]] return; }
L_003D5F9C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D5FB8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FB4u);  if (depth < kMaxDepth) unit_00C1(c, 165u, depth + 1u); else { c.pc = 0x00405170u; return; } if (c.pc != 0x003D5FB4u) [[unlikely]] return; }
L_003D5FB4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5FB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FCCu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D5FCCu) [[unlikely]] return; }
L_003D5FCC:
    set32(c.r[4], 0u + 76u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FDCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D5FDCu) [[unlikely]] return; }
L_003D5FDC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003D5FF8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FF4u);  if (depth < kMaxDepth) unit_00CD(c, 77u, depth + 1u); else { c.pc = 0x00434810u; return; } if (c.pc != 0x003D5FF4u) [[unlikely]] return; }
L_003D5FF4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D5FF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D600Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D600Cu) [[unlikely]] return; }
L_003D600C:
    set32(c.r[4], 0u + 104u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D601Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D601Cu) [[unlikely]] return; }
L_003D601C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D6038; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6034u);  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00404D70u; return; } if (c.pc != 0x003D6034u) [[unlikely]] return; }
L_003D6034:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6038:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D604Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D604Cu) [[unlikely]] return; }
L_003D604C:
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D605Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D605Cu) [[unlikely]] return; }
L_003D605C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D6078; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6074u);  if (depth < kMaxDepth) unit_00BF(c, 389u, depth + 1u); else { c.pc = 0x003FEE90u; return; } if (c.pc != 0x003D6074u) [[unlikely]] return; }
L_003D6074:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6078:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D608Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D608Cu) [[unlikely]] return; }
L_003D608C:
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D609Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D609Cu) [[unlikely]] return; }
L_003D609C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D60B8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60B4u);  if (depth < kMaxDepth) unit_00BA(c, 13u, depth + 1u); else { c.pc = 0x003E8100u; return; } if (c.pc != 0x003D60B4u) [[unlikely]] return; }
L_003D60B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D60B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60CCu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D60CCu) [[unlikely]] return; }
L_003D60CC:
    set32(c.r[4], 0u + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D60DCu) [[unlikely]] return; }
L_003D60DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D60F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60F4u);  if (depth < kMaxDepth) unit_00BA(c, 124u, depth + 1u); else { c.pc = 0x003E8D30u; return; } if (c.pc != 0x003D60F4u) [[unlikely]] return; }
L_003D60F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D60F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D610Cu);  if (depth < kMaxDepth) unit_00AF(c, 323u, depth + 1u); else { c.pc = 0x003BEA30u; return; } if (c.pc != 0x003D610Cu) [[unlikely]] return; }
L_003D610C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19407u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6124u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D6124u) [[unlikely]] return; }
L_003D6124:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6130u);  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x003D6130u) [[unlikely]] return; }
L_003D6130:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6140u);  if (depth < kMaxDepth) unit_00BD(c, 394u, depth + 1u); else { c.pc = 0x003F76A0u; return; } if (c.pc != 0x003D6140u) [[unlikely]] return; }
L_003D6140:
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6154u);  if (depth < kMaxDepth) unit_00FD(c, 67u, depth + 1u); else { c.pc = 0x004F46A0u; return; } if (c.pc != 0x003D6154u) [[unlikely]] return; }
L_003D6154:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 19996u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6170u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D6170u) [[unlikely]] return; }
L_003D6170:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19383u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6190u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x003D6190u) [[unlikely]] return; }
L_003D6190:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003D6194:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D61D0:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 448u), c.r[4].w[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19360u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6218u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D6218u) [[unlikely]] return; }
L_003D6218:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 428u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    c.f[1] = ld32((c.r[2].w[0] + 156u));
    c.f[0] = ld32((c.r[28].w[0] - 31448u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 35;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D62A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D62A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    st8((c.r[2].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 164u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6330; } }
L_003D6308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.budget -= 10;
L_003D6330:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[2].w[0] + 168u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[2].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[2].w[0] + 148u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[2].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 164u));
    c.budget -= 48;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6448; } }
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[2].w[0] + 172u), c.f[0]);
    c.budget -= 22;
L_003D6448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19337u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6458u);  if (depth < kMaxDepth) unit_006B(c, 157u, depth + 1u); else { c.pc = 0x002ACC70u; return; } if (c.pc != 0x003D6458u) [[unlikely]] return; }
L_003D6458:
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6464u);  if (depth < kMaxDepth) unit_002C(c, 307u, depth + 1u); else { c.pc = 0x001B3F40u; return; } if (c.pc != 0x003D6464u) [[unlikely]] return; }
L_003D6464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6490; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19318u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6484u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D6484u) [[unlikely]] return; }
L_003D6484:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D69F4; } }
L_003D6490:
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64A0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D64A0u) [[unlikely]] return; }
L_003D64A0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D64BC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64B8u);  if (depth < kMaxDepth) unit_0103(c, 122u, depth + 1u); else { c.pc = 0x0050CF10u; return; } if (c.pc != 0x003D64B8u) [[unlikely]] return; }
L_003D64B8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D64BC:
    c.f[0] = ld32((c.r[28].w[0] - 29044u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 304u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64D0u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003D64D0u) [[unlikely]] return; }
L_003D64D0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19282u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64ECu);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D64ECu) [[unlikely]] return; }
L_003D64EC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19245u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6500u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x003D6500u) [[unlikely]] return; }
L_003D6500:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6510u);  if (depth < kMaxDepth) unit_000A(c, 489u, depth + 1u); else { c.pc = 0x0012BF10u; return; } if (c.pc != 0x003D6510u) [[unlikely]] return; }
L_003D6510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6584; } }
    set32(c.r[4], 0u + 104u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6528u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D6528u) [[unlikely]] return; }
L_003D6528:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003D6550; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D654Cu);  if (depth < kMaxDepth) unit_000D(c, 204u, depth + 1u); else { c.pc = 0x00135E00u; return; } if (c.pc != 0x003D654Cu) [[unlikely]] return; }
L_003D654C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19229u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6564u);  if (depth < kMaxDepth) unit_000B(c, 14u, depth + 1u); else { c.pc = 0x0012C190u; return; } if (c.pc != 0x003D6564u) [[unlikely]] return; }
L_003D6564:
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], c.r[2].w[0] + 140u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D657Cu);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D657Cu) [[unlikely]] return; }
L_003D657C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D659C; } }
L_003D6584:
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], c.r[2].w[0] + 140u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19218u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D659Cu);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D659Cu) [[unlikely]] return; }
L_003D659C:
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65ACu);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BED30u; return; } if (c.pc != 0x003D65ACu) [[unlikely]] return; }
L_003D65AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[2].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65C0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003D65C0u) [[unlikely]] return; }
L_003D65C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65C8u);  if (depth < kMaxDepth) unit_000B(c, 19u, depth + 1u); else { c.pc = 0x0012C280u; return; } if (c.pc != 0x003D65C8u) [[unlikely]] return; }
L_003D65C8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19209u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65E0u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x003D65E0u) [[unlikely]] return; }
L_003D65E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 446u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 446u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6624; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6638; } }
L_003D6624:
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 5;
L_003D6638:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D664Cu);  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C410u; return; } if (c.pc != 0x003D664Cu) [[unlikely]] return; }
L_003D664C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D665Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D665Cu) [[unlikely]] return; }
L_003D665C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D666Cu);  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C410u; return; } if (c.pc != 0x003D666Cu) [[unlikely]] return; }
L_003D666C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19218u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D667Cu);  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C410u; return; } if (c.pc != 0x003D667Cu) [[unlikely]] return; }
L_003D667C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19183u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6694u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D6694u) [[unlikely]] return; }
L_003D6694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D669Cu);  if (depth < kMaxDepth) unit_00CD(c, 26u, depth + 1u); else { c.pc = 0x004343A0u; return; } if (c.pc != 0x003D669Cu) [[unlikely]] return; }
L_003D669C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66A4u);  if (depth < kMaxDepth) unit_002F(c, 36u, depth + 1u); else { c.pc = 0x001BC5F0u; return; } if (c.pc != 0x003D66A4u) [[unlikely]] return; }
L_003D66A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66ACu);  if (depth < kMaxDepth) unit_00B5(c, 284u, depth + 1u); else { c.pc = 0x003D6A30u; return; } if (c.pc != 0x003D66ACu) [[unlikely]] return; }
L_003D66AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66B4u);  if (depth < kMaxDepth) unit_00C0(c, 271u, depth + 1u); else { c.pc = 0x00403C70u; return; } if (c.pc != 0x003D66B4u) [[unlikely]] return; }
L_003D66B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], 0u + 300u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    set32(c.r[2], 0u + 448u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 640u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[2], 0u + 640u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 480u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1000u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[4], 0u + 120u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6740u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D6740u) [[unlikely]] return; }
L_003D6740:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D6764; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6760u);  if (depth < kMaxDepth) unit_0015(c, 221u, depth + 1u); else { c.pc = 0x00155F90u; return; } if (c.pc != 0x003D6760u) [[unlikely]] return; }
L_003D6760:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6764:
    st32((c.r[29].w[0] + 408u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6840; } }
L_003D6770:
    set32(c.r[4], ld32((c.r[29].w[0] + 408u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D677Cu);  if (depth < kMaxDepth) unit_0015(c, 176u, depth + 1u); else { c.pc = 0x00155A70u; return; } if (c.pc != 0x003D677Cu) [[unlikely]] return; }
L_003D677C:
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 404u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003D6790; } }
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 1;
L_003D6790:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D679Cu);  if (depth < kMaxDepth) unit_00B6(c, 91u, depth + 1u); else { c.pc = 0x003D8B60u; return; } if (c.pc != 0x003D679Cu) [[unlikely]] return; }
L_003D679C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003D6834; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6814; } }
L_003D67B4:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D67DC; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D67DCu) [[unlikely]] return; }
L_003D67DC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003D67F4; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D6810; } }
L_003D67F4:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6810u) [[unlikely]] return; }
L_003D6810:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003D6814:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6828u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6828u) [[unlikely]] return; }
L_003D6828:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D67B4u | kUnwind; return; } goto L_003D67B4; } }
L_003D6834:
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 3;
L_003D6840:
    set32(c.r[2], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6770u | kUnwind; return; } goto L_003D6770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 31056u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], 0u + 66u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6898u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00153D70u; return; } if (c.pc != 0x003D6898u) [[unlikely]] return; }
L_003D6898:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D68B0u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D68B0u) [[unlikely]] return; }
L_003D68B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D68BCu);  if (depth < kMaxDepth) unit_0015(c, 300u, depth + 1u); else { c.pc = 0x00156870u; return; } if (c.pc != 0x003D68BCu) [[unlikely]] return; }
L_003D68BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28952u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], 0u + 152u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D68F0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D68F0u) [[unlikely]] return; }
L_003D68F0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D6914; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6910u);  if (depth < kMaxDepth) unit_0027(c, 127u, depth + 1u); else { c.pc = 0x0019E520u; return; } if (c.pc != 0x003D6910u) [[unlikely]] return; }
L_003D6910:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6914:
    st32((c.r[29].w[0] + 400u), c.r[19].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6924u);  if (depth < kMaxDepth) unit_0027(c, 158u, depth + 1u); else { c.pc = 0x0019EA90u; return; } if (c.pc != 0x003D6924u) [[unlikely]] return; }
L_003D6924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D692Cu);  if (depth < kMaxDepth) unit_00FD(c, 63u, depth + 1u); else { c.pc = 0x004F4650u; return; } if (c.pc != 0x003D692Cu) [[unlikely]] return; }
L_003D692C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6994; } }
L_003D6938:
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6948u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D6948u) [[unlikely]] return; }
L_003D6948:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D6964; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6960u);  if (depth < kMaxDepth) unit_002F(c, 119u, depth + 1u); else { c.pc = 0x001BDBD0u; return; } if (c.pc != 0x003D6960u) [[unlikely]] return; }
L_003D6960:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D6964:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[18].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6990u);  if (depth < kMaxDepth) unit_000D(c, 467u, depth + 1u); else { c.pc = 0x00137D10u; return; } if (c.pc != 0x003D6990u) [[unlikely]] return; }
L_003D6990:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003D6994:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6938u | kUnwind; return; } goto L_003D6938; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[4].w[0] + 11088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69B0u);  if (depth < kMaxDepth) unit_0084(c, 407u, depth + 1u); else { c.pc = 0x00313A70u; return; } if (c.pc != 0x003D69B0u) [[unlikely]] return; }
L_003D69B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69B8u);  if (depth < kMaxDepth) unit_00CE(c, 209u, depth + 1u); else { c.pc = 0x004399E0u; return; } if (c.pc != 0x003D69B8u) [[unlikely]] return; }
L_003D69B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 19124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69C8u);  if (depth < kMaxDepth) unit_00D8(c, 314u, depth + 1u); else { c.pc = 0x00463990u; return; } if (c.pc != 0x003D69C8u) [[unlikely]] return; }
L_003D69C8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 447u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69E0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D69E0u) [[unlikely]] return; }
L_003D69E0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69F0u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003D69F0u) [[unlikely]] return; }
L_003D69F0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 447u));
    c.budget -= 1;
L_003D69F4:
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
    set32(c.r[29], c.r[29].w[0] + 464u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D6A30:
    set32(c.r[29], c.r[29].w[0] - 1504u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A68u);  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x003D6A68u) [[unlikely]] return; }
L_003D6A68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A74u);  if (depth < kMaxDepth) unit_00BD(c, 390u, depth + 1u); else { c.pc = 0x003F7600u; return; } if (c.pc != 0x003D6A74u) [[unlikely]] return; }
L_003D6A74:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 1503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A8Cu);  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x003D6A8Cu) [[unlikely]] return; }
L_003D6A8C:
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D6AC8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 1452u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6AACu) [[unlikely]] return; }
L_003D6AAC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 1452u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AC8u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6AC8u) [[unlikely]] return; }
L_003D6AC8:
    st32((c.r[29].w[0] + 196u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B00; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 1448u), c.r[4].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6AE8u) [[unlikely]] return; }
L_003D6AE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1448u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B00u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6B00u) [[unlikely]] return; }
L_003D6B00:
    st32((c.r[29].w[0] + 200u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 1444u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6B20u) [[unlikely]] return; }
L_003D6B20:
    set32(c.r[2], ld32((c.r[29].w[0] + 1444u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B38u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6B38u) [[unlikely]] return; }
L_003D6B38:
    st32((c.r[29].w[0] + 204u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 1440u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6B58u) [[unlikely]] return; }
L_003D6B58:
    set32(c.r[2], ld32((c.r[29].w[0] + 1440u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B70u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6B70u) [[unlikely]] return; }
L_003D6B70:
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6BA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 1436u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6B90u) [[unlikely]] return; }
L_003D6B90:
    set32(c.r[3], ld32((c.r[29].w[0] + 1436u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6BA8u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6BA8u) [[unlikely]] return; }
L_003D6BA8:
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[18], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D6BE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 1432u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6BC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6BC8u) [[unlikely]] return; }
L_003D6BC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1432u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6BE0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6BE0u) [[unlikely]] return; }
L_003D6BE0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6DEC; } }
L_003D6BEC:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 1503u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D6C0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 19110u);
    st32((c.r[29].w[0] + 1404u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6C18; } }
L_003D6C0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 19105u);
    st32((c.r[29].w[0] + 1404u), c.r[3].w[0]);
    c.budget -= 3;
L_003D6C18:
    set32(c.r[8], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 6u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19101u);
    set32(c.r[7], ld32((c.r[29].w[0] + 1404u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C38u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003D6C38u) [[unlikely]] return; }
L_003D6C38:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 1493u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1493u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6C7C; } }
    set32(c.r[3], c.r[29].w[0] + 177u);
    st32((c.r[29].w[0] + 1400u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1400u)));
    st32((c.r[29].w[0] + 1396u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6C90; } }
L_003D6C7C:
    set32(c.r[3], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 1392u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1392u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 1396u), c.r[2].w[0]);
    c.budget -= 5;
L_003D6C90:
    set32(c.r[2], ld32((c.r[29].w[0] + 1396u)));
    st32((c.r[29].w[0] + 1388u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1388u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6CA8u);  if (depth < kMaxDepth) unit_0082(c, 277u, depth + 1u); else { c.pc = 0x0030A720u; return; } if (c.pc != 0x003D6CA8u) [[unlikely]] return; }
L_003D6CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6DD8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], c.r[3].w[0] + 0u);
    st32((c.r[29].w[0] + 1384u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1384u)));
    st32((c.r[29].w[0] + 1408u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1408u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 1380u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1380u)));
    st32((c.r[29].w[0] + 1376u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1376u)));
    st32((c.r[29].w[0] + 1372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1372u)));
    st32((c.r[29].w[0] + 1464u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 1464u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D6DCC; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6D78; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1428u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6D2Cu) [[unlikely]] return; }
L_003D6D2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1428u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D44u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6D44u) [[unlikely]] return; }
L_003D6D44:
    set32(c.r[3], ld32((c.r[29].w[0] + 1428u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[29].w[0] + 1368u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1368u)));
    st32((c.r[29].w[0] + 1364u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1364u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D6D78; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 1428u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6D78u) [[unlikely]] return; }
L_003D6D78:
    set32(c.r[30], ld32((c.r[29].w[0] + 1464u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[30].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6DCC; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D6DB4u) [[unlikely]] return; }
L_003D6DB4:
    set32(c.r[23], ld32((c.r[29].w[0] + 1424u)));
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DCCu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D6DCCu) [[unlikely]] return; }
L_003D6DCC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DD8u);  if (depth < kMaxDepth) unit_0083(c, 194u, depth + 1u); else { c.pc = 0x0030D5D0u; return; } if (c.pc != 0x003D6DD8u) [[unlikely]] return; }
L_003D6DD8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DE8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D6DE8u) [[unlikely]] return; }
L_003D6DE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003D6DEC:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6BECu | kUnwind; return; } goto L_003D6BEC; } }
    set32(c.r[22], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 1360u), c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E10u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x003D6E10u) [[unlikely]] return; }
L_003D6E10:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 1356u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1356u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D6E3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6E3Cu) [[unlikely]] return; }
L_003D6E3C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2633u));
    st8((c.r[29].w[0] + 1492u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1492u));
    st8((c.r[29].w[0] + 1502u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 2633u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 1480u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D75C4; } }
L_003D6E5C:
    set32(c.r[21], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_003D6E78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1501u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6E7C; } }
L_003D6E78:
    st8((c.r[29].w[0] + 1501u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6E7C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1501u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6EAC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6E9Cu) [[unlikely]] return; }
L_003D6E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6EAC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_003D6EAC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1491u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1490u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D6EE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[20], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_003D6EE0; } }
    st8((c.r[29].w[0] + 1490u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6EE0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1490u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6F00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D6F00; } }
    st8((c.r[29].w[0] + 1491u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6F00:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1491u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6F18; } }
    st8((c.r[29].w[0] + 1500u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6F4C; } }
L_003D6F18:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6F38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D6F48; } }
L_003D6F38:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1500u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6F4C; } }
L_003D6F48:
    st8((c.r[29].w[0] + 1500u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6F4C:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 1500u));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D70EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D6F6Cu) [[unlikely]] return; }
L_003D6F6C:
    st32((c.r[29].w[0] + 1420u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1489u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1488u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003D6FA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D6FA4; } }
    st8((c.r[29].w[0] + 1488u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6FA4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1488u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6FC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003D6FC4; } }
    st8((c.r[29].w[0] + 1489u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D6FC4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1489u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6FDC; } }
    st8((c.r[29].w[0] + 1494u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7010; } }
L_003D6FDC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6FFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D700C; } }
L_003D6FFC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1494u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7010; } }
L_003D700C:
    st8((c.r[29].w[0] + 1494u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7010:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1494u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D70EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 1420u)));
    c.budget -= 1;
L_003D7020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7040; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7038u);  if (depth < kMaxDepth) unit_0072(c, 353u, depth + 1u); else { c.pc = 0x002CB050u; return; } if (c.pc != 0x003D7038u) [[unlikely]] return; }
L_003D7038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D70EC; } }
L_003D7040:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D704Cu);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x003D704Cu) [[unlikely]] return; }
L_003D704C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7078; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7078u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7078u) [[unlikely]] return; }
L_003D7078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1420u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 360u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7094u) [[unlikely]] return; }
L_003D7094:
    st8((c.r[29].w[0] + 1499u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1499u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D70B4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D70EC; } }
L_003D70B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 1348u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1348u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D70E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D70E0u) [[unlikely]] return; }
L_003D70E0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70ECu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x003D70ECu) [[unlikely]] return; }
L_003D70EC:
    st32((c.r[29].w[0] + 1460u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1487u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1486u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7124; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7124; } }
    st8((c.r[29].w[0] + 1486u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7124:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1486u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7144; } }
    st8((c.r[29].w[0] + 1487u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7144:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1487u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D715C; } }
    st8((c.r[29].w[0] + 1498u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7194; } }
L_003D715C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7180; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7190; } }
L_003D7180:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1498u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7194; } }
L_003D7190:
    st8((c.r[29].w[0] + 1498u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7194:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1498u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D71FC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D71C8; } }
    set32(c.r[4], c.r[29].w[0] + 1460u);
    set32(c.r[5], c.r[16].w[0] + 136u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71C0u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x003D71C0u) [[unlikely]] return; }
L_003D71C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D71FC; } }
L_003D71C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1460u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D71E0u) [[unlikely]] return; }
L_003D71E0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 1460u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71FCu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003D71FCu) [[unlikely]] return; }
L_003D71FC:
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1476u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D73D4; } }
L_003D720C:
    st32((c.r[29].w[0] + 1472u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7390; } }
L_003D7218:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1340u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1340u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7260u) [[unlikely]] return; }
L_003D7260:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1344u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7278u) [[unlikely]] return; }
L_003D7278:
    set32(c.r[4], ld32((c.r[29].w[0] + 1336u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 1472u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 1476u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[7]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7294u);  if (depth < kMaxDepth) unit_00B5(c, 364u, depth + 1u); else { c.pc = 0x003D7890u; return; } if (c.pc != 0x003D7294u) [[unlikely]] return; }
L_003D7294:
    st32((c.r[29].w[0] + 1456u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1456u)));
    st32((c.r[29].w[0] + 1468u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1468u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D72D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 1468u)));
    st32((c.r[29].w[0] + 1416u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D72BCu) [[unlikely]] return; }
L_003D72BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 1416u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72D4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D72D4u) [[unlikely]] return; }
L_003D72D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1468u)));
    st32((c.r[29].w[0] + 1332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1332u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72F0u);  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x003D72F0u) [[unlikely]] return; }
L_003D72F0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1328u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1328u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7314u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7314u) [[unlikely]] return; }
L_003D7314:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 1472u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 1472u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1468u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D738C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 1468u)));
    st32((c.r[29].w[0] + 1412u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7340u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7340u) [[unlikely]] return; }
L_003D7340:
    set32(c.r[4], ld32((c.r[29].w[0] + 1412u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7358u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7358u) [[unlikely]] return; }
L_003D7358:
    set32(c.r[2], ld32((c.r[29].w[0] + 1412u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 1324u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1324u)));
    st32((c.r[29].w[0] + 1320u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1320u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D738C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 1412u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D738Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D738Cu) [[unlikely]] return; }
L_003D738C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003D7390:
    set32(c.r[2], ld32((c.r[29].w[0] + 1472u)));
    c.r[2].d[0] = c.r[2].sd[0] < 640ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7218u | kUnwind; return; } goto L_003D7218; } }
    set32(c.r[3], c.r[18].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[29].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1316u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D73C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D73C8u) [[unlikely]] return; }
L_003D73C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1476u)));
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 1476u), c.r[8].w[0]);
    c.budget -= 3;
L_003D73D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 1476u)));
    c.r[5].d[0] = c.r[4].sd[0] < 480ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D720Cu | kUnwind; return; } goto L_003D720C; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[29].w[0] + 1485u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], 0u + 1u);
    st8((c.r[29].w[0] + 1484u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003D7418; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7418; } }
    st8((c.r[29].w[0] + 1484u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7418:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1484u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7438; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7438; } }
    st8((c.r[29].w[0] + 1485u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7438:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1485u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7450; } }
    st8((c.r[29].w[0] + 1497u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7488; } }
L_003D7450:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7474; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7484; } }
L_003D7474:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7488; } }
L_003D7484:
    st8((c.r[29].w[0] + 1497u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7488:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1497u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D74F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 364u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D74A8u) [[unlikely]] return; }
L_003D74A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D74F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 1312u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1312u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003D74E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D74E0u) [[unlikely]] return; }
L_003D74E0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74ECu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x003D74ECu) [[unlikely]] return; }
L_003D74EC:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D74F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7510; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7514; } }
L_003D7510:
    st8((c.r[29].w[0] + 1496u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7514:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1496u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7550; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7534u) [[unlikely]] return; }
L_003D7534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7548; } }
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7550; } }
L_003D7548:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_003D7550:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7570; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 1495u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7574; } }
L_003D7570:
    st8((c.r[29].w[0] + 1495u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003D7574:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1495u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D75B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 340u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7594u) [[unlikely]] return; }
L_003D7594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D75A8; } }
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D75B8; } }
L_003D75A8:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_003D75B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 1480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 1480u), c.r[2].w[0]);
    c.budget -= 3;
L_003D75C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 1480u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D6E5Cu | kUnwind; return; } goto L_003D6E5C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1502u));
    st8((c.r[16].w[0] + 2633u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1308u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D7608; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7608u) [[unlikely]] return; }
L_003D7608:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7614u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x003D7614u) [[unlikely]] return; }
L_003D7614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7674; } }
    set32(c.r[30], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7630u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7630u) [[unlikely]] return; }
L_003D7630:
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[30].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7644u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7644u) [[unlikely]] return; }
L_003D7644:
    set32(c.r[2], ld32((c.r[30].w[0] + 4u)));
    st32((c.r[29].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1304u)));
    st32((c.r[29].w[0] + 1300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1300u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7674; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7674u) [[unlikely]] return; }
L_003D7674:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D76D8; } }
    set32(c.r[23], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D768Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D768Cu) [[unlikely]] return; }
L_003D768C:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[23].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76A0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D76A0u) [[unlikely]] return; }
L_003D76A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    st32((c.r[29].w[0] + 1296u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1296u)));
    st32((c.r[29].w[0] + 1292u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1292u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D76D8; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D76D4u) [[unlikely]] return; }
L_003D76D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D76D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7738; } }
    set32(c.r[22], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D76F0u) [[unlikely]] return; }
L_003D76F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7708u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7708u) [[unlikely]] return; }
L_003D7708:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[29].w[0] + 1288u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1288u)));
    st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1284u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7738; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7738u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7738u) [[unlikely]] return; }
L_003D7738:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7794; } }
    set32(c.r[21], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7750u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7750u) [[unlikely]] return; }
L_003D7750:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7764u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7764u) [[unlikely]] return; }
L_003D7764:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1280u)));
    st32((c.r[29].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1276u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7794; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7794u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7794u) [[unlikely]] return; }
L_003D7794:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D77F0; } }
    set32(c.r[20], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D77ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D77ACu) [[unlikely]] return; }
L_003D77AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D77C0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D77C0u) [[unlikely]] return; }
L_003D77C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1272u)));
    st32((c.r[29].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1268u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D77F0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D77F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D77F0u) [[unlikely]] return; }
L_003D77F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D784C; } }
    set32(c.r[19], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7808u) [[unlikely]] return; }
L_003D7808:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D781Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D781Cu) [[unlikely]] return; }
L_003D781C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1264u)));
    st32((c.r[29].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1260u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D784C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D784Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D784Cu) [[unlikely]] return; }
L_003D784C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D785Cu);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x003D785Cu) [[unlikely]] return; }
L_003D785C:
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
    set32(c.r[29], c.r[29].w[0] + 1504u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D7890:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 368u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 384u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 416u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 432u), c.r[8].w[0]);
    set32(c.r[4], 0u + 6u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D78E8u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003D78E8u) [[unlikely]] return; }
L_003D78E8:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7908u) [[unlikely]] return; }
L_003D7908:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 268u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7928u) [[unlikely]] return; }
L_003D7928:
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    set32(c.r[4], 0u + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79DCu);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D79DCu) [[unlikely]] return; }
L_003D79DC:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7A28; } }
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], 0u + 4u);
    set32(c.r[11], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A24u);  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x003D7A24u) [[unlikely]] return; }
L_003D7A24:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7A28:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    set32(c.r[5], 0u + 256u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A44u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7A44u) [[unlikely]] return; }
L_003D7A44:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D7A6C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A68u);  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x003D7A68u) [[unlikely]] return; }
L_003D7A68:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7A6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 252u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A9Cu);  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x003D7A9Cu) [[unlikely]] return; }
L_003D7A9C:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 336u)));
    c.f[12] = ld32((c.r[29].w[0] + 356u));
    c.f[13] = ld32((c.r[29].w[0] + 352u));
    c.f[14] = ld32((c.r[29].w[0] + 348u));
    c.f[15] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AD8u);  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x003D7AD8u) [[unlikely]] return; }
L_003D7AD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7AF4u);  if (depth < kMaxDepth) unit_0073(c, 124u, depth + 1u); else { c.pc = 0x002CCCA0u; return; } if (c.pc != 0x003D7AF4u) [[unlikely]] return; }
L_003D7AF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 336u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B30u);  if (depth < kMaxDepth) unit_0073(c, 126u, depth + 1u); else { c.pc = 0x002CCCD0u; return; } if (c.pc != 0x003D7B30u) [[unlikely]] return; }
L_003D7B30:
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B40u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7B40u) [[unlikely]] return; }
L_003D7B40:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7B60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B5Cu);  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x003D7B5Cu) [[unlikely]] return; }
L_003D7B5C:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7B60:
    set32(c.r[16], ld32((c.r[29].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_003D7C60; } }
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BACu);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7BACu) [[unlikely]] return; }
L_003D7BAC:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7BCC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BC8u);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003D7BC8u) [[unlikely]] return; }
L_003D7BC8:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7BCC:
    set32(c.r[23], ld32((c.r[29].w[0] + 212u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7C04; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D7C54; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7C54; } }
L_003D7C04:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D7C34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7C54; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7C54; } }
L_003D7C34:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7C54; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003D7C54:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 3;
L_003D7C60:
    st32((c.r[29].w[0] + 312u), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 3841u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_003D7D68; } }
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CB4u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7CB4u) [[unlikely]] return; }
L_003D7CB4:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7CD4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CD0u);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003D7CD0u) [[unlikely]] return; }
L_003D7CD0:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7CD4:
    set32(c.r[22], ld32((c.r[29].w[0] + 204u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7D0C; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003D7D5C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7D5C; } }
L_003D7D0C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003D7D3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7D5C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7D5C; } }
L_003D7D3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7D5C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003D7D5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.budget -= 3;
L_003D7D68:
    st32((c.r[29].w[0] + 308u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 12289u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_003D7E70; } }
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7DBCu);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7DBCu) [[unlikely]] return; }
L_003D7DBC:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7DDC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7DD8u);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003D7DD8u) [[unlikely]] return; }
L_003D7DD8:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7DDC:
    set32(c.r[21], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7E14; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D7E64; } }
L_003D7E00:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7E64; } }
L_003D7E14:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D7E44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7E64; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7E64; } }
L_003D7E44:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7E64; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003D7E64:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 3;
L_003D7E70:
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D7F28; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7EEC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7EA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7EA0u) [[unlikely]] return; }
L_003D7EA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7EB8u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7EB8u) [[unlikely]] return; }
L_003D7EB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7EEC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7EECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7EECu) [[unlikely]] return; }
L_003D7EEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7F28; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D7F10u) [[unlikely]] return; }
L_003D7F10:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F28u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D7F28u) [[unlikely]] return; }
L_003D7F28:
    set32(c.r[4], c.r[29].w[0] + 292u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F38u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003D7F38u) [[unlikely]] return; }
L_003D7F38:
    set32(c.r[4], c.r[19].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 292u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F48u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003D7F48u) [[unlikely]] return; }
L_003D7F48:
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F58u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003D7F58u) [[unlikely]] return; }
L_003D7F58:
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F68u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003D7F68u) [[unlikely]] return; }
L_003D7F68:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B6(c, 2u, depth); } }
    set32(c.r[18], ld32((c.r[29].w[0] + 288u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F84u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003D7F84u) [[unlikely]] return; }
L_003D7F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6656u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FA4u);  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x003D7FA4u) [[unlikely]] return; }
L_003D7FA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FB4u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x003D7FB4u) [[unlikely]] return; }
L_003D7FB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FC4u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x003D7FC4u) [[unlikely]] return; }
L_003D7FC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FD4u);  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x003D7FD4u) [[unlikely]] return; }
L_003D7FD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FE4u);  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x003D7FE4u) [[unlikely]] return; }
L_003D7FE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FF4u);  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x003D7FF4u) [[unlikely]] return; }
L_003D7FF4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 284u), c.r[18].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_00B6(c, 1u, depth);
}

}
