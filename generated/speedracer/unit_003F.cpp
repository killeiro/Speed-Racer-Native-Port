#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303,
    0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0,
    0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0,
    0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001FC000;
    case 2u: goto L_001FC004;
    case 3u: goto L_001FC028;
    case 4u: goto L_001FC220;
    case 5u: goto L_001FC224;
    case 6u: goto L_001FC2D0;
    case 7u: goto L_001FC2E0;
    case 8u: goto L_001FC2F0;
    case 9u: goto L_001FC300;
    case 10u: goto L_001FC350;
    case 11u: goto L_001FC370;
    case 12u: goto L_001FC3B0;
    case 13u: goto L_001FC3D0;
    case 14u: goto L_001FC404;
    case 15u: goto L_001FC430;
    case 16u: goto L_001FC464;
    case 17u: goto L_001FC490;
    case 18u: goto L_001FC4A0;
    case 19u: goto L_001FC4BC;
    case 20u: goto L_001FC4C8;
    case 21u: goto L_001FC4DC;
    case 22u: goto L_001FC4EC;
    case 23u: goto L_001FC500;
    case 24u: goto L_001FC520;
    case 25u: goto L_001FC53C;
    case 26u: goto L_001FC570;
    case 27u: goto L_001FC58C;
    case 28u: goto L_001FC598;
    case 29u: goto L_001FC5B0;
    case 30u: goto L_001FC5C0;
    case 31u: goto L_001FC5D0;
    case 32u: goto L_001FC5EC;
    case 33u: goto L_001FC610;
    case 34u: goto L_001FC638;
    case 35u: goto L_001FC660;
    case 36u: goto L_001FC67C;
    case 37u: goto L_001FC69C;
    case 38u: goto L_001FC6E0;
    case 39u: goto L_001FC700;
    case 40u: goto L_001FC728;
    case 41u: goto L_001FC744;
    case 42u: goto L_001FC764;
    case 43u: goto L_001FC7B0;
    case 44u: goto L_001FC7C0;
    case 45u: goto L_001FC7D8;
    case 46u: goto L_001FC7E8;
    case 47u: goto L_001FC820;
    case 48u: goto L_001FC848;
    case 49u: goto L_001FC858;
    case 50u: goto L_001FC880;
    case 51u: goto L_001FC8A0;
    case 52u: goto L_001FC8C8;
    case 53u: goto L_001FC8E4;
    case 54u: goto L_001FC904;
    case 55u: goto L_001FC960;
    case 56u: goto L_001FC990;
    case 57u: goto L_001FCA0C;
    case 58u: goto L_001FCA34;
    case 59u: goto L_001FCA50;
    case 60u: goto L_001FCA70;
    case 61u: goto L_001FCB10;
    case 62u: goto L_001FCB3C;
    case 63u: goto L_001FCBA0;
    case 64u: goto L_001FCBE8;
    case 65u: goto L_001FCC0C;
    case 66u: goto L_001FCCB0;
    case 67u: goto L_001FCD2C;
    case 68u: goto L_001FCD3C;
    case 69u: goto L_001FCD74;
    case 70u: goto L_001FCDC8;
    case 71u: goto L_001FCDF0;
    case 72u: goto L_001FCE0C;
    case 73u: goto L_001FCE2C;
    case 74u: goto L_001FCEB8;
    case 75u: goto L_001FCFC0;
    case 76u: goto L_001FD038;
    case 77u: goto L_001FD05C;
    case 78u: goto L_001FD100;
    case 79u: goto L_001FD140;
    case 80u: goto L_001FD14C;
    case 81u: goto L_001FD168;
    case 82u: goto L_001FD180;
    case 83u: goto L_001FD1B8;
    case 84u: goto L_001FD1CC;
    case 85u: goto L_001FD1F8;
    case 86u: goto L_001FD208;
    case 87u: goto L_001FD228;
    case 88u: goto L_001FD25C;
    case 89u: goto L_001FD284;
    case 90u: goto L_001FD2A0;
    case 91u: goto L_001FD2C0;
    case 92u: goto L_001FD320;
    case 93u: goto L_001FD330;
    case 94u: goto L_001FD340;
    case 95u: goto L_001FD36C;
    case 96u: goto L_001FD390;
    case 97u: goto L_001FD3BC;
    case 98u: goto L_001FD3E0;
    case 99u: goto L_001FD430;
    case 100u: goto L_001FD44C;
    case 101u: goto L_001FD470;
    case 102u: goto L_001FD480;
    case 103u: goto L_001FD49C;
    case 104u: goto L_001FD4A8;
    case 105u: goto L_001FD4BC;
    case 106u: goto L_001FD4CC;
    case 107u: goto L_001FD4E0;
    case 108u: goto L_001FD4F0;
    case 109u: goto L_001FD504;
    case 110u: goto L_001FD514;
    case 111u: goto L_001FD528;
    case 112u: goto L_001FD540;
    case 113u: goto L_001FD55C;
    case 114u: goto L_001FD5C0;
    case 115u: goto L_001FD5DC;
    case 116u: goto L_001FD5E8;
    case 117u: goto L_001FD5F4;
    case 118u: goto L_001FD600;
    case 119u: goto L_001FD620;
    case 120u: goto L_001FD630;
    case 121u: goto L_001FD640;
    case 122u: goto L_001FD65C;
    case 123u: goto L_001FD668;
    case 124u: goto L_001FD674;
    case 125u: goto L_001FD680;
    case 126u: goto L_001FD6A0;
    case 127u: goto L_001FD6B8;
    case 128u: goto L_001FD6C8;
    case 129u: goto L_001FD700;
    case 130u: goto L_001FD740;
    case 131u: goto L_001FD75C;
    case 132u: goto L_001FD780;
    case 133u: goto L_001FD790;
    case 134u: goto L_001FD7B8;
    case 135u: goto L_001FD7C8;
    case 136u: goto L_001FD7F0;
    case 137u: goto L_001FD830;
    case 138u: goto L_001FD864;
    case 139u: goto L_001FD880;
    case 140u: goto L_001FD89C;
    case 141u: goto L_001FD8D0;
    case 142u: goto L_001FD91C;
    case 143u: goto L_001FD960;
    case 144u: goto L_001FD9CC;
    case 145u: goto L_001FDA10;
    case 146u: goto L_001FDA58;
    case 147u: goto L_001FDA68;
    case 148u: goto L_001FDA84;
    case 149u: goto L_001FDA90;
    case 150u: goto L_001FDAAC;
    case 151u: goto L_001FDAD0;
    case 152u: goto L_001FDAE0;
    case 153u: goto L_001FDAFC;
    case 154u: goto L_001FDB08;
    case 155u: goto L_001FDB1C;
    case 156u: goto L_001FDB2C;
    case 157u: goto L_001FDB40;
    case 158u: goto L_001FDB50;
    case 159u: goto L_001FDB64;
    case 160u: goto L_001FDB74;
    case 161u: goto L_001FDB88;
    case 162u: goto L_001FDBAC;
    case 163u: goto L_001FDBC0;
    case 164u: goto L_001FDBD0;
    case 165u: goto L_001FDBE4;
    case 166u: goto L_001FDC00;
    case 167u: goto L_001FDC20;
    case 168u: goto L_001FDC3C;
    case 169u: goto L_001FDCD4;
    case 170u: goto L_001FDD70;
    case 171u: goto L_001FDDA0;
    case 172u: goto L_001FDDBC;
    case 173u: goto L_001FDDC8;
    case 174u: goto L_001FDDDC;
    case 175u: goto L_001FDDF0;
    case 176u: goto L_001FDE04;
    case 177u: goto L_001FDE18;
    case 178u: goto L_001FDE2C;
    case 179u: goto L_001FDE40;
    case 180u: goto L_001FDE5C;
    case 181u: goto L_001FDE84;
    case 182u: goto L_001FDEA0;
    case 183u: goto L_001FDEC0;
    case 184u: goto L_001FDEC8;
    case 185u: goto L_001FDED4;
    case 186u: goto L_001FDEE0;
    case 187u: goto L_001FDF00;
    case 188u: goto L_001FDF10;
    case 189u: goto L_001FDF2C;
    case 190u: goto L_001FDF40;
    case 191u: goto L_001FDF50;
    case 192u: goto L_001FDF70;
    case 193u: goto L_001FDF8C;
    case 194u: goto L_001FDF98;
    case 195u: goto L_001FDFA4;
    case 196u: goto L_001FDFBC;
    case 197u: goto L_001FDFD0;
    case 198u: goto L_001FDFD8;
    case 199u: goto L_001FDFE0;
    case 200u: goto L_001FE000;
    case 201u: goto L_001FE01C;
    case 202u: goto L_001FE04C;
    case 203u: goto L_001FE090;
    case 204u: goto L_001FE0F4;
    case 205u: goto L_001FE13C;
    case 206u: goto L_001FE150;
    case 207u: goto L_001FE174;
    case 208u: goto L_001FE1A8;
    case 209u: goto L_001FE1C8;
    case 210u: goto L_001FE1D8;
    case 211u: goto L_001FE1F4;
    case 212u: goto L_001FE208;
    case 213u: goto L_001FE218;
    case 214u: goto L_001FE230;
    case 215u: goto L_001FE2B0;
    case 216u: goto L_001FE2D0;
    case 217u: goto L_001FE2F0;
    case 218u: goto L_001FE314;
    case 219u: goto L_001FE340;
    case 220u: goto L_001FE374;
    case 221u: goto L_001FE3D0;
    case 222u: goto L_001FE3E0;
    case 223u: goto L_001FE410;
    case 224u: goto L_001FE458;
    case 225u: goto L_001FE468;
    case 226u: goto L_001FE484;
    case 227u: goto L_001FE490;
    case 228u: goto L_001FE4AC;
    case 229u: goto L_001FE4D0;
    case 230u: goto L_001FE4E0;
    case 231u: goto L_001FE4FC;
    case 232u: goto L_001FE508;
    case 233u: goto L_001FE51C;
    case 234u: goto L_001FE530;
    case 235u: goto L_001FE550;
    case 236u: goto L_001FE56C;
    case 237u: goto L_001FE5C8;
    case 238u: goto L_001FE600;
    case 239u: goto L_001FE61C;
    case 240u: goto L_001FE630;
    case 241u: goto L_001FE650;
    case 242u: goto L_001FE66C;
    case 243u: goto L_001FE694;
    case 244u: goto L_001FE6B0;
    case 245u: goto L_001FE6D0;
    case 246u: goto L_001FE6D8;
    case 247u: goto L_001FE6F8;
    case 248u: goto L_001FE708;
    case 249u: goto L_001FE724;
    case 250u: goto L_001FE730;
    case 251u: goto L_001FE738;
    case 252u: goto L_001FE748;
    case 253u: goto L_001FE760;
    case 254u: goto L_001FE774;
    case 255u: goto L_001FE77C;
    case 256u: goto L_001FE790;
    case 257u: goto L_001FE7AC;
    case 258u: goto L_001FE7BC;
    case 259u: goto L_001FE7DC;
    case 260u: goto L_001FE7EC;
    case 261u: goto L_001FE810;
    case 262u: goto L_001FE82C;
    case 263u: goto L_001FE848;
    case 264u: goto L_001FE860;
    case 265u: goto L_001FE88C;
    case 266u: goto L_001FE89C;
    case 267u: goto L_001FE8BC;
    case 268u: goto L_001FE8CC;
    case 269u: goto L_001FE8DC;
    case 270u: goto L_001FE8F8;
    case 271u: goto L_001FE918;
    case 272u: goto L_001FE928;
    case 273u: goto L_001FE944;
    case 274u: goto L_001FE958;
    case 275u: goto L_001FE968;
    case 276u: goto L_001FE990;
    case 277u: goto L_001FE9DC;
    case 278u: goto L_001FE9E8;
    case 279u: goto L_001FEA18;
    case 280u: goto L_001FEA40;
    case 281u: goto L_001FEAA0;
    case 282u: goto L_001FEAE8;
    case 283u: goto L_001FEAF8;
    case 284u: goto L_001FEB14;
    case 285u: goto L_001FEB20;
    case 286u: goto L_001FEB3C;
    case 287u: goto L_001FEB60;
    case 288u: goto L_001FEB70;
    case 289u: goto L_001FEB8C;
    case 290u: goto L_001FEB98;
    case 291u: goto L_001FEBAC;
    case 292u: goto L_001FEBC0;
    case 293u: goto L_001FEBE0;
    case 294u: goto L_001FEBFC;
    case 295u: goto L_001FEC1C;
    case 296u: goto L_001FEC30;
    case 297u: goto L_001FEC4C;
    case 298u: goto L_001FEC60;
    case 299u: goto L_001FEC80;
    case 300u: goto L_001FEC9C;
    case 301u: goto L_001FECC4;
    case 302u: goto L_001FECE0;
    case 303u: goto L_001FECFC;
    case 304u: goto L_001FED04;
    case 305u: goto L_001FED10;
    case 306u: goto L_001FED18;
    case 307u: goto L_001FED30;
    case 308u: goto L_001FED64;
    case 309u: goto L_001FED74;
    case 310u: goto L_001FED90;
    case 311u: goto L_001FEDA4;
    case 312u: goto L_001FEDB4;
    case 313u: goto L_001FEDD0;
    case 314u: goto L_001FEDDC;
    case 315u: goto L_001FEDE4;
    case 316u: goto L_001FEDEC;
    case 317u: goto L_001FEE00;
    case 318u: goto L_001FEE1C;
    case 319u: goto L_001FEE2C;
    case 320u: goto L_001FEE4C;
    case 321u: goto L_001FEE5C;
    case 322u: goto L_001FEE80;
    case 323u: goto L_001FEE9C;
    case 324u: goto L_001FEEA8;
    case 325u: goto L_001FEEB0;
    case 326u: goto L_001FEED0;
    case 327u: goto L_001FEEFC;
    case 328u: goto L_001FEF0C;
    case 329u: goto L_001FEF2C;
    case 330u: goto L_001FEF3C;
    case 331u: goto L_001FEF54;
    case 332u: goto L_001FEF80;
    case 333u: goto L_001FEFD0;
    case 334u: goto L_001FF030;
    case 335u: goto L_001FF068;
    case 336u: goto L_001FF0E0;
    case 337u: goto L_001FF118;
    case 338u: goto L_001FF12C;
    case 339u: goto L_001FF158;
    case 340u: goto L_001FF168;
    case 341u: goto L_001FF188;
    case 342u: goto L_001FF1A8;
    case 343u: goto L_001FF1B8;
    case 344u: goto L_001FF1CC;
    case 345u: goto L_001FF1D4;
    case 346u: goto L_001FF200;
    case 347u: goto L_001FF250;
    case 348u: goto L_001FF26C;
    case 349u: goto L_001FF290;
    case 350u: goto L_001FF2A0;
    case 351u: goto L_001FF2BC;
    case 352u: goto L_001FF2C8;
    case 353u: goto L_001FF2DC;
    case 354u: goto L_001FF2EC;
    case 355u: goto L_001FF300;
    case 356u: goto L_001FF310;
    case 357u: goto L_001FF324;
    case 358u: goto L_001FF340;
    case 359u: goto L_001FF35C;
    case 360u: goto L_001FF3B0;
    case 361u: goto L_001FF3CC;
    case 362u: goto L_001FF3D8;
    case 363u: goto L_001FF3E4;
    case 364u: goto L_001FF400;
    case 365u: goto L_001FF410;
    case 366u: goto L_001FF420;
    case 367u: goto L_001FF43C;
    case 368u: goto L_001FF448;
    case 369u: goto L_001FF454;
    case 370u: goto L_001FF470;
    case 371u: goto L_001FF488;
    case 372u: goto L_001FF498;
    case 373u: goto L_001FF4C0;
    case 374u: goto L_001FF4D0;
    case 375u: goto L_001FF4F8;
    case 376u: goto L_001FF508;
    case 377u: goto L_001FF52C;
    case 378u: goto L_001FF560;
    case 379u: goto L_001FF594;
    case 380u: goto L_001FF5A0;
    case 381u: goto L_001FF5B0;
    case 382u: goto L_001FF5BC;
    case 383u: goto L_001FF5D0;
    case 384u: goto L_001FF5FC;
    case 385u: goto L_001FF648;
    case 386u: goto L_001FF690;
    case 387u: goto L_001FF6A0;
    case 388u: goto L_001FF6BC;
    case 389u: goto L_001FF6C8;
    case 390u: goto L_001FF6DC;
    case 391u: goto L_001FF6EC;
    case 392u: goto L_001FF700;
    case 393u: goto L_001FF710;
    case 394u: goto L_001FF724;
    case 395u: goto L_001FF734;
    case 396u: goto L_001FF748;
    case 397u: goto L_001FF758;
    case 398u: goto L_001FF76C;
    case 399u: goto L_001FF780;
    case 400u: goto L_001FF7A4;
    case 401u: goto L_001FF7F4;
    case 402u: goto L_001FF814;
    case 403u: goto L_001FF8C0;
    case 404u: goto L_001FF8E0;
    case 405u: goto L_001FF8E8;
    case 406u: goto L_001FF904;
    case 407u: goto L_001FF938;
    case 408u: goto L_001FF954;
    case 409u: goto L_001FF960;
    case 410u: goto L_001FF96C;
    case 411u: goto L_001FF990;
    case 412u: goto L_001FF9A0;
    case 413u: goto L_001FF9B0;
    case 414u: goto L_001FF9D0;
    case 415u: goto L_001FF9EC;
    case 416u: goto L_001FFA08;
    case 417u: goto L_001FFA14;
    case 418u: goto L_001FFA30;
    case 419u: goto L_001FFA70;
    case 420u: goto L_001FFA8C;
    case 421u: goto L_001FFAA0;
    case 422u: goto L_001FFABC;
    case 423u: goto L_001FFAD4;
    case 424u: goto L_001FFAE0;
    case 425u: goto L_001FFAEC;
    case 426u: goto L_001FFB10;
    case 427u: goto L_001FFB28;
    case 428u: goto L_001FFB38;
    case 429u: goto L_001FFB70;
    case 430u: goto L_001FFB9C;
    case 431u: goto L_001FFBB8;
    case 432u: goto L_001FFBD4;
    case 433u: goto L_001FFBF8;
    case 434u: goto L_001FFC20;
    case 435u: goto L_001FFC3C;
    case 436u: goto L_001FFC50;
    case 437u: goto L_001FFC70;
    case 438u: goto L_001FFC8C;
    case 439u: goto L_001FFCA4;
    case 440u: goto L_001FFCC8;
    case 441u: goto L_001FFCE8;
    case 442u: goto L_001FFD04;
    case 443u: goto L_001FFD1C;
    case 444u: goto L_001FFD28;
    case 445u: goto L_001FFD38;
    case 446u: goto L_001FFD54;
    case 447u: goto L_001FFD60;
    case 448u: goto L_001FFD70;
    case 449u: goto L_001FFD84;
    case 450u: goto L_001FFD90;
    case 451u: goto L_001FFDB4;
    case 452u: goto L_001FFDC8;
    case 453u: goto L_001FFDD4;
    case 454u: goto L_001FFDFC;
    case 455u: goto L_001FFE18;
    case 456u: goto L_001FFE38;
    case 457u: goto L_001FFE44;
    case 458u: goto L_001FFE6C;
    case 459u: goto L_001FFE88;
    case 460u: goto L_001FFEA8;
    case 461u: goto L_001FFEC0;
    case 462u: goto L_001FFEE0;
    case 463u: goto L_001FFEF8;
    case 464u: goto L_001FFF04;
    case 465u: goto L_001FFF60;
    case 466u: goto L_001FFF70;
    case 467u: goto L_001FFF98;
    case 468u: goto L_001FFFA8;
    case 469u: goto L_001FFFD4;
    case 470u: goto L_001FFFF0;
    default: bad_entry(c, 0x001FC000u); return;
    }
L_001FC000:
    c.f[24] = ld32((c.r[29].w[0] + 484u));
    c.budget -= 1;
L_001FC004:
    c.r[17].d[0] = 0ull + 0ull;
    c.f[23] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.f[26] = ld32((c.r[29].w[0] + 504u));
    c.f[25] = ld32((c.r[29].w[0] + 500u));
    c.f[21] = c.f[24] ^ fp::kSign;
    c.f[22] = c.f[23] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0] ^ fp::kSign;  if (t) { goto L_001FC270; } }
L_001FC028:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_001FC26C; }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[27] = fp::sub(c.f[28], c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::sub(c.f[2], c.f[25]);
    c.f[3] = fp::sub(c.f[3], c.f[26]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[6] = fp::sqrt(c.f[6]);
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 22;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  goto L_001FC0B8; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FC268; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_001FC0B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[29].w[0] + 480u));  goto L_001FC148; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[29].w[0] + 480u));  goto L_001FC108; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001FC0E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FC1D0; } }
L_001FC0E0:
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[6]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[0]);  if (t) { goto L_001FC1CC; } }
L_001FC108:
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[5]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[29].w[0] + 464u), c.f[1]);  goto L_001FC13C; }
    st32((c.r[29].w[0] + 464u), c.f[20]);
    c.f[6] = c.f[6] ^ fp::kSign;
    st32((c.r[29].w[0] + 468u), c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[22]);  if (t) { goto L_001FC1CC; } }
L_001FC13C:
    st32((c.r[29].w[0] + 468u), c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[23]);  if (t) { goto L_001FC1CC; } }
L_001FC148:
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[5]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.facc = fp::add(c.f[0], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[24]));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[2], c.f[23]));
    st32((c.r[29].w[0] + 464u), c.f[4]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    st32((c.r[29].w[0] + 472u), c.f[3]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[6] = fp::sqrt(c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FC1CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[0], c.f[6]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.budget -= 10;
L_001FC1CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001FC1D0:
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001FC1FC; }
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[6]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FC220; } }
L_001FC1FC:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.f[5] = ld32((c.r[19].w[0] + 44u));  goto L_001FC224; }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = c.f[6] ^ fp::kSign;
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC220u);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x001FC220u) [[unlikely]] return; }
L_001FC220:
    c.f[5] = ld32((c.r[19].w[0] + 44u));
    c.budget -= 1;
L_001FC224:
    c.f[4] = ld32((c.r[29].w[0] + 464u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[5] = fp::mul(c.f[27], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[4]);
    c.f[2] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
L_001FC268:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FC26C:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001FC270:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC028u | kUnwind; return; } goto L_001FC028; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_001FC2D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_001FC370; }
L_001FC2E0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_001FC310; }
L_001FC2F0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_001FC430; }
L_001FC300:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_001FC3D0; }
L_001FC310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC350u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC350u) [[unlikely]] return; }
L_001FC350:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3B0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC3B0u) [[unlikely]] return; }
L_001FC3B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC404u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC404u) [[unlikely]] return; }
L_001FC404:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC464u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC464u) [[unlikely]] return; }
L_001FC464:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12792u);  c.pc = t; return; }
L_001FC4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x001FC4BCu) [[unlikely]] return; }
L_001FC4BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4C8u); set32(c.r[4], ld32((c.r[2].w[0] - 12792u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FC4C8u) [[unlikely]] return; }
L_001FC4C8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4DCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FC4DCu) [[unlikely]] return; }
L_001FC4DC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4ECu); set32(c.r[4], c.r[4].w[0] - 12784u);  if (depth < kMaxDepth) unit_0088(c, 245u, depth + 1u); else { c.pc = 0x00321CC0u; return; } if (c.pc != 0x001FC4ECu) [[unlikely]] return; }
L_001FC4EC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC500u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FC500u) [[unlikely]] return; }
L_001FC500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC53Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x001FC53Cu) [[unlikely]] return; }
L_001FC53C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));  goto L_001FC54C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC558; } }
L_001FC54C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001FC558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC58Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x001FC58Cu) [[unlikely]] return; }
L_001FC58C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC598u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003F(c, 92u, depth + 1u); else { c.pc = 0x001FD320u; return; } if (c.pc != 0x001FC598u) [[unlikely]] return; }
L_001FC598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC5B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_001FC5C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 161u, depth); }
L_001FC5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x001FC5ECu) [[unlikely]] return; }
L_001FC5EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 101ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FC6D8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC610u); set32(c.r[5], c.r[29].w[0] + 62u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x001FC610u) [[unlikely]] return; }
L_001FC610:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC638u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FC638u) [[unlikely]] return; }
L_001FC638:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC660u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FC660u) [[unlikely]] return; }
L_001FC660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC67Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FC67Cu) [[unlikely]] return; }
L_001FC67C:
    c.r[8].d[0] = c.r[17].d[0] << 48;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FC6C4; } }
L_001FC69C:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = ld32((c.r[5].w[0] + 31024u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FC6C4:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC69Cu | kUnwind; return; } goto L_001FC69C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001FC79C; } }
L_001FC6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC6E0u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FD330u; return; } if (c.pc != 0x001FC6E0u) [[unlikely]] return; }
L_001FC6E0:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC700u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FC700u) [[unlikely]] return; }
L_001FC700:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC728u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FC728u) [[unlikely]] return; }
L_001FC728:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC744u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FC744u) [[unlikely]] return; }
L_001FC744:
    c.r[8].d[0] = c.r[17].d[0] << 48;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FC78C; } }
L_001FC764:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = ld32((c.r[5].w[0] + 31024u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FC78C:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC764u | kUnwind; return; } goto L_001FC764; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FC79C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001FC7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FC7D8u) [[unlikely]] return; }
L_001FC7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FC800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FC7E8u) [[unlikely]] return; }
L_001FC7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13904u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 6;
L_001FC800:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FC820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC848u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FC848u) [[unlikely]] return; }
L_001FC848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FC870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FC858u) [[unlikely]] return; }
L_001FC858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13904u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 6;
L_001FC870:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC880u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x001FC880u) [[unlikely]] return; }
L_001FC880:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8A0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FC8A0u) [[unlikely]] return; }
L_001FC8A0:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8C8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FC8C8u) [[unlikely]] return; }
L_001FC8C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8E4u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FC8E4u) [[unlikely]] return; }
L_001FC8E4:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FC92C; } }
L_001FC904:
    set32(c.r[6], c.r[8].w[0] << 4);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FC92C:
    c.r[5].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC904u | kUnwind; return; } goto L_001FC904; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC960:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC970; } }
    st8((c.r[2].w[0] + 281u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001FC970:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FC980; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 281u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FC980:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 182u, depth); }
L_001FC990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = ld16((c.r[5].w[0] + 48u));
    set32(c.r[19], ld32((c.r[5].w[0] + 128u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FCAA4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FC9E0; } }
    breakpoint(c, 0x001FC9DCu);
    c.budget -= 1;
L_001FC9E0:
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA0Cu); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FCA0Cu) [[unlikely]] return; }
L_001FCA0C:
    c.r[3].d[0] = c.r[20].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA34u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FCA34u) [[unlikely]] return; }
L_001FCA34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA50u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FCA50u) [[unlikely]] return; }
L_001FCA50:
    c.r[8].d[0] = c.r[20].d[0] << 48;
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FCA98; } }
L_001FCA70:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = ld32((c.r[5].w[0] + 31024u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FCA98:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCA70u | kUnwind; return; } goto L_001FCA70; }
L_001FCAA4:
    c.r[20].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);  if (t) { goto L_001FCABC; } }
    breakpoint(c, 0x001FCAB8u);
    c.budget -= 1;
L_001FCABC:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::pminw(c.r[4], c.r[4], c.r[3]);
    set32(c.r[3], 0u + 1u);
    mmi::pmaxw(c.r[16], c.r[4], c.r[3]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  goto L_001FCAE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001FCAE8; } }
L_001FCAE4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_001FCAE8:
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = ld16((c.r[18].w[0] + 26u));  if (t) { goto L_001FCB40; } }
L_001FCB10:
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_001FCB24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FCB30; } }
L_001FCB24:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_001FCB30:
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB3Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x001FCB3Cu) [[unlikely]] return; }
L_001FCB3C:
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001FCB40:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCB10u | kUnwind; return; } goto L_001FCB10; }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 26u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[4].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.r[8].d[0] = ld16((c.r[18].w[0] + 26u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.f[0]);  if (t) { goto L_001FCBD0; } }
L_001FCBA0:
    set32(c.r[8], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[6].w[0] + 31024u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 31028u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31032u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0] + 12u), 0u);
    c.budget -= 12;
L_001FCBD0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[7].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCBA0u | kUnwind; return; } goto L_001FCBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_001FCC10; } }
L_001FCBE8:
    set32(c.r[3], c.r[20].w[0] << 4);
    c.f[0] = 0u;
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001FCC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC0Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x001FCC0Cu) [[unlikely]] return; }
L_001FCC0C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001FCC10:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCBE8u | kUnwind; return; } goto L_001FCBE8; }
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[29].w[0] + 112u));  goto L_001FCC50; }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 7;
L_001FCC50:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[19].w[0] + 32u), c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 26u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001FCC90; }
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_001FCC90:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FCCB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = ld16((c.r[5].w[0] + 48u));
    c.budget -= 12;
    { const bool t = c.r[16].sd[0] > 0; c.f[20] = c.f[12];  if (t) { goto L_001FCD10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001FD0D4; } }
L_001FCD10:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_001FCD20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001FCD5C; } }
L_001FCD20:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FCD2Cu) [[unlikely]] return; }
L_001FCD2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 14616u);  if (t) { goto L_001FCD4C; } }
L_001FCD3C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_001FCD4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FCD58; } }
L_001FCD4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCD3Cu | kUnwind; return; } goto L_001FCD3C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FCD58:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001FCD5C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_001FCD7C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD74u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_003F(c, 56u, depth + 1u); else { c.pc = 0x001FC990u; return; } if (c.pc != 0x001FCD74u) [[unlikely]] return; }
L_001FCD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001FD0D8; } }
L_001FCD7C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 50u);  goto L_001FCE64; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FCD9C; } }
    breakpoint(c, 0x001FCD98u);
    c.budget -= 1;
L_001FCD9C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDC8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FCDC8u) [[unlikely]] return; }
L_001FCDC8:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDF0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FCDF0u) [[unlikely]] return; }
L_001FCDF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE0Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FCE0Cu) [[unlikely]] return; }
L_001FCE0C:
    c.r[8].d[0] = c.r[17].d[0] << 48;
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FCE54; } }
L_001FCE2C:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = ld32((c.r[5].w[0] + 31024u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FCE54:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCE2Cu | kUnwind; return; } goto L_001FCE2C; }
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_001FCE64:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);  if (t) { goto L_001FCE74; } }
    breakpoint(c, 0x001FCE70u);
    c.budget -= 1;
L_001FCE74:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::pminw(c.r[4], c.r[4], c.r[3]);
    set32(c.r[3], 0u + 1u);
    mmi::pmaxw(c.r[17], c.r[4], c.r[3]);
    set32(c.r[9], ld32((c.r[18].w[0] + 32u)));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 26u));
    set32(c.r[8], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 84u)));
    c.f[9] = ld32((c.r[9].w[0]));
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.f[8] = ld32((c.r[9].w[0] + 4u));
    c.f[7] = ld32((c.r[9].w[0] + 8u));
    c.f[6] = c.f[9];
    c.f[5] = c.f[8];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[7];  if (t) { goto L_001FCF1C; } }
L_001FCEB8:
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[9] = fp::min(c.f[9], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[2]);
    c.f[6] = fp::max(c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[8] = fp::min(c.f[8], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[2]);
    c.f[5] = fp::max(c.f[5], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[7] = fp::min(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[2]);
    c.f[4] = fp::max(c.f[4], c.f[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[17].w[0]);
    c.budget -= 25;
L_001FCF1C:
    c.r[3].d[0] = c.r[10].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCEB8u | kUnwind; return; } goto L_001FCEB8; }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[9], c.f[6]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = fp::add(c.f[8], c.f[5]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = fp::add(c.f[7], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[2] = fp::sub(c.f[6], c.f[9]);
    c.f[1] = fp::sub(c.f[5], c.f[8]);
    c.f[0] = fp::sub(c.f[4], c.f[7]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[7].d[0] = ld16((c.r[19].w[0] + 26u));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = c.r[8].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_001FCFF0; } }
L_001FCFC0:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.f[0] = ld32((c.r[5].w[0] + 31024u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 12;
L_001FCFF0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[6].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCFC0u | kUnwind; return; } goto L_001FCFC0; }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 26u));
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_001FD060; } }
L_001FD038:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.f[0] = 0u;
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FD060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD05Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x001FD05Cu) [[unlikely]] return; }
L_001FD05C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FD060:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD038u | kUnwind; return; } goto L_001FD038; }
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[18].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 28u), c.f[1]);  if (t) { goto L_001FD0B4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.budget -= 6;
L_001FD0B4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FD0D4; } }
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001FD0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001FD0D8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001FD100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] - 13904u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD140u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FD140u) [[unlikely]] return; }
L_001FD140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD14Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FD14Cu) [[unlikely]] return; }
L_001FD14C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FD16C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD168u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FD168u) [[unlikely]] return; }
L_001FD168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001FD1B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_001FD1B8; } }
L_001FD1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1B8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x001FD1B8u) [[unlikely]] return; }
L_001FD1B8:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1CCu); set32(c.r[6], 0u + 7000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x001FD1CCu) [[unlikely]] return; }
L_001FD1CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FD228; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1F8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FD1F8u) [[unlikely]] return; }
L_001FD1F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD208u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FD208u) [[unlikely]] return; }
L_001FD208:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FD228; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD228u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x001FD228u) [[unlikely]] return; }
L_001FD228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] - 13904u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 28u), 0u);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD25Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FD25Cu) [[unlikely]] return; }
L_001FD25C:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD284u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FD284u) [[unlikely]] return; }
L_001FD284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2A0u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FD2A0u) [[unlikely]] return; }
L_001FD2A0:
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FD2E8; } }
L_001FD2C0:
    set32(c.r[6], c.r[8].w[0] << 4);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 10;
L_001FD2E8:
    c.r[5].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD2C0u | kUnwind; return; } goto L_001FD2C0; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FD320:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001FD340; }
L_001FD330:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001FD390; }
L_001FD340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD36Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD36Cu) [[unlikely]] return; }
L_001FD36C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3BCu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD3BCu) [[unlikely]] return; }
L_001FD3BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD44C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13792u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FD430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FD430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD430u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FD430u) [[unlikely]] return; }
L_001FD430:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FD450; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD44Cu); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FD44Cu) [[unlikely]] return; }
L_001FD44C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12744u);  c.pc = t; return; }
L_001FD480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD49Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x00219CA0u; return; } if (c.pc != 0x001FD49Cu) [[unlikely]] return; }
L_001FD49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4A8u); set32(c.r[4], ld32((c.r[2].w[0] - 12744u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FD4A8u) [[unlikely]] return; }
L_001FD4A8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4BCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FD4BCu) [[unlikely]] return; }
L_001FD4BC:
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4CCu); set32(c.r[4], c.r[4].w[0] - 12736u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FD4CCu) [[unlikely]] return; }
L_001FD4CC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4E0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FD4E0u) [[unlikely]] return; }
L_001FD4E0:
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4F0u); set32(c.r[4], c.r[4].w[0] - 12730u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FD4F0u) [[unlikely]] return; }
L_001FD4F0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD504u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FD504u) [[unlikely]] return; }
L_001FD504:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD514u); set32(c.r[4], c.r[4].w[0] - 12723u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FD514u) [[unlikely]] return; }
L_001FD514:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD528u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FD528u) [[unlikely]] return; }
L_001FD528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD55Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 202u, depth + 1u); else { c.pc = 0x00219D20u; return; } if (c.pc != 0x001FD55Cu) [[unlikely]] return; }
L_001FD55C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 96u));  goto L_001FD56C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FD5A8; } }
L_001FD56C:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FD5A8; }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FD5A4; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_001FD5A8; }
L_001FD5A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FD5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x00219DA0u; return; } if (c.pc != 0x001FD5DCu) [[unlikely]] return; }
L_001FD5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5E8u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FD5E8u) [[unlikely]] return; }
L_001FD5E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5F4u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FD5F4u) [[unlikely]] return; }
L_001FD5F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD600u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FD600u) [[unlikely]] return; }
L_001FD600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD620:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 207u, depth); }
L_001FD630:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 208u, depth); }
L_001FD640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD65Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 211u, depth + 1u); else { c.pc = 0x00219E40u; return; } if (c.pc != 0x001FD65Cu) [[unlikely]] return; }
L_001FD65C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD668u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FD668u) [[unlikely]] return; }
L_001FD668:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD674u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FD674u) [[unlikely]] return; }
L_001FD674:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD680u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FD680u) [[unlikely]] return; }
L_001FD680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FD6B8u) [[unlikely]] return; }
L_001FD6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x001FD6C8u) [[unlikely]] return; }
L_001FD6C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13792u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 6;
L_001FD6E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FD700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD75C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FD740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD740u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FD740u) [[unlikely]] return; }
L_001FD740:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FD760; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD75Cu); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FD75Cu) [[unlikely]] return; }
L_001FD75C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD780:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 214u, depth); }
L_001FD790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FD7B8u) [[unlikely]] return; }
L_001FD7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD7E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x001FD7C8u) [[unlikely]] return; }
L_001FD7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13792u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 6;
L_001FD7E0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 218u, depth + 1u); else { c.pc = 0x00219F40u; return; } if (c.pc != 0x001FD7F0u) [[unlikely]] return; }
L_001FD7F0:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD830:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD864u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FD864u) [[unlikely]] return; }
L_001FD864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD880u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FD880u) [[unlikely]] return; }
L_001FD880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD89Cu); c.f[21] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FD89Cu) [[unlikely]] return; }
L_001FD89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[21]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.f[20] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FD8D0u) [[unlikely]] return; }
L_001FD8D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD91Cu); st32((c.r[17].w[0] + 8u), c.f[2]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FD91Cu) [[unlikely]] return; }
L_001FD91C:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FD960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 24u), c.f[22]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    c.f[12] = c.f[15];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[13] = c.f[16];
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.f[14] = c.f[17];
    c.f[15] = c.f[18];
    c.f[16] = c.f[19];
    st32((c.r[29].w[0]), c.f[1]);
    c.f[17] = ld32((c.r[29].w[0] + 80u));
    c.f[18] = ld32((c.r[29].w[0] + 88u));
    c.f[19] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD9CCu); st32((c.r[29].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0046(c, 229u, depth + 1u); else { c.pc = 0x0021A1F0u; return; } if (c.pc != 0x001FD9CCu) [[unlikely]] return; }
L_001FD9CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 13792u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.f[22]);
    st32((c.r[16].w[0] + 100u), c.f[21]);
    st32((c.r[16].w[0] + 104u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FDA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FDAAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] - 13680u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001FDA84; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FDA88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FDA58u) [[unlikely]] return; }
L_001FDA58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FDA68u) [[unlikely]] return; }
L_001FDA68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDA84; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDA84u) [[unlikely]] return; }
L_001FDA84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FDA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x001FDA90u) [[unlikely]] return; }
L_001FDA90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FDAB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAACu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FDAACu) [[unlikely]] return; }
L_001FDAAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FDAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FDAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12696u);  c.pc = t; return; }
L_001FDAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x001FDAFCu) [[unlikely]] return; }
L_001FDAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB08u); set32(c.r[4], ld32((c.r[2].w[0] - 12696u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FDB08u) [[unlikely]] return; }
L_001FDB08:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB1Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDB1Cu) [[unlikely]] return; }
L_001FDB1C:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB2Cu); set32(c.r[4], c.r[4].w[0] - 12688u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FDB2Cu) [[unlikely]] return; }
L_001FDB2C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB40u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDB40u) [[unlikely]] return; }
L_001FDB40:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB50u); set32(c.r[4], c.r[4].w[0] - 12681u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001FDB50u) [[unlikely]] return; }
L_001FDB50:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB64u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDB64u) [[unlikely]] return; }
L_001FDB64:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB74u); set32(c.r[4], c.r[4].w[0] - 12664u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001FDB74u) [[unlikely]] return; }
L_001FDB74:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB88u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDB88u) [[unlikely]] return; }
L_001FDB88:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FDB9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_001FDBA0; } }
L_001FDB9C:
    set32(c.r[5], c.r[5].w[0] - 12634u);
    c.budget -= 1;
L_001FDBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBACu); set32(c.r[4], c.r[4].w[0] - 12649u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x001FDBACu) [[unlikely]] return; }
L_001FDBAC:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBC0u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDBC0u) [[unlikely]] return; }
L_001FDBC0:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBD0u); set32(c.r[4], c.r[4].w[0] - 12629u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x001FDBD0u) [[unlikely]] return; }
L_001FDBD0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBE4u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FDBE4u) [[unlikely]] return; }
L_001FDBE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001FDC04; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDC00u) [[unlikely]] return; }
L_001FDC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FDC04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FDC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x001FDC3Cu) [[unlikely]] return; }
L_001FDC3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_001FDC4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FDD88; } }
L_001FDC4C:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FDD88; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FDC7C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_001FDC88; }
L_001FDC7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDD88; } }
L_001FDC88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDC9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FDD88; }
L_001FDC9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001FDCB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDCDC; } }
L_001FDCB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_001FDCEC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FDCE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDCD4u) [[unlikely]] return; }
L_001FDCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDCE8; } }
L_001FDCDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDD88; } }
L_001FDCE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001FDCEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDD00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FDD88; }
L_001FDD00:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_001FDD24; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FDD20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDD88; } }
L_001FDD20:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001FDD24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDD38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FDD88; }
L_001FDD38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001FDD4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDD78; } }
L_001FDD4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FDD88; }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FDD84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDD70u) [[unlikely]] return; }
L_001FDD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDD84; } }
L_001FDD78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDD88; } }
L_001FDD84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FDD88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDDA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x001FDDBCu) [[unlikely]] return; }
L_001FDDBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDC8u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FDDC8u) [[unlikely]] return; }
L_001FDDC8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDDCu); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001FDDDCu) [[unlikely]] return; }
L_001FDDDC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDF0u); st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001FDDF0u) [[unlikely]] return; }
L_001FDDF0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE04u) [[unlikely]] return; }
L_001FDE04:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE18u) [[unlikely]] return; }
L_001FDE18:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE2Cu) [[unlikely]] return; }
L_001FDE2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FDE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x001FDE5Cu) [[unlikely]] return; }
L_001FDE5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_001FDE6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FDE88; } }
L_001FDE6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FDE88; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE84u) [[unlikely]] return; }
L_001FDE84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FDE88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDEA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEC0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x001FDEC0u) [[unlikely]] return; }
L_001FDEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FDEC8u) [[unlikely]] return; }
L_001FDEC8:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FDED4u) [[unlikely]] return; }
L_001FDED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEE0u); st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FDEE0u) [[unlikely]] return; }
L_001FDEE0:
    set32(c.r[17], ld32((c.r[18].w[0] + 40u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001FDF54; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 40u), c.r[16].w[0]);  goto L_001FDF30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FDF00u) [[unlikely]] return; }
L_001FDF00:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF10u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FDF10u) [[unlikely]] return; }
L_001FDF10:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FDF2C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDF2Cu) [[unlikely]] return; }
L_001FDF2C:
    st32((c.r[18].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 1;
L_001FDF30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FDF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FDF40u) [[unlikely]] return; }
L_001FDF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF50u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FDF50u) [[unlikely]] return; }
L_001FDF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001FDF54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FDF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x001FDF8Cu) [[unlikely]] return; }
L_001FDF8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF98u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FDF98u) [[unlikely]] return; }
L_001FDF98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFA4u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FDFA4u) [[unlikely]] return; }
L_001FDFA4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFBCu); st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FDFBCu) [[unlikely]] return; }
L_001FDFBC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 62u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFD0u); st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FDFD0u) [[unlikely]] return; }
L_001FDFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FDFD8u) [[unlikely]] return; }
L_001FDFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FDFE0u) [[unlikely]] return; }
L_001FDFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE01Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x001FE01Cu) [[unlikely]] return; }
L_001FE01C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[17].w[0], c.r[5].w[0]);  if (t) { goto L_001FE038; } }
    breakpoint(c, 0x001FE034u);
    c.budget -= 1;
L_001FE038:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0])));  if (t) { goto L_001FE05C; } }
L_001FE04C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[6].w[0])));  goto L_001FE05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0] + 8u)));  if (t) { goto L_001FE064; } }
L_001FE05C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE04Cu | kUnwind; return; } goto L_001FE04C; }
L_001FE064:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FE0BC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);  if (t) { goto L_001FE07C; } }
    breakpoint(c, 0x001FE078u);
    c.budget -= 1;
L_001FE07C:
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[5].w[0])));  if (t) { goto L_001FE0A4; } }
L_001FE090:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[7], ld32((c.r[7].w[0])));  goto L_001FE0A4; }
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FE0B0; } }
L_001FE0A4:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE090u | kUnwind; return; } goto L_001FE090; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE0B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[3].w[0] + 16u), c.r[6].w[0]);  goto L_001FE0BC; }
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 1;
L_001FE0BC:
    set32(c.r[7], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_001FE124; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[7].w[0], c.r[5].w[0]);  if (t) { goto L_001FE0DC; } }
    breakpoint(c, 0x001FE0D8u);
    c.budget -= 1;
L_001FE0DC:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_001FE108; } }
L_001FE0F4:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[6], ld32((c.r[6].w[0])));  goto L_001FE108; }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FE114; } }
L_001FE108:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE0F4u | kUnwind; return; } goto L_001FE0F4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE114:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[3].w[0] + 36u), c.r[7].w[0]);  goto L_001FE120; }
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 1;
L_001FE120:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001FE124:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001FE140; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE13Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE13Cu) [[unlikely]] return; }
L_001FE13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FE140:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE174u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x001FE174u) [[unlikely]] return; }
L_001FE174:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 13u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001FE21C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE1A8u) [[unlikely]] return; }
L_001FE1A8:
    set32(c.r[18], ld32((c.r[16].w[0] + 40u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_001FE218; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  goto L_001FE1F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE1C8u) [[unlikely]] return; }
L_001FE1C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE1D8u) [[unlikely]] return; }
L_001FE1D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FE1F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE1F4u) [[unlikely]] return; }
L_001FE1F4:
    st32((c.r[16].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 1;
L_001FE1F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FE218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE208u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE208u) [[unlikely]] return; }
L_001FE208:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE218u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE218u) [[unlikely]] return; }
L_001FE218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001FE21C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FE2B0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[18].w[0] + 13u));  goto L_001FE2B4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[13] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE2B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE2B0u) [[unlikely]] return; }
L_001FE2B0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 13u));
    c.budget -= 1;
L_001FE2B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001FE2D4; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE2D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE2D0u) [[unlikely]] return; }
L_001FE2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001FE2D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FE328; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE314u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE314u) [[unlikely]] return; }
L_001FE314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001FE32C; } }
L_001FE324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001FE32C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FE340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE374u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x001FE374u) [[unlikely]] return; }
L_001FE374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 13680u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[19].w[0] + 13u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    st32((c.r[19].w[0] + 32u), 0u);
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 40u), 0u);  if (t) { goto L_001FE3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE3D0u) [[unlikely]] return; }
L_001FE3D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE3E0u) [[unlikely]] return; }
L_001FE3E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FE410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FE4AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] - 13584u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001FE484; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FE488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE458u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE458u) [[unlikely]] return; }
L_001FE458:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE468u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE468u) [[unlikely]] return; }
L_001FE468:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FE484; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE484u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE484u) [[unlikely]] return; }
L_001FE484:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FE488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FE490u) [[unlikely]] return; }
L_001FE490:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FE4B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4ACu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FE4ACu) [[unlikely]] return; }
L_001FE4AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FE4B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12600u);  c.pc = t; return; }
L_001FE4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x001FE4FCu) [[unlikely]] return; }
L_001FE4FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE508u); set32(c.r[4], ld32((c.r[2].w[0] - 12600u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FE508u) [[unlikely]] return; }
L_001FE508:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE51Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FE51Cu) [[unlikely]] return; }
L_001FE51C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE530u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE530u) [[unlikely]] return; }
L_001FE530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE56Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x001FE56Cu) [[unlikely]] return; }
L_001FE56C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001FE57C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FE5E0; } }
L_001FE57C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FE590; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FE5E0; }
L_001FE590:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001FE5A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FE5D0; } }
L_001FE5A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FE5E0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FE5DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE5C8u) [[unlikely]] return; }
L_001FE5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FE5DC; } }
L_001FE5D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE5E0; } }
L_001FE5DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FE5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE61Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x001FE61Cu) [[unlikely]] return; }
L_001FE61C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE630u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE630u) [[unlikely]] return; }
L_001FE630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE66Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 158u, depth + 1u); else { c.pc = 0x002110B0u; return; } if (c.pc != 0x001FE66Cu) [[unlikely]] return; }
L_001FE66C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001FE67C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FE698; } }
L_001FE67C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FE698; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE694u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE694u) [[unlikely]] return; }
L_001FE694:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FE698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE6B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE6D0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x001FE6D0u) [[unlikely]] return; }
L_001FE6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE6D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FE6D8u) [[unlikely]] return; }
L_001FE6D8:
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001FE74C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  goto L_001FE728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE6F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE6F8u) [[unlikely]] return; }
L_001FE6F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE708u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE708u) [[unlikely]] return; }
L_001FE708:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FE724; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE724u) [[unlikely]] return; }
L_001FE724:
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_001FE728:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FE748; } }
L_001FE730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE738u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE738u) [[unlikely]] return; }
L_001FE738:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE748u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE748u) [[unlikely]] return; }
L_001FE748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001FE74C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FE760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE774u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x001FE774u) [[unlikely]] return; }
L_001FE774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE77Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FE77Cu) [[unlikely]] return; }
L_001FE77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FE7ACu) [[unlikely]] return; }
L_001FE7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FE7EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FE7BCu) [[unlikely]] return; }
L_001FE7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_001FE7EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE7DCu) [[unlikely]] return; }
L_001FE7DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7ECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE7ECu) [[unlikely]] return; }
L_001FE7EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE82Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x001FE82Cu) [[unlikely]] return; }
L_001FE82C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001FE84C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE848u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE848u) [[unlikely]] return; }
L_001FE848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FE84C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE88Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FE88Cu) [[unlikely]] return; }
L_001FE88C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FE8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE89Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FE89Cu) [[unlikely]] return; }
L_001FE89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13584u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_001FE8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE8BCu) [[unlikely]] return; }
L_001FE8BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE8CCu) [[unlikely]] return; }
L_001FE8CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x001FE8DCu) [[unlikely]] return; }
L_001FE8DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001FE96C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE8F8u) [[unlikely]] return; }
L_001FE8F8:
    set32(c.r[18], ld32((c.r[16].w[0] + 24u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_001FE968; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  goto L_001FE948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE918u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE918u) [[unlikely]] return; }
L_001FE918:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE928u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE928u) [[unlikely]] return; }
L_001FE928:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FE944; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE944u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE944u) [[unlikely]] return; }
L_001FE944:
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_001FE948:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FE968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE958u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FE958u) [[unlikely]] return; }
L_001FE958:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE968u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FE968u) [[unlikely]] return; }
L_001FE968:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FE96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FE990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_001FE9DC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 48u));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_001FEA68; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE9DCu) [[unlikely]] return; }
L_001FE9DC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEA68; } }
L_001FE9E8:
    c.f[20] = ld32((c.r[3].w[0] + 276u));
    st32((c.r[29].w[0] + 92u), c.f[21]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001FEA1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA18u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEA18u) [[unlikely]] return; }
L_001FEA18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FEA1C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[29].w[0] + 92u), c.f[20]);  goto L_001FEA40; }
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEA40u) [[unlikely]] return; }
L_001FEA40:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
L_001FEA68:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE9E8u | kUnwind; return; } goto L_001FE9E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FEAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FEB3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] - 13472u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001FEB14; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FEB18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEAE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FEAE8u) [[unlikely]] return; }
L_001FEAE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEAF8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FEAF8u) [[unlikely]] return; }
L_001FEAF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEB14; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEB14u) [[unlikely]] return; }
L_001FEB14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FEB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FEB20u) [[unlikely]] return; }
L_001FEB20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FEB40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB3Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FEB3Cu) [[unlikely]] return; }
L_001FEB3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FEB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FEB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12568u);  c.pc = t; return; }
L_001FEB70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x001FEB8Cu) [[unlikely]] return; }
L_001FEB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB98u); set32(c.r[4], ld32((c.r[2].w[0] - 12568u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FEB98u) [[unlikely]] return; }
L_001FEB98:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FEBACu) [[unlikely]] return; }
L_001FEBAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEBC0u) [[unlikely]] return; }
L_001FEBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FEBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x001FEBFCu) [[unlikely]] return; }
L_001FEBFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001FEC0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FEC1C; } }
L_001FEC0C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC1Cu); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEC1Cu) [[unlikely]] return; }
L_001FEC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FEC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x001FEC4Cu) [[unlikely]] return; }
L_001FEC4C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FEC60u) [[unlikely]] return; }
L_001FEC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FEC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 158u, depth + 1u); else { c.pc = 0x002110B0u; return; } if (c.pc != 0x001FEC9Cu) [[unlikely]] return; }
L_001FEC9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001FECAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FECC8; } }
L_001FECAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FECC8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FECC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FECC4u) [[unlikely]] return; }
L_001FECC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FECC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FECE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FECFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x001FECFCu) [[unlikely]] return; }
L_001FECFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FED04u) [[unlikely]] return; }
L_001FED04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED10u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FED30u; return; } if (c.pc != 0x001FED10u) [[unlikely]] return; }
L_001FED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 332u, depth + 1u); else { c.pc = 0x001FEF80u; return; } if (c.pc != 0x001FED18u) [[unlikely]] return; }
L_001FED18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FED30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FEDB4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_001FED94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FED64u) [[unlikely]] return; }
L_001FED64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED74u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FED74u) [[unlikely]] return; }
L_001FED74:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FED90; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FED90u) [[unlikely]] return; }
L_001FED90:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_001FED94:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FEDB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FEDA4u) [[unlikely]] return; }
L_001FEDA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDB4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FEDB4u) [[unlikely]] return; }
L_001FEDB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FEDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FEDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_001FEDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDE4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x001FEDE4u) [[unlikely]] return; }
L_001FEDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FEDECu) [[unlikely]] return; }
L_001FEDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FEE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 36u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FEE1Cu) [[unlikely]] return; }
L_001FEE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FEE2Cu) [[unlikely]] return; }
L_001FEE2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13472u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_001FEE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FEE4Cu) [[unlikely]] return; }
L_001FEE4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FEE5Cu) [[unlikely]] return; }
L_001FEE5C:
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 2;
L_001FEE64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FEE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x001FEE9Cu) [[unlikely]] return; }
L_001FEE9C:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEA8u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FED30u; return; } if (c.pc != 0x001FEEA8u) [[unlikely]] return; }
L_001FEEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 332u, depth + 1u); else { c.pc = 0x001FEF80u; return; } if (c.pc != 0x001FEEB0u) [[unlikely]] return; }
L_001FEEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FEED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 36u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FEEFCu) [[unlikely]] return; }
L_001FEEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEF44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FEF0Cu) [[unlikely]] return; }
L_001FEF0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13472u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_001FEF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FEF2Cu) [[unlikely]] return; }
L_001FEF2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FEF3Cu) [[unlikely]] return; }
L_001FEF3C:
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 2;
L_001FEF44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 322u, depth + 1u); else { c.pc = 0x001FEE80u; return; } if (c.pc != 0x001FEF54u) [[unlikely]] return; }
L_001FEF54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FEF80:
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001FEFC4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 20u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[6].w[0] + 12u)));  if (t) { goto L_001FEFC4; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 8;
L_001FEFC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FEFD0:
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
    set32(c.r[16], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[20], ld32((c.r[5].w[0] + 112u)));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FF0B0; } }
    c.r[30].d[0] = ld16((c.r[5].w[0] + 48u));
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 16u)));
    c.r[22].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[23], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FF0A0; } }
L_001FF030:
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    c.f[12] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 188u);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF068u); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0053(c, 399u, depth + 1u); else { c.pc = 0x0024F930u; return; } if (c.pc != 0x001FF068u) [[unlikely]] return; }
L_001FF068:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[20], c.r[20].w[0] + 28u);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 14;
L_001FF0A0:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[20].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF030u | kUnwind; return; } goto L_001FF030; }
L_001FF0B0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001FF0E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001FF110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_001FF118; } }
L_001FF110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF118u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x001FF118u) [[unlikely]] return; }
L_001FF118:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF12Cu); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x001FF12Cu) [[unlikely]] return; }
L_001FF12C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FF188; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF158u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FF158u) [[unlikely]] return; }
L_001FF158:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF168u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FF168u) [[unlikely]] return; }
L_001FF168:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF188; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF188u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x001FF188u) [[unlikely]] return; }
L_001FF188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13472u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 24u), 0u);  if (t) { goto L_001FF1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001FF1A8u) [[unlikely]] return; }
L_001FF1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001FF1B8u) [[unlikely]] return; }
L_001FF1B8:
    st32((c.r[19].w[0] + 28u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1CCu); st32((c.r[19].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FED30u; return; } if (c.pc != 0x001FF1CCu) [[unlikely]] return; }
L_001FF1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 332u, depth + 1u); else { c.pc = 0x001FEF80u; return; } if (c.pc != 0x001FF1D4u) [[unlikely]] return; }
L_001FF1D4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FF200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FF26C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13360u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FF250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FF250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF250u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FF250u) [[unlikely]] return; }
L_001FF250:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FF270; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF26Cu); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FF26Cu) [[unlikely]] return; }
L_001FF26C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FF270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12536u);  c.pc = t; return; }
L_001FF2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x00219CA0u; return; } if (c.pc != 0x001FF2BCu) [[unlikely]] return; }
L_001FF2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2C8u); set32(c.r[4], ld32((c.r[2].w[0] - 12536u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FF2C8u) [[unlikely]] return; }
L_001FF2C8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2DCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF2DCu) [[unlikely]] return; }
L_001FF2DC:
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2ECu); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FF2ECu) [[unlikely]] return; }
L_001FF2EC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF300u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF300u) [[unlikely]] return; }
L_001FF300:
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF310u); set32(c.r[4], c.r[4].w[0] - 12521u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FF310u) [[unlikely]] return; }
L_001FF310:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF324u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF324u) [[unlikely]] return; }
L_001FF324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FF340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF35Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 202u, depth + 1u); else { c.pc = 0x00219D20u; return; } if (c.pc != 0x001FF35Cu) [[unlikely]] return; }
L_001FF35C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 96u));  goto L_001FF36C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF394; } }
L_001FF36C:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FF394; }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_001FF394; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FF394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x00219DA0u; return; } if (c.pc != 0x001FF3CCu) [[unlikely]] return; }
L_001FF3CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3D8u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FF3D8u) [[unlikely]] return; }
L_001FF3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3E4u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FF3E4u) [[unlikely]] return; }
L_001FF3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF400:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 207u, depth); }
L_001FF410:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 208u, depth); }
L_001FF420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF43Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 211u, depth + 1u); else { c.pc = 0x00219E40u; return; } if (c.pc != 0x001FF43Cu) [[unlikely]] return; }
L_001FF43C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF448u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FF448u) [[unlikely]] return; }
L_001FF448:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF454u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FF454u) [[unlikely]] return; }
L_001FF454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF488u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FF488u) [[unlikely]] return; }
L_001FF488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FF4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x001FF498u) [[unlikely]] return; }
L_001FF498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13360u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 5;
L_001FF4AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF4C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0046(c, 214u, depth); }
L_001FF4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FF4F8u) [[unlikely]] return; }
L_001FF4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FF51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 227u, depth + 1u); else { c.pc = 0x0021A1B0u; return; } if (c.pc != 0x001FF508u) [[unlikely]] return; }
L_001FF508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13360u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 5;
L_001FF51C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF52Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 218u, depth + 1u); else { c.pc = 0x00219F40u; return; } if (c.pc != 0x001FF52Cu) [[unlikely]] return; }
L_001FF52C:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FF560:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF594u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FF594u) [[unlikely]] return; }
L_001FF594:
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5A0u); c.f[21] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FF5A0u) [[unlikely]] return; }
L_001FF5A0:
    c.f[1] = ld32((c.r[28].w[0] - 32604u));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5B0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001FF5B0u) [[unlikely]] return; }
L_001FF5B0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5BCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x001FF5BCu) [[unlikely]] return; }
L_001FF5BC:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5D0u); st32((c.r[17].w[0] + 4u), c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x001FF5D0u) [[unlikely]] return; }
L_001FF5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[20] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5FCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FF5FCu) [[unlikely]] return; }
L_001FF5FC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF648u); st32((c.r[17].w[0] + 8u), c.f[2]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FF648u) [[unlikely]] return; }
L_001FF648:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FF690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12488u);  c.pc = t; return; }
L_001FF6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 411u, depth + 1u); else { c.pc = 0x002C35E0u; return; } if (c.pc != 0x001FF6BCu) [[unlikely]] return; }
L_001FF6BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6C8u); set32(c.r[4], ld32((c.r[2].w[0] - 12488u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FF6C8u) [[unlikely]] return; }
L_001FF6C8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6DCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF6DCu) [[unlikely]] return; }
L_001FF6DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6ECu); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x001FF6ECu) [[unlikely]] return; }
L_001FF6EC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF700u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF700u) [[unlikely]] return; }
L_001FF700:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF710u); set32(c.r[4], c.r[4].w[0] - 12447u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x001FF710u) [[unlikely]] return; }
L_001FF710:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF724u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF724u) [[unlikely]] return; }
L_001FF724:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 120u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF734u); set32(c.r[4], c.r[4].w[0] - 12428u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x001FF734u) [[unlikely]] return; }
L_001FF734:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF748u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF748u) [[unlikely]] return; }
L_001FF748:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 122u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF758u); set32(c.r[4], c.r[4].w[0] - 12410u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x001FF758u) [[unlikely]] return; }
L_001FF758:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF76Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FF76Cu) [[unlikely]] return; }
L_001FF76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FF780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 425u, depth + 1u); else { c.pc = 0x002C36F0u; return; } if (c.pc != 0x001FF7A4u) [[unlikely]] return; }
L_001FF7A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  goto L_001FF7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF898; } }
L_001FF7B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF7C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FF898; }
L_001FF7C8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001FF860; }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF7E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF898; } }
L_001FF7E8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF860; } }
L_001FF7F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF814u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_003D(c, 371u, depth + 1u); else { c.pc = 0x001F6F90u; return; } if (c.pc != 0x001FF814u) [[unlikely]] return; }
L_001FF814:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 116u)));  goto L_001FF824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF898; } }
L_001FF824:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_001FF85C; }
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FF858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF898; } }
L_001FF858:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FF85C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001FF860:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 48u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF7F4u | kUnwind; return; } goto L_001FF7F4; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 120u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 120u));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FF898; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 122u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 122u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001FF898; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FF898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FF8C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 432u, depth + 1u); else { c.pc = 0x002C3A30u; return; } if (c.pc != 0x001FF8E0u) [[unlikely]] return; }
L_001FF8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FF90C; } }
L_001FF8E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF904u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 372u, depth + 1u); else { c.pc = 0x001F7060u; return; } if (c.pc != 0x001FF904u) [[unlikely]] return; }
L_001FF904:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001FF90C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF8E8u | kUnwind; return; } goto L_001FF8E8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF938u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001FF938u) [[unlikely]] return; }
L_001FF938:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FF958; }
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x001FF954u) [[unlikely]] return; }
L_001FF954:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FF958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF960u); set32(c.r[5], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x001FF960u) [[unlikely]] return; }
L_001FF960:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF96Cu); set32(c.r[5], c.r[18].w[0] + 122u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x001FF96Cu) [[unlikely]] return; }
L_001FF96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FF990:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0070(c, 448u, depth); }
L_001FF9A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0070(c, 449u, depth); }
L_001FF9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 450u, depth + 1u); else { c.pc = 0x002C3C00u; return; } if (c.pc != 0x001FF9D0u) [[unlikely]] return; }
L_001FF9D0:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9ECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FF9ECu) [[unlikely]] return; }
L_001FF9EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29024u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA08u); set32(c.r[7], 0u + 28u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFA08u) [[unlikely]] return; }
L_001FFA08:
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FFA38; } }
L_001FFA14:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA30u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 379u, depth + 1u); else { c.pc = 0x001F70D0u; return; } if (c.pc != 0x001FFA30u) [[unlikely]] return; }
L_001FFA30:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001FFA38:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FFA14u | kUnwind; return; } goto L_001FFA14; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  goto L_001FFAA8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA70u); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FFA70u) [[unlikely]] return; }
L_001FFA70:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FFAD8; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA8Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFA8Cu) [[unlikely]] return; }
L_001FFA8C:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x001FFAA0u) [[unlikely]] return; }
L_001FFAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFAD4; } }
L_001FFAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FFAD4; } }
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFABCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFABCu) [[unlikely]] return; }
L_001FFABC:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAD4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001FFAD4u) [[unlikely]] return; }
L_001FFAD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FFAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAE0u); set32(c.r[5], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x001FFAE0u) [[unlikely]] return; }
L_001FFAE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAECu); set32(c.r[5], c.r[18].w[0] + 122u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x001FFAECu) [[unlikely]] return; }
L_001FFAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FFB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FFB28u) [[unlikely]] return; }
L_001FFB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FFB54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 21u, depth + 1u); else { c.pc = 0x002C43E0u; return; } if (c.pc != 0x001FFB38u) [[unlikely]] return; }
L_001FFB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13248u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st16((c.r[16].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 122u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_001FFB54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FFB70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x001FFB9Cu) [[unlikely]] return; }
L_001FFB9C:
    c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBB8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFBB8u) [[unlikely]] return; }
L_001FFBB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBD4u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFBD4u) [[unlikely]] return; }
L_001FFBD4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBF8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFBF8u) [[unlikely]] return; }
L_001FFBF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001FFC50; } }
    c.r[19].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC20u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFC20u) [[unlikely]] return; }
L_001FFC20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC3Cu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFC3Cu) [[unlikely]] return; }
L_001FFC3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFC50u) [[unlikely]] return; }
L_001FFC50:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001FFCA4; } }
    c.r[19].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC70u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFC70u) [[unlikely]] return; }
L_001FFC70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC8Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFC8Cu) [[unlikely]] return; }
L_001FFC8C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCA4u); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFCA4u) [[unlikely]] return; }
L_001FFCA4:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCC8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 439u, depth + 1u); else { c.pc = 0x002A79B0u; return; } if (c.pc != 0x001FFCC8u) [[unlikely]] return; }
L_001FFCC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FFD1C; } }
    c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCE8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFCE8u) [[unlikely]] return; }
L_001FFCE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD04u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFD04u) [[unlikely]] return; }
L_001FFD04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD1Cu); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFD1Cu) [[unlikely]] return; }
L_001FFD1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 7u, depth + 1u); else { c.pc = 0x002C4250u; return; } if (c.pc != 0x001FFD28u) [[unlikely]] return; }
L_001FFD28:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD38u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFD38u) [[unlikely]] return; }
L_001FFD38:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD54u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFD54u) [[unlikely]] return; }
L_001FFD54:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 9u, depth + 1u); else { c.pc = 0x002C42A0u; return; } if (c.pc != 0x001FFD60u) [[unlikely]] return; }
L_001FFD60:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD70u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFD70u) [[unlikely]] return; }
L_001FFD70:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFD84u) [[unlikely]] return; }
L_001FFD84:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 11u, depth + 1u); else { c.pc = 0x002C42E0u; return; } if (c.pc != 0x001FFD90u) [[unlikely]] return; }
L_001FFD90:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 48u));
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  goto L_001FFDD8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDB4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFDB4u) [[unlikely]] return; }
L_001FFDB4:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFDC8u) [[unlikely]] return; }
L_001FFDC8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 5u, depth + 1u); else { c.pc = 0x002C4210u; return; } if (c.pc != 0x001FFDD4u) [[unlikely]] return; }
L_001FFDD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_001FFDD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  goto L_001FFE48; }
    c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDFCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFDFCu) [[unlikely]] return; }
L_001FFDFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE18u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFE18u) [[unlikely]] return; }
L_001FFE18:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE38u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFE38u) [[unlikely]] return; }
L_001FFE38:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 3u, depth + 1u); else { c.pc = 0x002C41C0u; return; } if (c.pc != 0x001FFE44u) [[unlikely]] return; }
L_001FFE44:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_001FFE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FFEA8; } }
    c.r[18].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE6Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001FFE6Cu) [[unlikely]] return; }
L_001FFE6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29024u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE88u); set32(c.r[7], 0u + 28u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001FFE88u) [[unlikely]] return; }
L_001FFE88:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEA8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFEA8u) [[unlikely]] return; }
L_001FFEA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEC0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001FFEC0u) [[unlikely]] return; }
L_001FFEC0:
    st32((c.r[16].w[0] + 112u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FFEF8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEE0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001FFEE0u) [[unlikely]] return; }
L_001FFEE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFEF8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001FFEF8u) [[unlikely]] return; }
L_001FFEF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x001FFF04u) [[unlikely]] return; }
L_001FFF04:
    st32((c.r[16].w[0] + 116u), c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 120u));
    st16((c.r[16].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 122u));
    st16((c.r[16].w[0] + 122u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 16u), c.f[2]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001FFF60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001FFF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FFF98u) [[unlikely]] return; }
L_001FFF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FFFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 21u, depth + 1u); else { c.pc = 0x002C43E0u; return; } if (c.pc != 0x001FFFA8u) [[unlikely]] return; }
L_001FFFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13248u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st16((c.r[16].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 122u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_001FFFC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 429u, depth + 1u); else { c.pc = 0x001FFB70u; return; } if (c.pc != 0x001FFFD4u) [[unlikely]] return; }
L_001FFFD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FFFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0040(c, 1u, depth);
}

}
