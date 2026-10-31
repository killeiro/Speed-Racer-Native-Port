#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00EE[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103,
    0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0,
    328, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    379, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00EE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004B8000;
    case 2u: goto L_004B8010;
    case 3u: goto L_004B8024;
    case 4u: goto L_004B8064;
    case 5u: goto L_004B8074;
    case 6u: goto L_004B80A0;
    case 7u: goto L_004B80D0;
    case 8u: goto L_004B812C;
    case 9u: goto L_004B8134;
    case 10u: goto L_004B8140;
    case 11u: goto L_004B815C;
    case 12u: goto L_004B81A4;
    case 13u: goto L_004B81E0;
    case 14u: goto L_004B8238;
    case 15u: goto L_004B8250;
    case 16u: goto L_004B8270;
    case 17u: goto L_004B82B0;
    case 18u: goto L_004B82C0;
    case 19u: goto L_004B82F8;
    case 20u: goto L_004B8308;
    case 21u: goto L_004B831C;
    case 22u: goto L_004B8330;
    case 23u: goto L_004B8344;
    case 24u: goto L_004B8358;
    case 25u: goto L_004B8364;
    case 26u: goto L_004B8374;
    case 27u: goto L_004B8380;
    case 28u: goto L_004B8390;
    case 29u: goto L_004B83A8;
    case 30u: goto L_004B83CC;
    case 31u: goto L_004B83DC;
    case 32u: goto L_004B8420;
    case 33u: goto L_004B8438;
    case 34u: goto L_004B8444;
    case 35u: goto L_004B8450;
    case 36u: goto L_004B845C;
    case 37u: goto L_004B8480;
    case 38u: goto L_004B84A0;
    case 39u: goto L_004B84AC;
    case 40u: goto L_004B84B8;
    case 41u: goto L_004B84D4;
    case 42u: goto L_004B84E4;
    case 43u: goto L_004B84F8;
    case 44u: goto L_004B8504;
    case 45u: goto L_004B8540;
    case 46u: goto L_004B8570;
    case 47u: goto L_004B8580;
    case 48u: goto L_004B85A0;
    case 49u: goto L_004B85EC;
    case 50u: goto L_004B8610;
    case 51u: goto L_004B8630;
    case 52u: goto L_004B8668;
    case 53u: goto L_004B8674;
    case 54u: goto L_004B868C;
    case 55u: goto L_004B86B0;
    case 56u: goto L_004B86D4;
    case 57u: goto L_004B86F0;
    case 58u: goto L_004B8714;
    case 59u: goto L_004B872C;
    case 60u: goto L_004B8750;
    case 61u: goto L_004B8760;
    case 62u: goto L_004B8784;
    case 63u: goto L_004B8790;
    case 64u: goto L_004B87A0;
    case 65u: goto L_004B87B0;
    case 66u: goto L_004B87D8;
    case 67u: goto L_004B8820;
    case 68u: goto L_004B885C;
    case 69u: goto L_004B8868;
    case 70u: goto L_004B88B8;
    case 71u: goto L_004B88C4;
    case 72u: goto L_004B88DC;
    case 73u: goto L_004B892C;
    case 74u: goto L_004B8938;
    case 75u: goto L_004B8950;
    case 76u: goto L_004B897C;
    case 77u: goto L_004B89A0;
    case 78u: goto L_004B89C4;
    case 79u: goto L_004B89F0;
    case 80u: goto L_004B8A1C;
    case 81u: goto L_004B8A58;
    case 82u: goto L_004B8A74;
    case 83u: goto L_004B8A84;
    case 84u: goto L_004B8AA4;
    case 85u: goto L_004B8AD0;
    case 86u: goto L_004B8B10;
    case 87u: goto L_004B8B34;
    case 88u: goto L_004B8BB0;
    case 89u: goto L_004B8C60;
    case 90u: goto L_004B8C70;
    case 91u: goto L_004B8C94;
    case 92u: goto L_004B8CC0;
    case 93u: goto L_004B8CD0;
    case 94u: goto L_004B8D10;
    case 95u: goto L_004B8D28;
    case 96u: goto L_004B8D44;
    case 97u: goto L_004B8D50;
    case 98u: goto L_004B8D70;
    case 99u: goto L_004B8D90;
    case 100u: goto L_004B8DB0;
    case 101u: goto L_004B8DE4;
    case 102u: goto L_004B8DF4;
    case 103u: goto L_004B8DFC;
    case 104u: goto L_004B8E0C;
    case 105u: goto L_004B8E14;
    case 106u: goto L_004B8E1C;
    case 107u: goto L_004B8E3C;
    case 108u: goto L_004B8E44;
    case 109u: goto L_004B8E5C;
    case 110u: goto L_004B8E64;
    case 111u: goto L_004B8E6C;
    case 112u: goto L_004B8E8C;
    case 113u: goto L_004B8E94;
    case 114u: goto L_004B8EAC;
    case 115u: goto L_004B8EB4;
    case 116u: goto L_004B8EBC;
    case 117u: goto L_004B8ED8;
    case 118u: goto L_004B8F14;
    case 119u: goto L_004B8F34;
    case 120u: goto L_004B8F3C;
    case 121u: goto L_004B8F54;
    case 122u: goto L_004B8F5C;
    case 123u: goto L_004B8F7C;
    case 124u: goto L_004B8F84;
    case 125u: goto L_004B8F9C;
    case 126u: goto L_004B8FA8;
    case 127u: goto L_004B8FC0;
    case 128u: goto L_004B9034;
    case 129u: goto L_004B9048;
    case 130u: goto L_004B905C;
    case 131u: goto L_004B9070;
    case 132u: goto L_004B9080;
    case 133u: goto L_004B90AC;
    case 134u: goto L_004B90D0;
    case 135u: goto L_004B90E8;
    case 136u: goto L_004B9118;
    case 137u: goto L_004B9128;
    case 138u: goto L_004B9148;
    case 139u: goto L_004B9180;
    case 140u: goto L_004B9198;
    case 141u: goto L_004B91C8;
    case 142u: goto L_004B91D8;
    case 143u: goto L_004B91F8;
    case 144u: goto L_004B9230;
    case 145u: goto L_004B9248;
    case 146u: goto L_004B9278;
    case 147u: goto L_004B9288;
    case 148u: goto L_004B92A8;
    case 149u: goto L_004B92F4;
    case 150u: goto L_004B9320;
    case 151u: goto L_004B9358;
    case 152u: goto L_004B9374;
    case 153u: goto L_004B939C;
    case 154u: goto L_004B93C0;
    case 155u: goto L_004B93D8;
    case 156u: goto L_004B9408;
    case 157u: goto L_004B9418;
    case 158u: goto L_004B9438;
    case 159u: goto L_004B9470;
    case 160u: goto L_004B9488;
    case 161u: goto L_004B94B8;
    case 162u: goto L_004B94C8;
    case 163u: goto L_004B94E8;
    case 164u: goto L_004B9520;
    case 165u: goto L_004B9538;
    case 166u: goto L_004B9568;
    case 167u: goto L_004B9578;
    case 168u: goto L_004B9598;
    case 169u: goto L_004B95E4;
    case 170u: goto L_004B9620;
    case 171u: goto L_004B9630;
    case 172u: goto L_004B9678;
    case 173u: goto L_004B96A4;
    case 174u: goto L_004B9718;
    case 175u: goto L_004B972C;
    case 176u: goto L_004B979C;
    case 177u: goto L_004B97B8;
    case 178u: goto L_004B97C0;
    case 179u: goto L_004B9828;
    case 180u: goto L_004B9844;
    case 181u: goto L_004B984C;
    case 182u: goto L_004B9880;
    case 183u: goto L_004B98A4;
    case 184u: goto L_004B9904;
    case 185u: goto L_004B9920;
    case 186u: goto L_004B9944;
    case 187u: goto L_004B995C;
    case 188u: goto L_004B998C;
    case 189u: goto L_004B999C;
    case 190u: goto L_004B99BC;
    case 191u: goto L_004B99F4;
    case 192u: goto L_004B9A0C;
    case 193u: goto L_004B9A3C;
    case 194u: goto L_004B9A4C;
    case 195u: goto L_004B9A6C;
    case 196u: goto L_004B9AA4;
    case 197u: goto L_004B9ABC;
    case 198u: goto L_004B9AEC;
    case 199u: goto L_004B9AFC;
    case 200u: goto L_004B9B1C;
    case 201u: goto L_004B9B68;
    case 202u: goto L_004B9B70;
    case 203u: goto L_004B9BB8;
    case 204u: goto L_004B9BC0;
    case 205u: goto L_004B9C00;
    case 206u: goto L_004B9C08;
    case 207u: goto L_004B9C6C;
    case 208u: goto L_004B9C78;
    case 209u: goto L_004B9CB0;
    case 210u: goto L_004B9CC0;
    case 211u: goto L_004B9D28;
    case 212u: goto L_004B9D34;
    case 213u: goto L_004B9D3C;
    case 214u: goto L_004B9D54;
    case 215u: goto L_004B9D78;
    case 216u: goto L_004B9DD4;
    case 217u: goto L_004B9E3C;
    case 218u: goto L_004B9EA8;
    case 219u: goto L_004B9EB8;
    case 220u: goto L_004B9EC0;
    case 221u: goto L_004B9ED8;
    case 222u: goto L_004B9F08;
    case 223u: goto L_004B9F60;
    case 224u: goto L_004B9F88;
    case 225u: goto L_004B9FA4;
    case 226u: goto L_004B9FDC;
    case 227u: goto L_004B9FF4;
    case 228u: goto L_004BA024;
    case 229u: goto L_004BA074;
    case 230u: goto L_004BA080;
    case 231u: goto L_004BA0A0;
    case 232u: goto L_004BA0A8;
    case 233u: goto L_004BA0BC;
    case 234u: goto L_004BA0D4;
    case 235u: goto L_004BA104;
    case 236u: goto L_004BA15C;
    case 237u: goto L_004BA184;
    case 238u: goto L_004BA19C;
    case 239u: goto L_004BA1D0;
    case 240u: goto L_004BA1F4;
    case 241u: goto L_004BA214;
    case 242u: goto L_004BA228;
    case 243u: goto L_004BA234;
    case 244u: goto L_004BA258;
    case 245u: goto L_004BA26C;
    case 246u: goto L_004BA280;
    case 247u: goto L_004BA29C;
    case 248u: goto L_004BA2AC;
    case 249u: goto L_004BA2B8;
    case 250u: goto L_004BA2FC;
    case 251u: goto L_004BA318;
    case 252u: goto L_004BA328;
    case 253u: goto L_004BA334;
    case 254u: goto L_004BA374;
    case 255u: goto L_004BA390;
    case 256u: goto L_004BA3A0;
    case 257u: goto L_004BA3AC;
    case 258u: goto L_004BA3D4;
    case 259u: goto L_004BA3F0;
    case 260u: goto L_004BA400;
    case 261u: goto L_004BA40C;
    case 262u: goto L_004BA434;
    case 263u: goto L_004BA440;
    case 264u: goto L_004BA464;
    case 265u: goto L_004BA478;
    case 266u: goto L_004BA48C;
    case 267u: goto L_004BA498;
    case 268u: goto L_004BA4BC;
    case 269u: goto L_004BA4D0;
    case 270u: goto L_004BA4DC;
    case 271u: goto L_004BA4E8;
    case 272u: goto L_004BA4F4;
    case 273u: goto L_004BA510;
    case 274u: goto L_004BA550;
    case 275u: goto L_004BA5A0;
    case 276u: goto L_004BA5B0;
    case 277u: goto L_004BA61C;
    case 278u: goto L_004BA63C;
    case 279u: goto L_004BA684;
    case 280u: goto L_004BA6E8;
    case 281u: goto L_004BA708;
    case 282u: goto L_004BA728;
    case 283u: goto L_004BA734;
    case 284u: goto L_004BA744;
    case 285u: goto L_004BA75C;
    case 286u: goto L_004BA7B4;
    case 287u: goto L_004BA7BC;
    case 288u: goto L_004BA7D0;
    case 289u: goto L_004BA7F4;
    case 290u: goto L_004BA85C;
    case 291u: goto L_004BA868;
    case 292u: goto L_004BA874;
    case 293u: goto L_004BA89C;
    case 294u: goto L_004BA8A8;
    case 295u: goto L_004BA8B4;
    case 296u: goto L_004BA8C4;
    case 297u: goto L_004BA8D4;
    case 298u: goto L_004BA900;
    case 299u: goto L_004BA914;
    case 300u: goto L_004BA920;
    case 301u: goto L_004BA930;
    case 302u: goto L_004BA958;
    case 303u: goto L_004BA96C;
    case 304u: goto L_004BA978;
    case 305u: goto L_004BA990;
    case 306u: goto L_004BAA58;
    case 307u: goto L_004BAA74;
    case 308u: goto L_004BAA84;
    case 309u: goto L_004BAA90;
    case 310u: goto L_004BAB00;
    case 311u: goto L_004BAB1C;
    case 312u: goto L_004BABD0;
    case 313u: goto L_004BABF0;
    case 314u: goto L_004BAC1C;
    case 315u: goto L_004BAC4C;
    case 316u: goto L_004BAC64;
    case 317u: goto L_004BAC80;
    case 318u: goto L_004BACD0;
    case 319u: goto L_004BAE2C;
    case 320u: goto L_004BAE74;
    case 321u: goto L_004BAE90;
    case 322u: goto L_004BAEA0;
    case 323u: goto L_004BAEAC;
    case 324u: goto L_004BAF40;
    case 325u: goto L_004BB15C;
    case 326u: goto L_004BB16C;
    case 327u: goto L_004BB178;
    case 328u: goto L_004BB180;
    case 329u: goto L_004BB18C;
    case 330u: goto L_004BB194;
    case 331u: goto L_004BB1A4;
    case 332u: goto L_004BB1B0;
    case 333u: goto L_004BB1B8;
    case 334u: goto L_004BB1C4;
    case 335u: goto L_004BB284;
    case 336u: goto L_004BB294;
    case 337u: goto L_004BB2A0;
    case 338u: goto L_004BB2CC;
    case 339u: goto L_004BB2D8;
    case 340u: goto L_004BB320;
    case 341u: goto L_004BB32C;
    case 342u: goto L_004BB338;
    case 343u: goto L_004BB358;
    case 344u: goto L_004BB38C;
    case 345u: goto L_004BB3F8;
    case 346u: goto L_004BB41C;
    case 347u: goto L_004BB440;
    case 348u: goto L_004BB45C;
    case 349u: goto L_004BB4D4;
    case 350u: goto L_004BB4E4;
    case 351u: goto L_004BB4F0;
    case 352u: goto L_004BB524;
    case 353u: goto L_004BB540;
    case 354u: goto L_004BB59C;
    case 355u: goto L_004BB614;
    case 356u: goto L_004BB6A0;
    case 357u: goto L_004BB708;
    case 358u: goto L_004BB75C;
    case 359u: goto L_004BB778;
    case 360u: goto L_004BB7A4;
    case 361u: goto L_004BB7C0;
    case 362u: goto L_004BB7EC;
    case 363u: goto L_004BB7FC;
    case 364u: goto L_004BB83C;
    case 365u: goto L_004BB850;
    case 366u: goto L_004BB940;
    case 367u: goto L_004BB96C;
    case 368u: goto L_004BB978;
    case 369u: goto L_004BBACC;
    case 370u: goto L_004BBB08;
    case 371u: goto L_004BBB10;
    case 372u: goto L_004BBB28;
    case 373u: goto L_004BBD08;
    case 374u: goto L_004BBD1C;
    case 375u: goto L_004BBD28;
    case 376u: goto L_004BBD34;
    case 377u: goto L_004BBD50;
    case 378u: goto L_004BBD68;
    case 379u: goto L_004BBD80;
    case 380u: goto L_004BBD88;
    case 381u: goto L_004BBD94;
    case 382u: goto L_004BBDB0;
    case 383u: goto L_004BBE00;
    case 384u: goto L_004BBE1C;
    case 385u: goto L_004BBE2C;
    case 386u: goto L_004BBE44;
    case 387u: goto L_004BBEA0;
    case 388u: goto L_004BBEF0;
    case 389u: goto L_004BBF90;
    default: bad_entry(c, 0x004B8000u); return;
    }
L_004B8000:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B8018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8010u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004B8010u) [[unlikely]] return; }
L_004B8010:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B8018:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x004B8024u) [[unlikely]] return; }
L_004B8024:
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8064; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8064; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8064; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8064; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B8064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8064u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B8064u) [[unlikely]] return; }
L_004B8064:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_004B8078; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B8074u) [[unlikely]] return; }
L_004B8074:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004B8078:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B80A0:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004B80D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004B8134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B812Cu); set32(c.r[5], c.r[5].w[0] - 1561u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004B812Cu) [[unlikely]] return; }
L_004B812C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8134u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004B8134u) [[unlikely]] return; }
L_004B8134:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8140u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004B8140u) [[unlikely]] return; }
L_004B8140:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004B8168; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B815Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004B815Cu) [[unlikely]] return; }
L_004B815C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_004B8168:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004B8188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_004B818C; } }
L_004B8188:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004B818C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B81A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004B81A4u) [[unlikely]] return; }
L_004B81A4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B81B4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B81B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004B81E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B8250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B8238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B8238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B8238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8238u) [[unlikely]] return; }
L_004B8238:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B8254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B8250u) [[unlikely]] return; }
L_004B8250:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B8254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B8270:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B8298; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004B8290; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004B8290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B829C; } }
L_004B8298:
    set32(c.r[2], c.r[2].w[0] - 1520u);
    c.budget -= 1;
L_004B829C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B82B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 1296u);  c.pc = t; return; }
L_004B82C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 1200u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[8], 0u + 6u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B82F8u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004B82F8u) [[unlikely]] return; }
L_004B82F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8308u); set32(c.r[5], c.r[5].w[0] - 1198u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B8308u) [[unlikely]] return; }
L_004B8308:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B8324; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B831Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004B831Cu) [[unlikely]] return; }
L_004B831C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B8460; } }
L_004B8324:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8330u); set32(c.r[5], c.r[5].w[0] - 1193u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B8330u) [[unlikely]] return; }
L_004B8330:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B834C; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8344u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004B8344u) [[unlikely]] return; }
L_004B8344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B8460; } }
L_004B834C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8358u); set32(c.r[5], c.r[5].w[0] - 1198u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B8358u) [[unlikely]] return; }
L_004B8358:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8364u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004B8364u) [[unlikely]] return; }
L_004B8364:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8374u); set32(c.r[5], c.r[5].w[0] - 1193u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B8374u) [[unlikely]] return; }
L_004B8374:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8380u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004B8380u) [[unlikely]] return; }
L_004B8380:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8390u); set32(c.r[5], c.r[5].w[0] - 1181u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B8390u) [[unlikely]] return; }
L_004B8390:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004B83D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B83A8u); set32(c.r[5], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004B83A8u) [[unlikely]] return; }
L_004B83A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));  goto L_004B83D0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B83CC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B83CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004B83CCu) [[unlikely]] return; }
L_004B83CC:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 1;
L_004B83D0:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B83DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B83DCu) [[unlikely]] return; }
L_004B83DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B8438; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_004B83F8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B83F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[29].w[0] + 81u);  goto L_004B840C; }
    set32(c.r[19], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004B840C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8420u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 471u, depth + 1u); else { c.pc = 0x004432E0u; return; } if (c.pc != 0x004B8420u) [[unlikely]] return; }
L_004B8420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 24496u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8438u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B8438u) [[unlikely]] return; }
L_004B8438:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8444u) [[unlikely]] return; }
L_004B8444:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8450u) [[unlikely]] return; }
L_004B8450:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B845Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004B845Cu) [[unlikely]] return; }
L_004B845C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B8460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004B8480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B84A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x004B84A0u) [[unlikely]] return; }
L_004B84A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004B8508; } }
L_004B84AC:
    set32(c.r[5], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B84B8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004B84B8u) [[unlikely]] return; }
L_004B84B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004B84CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004B84CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B84D4u); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x004B84D4u) [[unlikely]] return; }
L_004B84D4:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B84E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B84E4u) [[unlikely]] return; }
L_004B84E4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004B8508; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B84F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x004B84F8u) [[unlikely]] return; }
L_004B84F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004B8504u) [[unlikely]] return; }
L_004B8504:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004B8508:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B84ACu | kUnwind; return; } goto L_004B84AC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B8540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 1264u);
    set32(c.r[5], c.r[5].w[0] - 1169u);
    set32(c.r[6], c.r[6].w[0] - 1143u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8570u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x004B8570u) [[unlikely]] return; }
L_004B8570:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B8580u) [[unlikely]] return; }
L_004B8580:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_004B85C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B85A0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B85A0u) [[unlikely]] return; }
L_004B85A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 24528u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_004B85C0:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B8620; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1127u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B85ECu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004B85ECu) [[unlikely]] return; }
L_004B85EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8610u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x004B8610u) [[unlikely]] return; }
L_004B8610:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_004B8620:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B8630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B868C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 24496u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B8668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8668u) [[unlikely]] return; }
L_004B8668:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8674u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 468u, depth + 1u); else { c.pc = 0x00443280u; return; } if (c.pc != 0x004B8674u) [[unlikely]] return; }
L_004B8674:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B8690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B868Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B868Cu) [[unlikely]] return; }
L_004B868C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B8690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B86B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29560u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B86CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B86DC; } }
L_004B86CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B86D4u);  if (depth < kMaxDepth) unit_00D0(c, 473u, depth + 1u); else { c.pc = 0x00443340u; return; } if (c.pc != 0x004B86D4u) [[unlikely]] return; }
L_004B86D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B86DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B86F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8714u); set32(c.r[4], c.r[4].w[0] - 1264u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B8714u) [[unlikely]] return; }
L_004B8714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B8724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B8734; } }
L_004B8724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B872Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 475u, depth + 1u); else { c.pc = 0x00443380u; return; } if (c.pc != 0x004B872Cu) [[unlikely]] return; }
L_004B872C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B8734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B8750:
    set32(c.r[2], ld32((c.r[28].w[0] - 30008u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B8760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29560u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B877C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B8784; } }
L_004B877C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8784u);  if (depth < kMaxDepth) unit_00D0(c, 479u, depth + 1u); else { c.pc = 0x004433F0u; return; } if (c.pc != 0x004B8784u) [[unlikely]] return; }
L_004B8784:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B8790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29560u)));  c.pc = t; return; }
L_004B87A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 1232u);  c.pc = t; return; }
L_004B87B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B8808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B87D8u);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004B87D8u) [[unlikely]] return; }
L_004B87D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[2].w[0] - 1008u));
    c.f[3] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] - 1000u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[0] = fp::min(c.f[1], c.f[0]);  if (t) { goto L_004B880C; } }
L_004B8808:
    c.f[0] = 0u;
    c.budget -= 1;
L_004B880C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B8820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B8950; } }
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1202u));  goto L_004B8954; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B885Cu);  if (depth < kMaxDepth) unit_00EF(c, 124u, depth + 1u); else { c.pc = 0x004BD820u; return; } if (c.pc != 0x004B885Cu) [[unlikely]] return; }
L_004B885C:
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8868u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004B8868u) [[unlikely]] return; }
L_004B8868:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));  goto L_004B88E0; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B88DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[5], c.r[5].w[0] - 782u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B88B8u); set32(c.r[7], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B88B8u) [[unlikely]] return; }
L_004B88B8:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B88C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004B88C4u) [[unlikely]] return; }
L_004B88C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B88DCu); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004B88DCu) [[unlikely]] return; }
L_004B88DC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));
    c.budget -= 1;
L_004B88E0:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8950; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B8950; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[5], c.r[5].w[0] - 768u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B892Cu); set32(c.r[7], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B892Cu) [[unlikely]] return; }
L_004B892C:
    st32((c.r[28].w[0] - 22908u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8938u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004B8938u) [[unlikely]] return; }
L_004B8938:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8950u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004B8950u) [[unlikely]] return; }
L_004B8950:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1202u));
    c.budget -= 1;
L_004B8954:
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[5].d[0] = ld8((c.r[17].w[0] + 1202u));  goto L_004B89C8; }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B89C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B897Cu); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004B897Cu) [[unlikely]] return; }
L_004B897C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));  goto L_004B89A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B89A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004B89A0u) [[unlikely]] return; }
L_004B89A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1201u));
    c.budget -= 1;
L_004B89A4:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B89C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B89C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 128u, depth + 1u); else { c.pc = 0x005497B0u; return; } if (c.pc != 0x004B89C4u) [[unlikely]] return; }
L_004B89C4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1202u));
    c.budget -= 1;
L_004B89C8:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 1202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B89F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8A1Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x004B8A1Cu) [[unlikely]] return; }
L_004B8A1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 68u)));  goto L_004B8A7C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B8A38; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004B8A40; } }
L_004B8A38:
    set32(c.r[16], ld32((c.r[19].w[0] + 68u)));
    st32((c.r[19].w[0] + 68u), 0u);
    c.budget -= 2;
L_004B8A40:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8A58u); st32((c.r[19].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00BE(c, 80u, depth + 1u); else { c.pc = 0x003F9190u; return; } if (c.pc != 0x004B8A58u) [[unlikely]] return; }
L_004B8A58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B8A88; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8A74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B8A74u) [[unlikely]] return; }
L_004B8A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B8A88; } }
L_004B8A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8A84u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x004B8A84u) [[unlikely]] return; }
L_004B8A84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004B8A88:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B8AA8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B8AA4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8AA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 469u, depth + 1u); else { c.pc = 0x003C7C80u; return; } if (c.pc != 0x004B8AA4u) [[unlikely]] return; }
L_004B8AA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B8AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B8AD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = ld32((c.r[28].w[0] - 31512u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004B8B70; } }
L_004B8B10:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[3].w[0]));
    c.f[21] = ld32((c.r[3].w[0] + 4u));
    c.f[22] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8B34u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004B8B34u) [[unlikely]] return; }
L_004B8B34:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (t) { goto L_004B8B68; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004B8B70; }
L_004B8B68:
    c.f[23] = c.f[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004B8B70:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8B10u | kUnwind; return; } goto L_004B8B10; }
    st32((c.r[19].w[0] + 1156u), c.f[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B8BB0:
    st32((c.r[4].w[0] + 1088u), 0u);
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 1092u), 0u);
    set32(c.r[3], 0u - 9u);
    st32((c.r[4].w[0] + 1096u), 0u);
    set32(c.r[6], c.r[5].w[0] << 3);
    st32((c.r[4].w[0] + 1100u), 0u);
    set32(c.r[10], 0u - 129u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 1201u));
    set32(c.r[11], c.r[5].w[0] << 7);
    set32(c.r[8], 0u - 65u);
    set32(c.r[9], c.r[5].w[0] << 6);
    set32(c.r[7], c.r[5].w[0] << 4);
    c.r[3].d[0] = c.r[12].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 17u);
    st32((c.r[4].w[0] + 1180u), 0u);
    set32(c.r[3], 0u - 33u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 1201u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 1201u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 1184u), 0u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1201u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 1201u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1201u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 1201u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1201u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1192u), 0u);
    st32((c.r[4].w[0] + 1188u), 0u);
    st32((c.r[4].w[0] + 1196u), 0u);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1104u), 0u);  c.pc = t; return; }
L_004B8C60:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 124u)));  [[clang::musttail]] return unit_00F5(c, 589u, depth); }
L_004B8C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004B8CC4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8C94u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004B8C94u) [[unlikely]] return; }
L_004B8C94:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 752u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8CC0u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x004B8CC0u) [[unlikely]] return; }
L_004B8CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004B8CC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B8CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B8D50; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B8D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8D10u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B8D10u) [[unlikely]] return; }
L_004B8D10:
    set32(c.r[2], 0u + 1u);
    mmi::pmaxw(c.r[6], c.r[16], c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8D28u); set32(c.r[5], c.r[5].w[0] - 734u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004B8D28u) [[unlikely]] return; }
L_004B8D28:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004B8D3C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004B8D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8D44u); set32(c.r[4], ld32((c.r[17].w[0] + 364u)));  if (depth < kMaxDepth) unit_00C0(c, 292u, depth + 1u); else { c.pc = 0x00403F10u; return; } if (c.pc != 0x004B8D44u) [[unlikely]] return; }
L_004B8D44:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8D50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8D50u) [[unlikely]] return; }
L_004B8D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B8D54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B8D70:
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1200u));
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004B8D90:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 1164u));  goto L_004B8D9C; }
    c.f[0] = ld32((c.r[4].w[0] + 1168u));
    c.budget -= 1;
L_004B8D9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B8DB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B8FA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004B8000u < 16384u) { entry = entries_00EE[(t - 0x004B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B8DE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8DF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004B8DF4u) [[unlikely]] return; }
L_004B8DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004B8FAC; } }
L_004B8DFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004B8E0Cu) [[unlikely]] return; }
L_004B8E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B8FA8; } }
L_004B8E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E1Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B8E1Cu) [[unlikely]] return; }
L_004B8E1C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8FA8; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004B8E3Cu) [[unlikely]] return; }
L_004B8E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E44u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004B8E44u) [[unlikely]] return; }
L_004B8E44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E5Cu); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8E5Cu) [[unlikely]] return; }
L_004B8E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B8FA8; } }
L_004B8E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B8E6Cu) [[unlikely]] return; }
L_004B8E6C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8FA8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004B8E8Cu) [[unlikely]] return; }
L_004B8E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E94u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004B8E94u) [[unlikely]] return; }
L_004B8E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8EACu); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8EACu) [[unlikely]] return; }
L_004B8EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8EB4u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CE(c, 23u, depth + 1u); else { c.pc = 0x00438290u; return; } if (c.pc != 0x004B8EB4u) [[unlikely]] return; }
L_004B8EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B8FA8; } }
L_004B8EBC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B8FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8ED8u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_00F9(c, 186u, depth + 1u); else { c.pc = 0x004E5AB0u; return; } if (c.pc != 0x004B8ED8u) [[unlikely]] return; }
L_004B8ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8FA8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B8FA8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B8FA8; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B8FA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F14u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B8F14u) [[unlikely]] return; }
L_004B8F14:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8FA8; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F34u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004B8F34u) [[unlikely]] return; }
L_004B8F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F3Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004B8F3Cu) [[unlikely]] return; }
L_004B8F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F54u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8F54u) [[unlikely]] return; }
L_004B8F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B8FA8; } }
L_004B8F5C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004B8FA0; }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F7Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004B8F7Cu) [[unlikely]] return; }
L_004B8F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F84u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004B8F84u) [[unlikely]] return; }
L_004B8F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8F9Cu); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B8F9Cu) [[unlikely]] return; }
L_004B8F9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B8FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8FA8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B8FA8u) [[unlikely]] return; }
L_004B8FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004B8FAC:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B8FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[9].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004B9074; }
    set32(c.r[8], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_004B9070; } }
    set32(c.r[7], 0u + 11u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[5], ld32((c.r[6].w[0] + 20u)));  goto L_004B8FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9070; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_004B8FFC:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 2u);  goto L_004B9068; }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], 0u + 1u);  goto L_004B9054; }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[8].d[0]) { set32(c.r[5], 0u + 1u);  goto L_004B9040; }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[9].d[0]) { set32(c.r[5], 0u + 5u);  goto L_004B902C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9070; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_004B902C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9034u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B9034u) [[unlikely]] return; }
L_004B9034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9070; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_004B9040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9048u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B9048u) [[unlikely]] return; }
L_004B9048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9070; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_004B9054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B905Cu);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B905Cu) [[unlikely]] return; }
L_004B905C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9070; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_004B9068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9070u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004B9070u) [[unlikely]] return; }
L_004B9070:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004B9074:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B9080:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B90ACu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004B90ACu) [[unlikely]] return; }
L_004B90AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B90C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B90D0; } }
L_004B90C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B90D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B90D0u) [[unlikely]] return; }
L_004B90D0:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B90E8u); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B90E8u) [[unlikely]] return; }
L_004B90E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B9148; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9118u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9118u) [[unlikely]] return; }
L_004B9118:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9128u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9128u) [[unlikely]] return; }
L_004B9128:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B9148; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9148u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B9148u) [[unlikely]] return; }
L_004B9148:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B915C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B915C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9180; } }
L_004B9178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9180u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9180u) [[unlikely]] return; }
L_004B9180:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9198u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9198u) [[unlikely]] return; }
L_004B9198:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B91F8; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B91C8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B91C8u) [[unlikely]] return; }
L_004B91C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B91D8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B91D8u) [[unlikely]] return; }
L_004B91D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B91F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B91F8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B91F8u) [[unlikely]] return; }
L_004B91F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B920C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B920C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9230; } }
L_004B9228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9230u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9230u) [[unlikely]] return; }
L_004B9230:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9248u); set32(c.r[5], c.r[29].w[0] + 84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9248u) [[unlikely]] return; }
L_004B9248:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B92A8; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9278u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9278u) [[unlikely]] return; }
L_004B9278:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9288u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9288u) [[unlikely]] return; }
L_004B9288:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B92A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B92A8u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B92A8u) [[unlikely]] return; }
L_004B92A8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_004B92C0; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
L_004B92C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B92F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B92F4u) [[unlikely]] return; }
L_004B92F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B9320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 428u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B9360; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9358u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 557u, depth + 1u); else { c.pc = 0x004F78E0u; return; } if (c.pc != 0x004B9358u) [[unlikely]] return; }
L_004B9358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 428u), c.r[2].w[0]);  if (t) { goto L_004B9374; } }
L_004B9360:
    set32(c.r[4], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9374u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9374u) [[unlikely]] return; }
L_004B9374:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B939C; } }
    c.f[12] = ld32((c.r[28].w[0] - 29540u));
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.f[13] = ld32((c.r[28].w[0] - 29544u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B939Cu); set32(c.r[5], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00D2(c, 309u, depth + 1u); else { c.pc = 0x0044A8B0u; return; } if (c.pc != 0x004B939Cu) [[unlikely]] return; }
L_004B939C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B93B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B93C0; } }
L_004B93B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B93C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B93C0u) [[unlikely]] return; }
L_004B93C0:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B93D8u); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B93D8u) [[unlikely]] return; }
L_004B93D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B9438; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9408u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9408u) [[unlikely]] return; }
L_004B9408:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9418u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9418u) [[unlikely]] return; }
L_004B9418:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B9438; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9438u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B9438u) [[unlikely]] return; }
L_004B9438:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B944C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B944C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9470; } }
L_004B9468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9470u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9470u) [[unlikely]] return; }
L_004B9470:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9488u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9488u) [[unlikely]] return; }
L_004B9488:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B94E8; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B94B8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B94B8u) [[unlikely]] return; }
L_004B94B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B94C8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B94C8u) [[unlikely]] return; }
L_004B94C8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B94E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B94E8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B94E8u) [[unlikely]] return; }
L_004B94E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B94FC; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B94FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9520; } }
L_004B9518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9520u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9520u) [[unlikely]] return; }
L_004B9520:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9538u); set32(c.r[5], c.r[29].w[0] + 84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9538u) [[unlikely]] return; }
L_004B9538:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B9598; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9568u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9568u) [[unlikely]] return; }
L_004B9568:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9578u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9578u) [[unlikely]] return; }
L_004B9578:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B9598; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9598u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B9598u) [[unlikely]] return; }
L_004B9598:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_004B95B0; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
L_004B95B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B95E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B95E4u) [[unlikely]] return; }
L_004B95E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[3].w[0] + 1176u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B9620:
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004B9630:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BA19C; } }
    st32((c.r[16].w[0] + 424u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 424u)));  goto L_004B967C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9678u); set32(c.r[5], ld32((c.r[16].w[0] + 424u)));  if (depth < kMaxDepth) unit_00B0(c, 110u, depth + 1u); else { c.pc = 0x003C0A30u; return; } if (c.pc != 0x004B9678u) [[unlikely]] return; }
L_004B9678:
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 1;
L_004B967C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004BA1A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 960u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004B8000u < 16384u) { entry = entries_00EE[(t - 0x004B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B96A4:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 129u);
    set32(c.r[5], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = 0u;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9718u) [[unlikely]] return; }
L_004B9718:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004BA19C; } }
L_004B972C:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[4], 0u - 129u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = 0u;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B979Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B979Cu) [[unlikely]] return; }
L_004B979C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B97B8u); set32(c.r[4], ld32((c.r[16].w[0] + 368u)));  if (depth < kMaxDepth) unit_0118(c, 118u, depth + 1u); else { c.pc = 0x00561730u; return; } if (c.pc != 0x004B97B8u) [[unlikely]] return; }
L_004B97B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA19C; } }
L_004B97C0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[2], 0u - 129u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[1] = 0u;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9828u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9828u) [[unlikely]] return; }
L_004B9828:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[4].d[0]; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004BA19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9844u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 19u, depth + 1u); else { c.pc = 0x004D84F0u; return; } if (c.pc != 0x004B9844u) [[unlikely]] return; }
L_004B9844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA19C; } }
L_004B984C:
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], 0u - 129u);
    st32((c.r[16].w[0] + 1132u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004BA19C; } }
L_004B9880:
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    st8((c.r[16].w[0] + 1144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B98A4u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 322u, depth + 1u); else { c.pc = 0x004D3CF0u; return; } if (c.pc != 0x004B98A4u) [[unlikely]] return; }
L_004B98A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 129u);
    set32(c.r[5], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[6], ld32((c.r[6].w[0] + 2228u)));
    set32(c.r[2], 0u - 33u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 19;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 428u)));  goto L_004B9910; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9904u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 557u, depth + 1u); else { c.pc = 0x004F78E0u; return; } if (c.pc != 0x004B9904u) [[unlikely]] return; }
L_004B9904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 428u), c.r[2].w[0]);  if (t) { goto L_004B9920; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 1;
L_004B9910:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9920u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9920u) [[unlikely]] return; }
L_004B9920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B993C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9944; } }
L_004B993C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9944u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9944u) [[unlikely]] return; }
L_004B9944:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B995Cu); set32(c.r[5], c.r[29].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B995Cu) [[unlikely]] return; }
L_004B995C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B99BC; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B998Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B998Cu) [[unlikely]] return; }
L_004B998C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B999Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B999Cu) [[unlikely]] return; }
L_004B999C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B99BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B99BCu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B99BCu) [[unlikely]] return; }
L_004B99BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B99D0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B99D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 708u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B99EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B99F4; } }
L_004B99EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B99F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B99F4u) [[unlikely]] return; }
L_004B99F4:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9A0Cu); set32(c.r[5], c.r[29].w[0] + 152u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9A0Cu) [[unlikely]] return; }
L_004B9A0C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B9A6C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9A3Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9A3Cu) [[unlikely]] return; }
L_004B9A3C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9A4Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9A4Cu) [[unlikely]] return; }
L_004B9A4C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B9A6C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9A6Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B9A6Cu) [[unlikely]] return; }
L_004B9A6C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B9A80; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004B9A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9A9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004B9AA4; } }
L_004B9A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9AA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004B9AA4u) [[unlikely]] return; }
L_004B9AA4:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9ABCu); set32(c.r[5], c.r[29].w[0] + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B9ABCu) [[unlikely]] return; }
L_004B9ABC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B9B1C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9AECu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B9AECu) [[unlikely]] return; }
L_004B9AEC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9AFCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B9AFCu) [[unlikely]] return; }
L_004B9AFC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B9B1C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9B1Cu); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004B9B1Cu) [[unlikely]] return; }
L_004B9B1C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_004B9B34; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
L_004B9B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9B68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9B68u) [[unlikely]] return; }
L_004B9B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9B70u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 70u, depth + 1u); else { c.pc = 0x004D8D40u; return; } if (c.pc != 0x004B9B70u) [[unlikely]] return; }
L_004B9B70:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[3].w[0] + 1176u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BA19C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9BB8u); set32(c.r[5], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00D2(c, 309u, depth + 1u); else { c.pc = 0x0044A8B0u; return; } if (c.pc != 0x004B9BB8u) [[unlikely]] return; }
L_004B9BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA19C; } }
L_004B9BC0:
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[6], c.r[2].w[0] << 5);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 33u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[2], 0u - 3u);
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1202u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9C00u); st8((c.r[16].w[0] + 1202u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004B9C00u) [[unlikely]] return; }
L_004B9C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA19C; } }
L_004B9C08:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004BA19C; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u - 129u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[5], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9C6Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  if (depth < kMaxDepth) unit_00D2(c, 316u, depth + 1u); else { c.pc = 0x0044AA00u; return; } if (c.pc != 0x004B9C6Cu) [[unlikely]] return; }
L_004B9C6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9C78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x004B9C78u) [[unlikely]] return; }
L_004B9C78:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9CB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9CB0u) [[unlikely]] return; }
L_004B9CB0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9CC0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 79u, depth + 1u); else { c.pc = 0x004B89F0u; return; } if (c.pc != 0x004B9CC0u) [[unlikely]] return; }
L_004B9CC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 1328u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_004B9D04; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004B9D58; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B9D54; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_004B9D04:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 49u);  goto L_004B9D14; }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004B9D14:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 689u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9D28u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x004B9D28u) [[unlikely]] return; }
L_004B9D28:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9D34u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004B9D34u) [[unlikely]] return; }
L_004B9D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9D3Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004B9D3Cu) [[unlikely]] return; }
L_004B9D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9D54u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B9D54u) [[unlikely]] return; }
L_004B9D54:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004B9D58:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_004B9D7C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9D78u); set32(c.r[4], c.r[4].w[0] - 680u);  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x004B9D78u) [[unlikely]] return; }
L_004B9D78:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_004B9D7C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BA19C; } }
    c.f[20] = ld32((c.r[4].w[0] + 28u));
    set32(c.r[3], ld32((c.r[16].w[0] + 412u)));
    c.f[1] = ld32((c.r[16].w[0] + 1168u));
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    fpu_div(c, 22u, c.f[1], c.f[20]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { goto L_004B9DD8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 1172u));  goto L_004B9DDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9DD4u);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004B9DD4u) [[unlikely]] return; }
L_004B9DD4:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_004B9DD8:
    c.f[1] = ld32((c.r[16].w[0] + 1172u));
    c.budget -= 1;
L_004B9DDC:
    set32(c.r[3], 0u + 5999u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[22]);
    c.f[1] = fp::add(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 132u)));  goto L_004B9E14; }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.f[0]);  if (t) { goto L_004B9E18; } }
L_004B9E14:
    st32((c.r[3].w[0] + 28u), c.f[1]);
    c.budget -= 1;
L_004B9E18:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BA19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.f[0]);  if (t) { goto L_004BA19C; } }
L_004B9E3C:
    c.r[2].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    set32(c.r[6], c.r[2].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = 0u;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2228u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9EA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9EA8u) [[unlikely]] return; }
L_004B9EA8:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9EB8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 79u, depth + 1u); else { c.pc = 0x004B89F0u; return; } if (c.pc != 0x004B9EB8u) [[unlikely]] return; }
L_004B9EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA19C; } }
L_004B9EC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9ED8u) [[unlikely]] return; }
L_004B9ED8:
    c.f[1] = ld32((c.r[16].w[0] + 408u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  goto L_004B9F0C; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 664u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9F08u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004B9F08u) [[unlikely]] return; }
L_004B9F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_004B9F0C:
    set32(c.r[4], 0u - 5u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 253u, depth + 1u); else { c.pc = 0x003BE0E0u; return; } if (c.pc != 0x004B9F60u) [[unlikely]] return; }
L_004B9F60:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65407ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9F88u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004B9F88u) [[unlikely]] return; }
L_004B9F88:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1201u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004BA19C; } }
L_004B9FA4:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[3], 0u - 129u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004BA19C; } }
L_004B9FDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9FF4u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004B9FF4u) [[unlikely]] return; }
L_004B9FF4:
    c.f[1] = ld32((c.r[16].w[0] + 408u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  goto L_004BA028; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 664u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA024u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BA024u) [[unlikely]] return; }
L_004BA024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_004BA028:
    set32(c.r[5], 0u - 5u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA074u); st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004BA074u) [[unlikely]] return; }
L_004BA074:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA080u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BA080u) [[unlikely]] return; }
L_004BA080:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA0A0u); set32(c.r[5], ld32((c.r[16].w[0] + 172u)));  if (depth < kMaxDepth) unit_00C9(c, 44u, depth + 1u); else { c.pc = 0x00424620u; return; } if (c.pc != 0x004BA0A0u) [[unlikely]] return; }
L_004BA0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA0A8u); set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004BA0A8u) [[unlikely]] return; }
L_004BA0A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BA19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004BA19C; } }
L_004BA0BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA0D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 42u, depth + 1u); else { c.pc = 0x004D88E0u; return; } if (c.pc != 0x004BA0D4u) [[unlikely]] return; }
L_004BA0D4:
    c.f[1] = ld32((c.r[16].w[0] + 408u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  goto L_004BA108; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 664u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA104u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BA104u) [[unlikely]] return; }
L_004BA104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_004BA108:
    set32(c.r[4], 0u - 5u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA15Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 253u, depth + 1u); else { c.pc = 0x003BE0E0u; return; } if (c.pc != 0x004BA15Cu) [[unlikely]] return; }
L_004BA15C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65407ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA184u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004BA184u) [[unlikely]] return; }
L_004BA184:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1201u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_004BA19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004BA1A0:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004BA1D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA1F4u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_00C6(c, 204u, depth + 1u); else { c.pc = 0x00419820u; return; } if (c.pc != 0x004BA1F4u) [[unlikely]] return; }
L_004BA1F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BA214; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[5].w[0] - 614u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA214u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 167u, depth + 1u); else { c.pc = 0x004194B0u; return; } if (c.pc != 0x004BA214u) [[unlikely]] return; }
L_004BA214:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA228u); set32(c.r[6], c.r[6].w[0] - 585u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004BA228u) [[unlikely]] return; }
L_004BA228:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA234u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004BA234u) [[unlikely]] return; }
L_004BA234:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 220u));  goto L_004BA25C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BA258; } }
    c.f[12] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA258u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004BA258u) [[unlikely]] return; }
L_004BA258:
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 1;
L_004BA25C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA26Cu); st32((c.r[16].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004BA26Cu) [[unlikely]] return; }
L_004BA26C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 571u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA280u); st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BA280u) [[unlikely]] return; }
L_004BA280:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 212u);  goto L_004BA294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BA2B8; } }
L_004BA294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA29Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BA29Cu) [[unlikely]] return; }
L_004BA29C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA2ACu); set32(c.r[6], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BA2ACu) [[unlikely]] return; }
L_004BA2AC:
    set32(c.r[4], c.r[29].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA2B8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BA2B8u) [[unlikely]] return; }
L_004BA2B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004BA2EC; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  goto L_004BA2E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32344u));  if (t) { goto L_004BA2E4; } }
L_004BA2E0:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_004BA2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_004BA420; } }
L_004BA2EC:
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 553u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA2FCu); st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BA2FCu) [[unlikely]] return; }
L_004BA2FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 200u);  goto L_004BA310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BA334; } }
L_004BA310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA318u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BA318u) [[unlikely]] return; }
L_004BA318:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA328u); set32(c.r[6], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BA328u) [[unlikely]] return; }
L_004BA328:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA334u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BA334u) [[unlikely]] return; }
L_004BA334:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004BA364; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32344u));  goto L_004BA35C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_004BA35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_004BA420; } }
L_004BA364:
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 539u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA374u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BA374u) [[unlikely]] return; }
L_004BA374:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_004BA388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BA3AC; } }
L_004BA388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA390u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BA390u) [[unlikely]] return; }
L_004BA390:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA3A0u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BA3A0u) [[unlikely]] return; }
L_004BA3A0:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA3ACu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BA3ACu) [[unlikely]] return; }
L_004BA3AC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004BA3C4; }
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_004BA420; } }
L_004BA3C4:
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 523u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA3D4u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BA3D4u) [[unlikely]] return; }
L_004BA3D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004BA3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BA40C; } }
L_004BA3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA3F0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BA3F0u) [[unlikely]] return; }
L_004BA3F0:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA400u); set32(c.r[6], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BA400u) [[unlikely]] return; }
L_004BA400:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA40Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BA40Cu) [[unlikely]] return; }
L_004BA40C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BA420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_004BA420:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA434u); set32(c.r[6], c.r[6].w[0] - 509u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004BA434u) [[unlikely]] return; }
L_004BA434:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA440u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004BA440u) [[unlikely]] return; }
L_004BA440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 168u));  goto L_004BA468; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BA464; } }
    c.f[12] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA464u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004BA464u) [[unlikely]] return; }
L_004BA464:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 1;
L_004BA468:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA478u); st32((c.r[16].w[0] + 400u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004BA478u) [[unlikely]] return; }
L_004BA478:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA48Cu); set32(c.r[6], c.r[6].w[0] - 492u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004BA48Cu) [[unlikely]] return; }
L_004BA48C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA498u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004BA498u) [[unlikely]] return; }
L_004BA498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 164u));  goto L_004BA4C0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004BA4BC; } }
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004BA4BCu) [[unlikely]] return; }
L_004BA4BC:
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 1;
L_004BA4C0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4D0u); st32((c.r[16].w[0] + 404u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004BA4D0u) [[unlikely]] return; }
L_004BA4D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4DCu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_00F5(c, 91u, depth + 1u); else { c.pc = 0x004D4A10u; return; } if (c.pc != 0x004BA4DCu) [[unlikely]] return; }
L_004BA4DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4E8u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_00F9(c, 96u, depth + 1u); else { c.pc = 0x004E5210u; return; } if (c.pc != 0x004BA4E8u) [[unlikely]] return; }
L_004BA4E8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C6(c, 201u, depth + 1u); else { c.pc = 0x004197A0u; return; } if (c.pc != 0x004BA4F4u) [[unlikely]] return; }
L_004BA4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004BA510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 408u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004BA550; } }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[17].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA550u); set32(c.r[6], c.r[6].w[0] - 664u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004BA550u) [[unlikely]] return; }
L_004BA550:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_004BA56C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16960ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BA570; } }
L_004BA56C:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_004BA570:
    st32((c.r[16].w[0] + 408u), c.f[0]);
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BA5A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B0C0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 195u, depth); }
L_004BA5B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 72u), 0u);  if (t) { goto L_004BA6C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_004BA610; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004BA610:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA61Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B0(c, 112u, depth + 1u); else { c.pc = 0x003C0A70u; return; } if (c.pc != 0x004BA61Cu) [[unlikely]] return; }
L_004BA61C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_004BA630; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004BA630:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA63Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B0(c, 107u, depth + 1u); else { c.pc = 0x003C09A0u; return; } if (c.pc != 0x004BA63Cu) [[unlikely]] return; }
L_004BA63C:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA684u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00F4(c, 315u, depth + 1u); else { c.pc = 0x004D3C40u; return; } if (c.pc != 0x004BA684u) [[unlikely]] return; }
L_004BA684:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 416u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 420u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 424u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 348u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), c.f[0]);  if (t) { goto L_004BA708; } }
L_004BA6C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_004BA6DC; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004BA6DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA6E8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B0(c, 112u, depth + 1u); else { c.pc = 0x003C0A70u; return; } if (c.pc != 0x004BA6E8u) [[unlikely]] return; }
L_004BA6E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_004BA6FC; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004BA6FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA708u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B0(c, 107u, depth + 1u); else { c.pc = 0x003C09A0u; return; } if (c.pc != 0x004BA708u) [[unlikely]] return; }
L_004BA708:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_004BA71C; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004BA71C:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA728u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B0(c, 111u, depth + 1u); else { c.pc = 0x003C0A60u; return; } if (c.pc != 0x004BA728u) [[unlikely]] return; }
L_004BA728:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA734u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B0(c, 113u, depth + 1u); else { c.pc = 0x003C0A80u; return; } if (c.pc != 0x004BA734u) [[unlikely]] return; }
L_004BA734:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA744u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00EE(c, 313u, depth + 1u); else { c.pc = 0x004BABF0u; return; } if (c.pc != 0x004BA744u) [[unlikely]] return; }
L_004BA744:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[13] = ld32((c.r[29].w[0] + 100u));
    c.f[14] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA75Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x004BA75Cu) [[unlikely]] return; }
L_004BA75C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 416u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 420u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 424u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 348u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA7B4u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004BA7B4u) [[unlikely]] return; }
L_004BA7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA7BCu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00B0(c, 89u, depth + 1u); else { c.pc = 0x003C07C0u; return; } if (c.pc != 0x004BA7BCu) [[unlikely]] return; }
L_004BA7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004BA7D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004BA924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA7F4u);  if (depth < kMaxDepth) unit_00B0(c, 106u, depth + 1u); else { c.pc = 0x003C0990u; return; } if (c.pc != 0x004BA7F4u) [[unlikely]] return; }
L_004BA7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BA920; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2316u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 1157u));  goto L_004BA82C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2318u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BA828; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_004BA850; } }
L_004BA828:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1157u));
    c.budget -= 1;
L_004BA82C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004BA854; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004BA850; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    st32((c.r[2].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 2;
L_004BA850:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004BA854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA85Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 310u, depth + 1u); else { c.pc = 0x004BAB00u; return; } if (c.pc != 0x004BA85Cu) [[unlikely]] return; }
L_004BA85C:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA868u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B0(c, 117u, depth + 1u); else { c.pc = 0x003C0B10u; return; } if (c.pc != 0x004BA868u) [[unlikely]] return; }
L_004BA868:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA874u); set32(c.r[5], c.r[16].w[0] + 108u);  if (depth < kMaxDepth) unit_00B0(c, 116u, depth + 1u); else { c.pc = 0x003C0AF0u; return; } if (c.pc != 0x004BA874u) [[unlikely]] return; }
L_004BA874:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 432u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 436u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 440u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA89Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B0(c, 114u, depth + 1u); else { c.pc = 0x003C0AA0u; return; } if (c.pc != 0x004BA89Cu) [[unlikely]] return; }
L_004BA89C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA8A8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138740u; return; } if (c.pc != 0x004BA8A8u) [[unlikely]] return; }
L_004BA8A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA8B4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B0(c, 115u, depth + 1u); else { c.pc = 0x003C0AC0u; return; } if (c.pc != 0x004BA8B4u) [[unlikely]] return; }
L_004BA8B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1052u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA8C4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00B0(c, 109u, depth + 1u); else { c.pc = 0x003C09F0u; return; } if (c.pc != 0x004BA8C4u) [[unlikely]] return; }
L_004BA8C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 1252u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA8D4u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_00B0(c, 108u, depth + 1u); else { c.pc = 0x003C09B0u; return; } if (c.pc != 0x004BA8D4u) [[unlikely]] return; }
L_004BA8D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_004BA90C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 97u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BA908; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA900u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00B0(c, 110u, depth + 1u); else { c.pc = 0x003C0A30u; return; } if (c.pc != 0x004BA900u) [[unlikely]] return; }
L_004BA900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_004BA918; } }
L_004BA908:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_004BA90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA914u);  if (depth < kMaxDepth) unit_00B0(c, 110u, depth + 1u); else { c.pc = 0x003C0A30u; return; } if (c.pc != 0x004BA914u) [[unlikely]] return; }
L_004BA914:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_004BA918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA920u);  if (depth < kMaxDepth) unit_00B0(c, 83u, depth + 1u); else { c.pc = 0x003C05E0u; return; } if (c.pc != 0x004BA920u) [[unlikely]] return; }
L_004BA920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BA924:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004BA930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004BA958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 486u, depth + 1u); else { c.pc = 0x003BFDD0u; return; } if (c.pc != 0x004BA958u) [[unlikely]] return; }
L_004BA958:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 148u), c.r[16].w[0]);  if (t) { goto L_004BA978; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA96Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 486u, depth + 1u); else { c.pc = 0x003BFDD0u; return; } if (c.pc != 0x004BA96Cu) [[unlikely]] return; }
L_004BA96C:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA978u); set32(c.r[5], ld32((c.r[17].w[0] + 424u)));  if (depth < kMaxDepth) unit_00B0(c, 110u, depth + 1u); else { c.pc = 0x003C0A30u; return; } if (c.pc != 0x004BA978u) [[unlikely]] return; }
L_004BA978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BA990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 332u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004BAAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 466u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAA58u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BAA58u) [[unlikely]] return; }
L_004BAA58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_004BAA6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004BAA94; } }
L_004BAA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAA74u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BAA74u) [[unlikely]] return; }
L_004BAA74:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAA84u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BAA84u) [[unlikely]] return; }
L_004BAA84:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAA90u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BAA90u) [[unlikely]] return; }
L_004BAA90:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004BAA94:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 304u));  goto L_004BAAAC; }
    c.f[0] = ld32((c.r[28].w[0] - 32068u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 2;
L_004BAAA8:
    c.f[2] = ld32((c.r[16].w[0] + 304u));
    c.budget -= 1;
L_004BAAAC:
    c.f[0] = ld32((c.r[16].w[0] + 308u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[4] = fp::add(c.f[1], c.f[2]);
    c.f[3] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 300u));
    c.f[0] = ld32((c.r[16].w[0] + 332u));
    c.f[2] = ld32((c.r[16].w[0] + 340u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 332u), c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 336u), c.f[4]);
    st32((c.r[16].w[0] + 340u), c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004BAB00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAB1Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00F4(c, 327u, depth + 1u); else { c.pc = 0x004D3E40u; return; } if (c.pc != 0x004BAB1Cu) [[unlikely]] return; }
L_004BAB1C:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BABD0:
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    c.f[0] = ld32((c.r[3].w[0] + 432u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 436u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 440u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_004BABF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 27u, depth + 1u); else { c.pc = 0x00138670u; return; } if (c.pc != 0x004BAC1Cu) [[unlikely]] return; }
L_004BAC1C:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAC4Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_008E(c, 198u, depth + 1u); else { c.pc = 0x0033B0F0u; return; } if (c.pc != 0x004BAC4Cu) [[unlikely]] return; }
L_004BAC4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAC64u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x004BAC64u) [[unlikely]] return; }
L_004BAC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004BAC80:
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.f[0] = ld32((c.r[3].w[0] + 416u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 420u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 424u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.f[0] = ld32((c.r[3].w[0] + 348u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.f[0]);  c.pc = t; return; }
L_004BACD0:
    set32(c.r[29], c.r[29].w[0] - 864u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
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
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 348u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] != 0ull; c.f[21] = c.f[12];  if (t) { goto L_004BAD60; } }
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  goto L_004BAD64; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_004BB648; }
L_004BAD60:
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_004BAD64:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1166u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_004BAD80; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004BAD80:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = c.r[3].d[0] & 255ull;  goto L_004BADD0; }
    c.f[5] = ld32((c.r[4].w[0] + 400u));
    c.f[2] = ld32((c.r[20].w[0] + 96u));
    c.f[4] = ld32((c.r[4].w[0] + 404u));
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[3] = ld32((c.r[4].w[0] + 408u));
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32400u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004BADC8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BADC8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_004BADD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 452u)));  goto L_004BAE14; }
    c.f[2] = ld32((c.r[20].w[0] + 96u));
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004BAE0C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BAE0C:
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 452u)));
    c.budget -= 2;
L_004BAE14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004BB5FC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAE2Cu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 69u, depth + 1u); else { c.pc = 0x0027D020u; return; } if (c.pc != 0x004BAE2Cu) [[unlikely]] return; }
L_004BAE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.f[31] = fp::min(c.f[0], c.f[20]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 588u), 0u);  goto L_004BAEC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 466u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAE74u); st32((c.r[29].w[0] + 860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004BAE74u) [[unlikely]] return; }
L_004BAE74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 856u);  goto L_004BAE88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004BAEAC; } }
L_004BAE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAE90u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004BAE90u) [[unlikely]] return; }
L_004BAE90:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 852u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAEA0u); set32(c.r[6], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004BAEA0u) [[unlikely]] return; }
L_004BAEA0:
    set32(c.r[4], c.r[29].w[0] + 856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAEACu); set32(c.r[5], c.r[29].w[0] + 852u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004BAEACu) [[unlikely]] return; }
L_004BAEAC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BAEC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_004BAEC0:
    st32((c.r[29].w[0] + 588u), 0u);
    c.budget -= 1;
L_004BAEC4:
    st32((c.r[29].w[0] + 636u), c.f[20]);
    st32((c.r[29].w[0] + 604u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 620u), 0u);
    st32((c.r[29].w[0] + 572u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    st32((c.r[29].w[0] + 524u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    st32((c.r[29].w[0] + 540u), 0u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1956u));
    st32((c.r[29].w[0] + 556u), 0u);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 180u), c.f[0]);  if (t) { goto L_004BAF2C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32480u));  goto L_004BAF30; }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004BAF2C:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.budget -= 1;
L_004BAF30:
    c.r[19].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[31]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[2], c.r[19].w[0] << 6);
    c.budget -= 4;
L_004BAF40:
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 1348u));
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 624u), c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 580u));
    st32((c.r[29].w[0] + 628u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 584u));
    st32((c.r[29].w[0] + 632u), c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 1920u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.facc = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 628u), c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[20]));
    st32((c.r[29].w[0] + 628u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1956u));
    c.f[22] = ld32((c.r[20].w[0] + 120u));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; c.f[23] = c.f[31];  if (t) { goto L_004BAFDC; } }
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 844u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 848u), c.f[0]);  if (t) { goto L_004BAFD0; } }
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[23] = ld32((c.r[29].w[0] + 176u));  goto L_004BB138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[1];  if (t) { goto L_004BB138; } }
L_004BAFD0:
    c.f[23] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BB138; } }
L_004BAFDC:
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[4], ld32((c.r[3].w[0] + 452u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 168u));
    c.f[2] = ld32((c.r[3].w[0] + 204u));
    c.f[4] = ld32((c.r[4].w[0] + 164u));
    c.f[6] = ld32((c.r[4].w[0] + 160u));
    c.f[5] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 200u));
    c.f[0] = ld32((c.r[3].w[0] + 196u));
    st32((c.r[29].w[0] + 828u), c.f[4]);
    st32((c.r[29].w[0] + 832u), c.f[3]);
    c.f[4] = fp::sub(c.f[1], c.f[4]);
    c.f[3] = fp::sub(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 848u), c.f[5]);
    st32((c.r[29].w[0] + 844u), c.f[4]);
    st32((c.r[29].w[0] + 840u), c.f[3]);
    set32(c.r[2], ld32((c.r[20].w[0] + 128u)));
    st32((c.r[29].w[0] + 824u), c.f[6]);
    c.f[2] = ld32((c.r[2].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 100u));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 784u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[6]);
    c.f[1] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[6]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 776u), c.f[0]);
    st32((c.r[29].w[0] + 780u), c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 776u));
    c.f[2] = ld32((c.r[29].w[0] + 780u));
    c.f[1] = ld32((c.r[29].w[0] + 784u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 840u), c.f[3]);
    st32((c.r[29].w[0] + 844u), c.f[2]);
    st32((c.r[29].w[0] + 848u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[4] = fp::mul(c.f[3], c.f[5]);
    c.f[3] = fp::mul(c.f[2], c.f[5]);
    c.f[2] = fp::mul(c.f[1], c.f[5]);
    fpu_div(c, 1u, c.f[0], c.f[5]);
    c.f[0] = ld32((c.r[28].w[0] - 32132u));
    st32((c.r[29].w[0] + 840u), c.f[4]);
    st32((c.r[29].w[0] + 844u), c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 59;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 848u), c.f[2]);  if (t) { goto L_004BB0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004BB100; } }
L_004BB0E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 844u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 848u), c.f[0]);  if (t) { goto L_004BB120; } }
L_004BB100:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[2] = ld32((c.r[29].w[0] + 824u));  goto L_004BB124; }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 848u), c.f[0]);
    c.f[0] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 844u), c.f[0]);
    c.f[0] = c.f[4] ^ fp::kSign;
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.budget -= 6;
L_004BB120:
    c.f[2] = ld32((c.r[29].w[0] + 824u));
    c.budget -= 1;
L_004BB124:
    c.f[1] = ld32((c.r[29].w[0] + 828u));
    c.f[0] = ld32((c.r[29].w[0] + 832u));
    st32((c.r[3].w[0] + 196u), c.f[2]);
    st32((c.r[3].w[0] + 200u), c.f[1]);
    st32((c.r[3].w[0] + 204u), c.f[0]);
    c.budget -= 5;
L_004BB138:
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 744u);
    c.f[0] = ld32((c.r[2].w[0] + 368u));
    st32((c.r[29].w[0] + 808u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 372u));
    st32((c.r[29].w[0] + 812u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 376u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB15Cu); st32((c.r[29].w[0] + 816u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x004BB15Cu) [[unlikely]] return; }
L_004BB15C:
    set32(c.r[4], c.r[29].w[0] + 728u);
    set32(c.r[5], c.r[29].w[0] + 808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB16Cu); set32(c.r[6], c.r[29].w[0] + 840u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x004BB16Cu) [[unlikely]] return; }
L_004BB16C:
    set32(c.r[4], c.r[29].w[0] + 744u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB178u); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004BB178u) [[unlikely]] return; }
L_004BB178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB180u); set32(c.r[4], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004BB180u) [[unlikely]] return; }
L_004BB180:
    set32(c.r[4], c.r[29].w[0] + 792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB18Cu); set32(c.r[5], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x004BB18Cu) [[unlikely]] return; }
L_004BB18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB194u); set32(c.r[4], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x004BB194u) [[unlikely]] return; }
L_004BB194:
    set32(c.r[4], c.r[29].w[0] + 696u);
    set32(c.r[5], c.r[29].w[0] + 792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB1A4u); set32(c.r[6], c.r[29].w[0] + 808u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x004BB1A4u) [[unlikely]] return; }
L_004BB1A4:
    set32(c.r[4], c.r[29].w[0] + 712u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB1B0u); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004BB1B0u) [[unlikely]] return; }
L_004BB1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB1B8u); set32(c.r[4], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004BB1B8u) [[unlikely]] return; }
L_004BB1B8:
    set32(c.r[4], c.r[29].w[0] + 760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB1C4u); set32(c.r[5], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x004BB1C4u) [[unlikely]] return; }
L_004BB1C4:
    c.f[2] = ld32((c.r[29].w[0] + 760u));
    st32((c.r[29].w[0] + 588u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 764u));
    st32((c.r[29].w[0] + 604u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 768u));
    st32((c.r[29].w[0] + 620u), 0u);
    st32((c.r[29].w[0] + 840u), c.f[2]);
    st32((c.r[29].w[0] + 608u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 792u));
    st32((c.r[29].w[0] + 844u), c.f[1]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 796u));
    st32((c.r[29].w[0] + 576u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 808u));
    st32((c.r[29].w[0] + 580u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 812u));
    st32((c.r[29].w[0] + 848u), c.f[0]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 800u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    st32((c.r[29].w[0] + 596u), c.f[1]);
    st32((c.r[29].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 816u));
    c.budget -= 25;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[29].w[0] + 600u), c.f[0]);  if (t) { goto L_004BB234; } }
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_004BB2C0; }
L_004BB234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[22], c.f[0]);
    st32((c.r[29].w[0] + 476u), 0u);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 492u), 0u);
    st32((c.r[29].w[0] + 508u), 0u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.f[3] = ld32((c.r[28].w[0] - 29552u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 29548u));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[1] = ld32((c.r[20].w[0] + 1092u));
    c.f[0] = ld32((c.r[28].w[0] - 32128u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB284u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 86u, depth + 1u); else { c.pc = 0x0027DA50u; return; } if (c.pc != 0x004BB284u) [[unlikely]] return; }
L_004BB284:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB294u); set32(c.r[6], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x004BB294u) [[unlikely]] return; }
L_004BB294:
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004BB2A0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB2A0u | kUnwind; return; } goto L_004BB2A0; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_004BB2C0:
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB2CCu); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x004BB2CCu) [[unlikely]] return; }
L_004BB2CC:
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004BB2D8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB2D8u | kUnwind; return; } goto L_004BB2D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[22], c.r[20].w[0] + c.r[16].w[0]);  goto L_004BB444; }
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[2], ld32((c.r[2].w[0] + 484u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB320u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x004BB320u) [[unlikely]] return; }
L_004BB320:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB32Cu); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x004BB32Cu) [[unlikely]] return; }
L_004BB32C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB338u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_005F(c, 115u, depth + 1u); else { c.pc = 0x0027E2A0u; return; } if (c.pc != 0x004BB338u) [[unlikely]] return; }
L_004BB338:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[23];  goto L_004BB37C; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB358u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0072(c, 229u, depth + 1u); else { c.pc = 0x002C9EE0u; return; } if (c.pc != 0x004BB358u) [[unlikely]] return; }
L_004BB358:
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[29].w[0] + 456u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[29].w[0] + 448u), c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    st32((c.r[29].w[0] + 460u), c.f[0]);
    c.f[12] = c.f[23];
    c.budget -= 9;
L_004BB37C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB38Cu); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027DE70u; return; } if (c.pc != 0x004BB38Cu) [[unlikely]] return; }
L_004BB38C:
    c.f[7] = ld32((c.r[29].w[0] + 244u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[4] = fp::mul(c.f[2], c.f[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[5] = ld32((c.r[29].w[0] + 252u));
    c.f[24] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[22] = fp::mul(c.f[2], c.f[5]);
    c.f[30] = fp::mul(c.f[4], c.f[1]);
    c.f[29] = fp::mul(c.f[3], c.f[1]);
    c.f[28] = fp::mul(c.f[2], c.f[1]);
    c.f[26] = fp::mul(c.f[3], c.f[7]);
    c.f[25] = fp::mul(c.f[2], c.f[7]);
    c.f[1] = fp::add(c.f[24], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[27] = fp::mul(c.f[4], c.f[7]);
    c.f[23] = fp::mul(c.f[2], c.f[6]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[13] = fp::add(c.f[26], c.f[28]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB3F8u); c.f[14] = fp::sub(c.f[25], c.f[29]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BB3F8u) [[unlikely]] return; }
L_004BB3F8:
    c.f[1] = fp::add(c.f[27], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[26], c.f[28]);
    c.f[13] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB41Cu); c.f[14] = fp::add(c.f[23], c.f[30]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BB41Cu) [[unlikely]] return; }
L_004BB41C:
    c.f[1] = fp::add(c.f[27], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[25], c.f[29]);
    c.f[13] = fp::sub(c.f[23], c.f[30]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB440u); c.f[14] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BB440u) [[unlikely]] return; }
L_004BB440:
    set32(c.r[22], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_004BB444:
    set32(c.r[2], ld32((c.r[22].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 396u), 0u);  goto L_004BB4C0; }
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004BB45C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB45Cu | kUnwind; return; } goto L_004BB45C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    c.f[3] = ld32((c.r[17].w[0] + 836u));
    c.f[1] = ld32((c.r[17].w[0] + 832u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[17].w[0] + 840u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 1920u));
    st32((c.r[29].w[0] + 560u), c.f[1]);
    st32((c.r[29].w[0] + 568u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 564u), c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] - 1348u));
    c.facc = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[20]));
    st32((c.r[29].w[0] + 564u), c.f[0]);
    st32((c.r[29].w[0] + 396u), 0u);
    c.budget -= 18;
L_004BB4C0:
    st32((c.r[29].w[0] + 412u), 0u);
    st32((c.r[29].w[0] + 428u), 0u);
    c.f[12] = ld32((c.r[22].w[0] + 180u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB4D4u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_005F(c, 89u, depth + 1u); else { c.pc = 0x0027DAD0u; return; } if (c.pc != 0x004BB4D4u) [[unlikely]] return; }
L_004BB4D4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB4E4u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x004BB4E4u) [[unlikely]] return; }
L_004BB4E4:
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_004BB4F0:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB4F0u | kUnwind; return; } goto L_004BB4F0; } }
    c.f[0] = ld32((c.r[29].w[0] + 572u));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[29].w[0] + 576u);
    set32(c.r[10], 0u + 3u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.budget -= 6;
L_004BB524:
    set32(c.r[12], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[12].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { set32(c.r[9], ld32((c.r[12].w[0] + 484u)));  goto L_004BB588; }
    set32(c.r[7], c.r[9].w[0] + 48u);
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 3;
L_004BB540:
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB540u | kUnwind; return; } goto L_004BB540; } }
    c.f[3] = ld32((c.r[29].w[0] + 624u));
    c.f[2] = ld32((c.r[29].w[0] + 628u));
    c.f[1] = ld32((c.r[29].w[0] + 632u));
    st32((c.r[9].w[0] + 96u), c.f[3]);
    st32((c.r[9].w[0] + 100u), c.f[2]);
    st32((c.r[9].w[0] + 104u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[9].w[0] + 108u), c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    st32((c.r[9].w[0] + 108u), c.f[1]);
    set32(c.r[9], ld32((c.r[12].w[0] + 484u)));
    c.budget -= 11;
L_004BB588:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_004BB5E0; }
    set32(c.r[7], c.r[9].w[0] + 48u);
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_004BB59C:
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB59Cu | kUnwind; return; } goto L_004BB59C; } }
    c.f[3] = ld32((c.r[29].w[0] + 560u));
    c.f[2] = ld32((c.r[29].w[0] + 564u));
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    st32((c.r[9].w[0] + 96u), c.f[3]);
    st32((c.r[9].w[0] + 100u), c.f[2]);
    st32((c.r[9].w[0] + 104u), c.f[1]);
    st32((c.r[9].w[0] + 108u), c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    st32((c.r[9].w[0] + 108u), c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
L_004BB5E0:
    c.r[4].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB524u | kUnwind; return; } goto L_004BB524; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BAF40u | kUnwind; return; } goto L_004BAF40; }
L_004BB5FC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[2] = ld32((c.r[20].w[0] + 120u));  goto L_004BB60C; }
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.f[2] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_004BB60C:
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.budget -= 2;
L_004BB614:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 368u);
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    st32((c.r[3].w[0]), c.f[2]);
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 180u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB614u | kUnwind; return; } goto L_004BB614; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_004BB648:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
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
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 864u);  c.pc = t; return; }
L_004BB6A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[28].w[0] - 31832u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[1] = ld32((c.r[2].w[0] + 148u));
    c.f[3] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 26;
L_004BB708:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 452u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 160u));
    c.f[4] = ld32((c.r[29].w[0] + 84u));
    c.f[5] = ld32((c.r[3].w[0] + 164u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[2].w[0] + 196u), c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[2].w[0] + 200u), c.f[4]);
    st32((c.r[2].w[0] + 204u), c.f[2]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 21;
L_004BB75C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 484u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004BB77C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB778u); set32(c.r[5], c.r[5].w[0] - 18496u);  if (depth < kMaxDepth) unit_00D4(c, 299u, depth + 1u); else { c.pc = 0x00452120u; return; } if (c.pc != 0x004BB778u) [[unlikely]] return; }
L_004BB778:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004BB77C:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB75Cu | kUnwind; return; } goto L_004BB75C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB708u | kUnwind; return; } goto L_004BB708; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB7A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 318u, depth + 1u); else { c.pc = 0x004BACD0u; return; } if (c.pc != 0x004BB7A4u) [[unlikely]] return; }
L_004BB7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004BB7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004BB7E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004BB828; } }
L_004BB7E0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB7ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004BB7ECu) [[unlikely]] return; }
L_004BB7EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_004BB80C; } }
L_004BB7FC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_004BB80C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004BB818; } }
L_004BB80C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB7FCu | kUnwind; return; } goto L_004BB7FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BB818:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004BB828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BB828; } }
L_004BB828:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004BB840; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB83Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x004BB83Cu) [[unlikely]] return; }
L_004BB83C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004BB840:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BB850:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
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
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1194u));
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_004BB8C8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BB8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BB908; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BB8E8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BB8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BB8F8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BB8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BB908; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004BB908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  goto L_004BBAC4; }
    c.f[0] = ld32((c.r[3].w[0] + 640u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    st32((c.r[18].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 644u));
    st32((c.r[18].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 648u));
    st32((c.r[18].w[0] + 252u), c.f[0]);
    st32((c.r[18].w[0] + 256u), 0u);
    st32((c.r[18].w[0] + 260u), 0u);
    st32((c.r[18].w[0] + 264u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 12;
L_004BB940:
    set32(c.r[16], c.r[17].w[0] << 2);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004BBA1C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB96Cu); set32(c.r[7], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_00F8(c, 115u, depth + 1u); else { c.pc = 0x004E2320u; return; } if (c.pc != 0x004BB96Cu) [[unlikely]] return; }
L_004BB96C:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB978u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BB978u) [[unlikely]] return; }
L_004BB978:
    c.f[2] = ld32((c.r[29].w[0] + 576u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 576u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 584u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[5] = ld32((c.r[29].w[0] + 580u));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[7] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 368u));
    c.f[6] = ld32((c.r[3].w[0] + 372u));
    c.f[4] = ld32((c.r[3].w[0] + 376u));
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[29].w[0] + 584u));
    c.f[4] = fp::mul(c.f[4], c.f[7]);
    st32((c.r[18].w[0] + 256u), c.f[0]);
    c.f[5] = fp::sub(c.f[5], c.f[6]);
    c.f[0] = ld32((c.r[18].w[0] + 260u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[18].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 264u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 264u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 41;
L_004BBA1C:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB940u | kUnwind; return; } goto L_004BB940; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BBAC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 256u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 264u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 264u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.f[2] = ld32((c.r[18].w[0] + 256u));
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = ld32((c.r[18].w[0] + 264u));
    c.f[5] = ld32((c.r[2].w[0] + 640u));
    c.f[4] = ld32((c.r[2].w[0] + 644u));
    c.f[3] = ld32((c.r[2].w[0] + 648u));
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 312u), c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[18].w[0] + 268u), c.f[2]);
    st32((c.r[18].w[0] + 272u), c.f[1]);
    st32((c.r[18].w[0] + 276u), c.f[0]);
    st32((c.r[18].w[0] + 280u), c.f[3]);
    c.budget -= 33;
L_004BBAC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_004BBAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBACCu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00F4(c, 327u, depth + 1u); else { c.pc = 0x004D3E40u; return; } if (c.pc != 0x004BBACCu) [[unlikely]] return; }
L_004BBACC:
    set32(c.r[16], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 232u));  goto L_004BBDF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[2] = ld32((c.r[2].w[0] - 1352u));
    c.f[3] = ld32((c.r[18].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = ld32((c.r[2].w[0] - 1348u));
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 1344u));
    c.f[21] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBB08u); c.f[22] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004BBB08u) [[unlikely]] return; }
L_004BBB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBB10u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004BBB10u) [[unlikely]] return; }
L_004BBB10:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    st32((c.r[29].w[0] + 292u), c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBB28u); st32((c.r[29].w[0] + 296u), c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004BBB28u) [[unlikely]] return; }
L_004BBB28:
    c.f[12] = ld32((c.r[29].w[0] + 488u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[4] = ld32((c.r[29].w[0] + 528u));
    c.f[18] = ld32((c.r[29].w[0] + 452u));
    st32((c.r[29].w[0] + 228u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 492u));
    c.f[15] = ld32((c.r[29].w[0] + 448u));
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[29].w[0] + 224u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 512u));
    c.f[17] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 560u));
    c.f[16] = ld32((c.r[29].w[0] + 460u));
    c.f[8] = ld32((c.r[29].w[0] + 532u));
    c.f[7] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[29].w[0] + 220u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 548u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 564u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 536u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[16], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 520u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 552u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 568u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 540u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 524u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 556u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 572u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 468u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[16], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 464u));
    c.f[16] = ld32((c.r[29].w[0] + 220u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 472u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 476u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 484u));
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
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    c.f[29] = ld32((c.r[29].w[0] + 220u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 500u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 228u));
    c.f[25] = ld32((c.r[29].w[0] + 496u));
    c.f[23] = ld32((c.r[29].w[0] + 504u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 508u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 228u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 224u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 228u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 224u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD08u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x004BBD08u) [[unlikely]] return; }
L_004BBD08:
    set32(c.r[4], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 348u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD1Cu); st32((c.r[29].w[0] + 364u), 0u);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x00425140u; return; } if (c.pc != 0x004BBD1Cu) [[unlikely]] return; }
L_004BBD1C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD28u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00C9(c, 149u, depth + 1u); else { c.pc = 0x00425130u; return; } if (c.pc != 0x004BBD28u) [[unlikely]] return; }
L_004BBD28:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD34u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x004BBD34u) [[unlikely]] return; }
L_004BBD34:
    c.f[12] = ld32((c.r[20].w[0]));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BBD50u) [[unlikely]] return; }
L_004BBD50:
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BBD68u) [[unlikely]] return; }
L_004BBD68:
    c.f[12] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD80u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004BBD80u) [[unlikely]] return; }
L_004BBD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD88u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00C9(c, 147u, depth + 1u); else { c.pc = 0x00425110u; return; } if (c.pc != 0x004BBD88u) [[unlikely]] return; }
L_004BBD88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBD94u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004BBD94u) [[unlikely]] return; }
L_004BBD94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 7;
L_004BBDB0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BBDB0u | kUnwind; return; } goto L_004BBDB0; } }
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[16].w[0] + 96u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 11;
L_004BBDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBE00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 318u, depth + 1u); else { c.pc = 0x004BACD0u; return; } if (c.pc != 0x004BBE00u) [[unlikely]] return; }
L_004BBE00:
    set32(c.r[3], ld32((c.r[18].w[0] + 412u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  goto L_004BBE48; }
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBE1Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004BBE1Cu) [[unlikely]] return; }
L_004BBE1C:
    c.f[20] = ld32((c.r[18].w[0] + 120u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBE2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 83u, depth + 1u); else { c.pc = 0x004649F0u; return; } if (c.pc != 0x004BBE2Cu) [[unlikely]] return; }
L_004BBE2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 440u)));
    c.f[12] = ld32((c.r[29].w[0] + 236u));
    c.f[13] = ld32((c.r[29].w[0] + 232u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBE44u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_00F4(c, 76u, depth + 1u); else { c.pc = 0x004D09B0u; return; } if (c.pc != 0x004BBE44u) [[unlikely]] return; }
L_004BBE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_004BBE48:
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_004BBEA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 412u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.f[2] = ld32((c.r[3].w[0] + 124u));
    c.f[5] = ld32((c.r[2].w[0] + 400u));
    c.f[4] = ld32((c.r[2].w[0] + 404u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[3] = ld32((c.r[2].w[0] + 408u));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BBEE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BBEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004BBEF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 412u)));
    c.f[2] = ld32((c.r[2].w[0] + 416u));
    c.f[6] = ld32((c.r[3].w[0] + 124u));
    c.f[7] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 420u));
    c.f[8] = ld32((c.r[3].w[0] + 132u));
    c.f[3] = ld32((c.r[2].w[0] + 400u));
    c.f[4] = ld32((c.r[2].w[0] + 404u));
    c.f[5] = ld32((c.r[2].w[0] + 408u));
    c.f[0] = ld32((c.r[2].w[0] + 424u));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[8]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BBF44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BBF44:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004BBF7C; } }
    c.facc = fp::mul(c.f[3], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[8]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004BBF78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004BBF78:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004BBF7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004BBF90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_004BBFC8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_00EF(c, 7u, depth); }
L_004BBFC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00EF(c, 6u, depth); } }
    set32(c.r[7], ld32((c.r[18].w[0] + 124u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1956u));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 1957u));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1958u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1959u));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00EF(c, 5u, depth); } }
    [[clang::musttail]] return unit_00EF(c, 1u, depth);
}

}
