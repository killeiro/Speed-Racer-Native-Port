#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0,
    0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0,
    0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4010;
    case 3u: goto L_003F401C;
    case 4u: goto L_003F402C;
    case 5u: goto L_003F4048;
    case 6u: goto L_003F40D8;
    case 7u: goto L_003F40F4;
    case 8u: goto L_003F4128;
    case 9u: goto L_003F4150;
    case 10u: goto L_003F4168;
    case 11u: goto L_003F4184;
    case 12u: goto L_003F420C;
    case 13u: goto L_003F4250;
    case 14u: goto L_003F4274;
    case 15u: goto L_003F42A0;
    case 16u: goto L_003F42FC;
    case 17u: goto L_003F430C;
    case 18u: goto L_003F431C;
    case 19u: goto L_003F4328;
    case 20u: goto L_003F434C;
    case 21u: goto L_003F4358;
    case 22u: goto L_003F4368;
    case 23u: goto L_003F4380;
    case 24u: goto L_003F43A4;
    case 25u: goto L_003F43CC;
    case 26u: goto L_003F43E8;
    case 27u: goto L_003F43FC;
    case 28u: goto L_003F4410;
    case 29u: goto L_003F4430;
    case 30u: goto L_003F444C;
    case 31u: goto L_003F4478;
    case 32u: goto L_003F4484;
    case 33u: goto L_003F449C;
    case 34u: goto L_003F44E4;
    case 35u: goto L_003F4534;
    case 36u: goto L_003F4570;
    case 37u: goto L_003F45BC;
    case 38u: goto L_003F45D8;
    case 39u: goto L_003F4620;
    case 40u: goto L_003F463C;
    case 41u: goto L_003F467C;
    case 42u: goto L_003F4698;
    case 43u: goto L_003F47BC;
    case 44u: goto L_003F4898;
    case 45u: goto L_003F493C;
    case 46u: goto L_003F4950;
    case 47u: goto L_003F4970;
    case 48u: goto L_003F4978;
    case 49u: goto L_003F498C;
    case 50u: goto L_003F49C4;
    case 51u: goto L_003F4A20;
    case 52u: goto L_003F4A44;
    case 53u: goto L_003F4A50;
    case 54u: goto L_003F4A68;
    case 55u: goto L_003F4A7C;
    case 56u: goto L_003F4A90;
    case 57u: goto L_003F4AB0;
    case 58u: goto L_003F4ABC;
    case 59u: goto L_003F4AC8;
    case 60u: goto L_003F4AEC;
    case 61u: goto L_003F4AF8;
    case 62u: goto L_003F4B08;
    case 63u: goto L_003F4B20;
    case 64u: goto L_003F4B40;
    case 65u: goto L_003F4B70;
    case 66u: goto L_003F4BA0;
    case 67u: goto L_003F4BC0;
    case 68u: goto L_003F4BD0;
    case 69u: goto L_003F4BEC;
    case 70u: goto L_003F4C30;
    case 71u: goto L_003F4C74;
    case 72u: goto L_003F4C94;
    case 73u: goto L_003F4CA4;
    case 74u: goto L_003F4CC0;
    case 75u: goto L_003F4CE0;
    case 76u: goto L_003F4CF0;
    case 77u: goto L_003F4D0C;
    case 78u: goto L_003F4D38;
    case 79u: goto L_003F4D60;
    case 80u: goto L_003F4DAC;
    case 81u: goto L_003F4DBC;
    case 82u: goto L_003F4DD0;
    case 83u: goto L_003F4DE0;
    case 84u: goto L_003F4E20;
    case 85u: goto L_003F4E40;
    case 86u: goto L_003F4E94;
    case 87u: goto L_003F4EB4;
    case 88u: goto L_003F4EE0;
    case 89u: goto L_003F4EF0;
    case 90u: goto L_003F4EFC;
    case 91u: goto L_003F4F10;
    case 92u: goto L_003F4F24;
    case 93u: goto L_003F4F38;
    case 94u: goto L_003F4F58;
    case 95u: goto L_003F4F68;
    case 96u: goto L_003F4F90;
    case 97u: goto L_003F4FC4;
    case 98u: goto L_003F4FD4;
    case 99u: goto L_003F4FF0;
    case 100u: goto L_003F500C;
    case 101u: goto L_003F5030;
    case 102u: goto L_003F5084;
    case 103u: goto L_003F50A0;
    case 104u: goto L_003F50C0;
    case 105u: goto L_003F5104;
    case 106u: goto L_003F5120;
    case 107u: goto L_003F5140;
    case 108u: goto L_003F5164;
    case 109u: goto L_003F51CC;
    case 110u: goto L_003F51E0;
    case 111u: goto L_003F51EC;
    case 112u: goto L_003F5240;
    case 113u: goto L_003F5288;
    case 114u: goto L_003F529C;
    case 115u: goto L_003F52A8;
    case 116u: goto L_003F52B4;
    case 117u: goto L_003F52BC;
    case 118u: goto L_003F52CC;
    case 119u: goto L_003F52EC;
    case 120u: goto L_003F5300;
    case 121u: goto L_003F530C;
    case 122u: goto L_003F5318;
    case 123u: goto L_003F5320;
    case 124u: goto L_003F5330;
    case 125u: goto L_003F533C;
    case 126u: goto L_003F5344;
    case 127u: goto L_003F5354;
    case 128u: goto L_003F5380;
    case 129u: goto L_003F5394;
    case 130u: goto L_003F53A0;
    case 131u: goto L_003F53AC;
    case 132u: goto L_003F53B4;
    case 133u: goto L_003F53C4;
    case 134u: goto L_003F53E4;
    case 135u: goto L_003F53F8;
    case 136u: goto L_003F5404;
    case 137u: goto L_003F5410;
    case 138u: goto L_003F5418;
    case 139u: goto L_003F5428;
    case 140u: goto L_003F5434;
    case 141u: goto L_003F543C;
    case 142u: goto L_003F544C;
    case 143u: goto L_003F545C;
    case 144u: goto L_003F5480;
    case 145u: goto L_003F5494;
    case 146u: goto L_003F54A0;
    case 147u: goto L_003F54B0;
    case 148u: goto L_003F54C0;
    case 149u: goto L_003F54D0;
    case 150u: goto L_003F54F0;
    case 151u: goto L_003F5510;
    case 152u: goto L_003F5540;
    case 153u: goto L_003F55A0;
    case 154u: goto L_003F55A8;
    case 155u: goto L_003F55F4;
    case 156u: goto L_003F5644;
    case 157u: goto L_003F56A0;
    case 158u: goto L_003F571C;
    case 159u: goto L_003F5754;
    case 160u: goto L_003F57AC;
    case 161u: goto L_003F57D8;
    case 162u: goto L_003F57F4;
    case 163u: goto L_003F5844;
    case 164u: goto L_003F5890;
    case 165u: goto L_003F5930;
    case 166u: goto L_003F594C;
    case 167u: goto L_003F5970;
    case 168u: goto L_003F5994;
    case 169u: goto L_003F59B0;
    case 170u: goto L_003F59C8;
    case 171u: goto L_003F59E0;
    case 172u: goto L_003F5A38;
    case 173u: goto L_003F5A40;
    case 174u: goto L_003F5A4C;
    case 175u: goto L_003F5AAC;
    case 176u: goto L_003F5AE0;
    case 177u: goto L_003F5AF0;
    case 178u: goto L_003F5B90;
    case 179u: goto L_003F5BF0;
    case 180u: goto L_003F5C00;
    case 181u: goto L_003F5C60;
    case 182u: goto L_003F5C8C;
    case 183u: goto L_003F5C9C;
    case 184u: goto L_003F5CB8;
    case 185u: goto L_003F5CCC;
    case 186u: goto L_003F5CDC;
    case 187u: goto L_003F5CF8;
    case 188u: goto L_003F5D08;
    case 189u: goto L_003F5D24;
    case 190u: goto L_003F5D38;
    case 191u: goto L_003F5D48;
    case 192u: goto L_003F5D64;
    case 193u: goto L_003F5D74;
    case 194u: goto L_003F5D90;
    case 195u: goto L_003F5DA8;
    case 196u: goto L_003F5DB8;
    case 197u: goto L_003F5DD0;
    case 198u: goto L_003F5E34;
    case 199u: goto L_003F5E4C;
    case 200u: goto L_003F5E6C;
    case 201u: goto L_003F5E7C;
    case 202u: goto L_003F5E98;
    case 203u: goto L_003F5EAC;
    case 204u: goto L_003F5EBC;
    case 205u: goto L_003F5EE8;
    case 206u: goto L_003F5EF8;
    case 207u: goto L_003F5F18;
    case 208u: goto L_003F5F3C;
    case 209u: goto L_003F5F54;
    case 210u: goto L_003F5F74;
    case 211u: goto L_003F5F84;
    case 212u: goto L_003F5FA0;
    case 213u: goto L_003F5FB4;
    case 214u: goto L_003F5FC4;
    case 215u: goto L_003F5FF0;
    case 216u: goto L_003F6000;
    case 217u: goto L_003F6020;
    case 218u: goto L_003F6044;
    case 219u: goto L_003F605C;
    case 220u: goto L_003F607C;
    case 221u: goto L_003F608C;
    case 222u: goto L_003F60A8;
    case 223u: goto L_003F60BC;
    case 224u: goto L_003F60CC;
    case 225u: goto L_003F60F8;
    case 226u: goto L_003F6108;
    case 227u: goto L_003F6128;
    case 228u: goto L_003F6150;
    case 229u: goto L_003F6198;
    case 230u: goto L_003F61A8;
    case 231u: goto L_003F61C4;
    case 232u: goto L_003F61E4;
    case 233u: goto L_003F61F4;
    case 234u: goto L_003F6210;
    case 235u: goto L_003F6230;
    case 236u: goto L_003F6240;
    case 237u: goto L_003F625C;
    case 238u: goto L_003F6274;
    case 239u: goto L_003F6290;
    case 240u: goto L_003F62C8;
    case 241u: goto L_003F62D8;
    case 242u: goto L_003F62EC;
    case 243u: goto L_003F62FC;
    case 244u: goto L_003F6310;
    case 245u: goto L_003F6320;
    case 246u: goto L_003F6340;
    case 247u: goto L_003F6360;
    case 248u: goto L_003F6380;
    case 249u: goto L_003F63E0;
    case 250u: goto L_003F6414;
    case 251u: goto L_003F6424;
    case 252u: goto L_003F6450;
    case 253u: goto L_003F646C;
    case 254u: goto L_003F64D0;
    case 255u: goto L_003F6540;
    case 256u: goto L_003F6554;
    case 257u: goto L_003F6568;
    case 258u: goto L_003F6578;
    case 259u: goto L_003F6584;
    case 260u: goto L_003F658C;
    case 261u: goto L_003F65B8;
    case 262u: goto L_003F65D4;
    case 263u: goto L_003F6600;
    case 264u: goto L_003F6624;
    case 265u: goto L_003F663C;
    case 266u: goto L_003F6648;
    case 267u: goto L_003F6658;
    case 268u: goto L_003F6678;
    case 269u: goto L_003F668C;
    case 270u: goto L_003F66B0;
    case 271u: goto L_003F66C0;
    case 272u: goto L_003F66EC;
    case 273u: goto L_003F676C;
    case 274u: goto L_003F6794;
    case 275u: goto L_003F67D8;
    case 276u: goto L_003F6820;
    case 277u: goto L_003F684C;
    case 278u: goto L_003F686C;
    case 279u: goto L_003F68BC;
    case 280u: goto L_003F68C8;
    case 281u: goto L_003F6908;
    case 282u: goto L_003F6920;
    case 283u: goto L_003F6940;
    case 284u: goto L_003F6990;
    case 285u: goto L_003F69A4;
    case 286u: goto L_003F69B8;
    case 287u: goto L_003F69E4;
    case 288u: goto L_003F69F8;
    case 289u: goto L_003F6A10;
    case 290u: goto L_003F6A40;
    case 291u: goto L_003F6A78;
    case 292u: goto L_003F6A90;
    case 293u: goto L_003F6AB8;
    case 294u: goto L_003F6AC4;
    case 295u: goto L_003F6ACC;
    case 296u: goto L_003F6AF0;
    case 297u: goto L_003F6B10;
    case 298u: goto L_003F6B44;
    case 299u: goto L_003F6B54;
    case 300u: goto L_003F6B70;
    case 301u: goto L_003F6BF4;
    case 302u: goto L_003F6C20;
    case 303u: goto L_003F6C54;
    case 304u: goto L_003F6C60;
    case 305u: goto L_003F6C98;
    case 306u: goto L_003F6CB0;
    case 307u: goto L_003F6CEC;
    case 308u: goto L_003F6CF8;
    case 309u: goto L_003F6D80;
    case 310u: goto L_003F6D8C;
    case 311u: goto L_003F6D98;
    case 312u: goto L_003F6DA8;
    case 313u: goto L_003F6DF4;
    case 314u: goto L_003F6E00;
    case 315u: goto L_003F6E0C;
    case 316u: goto L_003F6E30;
    case 317u: goto L_003F6EB0;
    case 318u: goto L_003F6EE8;
    case 319u: goto L_003F6F00;
    case 320u: goto L_003F6F10;
    case 321u: goto L_003F6F18;
    case 322u: goto L_003F6F2C;
    case 323u: goto L_003F6F3C;
    case 324u: goto L_003F6F48;
    case 325u: goto L_003F6F5C;
    case 326u: goto L_003F6F64;
    case 327u: goto L_003F6F80;
    case 328u: goto L_003F6F9C;
    case 329u: goto L_003F6FA8;
    case 330u: goto L_003F6FB8;
    case 331u: goto L_003F6FC0;
    case 332u: goto L_003F6FE0;
    case 333u: goto L_003F7018;
    case 334u: goto L_003F7024;
    case 335u: goto L_003F7030;
    case 336u: goto L_003F7050;
    case 337u: goto L_003F7060;
    case 338u: goto L_003F707C;
    case 339u: goto L_003F7090;
    case 340u: goto L_003F70A0;
    case 341u: goto L_003F70B0;
    case 342u: goto L_003F70C4;
    case 343u: goto L_003F70CC;
    case 344u: goto L_003F70D4;
    case 345u: goto L_003F710C;
    case 346u: goto L_003F7130;
    case 347u: goto L_003F7164;
    case 348u: goto L_003F7178;
    case 349u: goto L_003F7198;
    case 350u: goto L_003F71AC;
    case 351u: goto L_003F71C0;
    case 352u: goto L_003F71E0;
    case 353u: goto L_003F71FC;
    case 354u: goto L_003F720C;
    case 355u: goto L_003F7228;
    case 356u: goto L_003F723C;
    case 357u: goto L_003F724C;
    case 358u: goto L_003F7268;
    case 359u: goto L_003F7278;
    case 360u: goto L_003F7294;
    case 361u: goto L_003F72AC;
    case 362u: goto L_003F72D0;
    case 363u: goto L_003F72F8;
    case 364u: goto L_003F7308;
    case 365u: goto L_003F7330;
    case 366u: goto L_003F7340;
    case 367u: goto L_003F735C;
    case 368u: goto L_003F7370;
    case 369u: goto L_003F7380;
    case 370u: goto L_003F73B0;
    case 371u: goto L_003F73FC;
    case 372u: goto L_003F7448;
    case 373u: goto L_003F745C;
    case 374u: goto L_003F7468;
    case 375u: goto L_003F7478;
    case 376u: goto L_003F7488;
    case 377u: goto L_003F74A0;
    case 378u: goto L_003F74B0;
    case 379u: goto L_003F74C0;
    case 380u: goto L_003F74D0;
    case 381u: goto L_003F7504;
    case 382u: goto L_003F7518;
    case 383u: goto L_003F7538;
    case 384u: goto L_003F7550;
    case 385u: goto L_003F7570;
    case 386u: goto L_003F7594;
    case 387u: goto L_003F75B4;
    case 388u: goto L_003F75C8;
    case 389u: goto L_003F75DC;
    case 390u: goto L_003F7600;
    case 391u: goto L_003F7610;
    case 392u: goto L_003F7660;
    case 393u: goto L_003F7674;
    case 394u: goto L_003F76A0;
    case 395u: goto L_003F76B0;
    case 396u: goto L_003F76E4;
    case 397u: goto L_003F76F4;
    case 398u: goto L_003F7788;
    case 399u: goto L_003F77A8;
    case 400u: goto L_003F77DC;
    case 401u: goto L_003F7810;
    case 402u: goto L_003F783C;
    case 403u: goto L_003F7844;
    case 404u: goto L_003F7894;
    case 405u: goto L_003F78D0;
    case 406u: goto L_003F792C;
    case 407u: goto L_003F7950;
    case 408u: goto L_003F79B4;
    case 409u: goto L_003F79DC;
    case 410u: goto L_003F79E4;
    case 411u: goto L_003F7A2C;
    case 412u: goto L_003F7AC0;
    case 413u: goto L_003F7AFC;
    case 414u: goto L_003F7B0C;
    case 415u: goto L_003F7B28;
    case 416u: goto L_003F7B40;
    case 417u: goto L_003F7B64;
    case 418u: goto L_003F7B74;
    case 419u: goto L_003F7BC0;
    case 420u: goto L_003F7C18;
    case 421u: goto L_003F7C38;
    case 422u: goto L_003F7C50;
    case 423u: goto L_003F7C70;
    case 424u: goto L_003F7C80;
    case 425u: goto L_003F7CA8;
    case 426u: goto L_003F7CB4;
    case 427u: goto L_003F7CD8;
    case 428u: goto L_003F7CEC;
    case 429u: goto L_003F7D00;
    case 430u: goto L_003F7D0C;
    case 431u: goto L_003F7D30;
    case 432u: goto L_003F7D44;
    case 433u: goto L_003F7D58;
    case 434u: goto L_003F7D64;
    case 435u: goto L_003F7D88;
    case 436u: goto L_003F7D98;
    case 437u: goto L_003F7DA8;
    case 438u: goto L_003F7DBC;
    case 439u: goto L_003F7DC8;
    case 440u: goto L_003F7DEC;
    case 441u: goto L_003F7E00;
    case 442u: goto L_003F7E14;
    case 443u: goto L_003F7E20;
    case 444u: goto L_003F7E44;
    case 445u: goto L_003F7E54;
    case 446u: goto L_003F7E64;
    case 447u: goto L_003F7E78;
    case 448u: goto L_003F7E84;
    case 449u: goto L_003F7EA8;
    case 450u: goto L_003F7EB8;
    case 451u: goto L_003F7EC8;
    case 452u: goto L_003F7EDC;
    case 453u: goto L_003F7EE8;
    case 454u: goto L_003F7F0C;
    case 455u: goto L_003F7F1C;
    case 456u: goto L_003F7F2C;
    case 457u: goto L_003F7F40;
    case 458u: goto L_003F7F4C;
    case 459u: goto L_003F7F70;
    case 460u: goto L_003F7F84;
    case 461u: goto L_003F7F98;
    case 462u: goto L_003F7FA4;
    case 463u: goto L_003F7FC8;
    case 464u: goto L_003F7FDC;
    case 465u: goto L_003F7FF0;
    case 466u: goto L_003F7FFC;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4010u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F4010u) [[unlikely]] return; }
L_003F4010:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F401Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F401Cu) [[unlikely]] return; }
L_003F401C:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F402Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F402Cu) [[unlikely]] return; }
L_003F402C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4048u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F4048u) [[unlikely]] return; }
L_003F4048:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40D8u); st32((c.r[2].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F40D8u) [[unlikely]] return; }
L_003F40D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40F4u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F40F4u) [[unlikely]] return; }
L_003F40F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4128u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003F4128u) [[unlikely]] return; }
L_003F4128:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4150u); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003F4150u) [[unlikely]] return; }
L_003F4150:
    set32(c.r[3], 0u + 4u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4168u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F4168u) [[unlikely]] return; }
L_003F4168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4184u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F4184u) [[unlikely]] return; }
L_003F4184:
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F420Cu); st32((c.r[2].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F420Cu) [[unlikely]] return; }
L_003F420C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));  goto L_003F4258; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[19].d[0]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4250u); st64((c.r[29].w[0] + 24u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0088(c, 90u, depth + 1u); else { c.pc = 0x00320B00u; return; } if (c.pc != 0x003F4250u) [[unlikely]] return; }
L_003F4250:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));
    c.budget -= 2;
L_003F4258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4274u); st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F4274u) [[unlikely]] return; }
L_003F4274:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F42A0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F42FCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F42FCu) [[unlikely]] return; }
L_003F42FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F430Cu); st32((c.r[29].w[0] + 460u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F430Cu) [[unlikely]] return; }
L_003F430C:
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F431Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 356u, depth + 1u); else { c.pc = 0x003F2B40u; return; } if (c.pc != 0x003F431Cu) [[unlikely]] return; }
L_003F431C:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 492u), c.r[2].w[0]);  if (t) { goto L_003F4368; } }
L_003F4328:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 492u)));  goto L_003F435C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F4350; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F434C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F434Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 167u, depth + 1u); else { c.pc = 0x003F5970u; return; } if (c.pc != 0x003F434Cu) [[unlikely]] return; }
L_003F434C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F4350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4358u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F4358u) [[unlikely]] return; }
L_003F4358:
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 1;
L_003F435C:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4368u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003F4368u) [[unlikely]] return; }
L_003F4368:
    set32(c.r[3], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[2], c.r[20].w[0] + 68u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4328u | kUnwind; return; } goto L_003F4328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4380u); set32(c.r[4], c.r[20].w[0] + 56u);  if (depth < kMaxDepth) unit_00BD(c, 149u, depth + 1u); else { c.pc = 0x003F54D0u; return; } if (c.pc != 0x003F4380u) [[unlikely]] return; }
L_003F4380:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 5;
    if (c.r[22].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003F4938; }
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_003F4924; } }
L_003F43A4:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43CCu); st32((c.r[29].w[0] + 480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F43CCu) [[unlikely]] return; }
L_003F43CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F4420; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F4410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F43E8u) [[unlikely]] return; }
L_003F43E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F4400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43FCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F43FCu) [[unlikely]] return; }
L_003F43FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F4400:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_003F4414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4410u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F4410u) [[unlikely]] return; }
L_003F4410:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F4414:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 3;
L_003F4420:
    set32(c.r[4], c.r[29].w[0] + 476u);
    set32(c.r[5], c.r[20].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4430u); set32(c.r[6], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_00BD(c, 110u, depth + 1u); else { c.pc = 0x003F51E0u; return; } if (c.pc != 0x003F4430u) [[unlikely]] return; }
L_003F4430:
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], c.r[20].w[0] + 68u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  goto L_003F4454; }
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F444Cu); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_00BD(c, 107u, depth + 1u); else { c.pc = 0x003F5140u; return; } if (c.pc != 0x003F444Cu) [[unlikely]] return; }
L_003F444C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_003F4494; } }
L_003F4454:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 476u)));  goto L_003F4488; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003F447C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F4478; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 167u, depth + 1u); else { c.pc = 0x003F5970u; return; } if (c.pc != 0x003F4478u) [[unlikely]] return; }
L_003F4478:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F447C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4484u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F4484u) [[unlikely]] return; }
L_003F4484:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 1;
L_003F4488:
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 3;
L_003F4494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F490C; } }
L_003F449C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003F490C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[22] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44E4u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x003F44E4u) [[unlikely]] return; }
L_003F44E4:
    c.f[1] = ld32((c.r[23].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = 0u;
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003F4524; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.f[20] = c.r[2].w[0];
    c.budget -= 7;
L_003F4524:
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[5], c.r[29].w[0] + 488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4534u); set32(c.r[6], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_00D9(c, 95u, depth + 1u); else { c.pc = 0x00464CE0u; return; } if (c.pc != 0x003F4534u) [[unlikely]] return; }
L_003F4534:
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[22] = fp::mul(c.f[21], c.f[22]);  goto L_003F48CC; }
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4564; } }
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003F4564:
    c.f[22] = fp::mul(c.f[21], c.f[22]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F48CC; } }
L_003F4570:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F4590; } }
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4590; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003F4590:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 480u)));  goto L_003F45A4; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = fp::add(c.f[20], c.f[21]);  goto L_003F489C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 1;
L_003F45A4:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F45BCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x003F45BCu) [[unlikely]] return; }
L_003F45BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 472u);
    set32(c.r[7], c.r[29].w[0] + 468u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F45D8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x003F45D8u) [[unlikely]] return; }
L_003F45D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.f[29] = 0u;
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[29]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_003F4618; }
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[20], c.f[2]);
    fpu_div(c, 29u, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_003F4618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4620u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x003F4620u) [[unlikely]] return; }
L_003F4620:
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.f[25] = ld32((c.r[2].w[0]));
    c.f[23] = ld32((c.r[2].w[0] + 4u));
    c.f[24] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F463Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x003F463Cu) [[unlikely]] return; }
L_003F463C:
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 472u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], 0u + 7u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[25]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = fp::sub(c.f[1], c.f[23]);
    c.f[0] = fp::sub(c.f[0], c.f[24]);
    c.f[2] = fp::mul(c.f[2], c.f[29]);
    c.f[1] = fp::mul(c.f[1], c.f[29]);
    c.f[0] = fp::mul(c.f[0], c.f[29]);
    c.f[28] = fp::add(c.f[25], c.f[2]);
    c.f[27] = fp::add(c.f[23], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F467Cu); c.f[26] = fp::add(c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x003F467Cu) [[unlikely]] return; }
L_003F467C:
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.f[23] = ld32((c.r[2].w[0]));
    c.f[24] = ld32((c.r[2].w[0] + 4u));
    c.f[25] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4698u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x003F4698u) [[unlikely]] return; }
L_003F4698:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[23]);
    c.f[2] = fp::mul(c.f[2], c.f[29]);
    c.f[1] = fp::sub(c.f[1], c.f[24]);
    c.f[0] = fp::sub(c.f[0], c.f[25]);
    c.f[1] = fp::mul(c.f[1], c.f[29]);
    c.f[3] = fp::add(c.f[23], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[29]);
    c.f[2] = fp::add(c.f[24], c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.f[23] = fp::add(c.f[25], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    c.f[24] = fp::add(c.f[2], c.f[1]);
    c.f[27] = fp::add(c.f[27], c.f[1]);
    c.f[25] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[21].d[0] == 0ull; c.f[28] = fp::add(c.f[28], c.f[0]);  if (t) { goto L_003F46F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[13] = fp::sub(c.f[0], c.f[20]);  if (t) { goto L_003F46F8; } }
L_003F46F4:
    c.f[13] = c.f[20];
    c.budget -= 1;
L_003F46F8:
    c.f[8] = ld32((c.r[29].w[0] + 304u));
    c.f[11] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = 0u;
    c.f[10] = ld32((c.r[29].w[0] + 272u));
    c.f[9] = ld32((c.r[29].w[0] + 288u));
    c.f[7] = ld32((c.r[29].w[0] + 260u));
    c.f[6] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = ld32((c.r[29].w[0] + 292u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[28], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[26], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[28], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[26], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[28], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[26], c.f[1]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 440u), c.f[8]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 444u), c.f[4]);
    set32(c.r[7], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = ld32((c.r[29].w[0] + 444u));
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    st32((c.r[29].w[0] + 408u), c.f[2]);
    st32((c.r[29].w[0] + 412u), c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 408u));
    c.f[1] = ld32((c.r[29].w[0] + 412u));
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[29].w[0] + 252u), c.f[13]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 152u, depth + 1u); else { c.pc = 0x003F5540u; return; } if (c.pc != 0x003F47BCu) [[unlikely]] return; }
L_003F47BC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[13] = c.f[20];  goto L_003F47D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
L_003F47D4:
    c.f[8] = ld32((c.r[29].w[0] + 304u));
    c.f[11] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = 0u;
    c.f[10] = ld32((c.r[29].w[0] + 272u));
    c.f[9] = ld32((c.r[29].w[0] + 288u));
    c.f[7] = ld32((c.r[29].w[0] + 260u));
    c.f[6] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = ld32((c.r[29].w[0] + 292u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[23], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[23], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[1]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 424u), c.f[8]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 428u), c.f[4]);
    set32(c.r[7], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 424u));
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 392u), c.f[2]);
    st32((c.r[29].w[0] + 396u), c.f[1]);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 392u));
    c.f[1] = ld32((c.r[29].w[0] + 396u));
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[29].w[0] + 236u), c.f[13]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4898u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 152u, depth + 1u); else { c.pc = 0x003F5540u; return; } if (c.pc != 0x003F4898u) [[unlikely]] return; }
L_003F4898:
    c.f[1] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_003F489C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4908; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[0]));
    fpu_div(c, 0u, c.f[22], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
L_003F48CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F48E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F48E4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 488u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4570u | kUnwind; return; } goto L_003F4570; }
L_003F4908:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003F490C:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F449Cu | kUnwind; return; } goto L_003F449C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003F4924:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F43A4u | kUnwind; return; } goto L_003F43A4; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F4938:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_003F493C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4950u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 413u, depth + 1u); else { c.pc = 0x003F3150u; return; } if (c.pc != 0x003F4950u) [[unlikely]] return; }
L_003F4950:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(90ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F493Cu | kUnwind; return; } goto L_003F493C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4970u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x003F4970u) [[unlikely]] return; }
L_003F4970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4978u); set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003F4978u) [[unlikely]] return; }
L_003F4978:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F498Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F498Cu) [[unlikely]] return; }
L_003F498C:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 456u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F49C4u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F49C4u) [[unlikely]] return; }
L_003F49C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003F4A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F4B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 356u, depth + 1u); else { c.pc = 0x003F2B40u; return; } if (c.pc != 0x003F4A44u) [[unlikely]] return; }
L_003F4A44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 356u, depth + 1u); else { c.pc = 0x003F2B40u; return; } if (c.pc != 0x003F4A50u) [[unlikely]] return; }
L_003F4A50:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A68u); set32(c.r[4], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4A68u) [[unlikely]] return; }
L_003F4A68:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_003F4AB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4A7Cu) [[unlikely]] return; }
L_003F4A7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A90u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4A90u) [[unlikely]] return; }
L_003F4A90:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4AB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4AB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4AB0u) [[unlikely]] return; }
L_003F4AB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_003F4AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4ABCu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003F4ABCu) [[unlikely]] return; }
L_003F4ABC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003F4B08; } }
L_003F4AC8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_003F4AFC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F4AF0; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F4AEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4AECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 167u, depth + 1u); else { c.pc = 0x003F5970u; return; } if (c.pc != 0x003F4AECu) [[unlikely]] return; }
L_003F4AEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F4AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4AF8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F4AF8u) [[unlikely]] return; }
L_003F4AF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_003F4AFC:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B08u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003F4B08u) [[unlikely]] return; }
L_003F4B08:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 68u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4AC8u | kUnwind; return; } goto L_003F4AC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B20u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_00BD(c, 149u, depth + 1u); else { c.pc = 0x003F54D0u; return; } if (c.pc != 0x003F4B20u) [[unlikely]] return; }
L_003F4B20:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F4B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 51u, depth + 1u); else { c.pc = 0x003F4A20u; return; } if (c.pc != 0x003F4B70u) [[unlikely]] return; }
L_003F4B70:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 48u);  goto L_003F4BA4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F4BA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F4BA0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F4BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BA0u);  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F4BA0u) [[unlikely]] return; }
L_003F4BA0:
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_003F4BA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 32u);  goto L_003F4BF0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F4BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4BC0u) [[unlikely]] return; }
L_003F4BC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4BD0u) [[unlikely]] return; }
L_003F4BD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4BEC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4BECu) [[unlikely]] return; }
L_003F4BEC:
    set32(c.r[3], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_003F4BF0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 16u);  goto L_003F4C34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23376u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003F4C30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F4C30u) [[unlikely]] return; }
L_003F4C30:
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_003F4C34:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_003F4C78; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23376u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003F4C74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C74u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F4C74u) [[unlikely]] return; }
L_003F4C74:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003F4C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_003F4CC4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F4CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4C94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4C94u) [[unlikely]] return; }
L_003F4C94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CA4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4CA4u) [[unlikely]] return; }
L_003F4CA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4CC0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4CC0u) [[unlikely]] return; }
L_003F4CC0:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003F4CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F4D0C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F4D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4CE0u) [[unlikely]] return; }
L_003F4CE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CF0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4CF0u) [[unlikely]] return; }
L_003F4CF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4D0C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4D0Cu) [[unlikely]] return; }
L_003F4D0C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F4D24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003F4D24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F4D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F4D38u) [[unlikely]] return; }
L_003F4D38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F4D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F4D60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23328u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_003F4DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4DACu) [[unlikely]] return; }
L_003F4DAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4DBCu) [[unlikely]] return; }
L_003F4DBC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_003F4DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4DD0u) [[unlikely]] return; }
L_003F4DD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DE0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4DE0u) [[unlikely]] return; }
L_003F4DE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 23360u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[19].w[0] + 24u));
    c.budget -= 12;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[19].w[0] + 16u);  if (t) { goto L_003F4E48; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E20u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F4E20u) [[unlikely]] return; }
L_003F4E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13984u);
    set32(c.r[6], c.r[6].w[0] + 9200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E40u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F4E40u) [[unlikely]] return; }
L_003F4E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003F4E4C; } }
L_003F4E48:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F4E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23376u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[19].w[0] + 40u));
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[19].w[0] + 32u);  if (t) { goto L_003F4EBC; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E94u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F4E94u) [[unlikely]] return; }
L_003F4E94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13984u);
    set32(c.r[6], c.r[6].w[0] + 9200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EB4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F4EB4u) [[unlikely]] return; }
L_003F4EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003F4EC0; } }
L_003F4EBC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F4EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 23376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 48u), 0u);  if (t) { goto L_003F4EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4EE0u) [[unlikely]] return; }
L_003F4EE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4EF0u) [[unlikely]] return; }
L_003F4EF0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EFCu); st32((c.r[19].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F4EFCu) [[unlikely]] return; }
L_003F4EFC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + 56u);  if (t) { goto L_003F4F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F4F10u) [[unlikely]] return; }
L_003F4F10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F4F28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F24u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F4F24u) [[unlikely]] return; }
L_003F4F24:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F4F28:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  goto L_003F4F3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F38u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F4F38u) [[unlikely]] return; }
L_003F4F38:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_003F4F3C:
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 92u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F58u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BD(c, 151u, depth + 1u); else { c.pc = 0x003F5510u; return; } if (c.pc != 0x003F4F58u) [[unlikely]] return; }
L_003F4F58:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F68u); st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BC(c, 326u, depth + 1u); else { c.pc = 0x003F2850u; return; } if (c.pc != 0x003F4F68u) [[unlikely]] return; }
L_003F4F68:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F4F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F500C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003F4FF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F4FC4u) [[unlikely]] return; }
L_003F4FC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FD4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F4FD4u) [[unlikely]] return; }
L_003F4FD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4FF0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F4FF0u) [[unlikely]] return; }
L_003F4FF0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003F4FF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F5010; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F500Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F500Cu) [[unlikely]] return; }
L_003F500C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F5010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F50A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23376u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F5084; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5084u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F5084u) [[unlikely]] return; }
L_003F5084:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F50A4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F50A0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F50A0u) [[unlikely]] return; }
L_003F50A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F50A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F50C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F5120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5104u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F5104u) [[unlikely]] return; }
L_003F5104:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5124; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5120u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F5120u) [[unlikely]] return; }
L_003F5120:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F5124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F5190; } }
L_003F5164:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F5180; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F5190; } }
L_003F5180:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003F5190:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5164u | kUnwind; return; } goto L_003F5164; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003F51B8; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_003F51D0; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_003F51B8:
    set32(c.r[8], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F51CCu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 171u, depth + 1u); else { c.pc = 0x003F59E0u; return; } if (c.pc != 0x003F51CCu) [[unlikely]] return; }
L_003F51CC:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003F51D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F51E0:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_003F5204; } }
L_003F51EC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_003F5204; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_003F5204:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F51ECu | kUnwind; return; } goto L_003F51EC; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_003F5230; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_003F5234; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_003F5230:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003F5234:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F5354; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003F52D0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003F528C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5288u);  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F5288u) [[unlikely]] return; }
L_003F5288:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003F528C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F52A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F529Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F529Cu) [[unlikely]] return; }
L_003F529C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F52A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52A8u);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F52A8u) [[unlikely]] return; }
L_003F52A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52B4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BD(c, 147u, depth + 1u); else { c.pc = 0x003F54B0u; return; } if (c.pc != 0x003F52B4u) [[unlikely]] return; }
L_003F52B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F52BCu) [[unlikely]] return; }
L_003F52BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 144u, depth + 1u); else { c.pc = 0x003F5480u; return; } if (c.pc != 0x003F52CCu) [[unlikely]] return; }
L_003F52CC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003F52D0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5334; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003F52F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F52ECu) [[unlikely]] return; }
L_003F52EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003F52F0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F5300u) [[unlikely]] return; }
L_003F5300:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F5304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F530Cu);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F530Cu) [[unlikely]] return; }
L_003F530C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5318u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BD(c, 147u, depth + 1u); else { c.pc = 0x003F54B0u; return; } if (c.pc != 0x003F5318u) [[unlikely]] return; }
L_003F5318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F5320u) [[unlikely]] return; }
L_003F5320:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5330u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 144u, depth + 1u); else { c.pc = 0x003F5480u; return; } if (c.pc != 0x003F5330u) [[unlikely]] return; }
L_003F5330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F5334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F533Cu);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F533Cu) [[unlikely]] return; }
L_003F533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5344u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F5344u) [[unlikely]] return; }
L_003F5344:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003F5358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5354u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F5354u) [[unlikely]] return; }
L_003F5354:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F5358:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F544C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003F53C8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003F5384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F5380u) [[unlikely]] return; }
L_003F5380:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003F5384:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F5398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F5394u) [[unlikely]] return; }
L_003F5394:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F5398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53A0u);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F53A0u) [[unlikely]] return; }
L_003F53A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53ACu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BD(c, 147u, depth + 1u); else { c.pc = 0x003F54B0u; return; } if (c.pc != 0x003F53ACu) [[unlikely]] return; }
L_003F53AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F53B4u) [[unlikely]] return; }
L_003F53B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 144u, depth + 1u); else { c.pc = 0x003F5480u; return; } if (c.pc != 0x003F53C4u) [[unlikely]] return; }
L_003F53C4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003F53C8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F542C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003F53E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F53E4u) [[unlikely]] return; }
L_003F53E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003F53E8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F53FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F53F8u) [[unlikely]] return; }
L_003F53F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F53FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5404u);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F5404u) [[unlikely]] return; }
L_003F5404:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5410u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BD(c, 147u, depth + 1u); else { c.pc = 0x003F54B0u; return; } if (c.pc != 0x003F5410u) [[unlikely]] return; }
L_003F5410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F5418u) [[unlikely]] return; }
L_003F5418:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5428u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 144u, depth + 1u); else { c.pc = 0x003F5480u; return; } if (c.pc != 0x003F5428u) [[unlikely]] return; }
L_003F5428:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F542C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5434u);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x003F54C0u; return; } if (c.pc != 0x003F5434u) [[unlikely]] return; }
L_003F5434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F543Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 146u, depth + 1u); else { c.pc = 0x003F54A0u; return; } if (c.pc != 0x003F543Cu) [[unlikely]] return; }
L_003F543C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F544C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F544Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F544Cu) [[unlikely]] return; }
L_003F544C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003F5460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F545Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F545Cu) [[unlikely]] return; }
L_003F545C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003F5460:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F5480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F5494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5494u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F5494u) [[unlikely]] return; }
L_003F5494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F54A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003F54B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F54C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003F54D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54F0u);  if (depth < kMaxDepth) unit_00BD(c, 112u, depth + 1u); else { c.pc = 0x003F5240u; return; } if (c.pc != 0x003F54F0u) [[unlikely]] return; }
L_003F54F0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003F5500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F5510:
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
L_003F5540:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F594C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_003F55AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55A0u); set32(c.r[5], c.r[5].w[0] - 7362u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003F55A0u) [[unlikely]] return; }
L_003F55A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55A8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003F55A8u) [[unlikely]] return; }
L_003F55A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_003F55AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_003F5788; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_003F55E0; } }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_003F55E0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 4);  goto L_003F5694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F5630; } }
L_003F55F4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003F5620; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003F5620:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003F5630:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F55F4u | kUnwind; return; } goto L_003F55F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F5680; } }
L_003F5644:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003F5670; }
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003F5670:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003F5680:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5644u | kUnwind; return; } goto L_003F5644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F574C; } }
L_003F5694:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_003F56DC; } }
L_003F56A0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003F56CC; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003F56CC:
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003F56DC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F56A0u | kUnwind; return; } goto L_003F56A0; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] + c.r[4].w[0]);  goto L_003F5740; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5710; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_003F5710:
    set32(c.r[3], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5740; } }
L_003F571C:
    set32(c.r[6], c.r[6].w[0] - 16u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[6].w[0]), c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_003F5740:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F571Cu | kUnwind; return; } goto L_003F571C; }
L_003F574C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5778; } }
L_003F5754:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 9;
L_003F5778:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[2] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5754u | kUnwind; return; } goto L_003F5754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003F5950; } }
L_003F5788:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_003F57A4; }
L_003F57A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F57C0; } }
L_003F57AC:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003F57C0; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003F57C0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F57ACu | kUnwind; return; } goto L_003F57AC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F57D8u); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003F57D8u) [[unlikely]] return; }
L_003F57D8:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_003F5830; } }
L_003F57F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003F5820; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003F5820:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003F5830:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F57F4u | kUnwind; return; } goto L_003F57F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5880; } }
L_003F5844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003F5870; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003F5870:
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003F5880:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5844u | kUnwind; return; } goto L_003F5844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003F58D0; } }
L_003F5890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003F58BC; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003F58BC:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003F58D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5890u | kUnwind; return; } goto L_003F5890; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_003F5928; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_003F5928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5930u);  if (depth < kMaxDepth) unit_00BD(c, 176u, depth + 1u); else { c.pc = 0x003F5AE0u; return; } if (c.pc != 0x003F5930u) [[unlikely]] return; }
L_003F5930:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F594C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F594C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F594Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F594Cu) [[unlikely]] return; }
L_003F594C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003F5950:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F5970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F59C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5994u);  if (depth < kMaxDepth) unit_00BD(c, 176u, depth + 1u); else { c.pc = 0x003F5AE0u; return; } if (c.pc != 0x003F5994u) [[unlikely]] return; }
L_003F5994:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F59B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F59B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F59B0u) [[unlikely]] return; }
L_003F59B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F59B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F59CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F59C8u) [[unlikely]] return; }
L_003F59C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F59CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F59E0:
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F5A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A38u); set32(c.r[5], c.r[5].w[0] - 7333u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003F5A38u) [[unlikely]] return; }
L_003F5A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A40u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003F5A40u) [[unlikely]] return; }
L_003F5A40:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A4Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003F5A4Cu) [[unlikely]] return; }
L_003F5A4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003F5A70; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_003F5A70:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003F5A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_003F5A94; } }
L_003F5A90:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003F5A94:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5AACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003F5AACu) [[unlikely]] return; }
L_003F5AAC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F5ABC; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F5ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F5AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003F5AF0:
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_003F5B88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_003F5B44; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5B88; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F5B88; } }
L_003F5B44:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5B88; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  goto L_003F5B74; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
L_003F5B74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5B88; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F5B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_003F5BB4; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
L_003F5BB4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_003F5BCC; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
L_003F5BCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5BE0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F5BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_003F5C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 12u)));  goto L_003F5C24; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
L_003F5C24:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_003F5C3C; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
L_003F5C3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5C50; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F5C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5CDC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003F5CBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5C8Cu) [[unlikely]] return; }
L_003F5C8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C9Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5C9Cu) [[unlikely]] return; }
L_003F5C9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5CB8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5CB8u) [[unlikely]] return; }
L_003F5CB8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5CBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003F5CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5CCCu) [[unlikely]] return; }
L_003F5CCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CDCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5CDCu) [[unlikely]] return; }
L_003F5CDC:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 16u)));  goto L_003F5D4C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003F5D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5CF8u) [[unlikely]] return; }
L_003F5CF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D08u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5D08u) [[unlikely]] return; }
L_003F5D08:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5D24; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5D24u) [[unlikely]] return; }
L_003F5D24:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5D28:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003F5D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5D38u) [[unlikely]] return; }
L_003F5D38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D48u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5D48u) [[unlikely]] return; }
L_003F5D48:
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_003F5D4C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F5DBC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_003F5D94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5D64u) [[unlikely]] return; }
L_003F5D64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D74u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5D74u) [[unlikely]] return; }
L_003F5D74:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5D90; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5D90u) [[unlikely]] return; }
L_003F5D90:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_003F5D94:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F5DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5DA8u) [[unlikely]] return; }
L_003F5DA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DB8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5DB8u) [[unlikely]] return; }
L_003F5DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F5DBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5DD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5E04; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003F5E08; } }
L_003F5E04:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5E08:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003F612C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7296u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F5E2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F5E34; } }
L_003F5E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F5E34u) [[unlikely]] return; }
L_003F5E34:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E4Cu); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5E4Cu) [[unlikely]] return; }
L_003F5E4C:
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_003F5EBC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  goto L_003F5E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5E6Cu) [[unlikely]] return; }
L_003F5E6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E7Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5E7Cu) [[unlikely]] return; }
L_003F5E7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F5E98; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5E98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5E98u) [[unlikely]] return; }
L_003F5E98:
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_003F5E9C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F5EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5EACu) [[unlikely]] return; }
L_003F5EAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EBCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5EBCu) [[unlikely]] return; }
L_003F5EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F5F18; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EE8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5EE8u) [[unlikely]] return; }
L_003F5EE8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EF8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5EF8u) [[unlikely]] return; }
L_003F5EF8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F5F18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F18u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F5F18u) [[unlikely]] return; }
L_003F5F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7279u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F5F34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F5F3C; } }
L_003F5F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F3Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F5F3Cu) [[unlikely]] return; }
L_003F5F3C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F54u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5F54u) [[unlikely]] return; }
L_003F5F54:
    set32(c.r[19], ld32((c.r[17].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_003F5FC4; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  goto L_003F5FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5F74u) [[unlikely]] return; }
L_003F5F74:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F84u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5F84u) [[unlikely]] return; }
L_003F5F84:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F5FA0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F5FA0u) [[unlikely]] return; }
L_003F5FA0:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 1;
L_003F5FA4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F5FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5FB4u) [[unlikely]] return; }
L_003F5FB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FC4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F5FC4u) [[unlikely]] return; }
L_003F5FC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F6020; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5FF0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F5FF0u) [[unlikely]] return; }
L_003F5FF0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6000u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F6000u) [[unlikely]] return; }
L_003F6000:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F6020; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6020u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F6020u) [[unlikely]] return; }
L_003F6020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7260u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F603C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F6044; } }
L_003F603C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6044u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F6044u) [[unlikely]] return; }
L_003F6044:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F605Cu); set32(c.r[5], c.r[29].w[0] + 84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F605Cu) [[unlikely]] return; }
L_003F605C:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_003F60CC; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_003F60AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F607Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F607Cu) [[unlikely]] return; }
L_003F607C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F608Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F608Cu) [[unlikely]] return; }
L_003F608C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F60A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F60A8u) [[unlikely]] return; }
L_003F60A8:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_003F60AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F60CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F60BCu) [[unlikely]] return; }
L_003F60BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F60CCu) [[unlikely]] return; }
L_003F60CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6128; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60F8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F60F8u) [[unlikely]] return; }
L_003F60F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6108u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F6108u) [[unlikely]] return; }
L_003F6108:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F6128; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6128u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F6128u) [[unlikely]] return; }
L_003F6128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003F612C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F6150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6274; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 23392u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003F61C4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_003F61C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6198u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F6198u) [[unlikely]] return; }
L_003F6198:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F61A8u) [[unlikely]] return; }
L_003F61A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F61C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F61C4u) [[unlikely]] return; }
L_003F61C4:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003F61C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_003F6214; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F6210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F61E4u) [[unlikely]] return; }
L_003F61E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61F4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F61F4u) [[unlikely]] return; }
L_003F61F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F6210; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6210u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F6210u) [[unlikely]] return; }
L_003F6210:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003F6214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F6260; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F625C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6230u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F6230u) [[unlikely]] return; }
L_003F6230:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6240u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F6240u) [[unlikely]] return; }
L_003F6240:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F625C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F625Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F625Cu) [[unlikely]] return; }
L_003F625C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F6260:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F6278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F6274u) [[unlikely]] return; }
L_003F6274:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F6278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23392u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003F62D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F62C8u) [[unlikely]] return; }
L_003F62C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62D8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F62D8u) [[unlikely]] return; }
L_003F62D8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003F62FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F62ECu) [[unlikely]] return; }
L_003F62EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F62FCu) [[unlikely]] return; }
L_003F62FC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_003F6320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6310u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F6310u) [[unlikely]] return; }
L_003F6310:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6320u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F6320u) [[unlikely]] return; }
L_003F6320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6398; } }
L_003F6360:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], 0u - 1u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 346u, depth + 1u); else { c.pc = 0x003F7130u; return; } if (c.pc != 0x003F6380u) [[unlikely]] return; }
L_003F6380:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 6;
L_003F6398:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6360u | kUnwind; return; } goto L_003F6360; }
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F63E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.f[20] = c.f[12];
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003F648C; } }
L_003F6414:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6424u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00BD(c, 306u, depth + 1u); else { c.pc = 0x003F6CB0u; return; } if (c.pc != 0x003F6424u) [[unlikely]] return; }
L_003F6424:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003F6484; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], 0u - 1u);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6450u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 346u, depth + 1u); else { c.pc = 0x003F7130u; return; } if (c.pc != 0x003F6450u) [[unlikely]] return; }
L_003F6450:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F646Cu); st32((c.r[17].w[0] + 36u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F646Cu) [[unlikely]] return; }
L_003F646C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003F648C; } }
L_003F6484:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003F648C:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6414u | kUnwind; return; } goto L_003F6414; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F64D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6540u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F6540u) [[unlikely]] return; }
L_003F6540:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F6558; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6554u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F6554u) [[unlikely]] return; }
L_003F6554:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F6558:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  goto L_003F656C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6568u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F6568u) [[unlikely]] return; }
L_003F6568:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 1;
L_003F656C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6578u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x003F6578u) [[unlikely]] return; }
L_003F6578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6584u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C9(c, 247u, depth + 1u); else { c.pc = 0x00425C10u; return; } if (c.pc != 0x003F6584u) [[unlikely]] return; }
L_003F6584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_003F67A0; } }
L_003F658C:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 36u)));  goto L_003F65D8; }
    set32(c.r[22], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 346u, depth + 1u); else { c.pc = 0x003F7130u; return; } if (c.pc != 0x003F65B8u) [[unlikely]] return; }
L_003F65B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[5].d[0] = c.r[22].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[21].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65D4u); st32((c.r[21].w[0] + 36u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F65D4u) [[unlikely]] return; }
L_003F65D4:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 1;
L_003F65D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 52u)));  goto L_003F6604; }
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  goto L_003F65F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F6628; } }
L_003F65F4:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6600u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 297u, depth + 1u); else { c.pc = 0x003F6B10u; return; } if (c.pc != 0x003F6600u) [[unlikely]] return; }
L_003F6600:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 1;
L_003F6604:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[21].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003F6628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6624u);  if (depth < kMaxDepth) unit_00BD(c, 362u, depth + 1u); else { c.pc = 0x003F72D0u; return; } if (c.pc != 0x003F6624u) [[unlikely]] return; }
L_003F6624:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F6628:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F663Cu); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BD(c, 332u, depth + 1u); else { c.pc = 0x003F6FE0u; return; } if (c.pc != 0x003F663Cu) [[unlikely]] return; }
L_003F663C:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6648u); set32(c.r[4], ld32((c.r[29].w[0] + 212u)));  if (depth < kMaxDepth) unit_00BD(c, 327u, depth + 1u); else { c.pc = 0x003F6F80u; return; } if (c.pc != 0x003F6648u) [[unlikely]] return; }
L_003F6648:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6658u); set32(c.r[4], ld32((c.r[29].w[0] + 212u)));  if (depth < kMaxDepth) unit_00BD(c, 317u, depth + 1u); else { c.pc = 0x003F6EB0u; return; } if (c.pc != 0x003F6658u) [[unlikely]] return; }
L_003F6658:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 212u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6678u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F6678u) [[unlikely]] return; }
L_003F6678:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_003F6690; }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F668Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 302u, depth + 1u); else { c.pc = 0x003F6C20u; return; } if (c.pc != 0x003F668Cu) [[unlikely]] return; }
L_003F668C:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 1;
L_003F6690:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[2].w[0] + 28u), c.f[23]);  if (t) { goto L_003F66B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66B0u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x003F66B0u) [[unlikely]] return; }
L_003F66B0:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.f[2] = ld32((c.r[19].w[0]));  goto L_003F6774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66C0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003F66C0u) [[unlikely]] return; }
L_003F66C0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66ECu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003F66ECu) [[unlikely]] return; }
L_003F66EC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = c.r[6].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[7] = fp::mul(c.f[0], c.f[1]);
    c.f[5] = c.r[2].w[0];
    c.f[4] = 0u;
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[6] = c.r[3].w[0];
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[20]));
    c.facc = fp::add(c.f[4], c.f[1]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[12] = fp::mul(c.f[22], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[13] = fp::mul(c.f[2], c.f[22]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F676Cu); c.f[14] = fp::mul(c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x003F676Cu) [[unlikely]] return; }
L_003F676C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 32;  if (t) { goto L_003F6798; } }
L_003F6774:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = fp::mul(c.f[2], c.f[22]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.f[13] = fp::mul(c.f[1], c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6794u); c.f[14] = fp::mul(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x003F6794u) [[unlikely]] return; }
L_003F6794:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003F6798:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_003F67A0:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F658Cu | kUnwind; return; } goto L_003F658C; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 204u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 200u);
    set32(c.r[7], c.r[29].w[0] + 196u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67D8u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003F67D8u) [[unlikely]] return; }
L_003F67D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003F6820:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_003F6884; } }
L_003F684C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], 0u - 1u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F686Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 346u, depth + 1u); else { c.pc = 0x003F7130u; return; } if (c.pc != 0x003F686Cu) [[unlikely]] return; }
L_003F686C:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 6;
L_003F6884:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F684Cu | kUnwind; return; } goto L_003F684C; }
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68BCu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x003F68BCu) [[unlikely]] return; }
L_003F68BC:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BD(c, 292u, depth + 1u); else { c.pc = 0x003F6A90u; return; } if (c.pc != 0x003F68C8u) [[unlikely]] return; }
L_003F68C8:
    set32(c.r[2], c.r[18].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_003F690C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6908u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F6908u) [[unlikely]] return; }
L_003F6908:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_003F690C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003F6924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F6920u) [[unlikely]] return; }
L_003F6920:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003F6924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F6940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 1u);
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
    st32((c.r[4].w[0]), c.r[20].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[21].w[0] + 16u);  if (t) { goto L_003F69B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F6990u) [[unlikely]] return; }
L_003F6990:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F69A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69A4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F69A4u) [[unlikely]] return; }
L_003F69A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F69A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003F69BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69B8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F69B8u) [[unlikely]] return; }
L_003F69B8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F69BC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], c.r[21].w[0] + 32u);
    set32(c.r[5], 0u + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7220u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69E4u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 290u, depth + 1u); else { c.pc = 0x003F6A40u; return; } if (c.pc != 0x003F69E4u) [[unlikely]] return; }
L_003F69E4:
    st32((c.r[21].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69F8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x003F69F8u) [[unlikely]] return; }
L_003F69F8:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A10u); st64((c.r[2].w[0] + 64u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003F6A10u) [[unlikely]] return; }
L_003F6A10:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F6A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_003F6A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A78u);  if (depth < kMaxDepth) unit_00BD(c, 297u, depth + 1u); else { c.pc = 0x003F6B10u; return; } if (c.pc != 0x003F6A78u) [[unlikely]] return; }
L_003F6A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003F6AD0; } }
L_003F6AB8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AC4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x003F6AC4u) [[unlikely]] return; }
L_003F6AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F6ACCu) [[unlikely]] return; }
L_003F6ACC:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003F6AD0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6AB8u | kUnwind; return; } goto L_003F6AB8; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003F6AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F6AF0u) [[unlikely]] return; }
L_003F6AF0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003F6AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6C00; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B44u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F6B44u) [[unlikely]] return; }
L_003F6B44:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B54u); set32(c.r[4], c.r[16].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003F6B54u) [[unlikely]] return; }
L_003F6B54:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[16].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_003F6BB4; } }
L_003F6B70:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_003F6B94; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_003F6BB0; } }
L_003F6B94:
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_003F6BB0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003F6BB4:
    c.r[3].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6B70u | kUnwind; return; } goto L_003F6B70; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_003F6BF8; }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6BF4u); set32(c.r[6], c.r[6].w[0] - 7197u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003F6BF4u) [[unlikely]] return; }
L_003F6BF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003F6BF8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003F6C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F6C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F6C8C; } }
L_003F6C44:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F6C54u) [[unlikely]] return; }
L_003F6C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_003F6C70; } }
L_003F6C60:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003F6C70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003F6C7C; } }
L_003F6C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6C60u | kUnwind; return; } goto L_003F6C60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F6C7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003F6C8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6C8C; } }
L_003F6C8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 306u, depth + 1u); else { c.pc = 0x004CE050u; return; } if (c.pc != 0x003F6C98u) [[unlikely]] return; }
L_003F6C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6CB0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 28u), c.f[1]);  if (t) { goto L_003F6CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F6E10; } }
L_003F6CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CECu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x003F6CECu) [[unlikely]] return; }
L_003F6CEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CF8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 194u, depth + 1u); else { c.pc = 0x0033B0B0u; return; } if (c.pc != 0x003F6CF8u) [[unlikely]] return; }
L_003F6CF8:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    st32((c.r[29].w[0] + 188u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D80u); st32((c.r[29].w[0] + 232u), c.f[1]);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x003F6D80u) [[unlikely]] return; }
L_003F6D80:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D8Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00BD(c, 316u, depth + 1u); else { c.pc = 0x003F6E30u; return; } if (c.pc != 0x003F6D8Cu) [[unlikely]] return; }
L_003F6D8C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D98u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x003F6D98u) [[unlikely]] return; }
L_003F6D98:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[6].w[0] + 48u);
    c.budget -= 4;
L_003F6DA8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6DA8u | kUnwind; return; } goto L_003F6DA8; } }
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[6].w[0] + 96u), c.f[2]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6DF4u); st32((c.r[6].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F6DF4u) [[unlikely]] return; }
L_003F6DF4:
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F6E00u) [[unlikely]] return; }
L_003F6E00:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F6E0Cu) [[unlikely]] return; }
L_003F6E0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F6E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003F6E30:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[2]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[2]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_003F6EB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6EE0; } }
    c.f[12] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 1;
L_003F6EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EE8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x003F6EE8u) [[unlikely]] return; }
L_003F6EE8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st64((c.r[2].w[0] + 64u), 0ull);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st64((c.r[2].w[0] + 72u), 0ull);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F00u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x0033B350u; return; } if (c.pc != 0x003F6F00u) [[unlikely]] return; }
L_003F6F00:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F10u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x003F6F10u) [[unlikely]] return; }
L_003F6F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F18u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008E(c, 50u, depth + 1u); else { c.pc = 0x003396A0u; return; } if (c.pc != 0x003F6F18u) [[unlikely]] return; }
L_003F6F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F2Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 43u, depth + 1u); else { c.pc = 0x00339530u; return; } if (c.pc != 0x003F6F2Cu) [[unlikely]] return; }
L_003F6F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F3Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008E(c, 34u, depth + 1u); else { c.pc = 0x00339300u; return; } if (c.pc != 0x003F6F3Cu) [[unlikely]] return; }
L_003F6F3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F48u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033B010u; return; } if (c.pc != 0x003F6F48u) [[unlikely]] return; }
L_003F6F48:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x003F6F5Cu) [[unlikely]] return; }
L_003F6F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F64u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_008E(c, 173u, depth + 1u); else { c.pc = 0x0033AB50u; return; } if (c.pc != 0x003F6F64u) [[unlikely]] return; }
L_003F6F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F6F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F6F9Cu) [[unlikely]] return; }
L_003F6F9C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F6FA8u) [[unlikely]] return; }
L_003F6FA8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FB8u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 92u, depth + 1u); else { c.pc = 0x00424B70u; return; } if (c.pc != 0x003F6FB8u) [[unlikely]] return; }
L_003F6FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FC0u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F6FC0u) [[unlikely]] return; }
L_003F6FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 160u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 164u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 168u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7018u); st32((c.r[4].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F7018u) [[unlikely]] return; }
L_003F7018:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7024u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F7024u) [[unlikely]] return; }
L_003F7024:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7030u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 458u, depth + 1u); else { c.pc = 0x002BB6E0u; return; } if (c.pc != 0x003F7030u) [[unlikely]] return; }
L_003F7030:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003F70A4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_003F7080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7050u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7050u) [[unlikely]] return; }
L_003F7050:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7060u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7060u) [[unlikely]] return; }
L_003F7060:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F707C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F707Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F707Cu) [[unlikely]] return; }
L_003F707C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_003F7080:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F70A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7090u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7090u) [[unlikely]] return; }
L_003F7090:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F70A0u) [[unlikely]] return; }
L_003F70A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F70A4:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x003F70B0u) [[unlikely]] return; }
L_003F70B0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F70C4u) [[unlikely]] return; }
L_003F70C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70CCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003F70CCu) [[unlikely]] return; }
L_003F70CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70D4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x003F70D4u) [[unlikely]] return; }
L_003F70D4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F710Cu); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F710Cu) [[unlikely]] return; }
L_003F710C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F7130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F72AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_003F7168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7164u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x003F7164u) [[unlikely]] return; }
L_003F7164:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003F7168:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  goto L_003F717C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7178u);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x003F7178u) [[unlikely]] return; }
L_003F7178:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F717C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003F724C; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7198u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7198u) [[unlikely]] return; }
L_003F7198:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_003F71E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F71ACu) [[unlikely]] return; }
L_003F71AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71C0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F71C0u) [[unlikely]] return; }
L_003F71C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F71E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F71E0u) [[unlikely]] return; }
L_003F71E0:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F71E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F724C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003F722C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F71FCu) [[unlikely]] return; }
L_003F71FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F720Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F720Cu) [[unlikely]] return; }
L_003F720C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7228; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7228u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7228u) [[unlikely]] return; }
L_003F7228:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F722C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003F724C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F723Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F723Cu) [[unlikely]] return; }
L_003F723C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F724Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F724Cu) [[unlikely]] return; }
L_003F724C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F7298; }
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F7294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7268u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7268u) [[unlikely]] return; }
L_003F7268:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7278u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7278u) [[unlikely]] return; }
L_003F7278:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7294; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7294u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7294u) [[unlikely]] return; }
L_003F7294:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F7298:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F72B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F72ACu) [[unlikely]] return; }
L_003F72AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F72B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F72D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F7308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F72F8u) [[unlikely]] return; }
L_003F72F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7308u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7308u) [[unlikely]] return; }
L_003F7308:
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003F7384; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003F7360; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7330u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7330u) [[unlikely]] return; }
L_003F7330:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7340u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7340u) [[unlikely]] return; }
L_003F7340:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F735C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F735Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F735Cu) [[unlikely]] return; }
L_003F735C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7360:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003F7380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7370u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7370u) [[unlikely]] return; }
L_003F7370:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7380u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7380u) [[unlikely]] return; }
L_003F7380:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F7384:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F73B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F73D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0] + 56u)));  if (t) { goto L_003F73E0; } }
L_003F73D4:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_003F73E0:
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F74A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73FCu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x003F73FCu) [[unlikely]] return; }
L_003F73FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F74A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_003F742C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_003F742C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F7470; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_003F7440; }
    set32(c.r[5], c.r[16].w[0] + 49u);
    c.budget -= 1;
L_003F7440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7448u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x003F7448u) [[unlikely]] return; }
L_003F7448:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F74A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F745Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 297u, depth + 1u); else { c.pc = 0x004F2410u; return; } if (c.pc != 0x003F745Cu) [[unlikely]] return; }
L_003F745C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7468u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x003F7468u) [[unlikely]] return; }
L_003F7468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F74A0; } }
L_003F7470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7478u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x003F7478u) [[unlikely]] return; }
L_003F7478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7488u); set32(c.r[5], c.r[5].w[0] - 7120u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x003F7488u) [[unlikely]] return; }
L_003F7488:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74A0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x003F74A0u) [[unlikely]] return; }
L_003F74A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F74A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F74B0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019EEA0u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 186u, depth); }
L_003F74C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F0E0u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 194u, depth); }
L_003F74D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7550; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23408u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7504u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x003F7504u) [[unlikely]] return; }
L_003F7504:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F7518u) [[unlikely]] return; }
L_003F7518:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F753C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7538u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x003F7538u) [[unlikely]] return; }
L_003F7538:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F753C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F7554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7550u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F7550u) [[unlikely]] return; }
L_003F7550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F7554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x00199E90u; return; } if (c.pc != 0x003F7594u) [[unlikely]] return; }
L_003F7594:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17136u);
    set32(c.r[2], c.r[2].w[0] + 23408u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75B4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F75B4u) [[unlikely]] return; }
L_003F75B4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003F75D0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75C8u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003F75C8u) [[unlikely]] return; }
L_003F75C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F75E0; } }
L_003F75D0:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75DCu); set32(c.r[5], c.r[5].w[0] - 7107u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003F75DCu) [[unlikely]] return; }
L_003F75DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F75E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7600:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003F7610:
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], 0u - 3u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_003F7640; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_003F764C; } }
L_003F7640:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F764C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F7660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7674u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 32u, depth + 1u); else { c.pc = 0x00398420u; return; } if (c.pc != 0x003F7674u) [[unlikely]] return; }
L_003F7674:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_003F7680; }
L_003F7680:
    c.r[2].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F76A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F76B0:
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
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003F76E4u) [[unlikely]] return; }
L_003F76E4:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 117u, depth + 1u); else { c.pc = 0x00465390u; return; } if (c.pc != 0x003F76F4u) [[unlikely]] return; }
L_003F76F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003F7710; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003F7710:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[19].d[0];  if (t) { goto L_003F771C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F771C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F7734; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_003F7734:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F7754; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F7754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F77EC; } }
L_003F7754:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F7774; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F7774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F77EC; } }
L_003F7774:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[20].w[0] + 8u), c.r[17].w[0]);  goto L_003F7798; }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7788u); set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x003F7788u) [[unlikely]] return; }
L_003F7788:
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 4;
L_003F7798:
    set32(c.r[6], 0u + 1u);
    st32((c.r[20].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_003F77B0; } }
L_003F77A8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_003F77B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F77A8u | kUnwind; return; } goto L_003F77A8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F77EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77DCu);  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x003F77DCu) [[unlikely]] return; }
L_003F77DC:
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_003F77EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F7810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F7854; } }
L_003F783C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7844u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 395u, depth + 1u); else { c.pc = 0x003F76B0u; return; } if (c.pc != 0x003F7844u) [[unlikely]] return; }
L_003F7844:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_003F7858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003F7864; } }
L_003F7854:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F7858:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F783Cu | kUnwind; return; } goto L_003F783C; }
L_003F7864:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[12] = ld32((c.r[17].w[0] + 8u));  if (t) { goto L_003F7888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 4;
L_003F7888:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7894u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F7894u) [[unlikely]] return; }
L_003F7894:
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F78D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[12] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 16;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  goto L_003F7924; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
L_003F7924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F792Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F792Cu) [[unlikely]] return; }
L_003F792C:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.f[12] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F79A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 4;
L_003F79A8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F79B4u) [[unlikely]] return; }
L_003F79B4:
    c.f[20] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 24u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[21] = c.f[0];
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.f[0]);  if (t) { goto L_003F79EC; } }
L_003F79DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 395u, depth + 1u); else { c.pc = 0x003F76B0u; return; } if (c.pc != 0x003F79E4u) [[unlikely]] return; }
L_003F79E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_003F7A00; }
L_003F79EC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F79DCu | kUnwind; return; } goto L_003F79DC; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003F7A00:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[12] = ld32((c.r[17].w[0] + 8u));  if (t) { goto L_003F7A20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 4;
L_003F7A20:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F7A2Cu) [[unlikely]] return; }
L_003F7A2C:
    st32((c.r[19].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[21]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F7AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23440u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F7B0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AFCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7AFCu) [[unlikely]] return; }
L_003F7AFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B0Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7B0Cu) [[unlikely]] return; }
L_003F7B0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F7B2C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B28u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F7B28u) [[unlikely]] return; }
L_003F7B28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F7B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B64u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F7B64u) [[unlikely]] return; }
L_003F7B64:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B74u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F7B74u) [[unlikely]] return; }
L_003F7B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 23440u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7C50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23456u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F7C38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F7C18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7C18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 85u, depth + 1u); else { c.pc = 0x003C8BB0u; return; } if (c.pc != 0x003F7C18u) [[unlikely]] return; }
L_003F7C18:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F7C3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C38u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003F7C38u) [[unlikely]] return; }
L_003F7C38:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F7C3C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F7C54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F7C50u) [[unlikely]] return; }
L_003F7C50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F7C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6928u);  c.pc = t; return; }
L_003F7C80:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6896u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CA8u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7CA8u) [[unlikely]] return; }
L_003F7CA8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CB4u); set32(c.r[5], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7CB4u) [[unlikely]] return; }
L_003F7CB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 412u));  goto L_003F7CDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7CD8; } }
    c.f[12] = ld32((c.r[29].w[0] + 412u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CD8u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7CD8u) [[unlikely]] return; }
L_003F7CD8:
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    c.budget -= 1;
L_003F7CDC:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CECu); st32((c.r[17].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7CECu) [[unlikely]] return; }
L_003F7CEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D00u); set32(c.r[6], c.r[6].w[0] - 6885u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7D00u) [[unlikely]] return; }
L_003F7D00:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D0Cu); set32(c.r[5], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7D0Cu) [[unlikely]] return; }
L_003F7D0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 408u));  goto L_003F7D34; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7D30; } }
    c.f[12] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D30u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7D30u) [[unlikely]] return; }
L_003F7D30:
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 1;
L_003F7D34:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D44u); st32((c.r[17].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7D44u) [[unlikely]] return; }
L_003F7D44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D58u); set32(c.r[6], c.r[6].w[0] - 6873u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7D58u) [[unlikely]] return; }
L_003F7D58:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D64u); set32(c.r[5], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7D64u) [[unlikely]] return; }
L_003F7D64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  goto L_003F7D8C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7D88; } }
    c.f[12] = ld32((c.r[29].w[0] + 404u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D88u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7D88u) [[unlikely]] return; }
L_003F7D88:
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    c.budget -= 1;
L_003F7D8C:
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D98u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F7D98u) [[unlikely]] return; }
L_003F7D98:
    st32((c.r[17].w[0] + 68u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7DA8u) [[unlikely]] return; }
L_003F7DA8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DBCu); set32(c.r[6], c.r[6].w[0] - 6862u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7DBCu) [[unlikely]] return; }
L_003F7DBC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DC8u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7DC8u) [[unlikely]] return; }
L_003F7DC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 400u));  goto L_003F7DF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7DEC; } }
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DECu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7DECu) [[unlikely]] return; }
L_003F7DEC:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.budget -= 1;
L_003F7DF0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E00u); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7E00u) [[unlikely]] return; }
L_003F7E00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E14u); set32(c.r[6], c.r[6].w[0] - 6840u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7E14u) [[unlikely]] return; }
L_003F7E14:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E20u); set32(c.r[5], c.r[29].w[0] + 396u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7E20u) [[unlikely]] return; }
L_003F7E20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  goto L_003F7E48; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7E44; } }
    c.f[12] = ld32((c.r[29].w[0] + 396u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E44u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7E44u) [[unlikely]] return; }
L_003F7E44:
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    c.budget -= 1;
L_003F7E48:
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E54u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F7E54u) [[unlikely]] return; }
L_003F7E54:
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7E64u) [[unlikely]] return; }
L_003F7E64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E78u); set32(c.r[6], c.r[6].w[0] - 6821u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7E78u) [[unlikely]] return; }
L_003F7E78:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E84u); set32(c.r[5], c.r[29].w[0] + 392u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7E84u) [[unlikely]] return; }
L_003F7E84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  goto L_003F7EAC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7EA8; } }
    c.f[12] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EA8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7EA8u) [[unlikely]] return; }
L_003F7EA8:
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    c.budget -= 1;
L_003F7EAC:
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EB8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F7EB8u) [[unlikely]] return; }
L_003F7EB8:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7EC8u) [[unlikely]] return; }
L_003F7EC8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EDCu); set32(c.r[6], c.r[6].w[0] - 6802u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7EDCu) [[unlikely]] return; }
L_003F7EDC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EE8u); set32(c.r[5], c.r[29].w[0] + 388u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7EE8u) [[unlikely]] return; }
L_003F7EE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  goto L_003F7F10; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7F0C; } }
    c.f[12] = ld32((c.r[29].w[0] + 388u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F0Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7F0Cu) [[unlikely]] return; }
L_003F7F0C:
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    c.budget -= 1;
L_003F7F10:
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F1Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F7F1Cu) [[unlikely]] return; }
L_003F7F1C:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7F2Cu) [[unlikely]] return; }
L_003F7F2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F40u); set32(c.r[6], c.r[6].w[0] - 6783u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7F40u) [[unlikely]] return; }
L_003F7F40:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F4Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7F4Cu) [[unlikely]] return; }
L_003F7F4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 384u));  goto L_003F7F74; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7F70; } }
    c.f[12] = ld32((c.r[29].w[0] + 384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F70u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7F70u) [[unlikely]] return; }
L_003F7F70:
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.budget -= 1;
L_003F7F74:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F84u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7F84u) [[unlikely]] return; }
L_003F7F84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F98u); set32(c.r[6], c.r[6].w[0] - 6755u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7F98u) [[unlikely]] return; }
L_003F7F98:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FA4u); set32(c.r[5], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7FA4u) [[unlikely]] return; }
L_003F7FA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 380u));  goto L_003F7FCC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F7FC8; } }
    c.f[12] = ld32((c.r[29].w[0] + 380u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FC8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F7FC8u) [[unlikely]] return; }
L_003F7FC8:
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    c.budget -= 1;
L_003F7FCC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FDCu); st32((c.r[17].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F7FDCu) [[unlikely]] return; }
L_003F7FDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FF0u); set32(c.r[6], c.r[6].w[0] - 6738u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003F7FF0u) [[unlikely]] return; }
L_003F7FF0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FFCu); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003F7FFCu) [[unlikely]] return; }
L_003F7FFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 376u));  [[clang::musttail]] return unit_00BE(c, 4u, depth); }
    [[clang::musttail]] return unit_00BE(c, 2u, depth);
}

}
