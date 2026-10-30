#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0082[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346,
    0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0,
    0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0,
    456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0,
    0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
};

void unit_0082(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_00308004;
    case 3u: goto L_00308010;
    case 4u: goto L_00308038;
    case 5u: goto L_00308068;
    case 6u: goto L_00308098;
    case 7u: goto L_003080A8;
    case 8u: goto L_003080C8;
    case 9u: goto L_003080D4;
    case 10u: goto L_003080DC;
    case 11u: goto L_00308104;
    case 12u: goto L_00308134;
    case 13u: goto L_00308164;
    case 14u: goto L_00308174;
    case 15u: goto L_00308194;
    case 16u: goto L_003081B0;
    case 17u: goto L_003081E0;
    case 18u: goto L_003081F0;
    case 19u: goto L_00308210;
    case 20u: goto L_00308230;
    case 21u: goto L_00308258;
    case 22u: goto L_00308280;
    case 23u: goto L_003082B0;
    case 24u: goto L_003082C0;
    case 25u: goto L_003082E0;
    case 26u: goto L_00308318;
    case 27u: goto L_00308328;
    case 28u: goto L_0030834C;
    case 29u: goto L_0030835C;
    case 30u: goto L_0030837C;
    case 31u: goto L_003083A0;
    case 32u: goto L_003083C4;
    case 33u: goto L_003083E0;
    case 34u: goto L_0030840C;
    case 35u: goto L_00308430;
    case 36u: goto L_00308450;
    case 37u: goto L_00308468;
    case 38u: goto L_00308490;
    case 39u: goto L_003084C0;
    case 40u: goto L_003084E8;
    case 41u: goto L_003084F0;
    case 42u: goto L_00308500;
    case 43u: goto L_00308510;
    case 44u: goto L_0030853C;
    case 45u: goto L_0030854C;
    case 46u: goto L_00308568;
    case 47u: goto L_0030857C;
    case 48u: goto L_0030858C;
    case 49u: goto L_003085A0;
    case 50u: goto L_003085B0;
    case 51u: goto L_003085CC;
    case 52u: goto L_00308604;
    case 53u: goto L_00308620;
    case 54u: goto L_00308640;
    case 55u: goto L_00308660;
    case 56u: goto L_00308688;
    case 57u: goto L_0030869C;
    case 58u: goto L_003086B0;
    case 59u: goto L_003086C0;
    case 60u: goto L_003086E0;
    case 61u: goto L_00308700;
    case 62u: goto L_0030871C;
    case 63u: goto L_00308728;
    case 64u: goto L_00308734;
    case 65u: goto L_00308744;
    case 66u: goto L_00308760;
    case 67u: goto L_00308784;
    case 68u: goto L_003087A0;
    case 69u: goto L_003087BC;
    case 70u: goto L_003087E0;
    case 71u: goto L_00308810;
    case 72u: goto L_00308838;
    case 73u: goto L_00308890;
    case 74u: goto L_0030889C;
    case 75u: goto L_003088CC;
    case 76u: goto L_00308904;
    case 77u: goto L_00308914;
    case 78u: goto L_0030891C;
    case 79u: goto L_0030892C;
    case 80u: goto L_00308938;
    case 81u: goto L_00308940;
    case 82u: goto L_00308958;
    case 83u: goto L_00308960;
    case 84u: goto L_00308980;
    case 85u: goto L_0030899C;
    case 86u: goto L_003089B8;
    case 87u: goto L_003089D0;
    case 88u: goto L_003089E4;
    case 89u: goto L_00308A8C;
    case 90u: goto L_00308AA0;
    case 91u: goto L_00308AA8;
    case 92u: goto L_00308AB8;
    case 93u: goto L_00308AC8;
    case 94u: goto L_00308AF4;
    case 95u: goto L_00308B04;
    case 96u: goto L_00308B20;
    case 97u: goto L_00308B34;
    case 98u: goto L_00308B44;
    case 99u: goto L_00308B58;
    case 100u: goto L_00308B68;
    case 101u: goto L_00308B84;
    case 102u: goto L_00308BA8;
    case 103u: goto L_00308BB0;
    case 104u: goto L_00308BCC;
    case 105u: goto L_00308BE0;
    case 106u: goto L_00308C40;
    case 107u: goto L_00308C50;
    case 108u: goto L_00308C6C;
    case 109u: goto L_00308C88;
    case 110u: goto L_00308CB0;
    case 111u: goto L_00308CF8;
    case 112u: goto L_00308D58;
    case 113u: goto L_00308D64;
    case 114u: goto L_00308DA0;
    case 115u: goto L_00308DD4;
    case 116u: goto L_00308E14;
    case 117u: goto L_00308E38;
    case 118u: goto L_00308E4C;
    case 119u: goto L_00308E90;
    case 120u: goto L_00308EB4;
    case 121u: goto L_00308ED8;
    case 122u: goto L_00308EF8;
    case 123u: goto L_00308F40;
    case 124u: goto L_00308F98;
    case 125u: goto L_00308FF4;
    case 126u: goto L_00309000;
    case 127u: goto L_0030903C;
    case 128u: goto L_00309080;
    case 129u: goto L_00309140;
    case 130u: goto L_00309150;
    case 131u: goto L_00309160;
    case 132u: goto L_0030918C;
    case 133u: goto L_003091A4;
    case 134u: goto L_003091F8;
    case 135u: goto L_00309200;
    case 136u: goto L_00309230;
    case 137u: goto L_00309254;
    case 138u: goto L_003092A0;
    case 139u: goto L_003092C8;
    case 140u: goto L_003092E0;
    case 141u: goto L_003092E8;
    case 142u: goto L_00309304;
    case 143u: goto L_00309330;
    case 144u: goto L_0030935C;
    case 145u: goto L_0030936C;
    case 146u: goto L_00309374;
    case 147u: goto L_003093B0;
    case 148u: goto L_003093F8;
    case 149u: goto L_00309410;
    case 150u: goto L_00309428;
    case 151u: goto L_00309444;
    case 152u: goto L_00309458;
    case 153u: goto L_0030949C;
    case 154u: goto L_003094A4;
    case 155u: goto L_003094DC;
    case 156u: goto L_00309520;
    case 157u: goto L_00309528;
    case 158u: goto L_00309554;
    case 159u: goto L_00309574;
    case 160u: goto L_003095C8;
    case 161u: goto L_003095DC;
    case 162u: goto L_00309614;
    case 163u: goto L_00309638;
    case 164u: goto L_00309674;
    case 165u: goto L_003096C0;
    case 166u: goto L_003096C8;
    case 167u: goto L_003096E0;
    case 168u: goto L_003096F0;
    case 169u: goto L_0030971C;
    case 170u: goto L_00309748;
    case 171u: goto L_00309750;
    case 172u: goto L_0030976C;
    case 173u: goto L_00309780;
    case 174u: goto L_003097C4;
    case 175u: goto L_003097CC;
    case 176u: goto L_003097F8;
    case 177u: goto L_0030981C;
    case 178u: goto L_00309848;
    case 179u: goto L_00309870;
    case 180u: goto L_003098C4;
    case 181u: goto L_003098D4;
    case 182u: goto L_003098E4;
    case 183u: goto L_00309910;
    case 184u: goto L_0030992C;
    case 185u: goto L_00309950;
    case 186u: goto L_0030998C;
    case 187u: goto L_00309994;
    case 188u: goto L_003099B0;
    case 189u: goto L_003099C4;
    case 190u: goto L_00309A08;
    case 191u: goto L_00309A10;
    case 192u: goto L_00309A2C;
    case 193u: goto L_00309A40;
    case 194u: goto L_00309A78;
    case 195u: goto L_00309A94;
    case 196u: goto L_00309AC0;
    case 197u: goto L_00309AD0;
    case 198u: goto L_00309B0C;
    case 199u: goto L_00309B14;
    case 200u: goto L_00309B30;
    case 201u: goto L_00309B44;
    case 202u: goto L_00309B7C;
    case 203u: goto L_00309B98;
    case 204u: goto L_00309BC0;
    case 205u: goto L_00309C04;
    case 206u: goto L_00309C14;
    case 207u: goto L_00309C24;
    case 208u: goto L_00309C60;
    case 209u: goto L_00309C6C;
    case 210u: goto L_00309C88;
    case 211u: goto L_00309CB0;
    case 212u: goto L_00309CD4;
    case 213u: goto L_00309CDC;
    case 214u: goto L_00309CF8;
    case 215u: goto L_00309D0C;
    case 216u: goto L_00309D60;
    case 217u: goto L_00309D70;
    case 218u: goto L_00309D94;
    case 219u: goto L_00309D9C;
    case 220u: goto L_00309DB8;
    case 221u: goto L_00309DE0;
    case 222u: goto L_00309E04;
    case 223u: goto L_00309E14;
    case 224u: goto L_00309E24;
    case 225u: goto L_00309E30;
    case 226u: goto L_00309E40;
    case 227u: goto L_00309E54;
    case 228u: goto L_00309E70;
    case 229u: goto L_00309E80;
    case 230u: goto L_00309EB4;
    case 231u: goto L_00309EDC;
    case 232u: goto L_00309EEC;
    case 233u: goto L_00309F2C;
    case 234u: goto L_00309F60;
    case 235u: goto L_00309FC8;
    case 236u: goto L_00309FD8;
    case 237u: goto L_0030A014;
    case 238u: goto L_0030A040;
    case 239u: goto L_0030A070;
    case 240u: goto L_0030A080;
    case 241u: goto L_0030A100;
    case 242u: goto L_0030A120;
    case 243u: goto L_0030A164;
    case 244u: goto L_0030A170;
    case 245u: goto L_0030A1C8;
    case 246u: goto L_0030A224;
    case 247u: goto L_0030A230;
    case 248u: goto L_0030A26C;
    case 249u: goto L_0030A2B0;
    case 250u: goto L_0030A370;
    case 251u: goto L_0030A380;
    case 252u: goto L_0030A390;
    case 253u: goto L_0030A3C4;
    case 254u: goto L_0030A418;
    case 255u: goto L_0030A444;
    case 256u: goto L_0030A458;
    case 257u: goto L_0030A468;
    case 258u: goto L_0030A488;
    case 259u: goto L_0030A4D0;
    case 260u: goto L_0030A4E4;
    case 261u: goto L_0030A510;
    case 262u: goto L_0030A520;
    case 263u: goto L_0030A558;
    case 264u: goto L_0030A59C;
    case 265u: goto L_0030A5A4;
    case 266u: goto L_0030A5CC;
    case 267u: goto L_0030A5EC;
    case 268u: goto L_0030A640;
    case 269u: goto L_0030A650;
    case 270u: goto L_0030A660;
    case 271u: goto L_0030A688;
    case 272u: goto L_0030A6AC;
    case 273u: goto L_0030A6D0;
    case 274u: goto L_0030A6E8;
    case 275u: goto L_0030A6FC;
    case 276u: goto L_0030A70C;
    case 277u: goto L_0030A720;
    case 278u: goto L_0030A744;
    case 279u: goto L_0030A760;
    case 280u: goto L_0030A76C;
    case 281u: goto L_0030A778;
    case 282u: goto L_0030A788;
    case 283u: goto L_0030A7A4;
    case 284u: goto L_0030A7C8;
    case 285u: goto L_0030A7DC;
    case 286u: goto L_0030A7FC;
    case 287u: goto L_0030A818;
    case 288u: goto L_0030A834;
    case 289u: goto L_0030A850;
    case 290u: goto L_0030A878;
    case 291u: goto L_0030A898;
    case 292u: goto L_0030A8C0;
    case 293u: goto L_0030A8F8;
    case 294u: goto L_0030A928;
    case 295u: goto L_0030A958;
    case 296u: goto L_0030A964;
    case 297u: goto L_0030A978;
    case 298u: goto L_0030A998;
    case 299u: goto L_0030A9CC;
    case 300u: goto L_0030A9EC;
    case 301u: goto L_0030AA00;
    case 302u: goto L_0030AA10;
    case 303u: goto L_0030AA44;
    case 304u: goto L_0030AA4C;
    case 305u: goto L_0030AA68;
    case 306u: goto L_0030AA94;
    case 307u: goto L_0030AAB8;
    case 308u: goto L_0030AAD4;
    case 309u: goto L_0030AB00;
    case 310u: goto L_0030AB34;
    case 311u: goto L_0030AB54;
    case 312u: goto L_0030AB6C;
    case 313u: goto L_0030AB88;
    case 314u: goto L_0030ABA8;
    case 315u: goto L_0030ABEC;
    case 316u: goto L_0030AC0C;
    case 317u: goto L_0030AC18;
    case 318u: goto L_0030AC20;
    case 319u: goto L_0030AC40;
    case 320u: goto L_0030AC4C;
    case 321u: goto L_0030AC80;
    case 322u: goto L_0030ACA0;
    case 323u: goto L_0030ACBC;
    case 324u: goto L_0030ACEC;
    case 325u: goto L_0030AD48;
    case 326u: goto L_0030AD54;
    case 327u: goto L_0030AD90;
    case 328u: goto L_0030ADD4;
    case 329u: goto L_0030AE14;
    case 330u: goto L_0030AE1C;
    case 331u: goto L_0030AE28;
    case 332u: goto L_0030AE3C;
    case 333u: goto L_0030AF00;
    case 334u: goto L_0030AF20;
    case 335u: goto L_0030AF44;
    case 336u: goto L_0030AF70;
    case 337u: goto L_0030AFB4;
    case 338u: goto L_0030AFBC;
    case 339u: goto L_0030AFF4;
    case 340u: goto L_0030B010;
    case 341u: goto L_0030B020;
    case 342u: goto L_0030B028;
    case 343u: goto L_0030B040;
    case 344u: goto L_0030B054;
    case 345u: goto L_0030B068;
    case 346u: goto L_0030B07C;
    case 347u: goto L_0030B08C;
    case 348u: goto L_0030B0A0;
    case 349u: goto L_0030B0B4;
    case 350u: goto L_0030B0D4;
    case 351u: goto L_0030B0E8;
    case 352u: goto L_0030B110;
    case 353u: goto L_0030B174;
    case 354u: goto L_0030B17C;
    case 355u: goto L_0030B190;
    case 356u: goto L_0030B1A0;
    case 357u: goto L_0030B1B4;
    case 358u: goto L_0030B1C4;
    case 359u: goto L_0030B1D0;
    case 360u: goto L_0030B208;
    case 361u: goto L_0030B214;
    case 362u: goto L_0030B224;
    case 363u: goto L_0030B240;
    case 364u: goto L_0030B248;
    case 365u: goto L_0030B25C;
    case 366u: goto L_0030B268;
    case 367u: goto L_0030B294;
    case 368u: goto L_0030B2B8;
    case 369u: goto L_0030B2C4;
    case 370u: goto L_0030B2D4;
    case 371u: goto L_0030B2F4;
    case 372u: goto L_0030B300;
    case 373u: goto L_0030B310;
    case 374u: goto L_0030B324;
    case 375u: goto L_0030B338;
    case 376u: goto L_0030B348;
    case 377u: goto L_0030B368;
    case 378u: goto L_0030B37C;
    case 379u: goto L_0030B38C;
    case 380u: goto L_0030B3B4;
    case 381u: goto L_0030B3E0;
    case 382u: goto L_0030B400;
    case 383u: goto L_0030B420;
    case 384u: goto L_0030B440;
    case 385u: goto L_0030B460;
    case 386u: goto L_0030B470;
    case 387u: goto L_0030B498;
    case 388u: goto L_0030B4A8;
    case 389u: goto L_0030B4C0;
    case 390u: goto L_0030B4F8;
    case 391u: goto L_0030B508;
    case 392u: goto L_0030B524;
    case 393u: goto L_0030B538;
    case 394u: goto L_0030B548;
    case 395u: goto L_0030B570;
    case 396u: goto L_0030B590;
    case 397u: goto L_0030B5B8;
    case 398u: goto L_0030B5C8;
    case 399u: goto L_0030B5E0;
    case 400u: goto L_0030B60C;
    case 401u: goto L_0030B634;
    case 402u: goto L_0030B63C;
    case 403u: goto L_0030B650;
    case 404u: goto L_0030B660;
    case 405u: goto L_0030B674;
    case 406u: goto L_0030B684;
    case 407u: goto L_0030B690;
    case 408u: goto L_0030B6C8;
    case 409u: goto L_0030B6D4;
    case 410u: goto L_0030B6E4;
    case 411u: goto L_0030B700;
    case 412u: goto L_0030B708;
    case 413u: goto L_0030B71C;
    case 414u: goto L_0030B728;
    case 415u: goto L_0030B754;
    case 416u: goto L_0030B760;
    case 417u: goto L_0030B770;
    case 418u: goto L_0030B784;
    case 419u: goto L_0030B790;
    case 420u: goto L_0030B7B4;
    case 421u: goto L_0030B7E0;
    case 422u: goto L_0030B80C;
    case 423u: goto L_0030B818;
    case 424u: goto L_0030B828;
    case 425u: goto L_0030B848;
    case 426u: goto L_0030B854;
    case 427u: goto L_0030B864;
    case 428u: goto L_0030B878;
    case 429u: goto L_0030B88C;
    case 430u: goto L_0030B89C;
    case 431u: goto L_0030B8BC;
    case 432u: goto L_0030B8D0;
    case 433u: goto L_0030B8E0;
    case 434u: goto L_0030B908;
    case 435u: goto L_0030B92C;
    case 436u: goto L_0030B93C;
    case 437u: goto L_0030B95C;
    case 438u: goto L_0030B984;
    case 439u: goto L_0030B9B0;
    case 440u: goto L_0030B9D0;
    case 441u: goto L_0030B9F0;
    case 442u: goto L_0030BA10;
    case 443u: goto L_0030BA30;
    case 444u: goto L_0030BA40;
    case 445u: goto L_0030BA60;
    case 446u: goto L_0030BA98;
    case 447u: goto L_0030BAF0;
    case 448u: goto L_0030BAFC;
    case 449u: goto L_0030BB2C;
    case 450u: goto L_0030BB64;
    case 451u: goto L_0030BB6C;
    case 452u: goto L_0030BB78;
    case 453u: goto L_0030BC40;
    case 454u: goto L_0030BC64;
    case 455u: goto L_0030BC74;
    case 456u: goto L_0030BC80;
    case 457u: goto L_0030BC88;
    case 458u: goto L_0030BCAC;
    case 459u: goto L_0030BCD8;
    case 460u: goto L_0030BD1C;
    case 461u: goto L_0030BD24;
    case 462u: goto L_0030BD68;
    case 463u: goto L_0030BD84;
    case 464u: goto L_0030BD94;
    case 465u: goto L_0030BD9C;
    case 466u: goto L_0030BDB4;
    case 467u: goto L_0030BDE0;
    case 468u: goto L_0030BDEC;
    case 469u: goto L_0030BE50;
    case 470u: goto L_0030BE74;
    case 471u: goto L_0030BE88;
    case 472u: goto L_0030BEAC;
    case 473u: goto L_0030BEB8;
    case 474u: goto L_0030BEC8;
    case 475u: goto L_0030BEE8;
    case 476u: goto L_0030BEF4;
    case 477u: goto L_0030BF04;
    case 478u: goto L_0030BF18;
    case 479u: goto L_0030BF2C;
    case 480u: goto L_0030BF3C;
    case 481u: goto L_0030BF5C;
    case 482u: goto L_0030BF70;
    case 483u: goto L_0030BF80;
    case 484u: goto L_0030BFA8;
    case 485u: goto L_0030BFBC;
    case 486u: goto L_0030BFD0;
    case 487u: goto L_0030BFF0;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    c.budget -= 1;
L_00308004:
    set32(c.r[4], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308010u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00308010u) [[unlikely]] return; }
L_00308010:
    set32(c.r[16], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[8], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 1116u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 1112u);
    st32((c.r[29].w[0] + 1112u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308038u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308038u) [[unlikely]] return; }
L_00308038:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1116u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] == c.r[18].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003080CC; }
    st32((c.r[29].w[0] + 1108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308068u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00308068u) [[unlikely]] return; }
L_00308068:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003080C8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308098u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308098u) [[unlikely]] return; }
L_00308098:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003080A8u) [[unlikely]] return; }
L_003080A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003080C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080C8u); set32(c.r[5], c.r[29].w[0] + 1108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003080C8u) [[unlikely]] return; }
L_003080C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003080CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x003080D4u) [[unlikely]] return; }
L_003080D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00308214; } }
L_003080DC:
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0030819C; }
    set32(c.r[16], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 1104u);
    st32((c.r[29].w[0] + 1104u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308104u) [[unlikely]] return; }
L_00308104:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00308210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308134u); st32((c.r[29].w[0] + 1100u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00308134u) [[unlikely]] return; }
L_00308134:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 1100u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308210; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308164u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308164u) [[unlikely]] return; }
L_00308164:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308174u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308174u) [[unlikely]] return; }
L_00308174:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00308210; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308194u); set32(c.r[5], c.r[29].w[0] + 1100u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00308194u) [[unlikely]] return; }
L_00308194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308210; } }
L_0030819C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308210; } }
    st32((c.r[29].w[0] + 1096u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003081B0u) [[unlikely]] return; }
L_003081B0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 1096u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308210; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081E0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003081E0u) [[unlikely]] return; }
L_003081E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003081F0u) [[unlikely]] return; }
L_003081F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00308210; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308210u); set32(c.r[5], c.r[29].w[0] + 1096u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00308210u) [[unlikely]] return; }
L_00308210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00308214:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_00308230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308258u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00308258u) [[unlikely]] return; }
L_00308258:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[4].w[0] << 2);  goto L_003082E8; }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00308384; }
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308280u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00308280u) [[unlikely]] return; }
L_00308280:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308380; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082B0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003082B0u) [[unlikely]] return; }
L_003082B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003082C0u) [[unlikely]] return; }
L_003082C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00308380; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082E0u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003082E0u) [[unlikely]] return; }
L_003082E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308380; } }
L_003082E8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00308380; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_0030832C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308318u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308318u) [[unlikely]] return; }
L_00308318:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308328u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308328u) [[unlikely]] return; }
L_00308328:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0030832C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_00308380; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030834Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030834Cu) [[unlikely]] return; }
L_0030834C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030835Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030835Cu) [[unlikely]] return; }
L_0030835C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030837C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030837Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0030837Cu) [[unlikely]] return; }
L_0030837C:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00308380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00308384:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003083A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003083CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003083C4u) [[unlikely]] return; }
L_003083C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003083D4; } }
L_003083CC:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003083D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083E0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x003083E0u) [[unlikely]] return; }
L_003083E0:
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0030841C; }
    set32(c.r[16], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[8], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030840Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030840Cu) [[unlikely]] return; }
L_0030840C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_0030841C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00308430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308450u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00308450u) [[unlikely]] return; }
L_00308450:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { st32((c.r[17].w[0]), 0u);  goto L_003084AC; }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00308468u) [[unlikely]] return; }
L_00308468:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[16], ld32((c.r[16].w[0] + 392u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[7], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308490u) [[unlikely]] return; }
L_00308490:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_003084AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003084C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 16576u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x003084E8u) [[unlikely]] return; }
L_003084E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003085D0; } }
L_003084F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_00308510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308500u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308500u) [[unlikely]] return; }
L_00308500:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308510u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308510u) [[unlikely]] return; }
L_00308510:
    set32(c.r[3], ld32((c.r[19].w[0] + 300u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 92u)));  goto L_00308590; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 92u)));  goto L_0030856C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030853Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030853Cu) [[unlikely]] return; }
L_0030853C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030854Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030854Cu) [[unlikely]] return; }
L_0030854C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308568; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308568u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308568u) [[unlikely]] return; }
L_00308568:
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_0030856C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_0030858C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030857Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030857Cu) [[unlikely]] return; }
L_0030857C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030858Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030858Cu) [[unlikely]] return; }
L_0030858C:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_00308590:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003085D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003085A0u) [[unlikely]] return; }
L_003085A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003085B0u) [[unlikely]] return; }
L_003085B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003085CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003085CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003085CCu) [[unlikely]] return; }
L_003085CC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003085D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003084F0u | kUnwind; return; } goto L_003084F0; }
    st32((c.r[19].w[0] + 308u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 312u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16576u);
    st32((c.r[19].w[0] + 408u), 0u);
    st32((c.r[19].w[0] + 424u), 0u);
    st32((c.r[19].w[0] + 412u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308604u); st32((c.r[19].w[0] + 428u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x00308604u) [[unlikely]] return; }
L_00308604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00308620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 396u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308640u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308640u) [[unlikely]] return; }
L_00308640:
    st32((c.r[16].w[0] + 396u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308660:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308688u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0047(c, 123u, depth + 1u); else { c.pc = 0x0021D410u; return; } if (c.pc != 0x00308688u) [[unlikely]] return; }
L_00308688:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030869Cu); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030869Cu) [[unlikely]] return; }
L_0030869C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003086B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 109u, depth + 1u); else { c.pc = 0x0021D200u; return; } if (c.pc != 0x003086B0u) [[unlikely]] return; }
L_003086B0:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003086C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0047(c, 119u, depth + 1u); else { c.pc = 0x0021D380u; return; } if (c.pc != 0x003086C0u) [[unlikely]] return; }
L_003086C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003086E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308700u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00308700u) [[unlikely]] return; }
L_00308700:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00308710; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_00308710:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030871Cu); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0030871Cu) [[unlikely]] return; }
L_0030871C:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308728u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x00308728u) [[unlikely]] return; }
L_00308728:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308734u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0047(c, 169u, depth + 1u); else { c.pc = 0x0021D990u; return; } if (c.pc != 0x00308734u) [[unlikely]] return; }
L_00308734:
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308744u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0046(c, 339u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00308744u) [[unlikely]] return; }
L_00308744:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00308768; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308760u) [[unlikely]] return; }
L_00308760:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00308790; }
L_00308768:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003087C0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308784u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308784u) [[unlikely]] return; }
L_00308784:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003087C0; } }
L_00308790:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003087A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003087A0u) [[unlikely]] return; }
L_003087A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003087BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003087BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003087BCu) [[unlikely]] return; }
L_003087BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003087C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003087E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308810u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308810u) [[unlikely]] return; }
L_00308810:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00308908; }
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 324u)));  goto L_00308878; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00308860; } }
L_00308838:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00308860; }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_00308860:
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308838u | kUnwind; return; } goto L_00308838; }
    st32((c.r[16].w[0] + 332u), c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 2;
L_00308878:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 328u), c.r[4].w[0]);  if (t) { goto L_003088F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308890u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00308890u) [[unlikely]] return; }
L_00308890:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003088B4; } }
L_0030889C:
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003088B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 332u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030889Cu | kUnwind; return; } goto L_0030889C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 328u)));  if (t) { goto L_003088E0; } }
L_003088CC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 5;
L_003088E0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003088CCu | kUnwind; return; } goto L_003088CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003088FC; } }
L_003088F4:
    st32((c.r[16].w[0] + 324u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003088FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00308904u) [[unlikely]] return; }
L_00308904:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00308908:
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308914u) [[unlikely]] return; }
L_00308914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030891Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 147u, depth + 1u); else { c.pc = 0x003093B0u; return; } if (c.pc != 0x0030891Cu) [[unlikely]] return; }
L_0030891C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030892Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030892Cu) [[unlikely]] return; }
L_0030892C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 131u, depth + 1u); else { c.pc = 0x00309160u; return; } if (c.pc != 0x00308938u) [[unlikely]] return; }
L_00308938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 110u, depth + 1u); else { c.pc = 0x00308CB0u; return; } if (c.pc != 0x00308940u) [[unlikely]] return; }
L_00308940:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308958u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00308958u) [[unlikely]] return; }
L_00308958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00308984; } }
L_00308960:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308980u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00308980u) [[unlikely]] return; }
L_00308980:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00308984:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308960u | kUnwind; return; } goto L_00308960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00308A6C; } }
L_0030899C:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003089B8u); set32(c.r[21], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003089B8u) [[unlikely]] return; }
L_003089B8:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003089D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003089D0u) [[unlikely]] return; }
L_003089D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003089E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003089E4u) [[unlikely]] return; }
L_003089E4:
    set32(c.r[3], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308A14; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (t) { goto L_00308A5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_00308A5C; } }
L_00308A14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 324u)));  goto L_00308A40; }
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 324u)));  goto L_00308A60; }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_00308A5C; } }
L_00308A40:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308A5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
L_00308A5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 1;
L_00308A60:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00308A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030899Cu | kUnwind; return; } goto L_0030899C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308A8Cu) [[unlikely]] return; }
L_00308A8C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308AA0u) [[unlikely]] return; }
L_00308AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00308B88; } }
L_00308AA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 116u), 0u);  if (t) { goto L_00308AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308AB8u) [[unlikely]] return; }
L_00308AB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308AC8u) [[unlikely]] return; }
L_00308AC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 7;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 116u)));  goto L_00308B48; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 116u)));  goto L_00308B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308AF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308AF4u) [[unlikely]] return; }
L_00308AF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308B04u) [[unlikely]] return; }
L_00308B04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308B20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308B20u) [[unlikely]] return; }
L_00308B20:
    set32(c.r[18], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_00308B24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_00308B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308B34u) [[unlikely]] return; }
L_00308B34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B44u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308B44u) [[unlikely]] return; }
L_00308B44:
    set32(c.r[17], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_00308B48:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00308B88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00308B58u) [[unlikely]] return; }
L_00308B58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B68u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00308B68u) [[unlikely]] return; }
L_00308B68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308B84; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308B84u) [[unlikely]] return; }
L_00308B84:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00308B88:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308AA8u | kUnwind; return; } goto L_00308AA8; }
    st32((c.r[16].w[0] + 308u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 312u), 0u);  if (t) { goto L_00308BF8; } }
L_00308BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] << 2);  if (t) { goto L_00308BE0; } }
L_00308BB0:
    set32(c.r[4], c.r[16].w[0] + 432u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308BCCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308BCCu) [[unlikely]] return; }
L_00308BCC:
    set32(c.r[25], ld32((c.r[16].w[0] + 432u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308BE0u); set32(c.r[4], c.r[16].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308BE0u) [[unlikely]] return; }
L_00308BE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 440u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308BB0u | kUnwind; return; } goto L_00308BB0; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00308BF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 436u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308BA8u | kUnwind; return; } goto L_00308BA8; } }
    st32((c.r[16].w[0] + 444u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00308C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00308C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00308C8C; } }
L_00308C6C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308C88u) [[unlikely]] return; }
L_00308C88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00308C8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308C6Cu | kUnwind; return; } goto L_00308C6C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308CB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 12u));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));  goto L_00308DD8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_00308D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00308D28; } }
L_00308CF8:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00308D24; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_00308D24:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00308D28:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308CF8u | kUnwind; return; } goto L_00308CF8; }
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
L_00308D48:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D58u); c.r[4].d[0] = ld16((c.r[17].w[0] + 12u));  if (depth < kMaxDepth) unit_0082(c, 130u, depth + 1u); else { c.pc = 0x00309150u; return; } if (c.pc != 0x00308D58u) [[unlikely]] return; }
L_00308D58:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00308D84; } }
L_00308D64:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_00308D84:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308D64u | kUnwind; return; } goto L_00308D64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (t) { goto L_00308DBC; } }
L_00308DA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 7;
L_00308DBC:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308DA0u | kUnwind; return; } goto L_00308DA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308DD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 129u, depth + 1u); else { c.pc = 0x00309140u; return; } if (c.pc != 0x00308DD4u) [[unlikely]] return; }
L_00308DD4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    c.budget -= 1;
L_00308DD8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_00308DEC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00308E04; } }
L_00308DEC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_00308E08; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00308E04:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00308E08:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_00308E9C; } }
L_00308E14:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00308E9C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308E38u) [[unlikely]] return; }
L_00308E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_00308E98; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 14u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00308E68; } }
L_00308E4C:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00308E68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E78; } }
L_00308E68:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308E4Cu | kUnwind; return; } goto L_00308E4C; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00308E78:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00308E98; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E90u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0082(c, 123u, depth + 1u); else { c.pc = 0x00308F40u; return; } if (c.pc != 0x00308E90u) [[unlikely]] return; }
L_00308E90:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_00308E98:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00308E9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308E14u | kUnwind; return; } goto L_00308E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00308F04; } }
L_00308EB4:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00308F04; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308ED8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308ED8u) [[unlikely]] return; }
L_00308ED8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00308F00; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308EF8u) [[unlikely]] return; }
L_00308EF8:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00308F00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00308F04:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308EB4u | kUnwind; return; } goto L_00308EB4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00308F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00309080; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));  goto L_00309084; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_00308FE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00308FC8; } }
L_00308F98:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00308FC4; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_00308FC4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00308FC8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00308F98u | kUnwind; return; } goto L_00308F98; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_00308FE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00309070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FF4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_0082(c, 130u, depth + 1u); else { c.pc = 0x00309150u; return; } if (c.pc != 0x00308FF4u) [[unlikely]] return; }
L_00308FF4:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00309020; } }
L_00309000:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_00309020:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309000u | kUnwind; return; } goto L_00309000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));  if (t) { goto L_00309058; } }
L_0030903C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.budget -= 7;
L_00309058:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030903Cu | kUnwind; return; } goto L_0030903C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00309078; } }
L_00309070:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00309078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309080u);  if (depth < kMaxDepth) unit_0082(c, 129u, depth + 1u); else { c.pc = 0x00309140u; return; } if (c.pc != 0x00309080u) [[unlikely]] return; }
L_00309080:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 1;
L_00309084:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003090B4; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_00309108; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00309104; } }
L_003090B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_003090E4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309104; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00309104; } }
L_003090E4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309104; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00309104:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00309108:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309140:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFD0u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_00309150:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D100u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_00309160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 84u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 380u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030918Cu); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0030918Cu) [[unlikely]] return; }
L_0030918C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 380u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003091D8; } }
L_003091A4:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));  goto L_003091C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003091C0:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_003091D4; }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003091D4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003091D8:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 372u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003091A4u | kUnwind; return; } goto L_003091A4; }
    st32((c.r[29].w[0] + 92u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091F8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x003091F8u) [[unlikely]] return; }
L_003091F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00309268; } }
L_00309200:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));  goto L_0030921C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030921C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309230u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309230u) [[unlikely]] return; }
L_00309230:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[16], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[29].w[0] + 80u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309254u) [[unlikely]] return; }
L_00309254:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00309268:
    set32(c.r[3], ld32((c.r[19].w[0] + 380u)));
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 372u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309200u | kUnwind; return; } goto L_00309200; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003092A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003092C8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003092C8u) [[unlikely]] return; }
L_003092C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 396u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003092E0u); set32(c.r[5], 0u - c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003092E0u) [[unlikely]] return; }
L_003092E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309308; } }
L_003092E8:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309304u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309304u) [[unlikely]] return; }
L_00309304:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309308:
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003092E8u | kUnwind; return; } goto L_003092E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00309330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030935Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030935Cu) [[unlikely]] return; }
L_0030935C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309378; } }
L_0030936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309374u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309374u) [[unlikely]] return; }
L_00309374:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309378:
    set32(c.r[2], ld32((c.r[18].w[0] + 308u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030936Cu | kUnwind; return; } goto L_0030936C; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003093B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17264u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 37u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(148ll);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093F8u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003093F8u) [[unlikely]] return; }
L_003093F8:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309410u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00309410u) [[unlikely]] return; }
L_00309410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 17168u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_003095A0; } }
L_00309428:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309444u) [[unlikely]] return; }
L_00309444:
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030946C; } }
L_00309458:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0030946C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309458u | kUnwind; return; } goto L_00309458; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_00309484; } }
    breakpoint(c, 0x00309480u);
    c.budget -= 1;
L_00309484:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_003094B4; } }
L_0030949C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003094A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003094A4u) [[unlikely]] return; }
L_003094A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_003094B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003094C0; } }
L_003094B4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030949Cu | kUnwind; return; } goto L_0030949C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003094C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003095A0; }
    c.r[19].d[0] = ld16((c.r[29].w[0] + 124u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003094F0; } }
L_003094DC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_003094F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003094DCu | kUnwind; return; } goto L_003094DC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_00309508; } }
    breakpoint(c, 0x00309504u);
    c.budget -= 1;
L_00309508:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_00309538; } }
L_00309520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309528u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00309528u) [[unlikely]] return; }
L_00309528:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_00309538; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_0030959C; } }
L_00309538:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309520u | kUnwind; return; } goto L_00309520; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309554u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309554u) [[unlikely]] return; }
L_00309554:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309574u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309574u) [[unlikely]] return; }
L_00309574:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 10;
L_0030959C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003095A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309428u | kUnwind; return; } goto L_00309428; }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], 0u + 256u);
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 142u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003095C8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003095C8u) [[unlikely]] return; }
L_003095C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003095FC; } }
L_003095DC:
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_003095FC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[2].w[0])));  if (t) { goto L_0030960C; } }
L_003095FC:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003095DCu | kUnwind; return; } goto L_003095DC; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030960C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003096AC; } }
L_00309614:
    c.r[4].d[0] = ld16((c.r[8].w[0] + 8u));
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 4;
    if (c.r[8].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 116u)));  goto L_0030962C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003096A0; } }
L_0030962C:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0030964C; } }
L_00309638:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0030964C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309638u | kUnwind; return; } goto L_00309638; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);  if (t) { goto L_00309664; } }
    breakpoint(c, 0x00309660u);
    c.budget -= 1;
L_00309664:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_0030968C; } }
L_00309674:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[8].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0030968C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030969C; } }
L_0030968C:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309674u | kUnwind; return; } goto L_00309674; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030969C:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_003096A0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_003096AC:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[5], ld32((c.r[8].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309614u | kUnwind; return; } goto L_00309614; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096C0u); set32(c.r[5], c.r[29].w[0] + 142u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x003096C0u) [[unlikely]] return; }
L_003096C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030972C; } }
L_003096C8:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003096E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003096E0u) [[unlikely]] return; }
L_003096E0:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096F0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x003096F0u) [[unlikely]] return; }
L_003096F0:
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0030972C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[17], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[7], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 132u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030971Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030971Cu) [[unlikely]] return; }
L_0030971C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0030972C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 142u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003096C8u | kUnwind; return; } goto L_003096C8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00309748u) [[unlikely]] return; }
L_00309748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00309820; } }
L_00309750:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030976Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030976Cu) [[unlikely]] return; }
L_0030976C:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00309794; } }
L_00309780:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00309794:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309780u | kUnwind; return; } goto L_00309780; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_003097AC; } }
    breakpoint(c, 0x003097A8u);
    c.budget -= 1;
L_003097AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_003097E0; } }
L_003097C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003097CCu) [[unlikely]] return; }
L_003097CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[20].w[0])));  goto L_003097E0; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003097E8; } }
L_003097E0:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003097C4u | kUnwind; return; } goto L_003097C4; }
L_003097E8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003097F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003097F8u) [[unlikely]] return; }
L_003097F8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00309814; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 140u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00309814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030981Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0030981Cu) [[unlikely]] return; }
L_0030981C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00309820:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309750u | kUnwind; return; } goto L_00309750; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 17168u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309848u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0082(c, 204u, depth + 1u); else { c.pc = 0x00309BC0u; return; } if (c.pc != 0x00309848u) [[unlikely]] return; }
L_00309848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00309870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030992C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 17168u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00309910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 17200u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00309908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003098F4; } }
L_003098C4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_003098E4; } }
L_003098D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003098E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x003098E4u) [[unlikely]] return; }
L_003098E4:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003098D4u | kUnwind; return; } goto L_003098D4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003098F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003098C4u | kUnwind; return; } goto L_003098C4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00309908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 185u, depth + 1u); else { c.pc = 0x00309950u; return; } if (c.pc != 0x00309910u) [[unlikely]] return; }
L_00309910:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00309930; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030992Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0030992Cu) [[unlikely]] return; }
L_0030992C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00309930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00309A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17232u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003099DC; } }
L_0030998C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_003099C4; } }
L_00309994:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003099B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003099B0u) [[unlikely]] return; }
L_003099B0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003099C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003099C4u) [[unlikely]] return; }
L_003099C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309994u | kUnwind; return; } goto L_00309994; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003099DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030998Cu | kUnwind; return; } goto L_0030998C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00309A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17264u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00309A58; } }
L_00309A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00309A40; } }
L_00309A10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A2Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309A2Cu) [[unlikely]] return; }
L_00309A2C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309A40u) [[unlikely]] return; }
L_00309A40:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309A10u | kUnwind; return; } goto L_00309A10; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00309A58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309A08u | kUnwind; return; } goto L_00309A08; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00309A78u) [[unlikely]] return; }
L_00309A78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00309A98; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A94u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00309A94u) [[unlikely]] return; }
L_00309A94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00309A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00309AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309AD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00309B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17264u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_00309B5C; } }
L_00309B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_00309B44; } }
L_00309B14:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309B30u) [[unlikely]] return; }
L_00309B30:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309B44u) [[unlikely]] return; }
L_00309B44:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309B14u | kUnwind; return; } goto L_00309B14; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00309B5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309B0Cu | kUnwind; return; } goto L_00309B0C; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00309B7Cu) [[unlikely]] return; }
L_00309B7C:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_00309B9C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B98u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00309B98u) [[unlikely]] return; }
L_00309B98:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00309B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00309BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00309C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 17200u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309C34; } }
L_00309C04:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_00309C24; } }
L_00309C14:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00309C24u) [[unlikely]] return; }
L_00309C24:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309C14u | kUnwind; return; } goto L_00309C14; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309C34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309C04u | kUnwind; return; } goto L_00309C04; }
L_00309C44:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00309C70; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C60u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0082(c, 211u, depth + 1u); else { c.pc = 0x00309CB0u; return; } if (c.pc != 0x00309C60u) [[unlikely]] return; }
L_00309C60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 197u, depth + 1u); else { c.pc = 0x00309AD0u; return; } if (c.pc != 0x00309C6Cu) [[unlikely]] return; }
L_00309C6C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00309C70:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00309C8C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C88u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00309C88u) [[unlikely]] return; }
L_00309C88:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00309C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00309D24; } }
L_00309CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_00309D0C; } }
L_00309CDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309CF8u) [[unlikely]] return; }
L_00309CF8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309D0Cu) [[unlikely]] return; }
L_00309D0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309CDCu | kUnwind; return; } goto L_00309CDC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00309D24:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309CD4u | kUnwind; return; } goto L_00309CD4; } }
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00309D60:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00309D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D94u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309D94u) [[unlikely]] return; }
L_00309D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00309DBC; } }
L_00309D9C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309DB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309DB8u) [[unlikely]] return; }
L_00309DB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00309DBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309D9Cu | kUnwind; return; } goto L_00309D9C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00309DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E04u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309E04u) [[unlikely]] return; }
L_00309E04:
    set32(c.r[4], ld32((c.r[16].w[0] + 396u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E14u); set32(c.r[5], c.r[5].w[0] - 20478u);  if (depth < kMaxDepth) unit_0046(c, 317u, depth + 1u); else { c.pc = 0x0021B630u; return; } if (c.pc != 0x00309E14u) [[unlikely]] return; }
L_00309E14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E24u); set32(c.r[5], c.r[5].w[0] - 20520u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309E24u) [[unlikely]] return; }
L_00309E24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E30u); set32(c.r[5], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0083(c, 455u, depth + 1u); else { c.pc = 0x0030F8A0u; return; } if (c.pc != 0x00309E30u) [[unlikely]] return; }
L_00309E30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E40u); set32(c.r[5], c.r[5].w[0] - 20504u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309E40u) [[unlikely]] return; }
L_00309E40:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E54u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00309E54u) [[unlikely]] return; }
L_00309E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 396u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 288u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E70u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309E70u) [[unlikely]] return; }
L_00309E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x04010000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 12ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00309F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309F30; } }
L_00309EB4:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00309ED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00309F0C; } }
L_00309ED0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309EDCu) [[unlikely]] return; }
L_00309EDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00309EFC; } }
L_00309EEC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00309EFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00309F08; } }
L_00309EFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309EECu | kUnwind; return; } goto L_00309EEC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309F08:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00309F0C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00309F30; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00309F2C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 234u, depth + 1u); else { c.pc = 0x00309F60u; return; } if (c.pc != 0x00309F2Cu) [[unlikely]] return; }
L_00309F2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00309F30:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00309EB4u | kUnwind; return; } goto L_00309EB4; }
L_00309F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00309F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    c.budget -= 20;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00309FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030A004; } }
L_00309FB8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309FC8u) [[unlikely]] return; }
L_00309FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_00309FE8; } }
L_00309FD8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00309FE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00309FF4; } }
L_00309FE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309FD8u | kUnwind; return; } goto L_00309FD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309FF4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0030A004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A004; } }
L_0030A004:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0030A058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030A044; } }
L_0030A014:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  goto L_0030A024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030A030; } }
L_0030A024:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0030A030:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0030A044; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A040u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 234u, depth + 1u); else { c.pc = 0x00309F60u; return; } if (c.pc != 0x0030A040u) [[unlikely]] return; }
L_0030A040:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030A044:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A014u | kUnwind; return; } goto L_0030A014; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0030A058:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030A070:
    set32(c.r[7], ld32((c.r[28].w[0] - 27528u)));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030A0E4; } }
L_0030A080:
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0030A0E4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 27528u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.r[1].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030A0F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0030A0C8; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030A0C8:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0030A0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0030A0F0; } }
L_0030A0E4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A080u | kUnwind; return; } goto L_0030A080; }
L_0030A0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 27528u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_0030A164; } }
    c.r[5].d[0] = ld16((c.r[8].w[0] + 10u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030A14C; } }
L_0030A120:
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_0030A150; }
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[8].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030A164; } }
L_0030A14C:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0030A150:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A120u | kUnwind; return; } goto L_0030A120; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A164u); set32(c.r[6], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 244u, depth + 1u); else { c.pc = 0x0030A170u; return; } if (c.pc != 0x0030A164u) [[unlikely]] return; }
L_0030A164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0030A2B0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));  goto L_0030A2B4; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_0030A214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030A1F8; } }
L_0030A1C8:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0030A1F4; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_0030A1F4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0030A1F8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A1C8u | kUnwind; return; } goto L_0030A1C8; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_0030A214:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0030A2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A224u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_0082(c, 251u, depth + 1u); else { c.pc = 0x0030A380u; return; } if (c.pc != 0x0030A224u) [[unlikely]] return; }
L_0030A224:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030A250; } }
L_0030A230:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0030A250:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A230u | kUnwind; return; } goto L_0030A230; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));  if (t) { goto L_0030A288; } }
L_0030A26C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.budget -= 7;
L_0030A288:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A26Cu | kUnwind; return; } goto L_0030A26C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030A2A8; } }
L_0030A2A0:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030A2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A2B0u);  if (depth < kMaxDepth) unit_0082(c, 250u, depth + 1u); else { c.pc = 0x0030A370u; return; } if (c.pc != 0x0030A2B0u) [[unlikely]] return; }
L_0030A2B0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 1;
L_0030A2B4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0030A2E4; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_0030A338; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030A334; } }
L_0030A2E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0030A314; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A334; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030A334; } }
L_0030A314:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A334; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030A334:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0030A338:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A370:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFD0u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_0030A380:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D100u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_0030A390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[28].w[0] - 27532u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030A3D8; } }
L_0030A3C4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0030A3D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A3C4u | kUnwind; return; } goto L_0030A3C4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);  if (t) { goto L_0030A3F0; } }
    breakpoint(c, 0x0030A3ECu);
    c.budget -= 1;
L_0030A3F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0030A4F4; }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0030A418u) [[unlikely]] return; }
L_0030A418:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0])));  goto L_0030A46C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A444u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A444u) [[unlikely]] return; }
L_0030A444:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A458u) [[unlikely]] return; }
L_0030A458:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0030A4F0; } }
L_0030A468:
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0030A46C:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030A4A4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0030A488u) [[unlikely]] return; }
L_0030A488:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030A4A4; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030A4A4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A468u | kUnwind; return; } goto L_0030A468; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0030A4F0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4D0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A4D0u) [[unlikely]] return; }
L_0030A4D0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A4E4u) [[unlikely]] return; }
L_0030A4E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0030A4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0030A4F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030A510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[28].w[0] - 27532u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030A56C; } }
L_0030A558:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0030A56C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A558u | kUnwind; return; } goto L_0030A558; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_0030A584; } }
    breakpoint(c, 0x0030A580u);
    c.budget -= 1;
L_0030A584:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_0030A5B4; } }
L_0030A59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0030A5A4u) [[unlikely]] return; }
L_0030A5A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_0030A5B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[19].w[0]);  if (t) { goto L_0030A614; } }
L_0030A5B4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A59Cu | kUnwind; return; } goto L_0030A59C; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A5CCu) [[unlikely]] return; }
L_0030A5CC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A5ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A5ECu) [[unlikely]] return; }
L_0030A5EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
L_0030A614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030A640:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[7].w[0]);  c.pc = t; return; }
L_0030A650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A688u) [[unlikely]] return; }
L_0030A688:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 392u), c.r[16].w[0]);  goto L_0030A69C; }
    st32((c.r[17].w[0] + 392u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A6B4; } }
L_0030A69C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A6ACu) [[unlikely]] return; }
L_0030A6AC:
    st32((c.r[17].w[0] + 392u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0030A6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6E8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 127u, depth + 1u); else { c.pc = 0x0021D480u; return; } if (c.pc != 0x0030A6E8u) [[unlikely]] return; }
L_0030A6E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6FCu); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A6FCu) [[unlikely]] return; }
L_0030A6FC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A70Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0047(c, 119u, depth + 1u); else { c.pc = 0x0021D380u; return; } if (c.pc != 0x0030A70Cu) [[unlikely]] return; }
L_0030A70C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030A744u) [[unlikely]] return; }
L_0030A744:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0030A754; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_0030A754:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A760u); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0030A760u) [[unlikely]] return; }
L_0030A760:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A76Cu); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x0030A76Cu) [[unlikely]] return; }
L_0030A76C:
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A778u); set32(c.r[5], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_0047(c, 169u, depth + 1u); else { c.pc = 0x0021D990u; return; } if (c.pc != 0x0030A778u) [[unlikely]] return; }
L_0030A778:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A788u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0046(c, 339u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0030A788u) [[unlikely]] return; }
L_0030A788:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0030A7AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A7A4u) [[unlikely]] return; }
L_0030A7A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0030A808; }
L_0030A7AC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0030A7CC; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A7C8u) [[unlikely]] return; }
L_0030A7C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030A7CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 20438u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7DCu); st32((c.r[18].w[0] + 772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030A7DCu) [[unlikely]] return; }
L_0030A7DC:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0030A7EC; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_0030A7EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[18].w[0] + 776u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7FCu); set32(c.r[5], c.r[5].w[0] - 20438u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0030A7FCu) [[unlikely]] return; }
L_0030A7FC:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A838; } }
L_0030A808:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A818u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A818u) [[unlikely]] return; }
L_0030A818:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030A834; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A834u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A834u) [[unlikely]] return; }
L_0030A834:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030A838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030A850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A878u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A878u) [[unlikely]] return; }
L_0030A878:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 476u), 0u);  goto L_0030A888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030A888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 472u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A898u); st32((c.r[16].w[0] + 468u), 0u);  if (depth < kMaxDepth) unit_0083(c, 194u, depth + 1u); else { c.pc = 0x0030D5D0u; return; } if (c.pc != 0x0030A898u) [[unlikely]] return; }
L_0030A898:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x05000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0030A8D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 453u, depth + 1u); else { c.pc = 0x0030BC40u; return; } if (c.pc != 0x0030A8C0u) [[unlikely]] return; }
L_0030A8C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030A8D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0030A8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0030A90C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A8F8u) [[unlikely]] return; }
L_0030A8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030A908:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0030A90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0030A93C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 399u, depth + 1u); else { c.pc = 0x0030B5E0u; return; } if (c.pc != 0x0030A928u) [[unlikely]] return; }
L_0030A928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030A938:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0030A93C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x05000000u);
    c.r[2].d[0] = c.r[2].d[0] | 6ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 304u)));  goto L_0030AA24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 322u, depth + 1u); else { c.pc = 0x0030ACA0u; return; } if (c.pc != 0x0030A958u) [[unlikely]] return; }
L_0030A958:
    set32(c.r[17], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AA24; } }
L_0030A964:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0030A980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 39u, depth + 1u); else { c.pc = 0x003084C0u; return; } if (c.pc != 0x0030A978u) [[unlikely]] return; }
L_0030A978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030A980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A998; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A998u); set32(c.r[4], ld32((c.r[16].w[0] + 492u)));  if (depth < kMaxDepth) unit_0047(c, 208u, depth + 1u); else { c.pc = 0x0021DD50u; return; } if (c.pc != 0x0030A998u) [[unlikely]] return; }
L_0030A998:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0030A9F4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 392u)));  goto L_0030A9D4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A9CCu) [[unlikely]] return; }
L_0030A9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 468u)));  if (t) { goto L_0030AA1C; } }
L_0030A9D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9ECu); set32(c.r[5], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A9ECu) [[unlikely]] return; }
L_0030A9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AA18; } }
L_0030A9F4:
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AA00u) [[unlikely]] return; }
L_0030AA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 39u, depth + 1u); else { c.pc = 0x003084C0u; return; } if (c.pc != 0x0030AA10u) [[unlikely]] return; }
L_0030AA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030AA18:
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_0030AA1C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 2;
L_0030AA24:
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A964u | kUnwind; return; } goto L_0030A964; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AA44u) [[unlikely]] return; }
L_0030AA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 472u)));  if (t) { goto L_0030AAA4; } }
L_0030AA4C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 472u)));  goto L_0030AA6C; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA68u); set32(c.r[4], ld32((c.r[16].w[0] + 492u)));  if (depth < kMaxDepth) unit_0047(c, 208u, depth + 1u); else { c.pc = 0x0021DD50u; return; } if (c.pc != 0x0030AA68u) [[unlikely]] return; }
L_0030AA68:
    set32(c.r[3], ld32((c.r[16].w[0] + 472u)));
    c.budget -= 1;
L_0030AA6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 472u)));  goto L_0030AA98; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AA94u) [[unlikely]] return; }
L_0030AA94:
    set32(c.r[2], ld32((c.r[16].w[0] + 472u)));
    c.budget -= 1;
L_0030AA98:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 472u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 472u)));
    c.budget -= 3;
L_0030AAA4:
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AA4Cu | kUnwind; return; } goto L_0030AA4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 476u)));  if (t) { goto L_0030AB10; } }
L_0030AAB8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 476u)));  goto L_0030AAD8; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAD4u); set32(c.r[4], ld32((c.r[16].w[0] + 492u)));  if (depth < kMaxDepth) unit_0047(c, 208u, depth + 1u); else { c.pc = 0x0021DD50u; return; } if (c.pc != 0x0030AAD4u) [[unlikely]] return; }
L_0030AAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 1;
L_0030AAD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 476u)));  goto L_0030AB04; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AB00u) [[unlikely]] return; }
L_0030AB00:
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 1;
L_0030AB04:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 3;
L_0030AB10:
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AAB8u | kUnwind; return; } goto L_0030AAB8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0030AB3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 39u, depth + 1u); else { c.pc = 0x003084C0u; return; } if (c.pc != 0x0030AB34u) [[unlikely]] return; }
L_0030AB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030AB3C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27528u)));  goto L_0030AB58; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB54u); set32(c.r[4], ld32((c.r[16].w[0] + 492u)));  if (depth < kMaxDepth) unit_0047(c, 208u, depth + 1u); else { c.pc = 0x0021DD50u; return; } if (c.pc != 0x0030AB54u) [[unlikely]] return; }
L_0030AB54:
    set32(c.r[2], ld32((c.r[28].w[0] - 27528u)));
    c.budget -= 1;
L_0030AB58:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 460u)));  goto L_0030ABD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030ABC4; } }
L_0030AB6C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0030ABC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030ABAC; } }
L_0030AB88:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0030ABAC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABA8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030ABA8u) [[unlikely]] return; }
L_0030ABA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030ABAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 27528u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AB88u | kUnwind; return; } goto L_0030AB88; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030ABC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 348u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AB6Cu | kUnwind; return; } goto L_0030AB6C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 460u)));
    c.budget -= 1;
L_0030ABD8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0030ABF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 39u, depth + 1u); else { c.pc = 0x003084C0u; return; } if (c.pc != 0x0030ABECu) [[unlikely]] return; }
L_0030ABEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC24; } }
L_0030ABF4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0030AC10; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 492u)));  if (depth < kMaxDepth) unit_0047(c, 208u, depth + 1u); else { c.pc = 0x0021DD50u; return; } if (c.pc != 0x0030AC0Cu) [[unlikely]] return; }
L_0030AC0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030AC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC18u);  if (depth < kMaxDepth) unit_0082(c, 229u, depth + 1u); else { c.pc = 0x00309E80u; return; } if (c.pc != 0x0030AC18u) [[unlikely]] return; }
L_0030AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 39u, depth + 1u); else { c.pc = 0x003084C0u; return; } if (c.pc != 0x0030AC20u) [[unlikely]] return; }
L_0030AC20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030AC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030AC40:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 14u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC68; } }
L_0030AC4C:
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0030AC68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AC78; } }
L_0030AC68:
    c.r[3].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AC4Cu | kUnwind; return; } goto L_0030AC4C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030AC80:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0030ACA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030ACBCu) [[unlikely]] return; }
L_0030ACBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 60u), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));  goto L_0030ADD8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_0030AD38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0030AD1C; } }
L_0030ACEC:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0030AD18; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_0030AD18:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0030AD1C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ACECu | kUnwind; return; } goto L_0030ACEC; }
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_0030AD38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0030ADC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD48u); c.r[4].d[0] = ld16((c.r[17].w[0] + 12u));  if (depth < kMaxDepth) unit_0082(c, 130u, depth + 1u); else { c.pc = 0x00309150u; return; } if (c.pc != 0x0030AD48u) [[unlikely]] return; }
L_0030AD48:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030AD74; } }
L_0030AD54:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0030AD74:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD54u | kUnwind; return; } goto L_0030AD54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  if (t) { goto L_0030ADAC; } }
L_0030AD90:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 7;
L_0030ADAC:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD90u | kUnwind; return; } goto L_0030AD90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030ADCC; } }
L_0030ADC4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030ADCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADD4u);  if (depth < kMaxDepth) unit_0082(c, 129u, depth + 1u); else { c.pc = 0x00309140u; return; } if (c.pc != 0x0030ADD4u) [[unlikely]] return; }
L_0030ADD4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    c.budget -= 1;
L_0030ADD8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_0030ADEC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030AE04; } }
L_0030ADEC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_0030AE08; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030AE04:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0030AE08:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0030AED0; } }
L_0030AE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE1Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030AE1Cu) [[unlikely]] return; }
L_0030AE1C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0030AE28u) [[unlikely]] return; }
L_0030AE28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));  goto L_0030AE44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE3Cu); set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_006E(c, 482u, depth + 1u); else { c.pc = 0x002BB9D0u; return; } if (c.pc != 0x0030AE3Cu) [[unlikely]] return; }
L_0030AE3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    c.budget -= 2;
L_0030AE44:
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030AE6C; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030AEBC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030AEBC; } }
L_0030AE6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_0030AE9C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_0030AEC0; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0030AEBC; } }
L_0030AE9C:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030AEBC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030AEBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0030AEC0:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0030AED0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AE14u | kUnwind; return; } goto L_0030AE14; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030AF00:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 328u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030AF20u) [[unlikely]] return; }
L_0030AF20:
    set32(c.r[16], ld32((c.r[18].w[0] + 392u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 324u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AF44u) [[unlikely]] return; }
L_0030AF44:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 27532u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030AF84; } }
L_0030AF70:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0030AF84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AF70u | kUnwind; return; } goto L_0030AF70; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);  if (t) { goto L_0030AF9C; } }
    breakpoint(c, 0x0030AF98u);
    c.budget -= 1;
L_0030AF9C:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_0030AFD0; } }
L_0030AFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFBCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0030AFBCu) [[unlikely]] return; }
L_0030AFBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0030AFD0; }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0030AFDC; } }
L_0030AFD0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AFB4u | kUnwind; return; } goto L_0030AFB4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B04C; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFF4u); st32((c.r[18].w[0] + 772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030AFF4u) [[unlikely]] return; }
L_0030AFF4:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0030B004; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_0030B004:
    set32(c.r[4], c.r[18].w[0] + 776u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B010u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0030B010u) [[unlikely]] return; }
L_0030B010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B020u); set32(c.r[4], c.r[4].w[0] - 20420u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030B020u) [[unlikely]] return; }
L_0030B020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B028u); set32(c.r[4], c.r[18].w[0] + 776u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030B028u) [[unlikely]] return; }
L_0030B028:
    set32(c.r[3], 0u + 259u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[18].w[0] + 776u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B040u); set32(c.r[5], c.r[5].w[0] - 20420u);  if (depth < kMaxDepth) unit_00AE(c, 265u, depth + 1u); else { c.pc = 0x003BA510u; return; } if (c.pc != 0x0030B040u) [[unlikely]] return; }
L_0030B040:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B0EC; } }
L_0030B04C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B054u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B054u) [[unlikely]] return; }
L_0030B054:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 332u), c.r[16].w[0]);  if (t) { goto L_0030B07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B068u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B068u) [[unlikely]] return; }
L_0030B068:
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B07Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B07Cu) [[unlikely]] return; }
L_0030B07C:
    set32(c.r[5], ld32((c.r[18].w[0] + 308u)));
    set32(c.r[4], c.r[18].w[0] + 296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B08Cu); set32(c.r[6], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_0082(c, 352u, depth + 1u); else { c.pc = 0x0030B110u; return; } if (c.pc != 0x0030B08Cu) [[unlikely]] return; }
L_0030B08C:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0030B0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B0A0u) [[unlikely]] return; }
L_0030B0A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0B4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B0B4u) [[unlikely]] return; }
L_0030B0B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B0D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B0D4u) [[unlikely]] return; }
L_0030B0D4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0030B0D8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B0E8u) [[unlikely]] return; }
L_0030B0E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030B0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0030B110:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0030B294; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  goto L_0030B298; }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_0030B1F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B1E0; } }
L_0030B174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B17Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B17Cu) [[unlikely]] return; }
L_0030B17C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B190u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030B190u) [[unlikely]] return; }
L_0030B190:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B1A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B1A0u) [[unlikely]] return; }
L_0030B1A0:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0030B1E0; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B1B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B1B4u) [[unlikely]] return; }
L_0030B1B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B1C4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 389u, depth + 1u); else { c.pc = 0x0030B4C0u; return; } if (c.pc != 0x0030B1C4u) [[unlikely]] return; }
L_0030B1C4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B1D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B1D0u) [[unlikely]] return; }
L_0030B1D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0030B1E0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B174u | kUnwind; return; } goto L_0030B174; }
    st32((c.r[21].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0030B1F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[21].w[0] + 8u), c.r[17].w[0]);  if (t) { goto L_0030B284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B208u); set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  if (depth < kMaxDepth) unit_0082(c, 383u, depth + 1u); else { c.pc = 0x0030B420u; return; } if (c.pc != 0x0030B208u) [[unlikely]] return; }
L_0030B208:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0030B228; } }
L_0030B214:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B224u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 389u, depth + 1u); else { c.pc = 0x0030B4C0u; return; } if (c.pc != 0x0030B224u) [[unlikely]] return; }
L_0030B224:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030B228:
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B214u | kUnwind; return; } goto L_0030B214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_0030B270; } }
L_0030B240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B248u) [[unlikely]] return; }
L_0030B248:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B25Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 389u, depth + 1u); else { c.pc = 0x0030B4C0u; return; } if (c.pc != 0x0030B25Cu) [[unlikely]] return; }
L_0030B25C:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B268u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B268u) [[unlikely]] return; }
L_0030B268:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_0030B270:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B240u | kUnwind; return; } goto L_0030B240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030B28C; } }
L_0030B284:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030B28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B294u);  if (depth < kMaxDepth) unit_0082(c, 382u, depth + 1u); else { c.pc = 0x0030B400u; return; } if (c.pc != 0x0030B294u) [[unlikely]] return; }
L_0030B294:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0030B298:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_0030B2EC; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B2B8u) [[unlikely]] return; }
L_0030B2B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2C4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030B2C4u) [[unlikely]] return; }
L_0030B2C4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B2D4u) [[unlikely]] return; }
L_0030B2D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0030B3A4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0030B3A0; } }
L_0030B2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B2F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B2F4u) [[unlikely]] return; }
L_0030B2F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B300u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030B300u) [[unlikely]] return; }
L_0030B300:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B310u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B310u) [[unlikely]] return; }
L_0030B310:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_0030B360; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B324u) [[unlikely]] return; }
L_0030B324:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B338u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 381u, depth + 1u); else { c.pc = 0x0030B3E0u; return; } if (c.pc != 0x0030B338u) [[unlikely]] return; }
L_0030B338:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B348u) [[unlikely]] return; }
L_0030B348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030B3A0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0030B3A0; } }
L_0030B360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B368u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030B368u) [[unlikely]] return; }
L_0030B368:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B37Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030B37Cu) [[unlikely]] return; }
L_0030B37C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B38Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030B38Cu) [[unlikely]] return; }
L_0030B38C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030B3A0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0030B3A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0030B3A4:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3B4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 389u, depth + 1u); else { c.pc = 0x0030B4C0u; return; } if (c.pc != 0x0030B3B4u) [[unlikely]] return; }
L_0030B3B4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030B3E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0030B400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 29648u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0030B420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B440u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0030B440u) [[unlikely]] return; }
L_0030B440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19344u);
    set32(c.r[6], c.r[6].w[0] + 29648u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B460u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0030B460u) [[unlikely]] return; }
L_0030B460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030B470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0030B4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B498u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B498u) [[unlikely]] return; }
L_0030B498:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B4A8u) [[unlikely]] return; }
L_0030B4A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B4C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030B548; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_0030B528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B4F8u) [[unlikely]] return; }
L_0030B4F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B508u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B508u) [[unlikely]] return; }
L_0030B508:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B524; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B524u) [[unlikely]] return; }
L_0030B524:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0030B528:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_0030B548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B538u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B538u) [[unlikely]] return; }
L_0030B538:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B548u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B548u) [[unlikely]] return; }
L_0030B548:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030B570:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0030B590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0030B5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B5B8u) [[unlikely]] return; }
L_0030B5B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B5C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B5C8u) [[unlikely]] return; }
L_0030B5C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B5E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 156u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B60Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030B60Cu) [[unlikely]] return; }
L_0030B60C:
    set32(c.r[17], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 376u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0030B758; }
    set32(c.r[2], ld32((c.r[20].w[0] + 380u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 372u)));  goto L_0030B6B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B6A0; } }
L_0030B634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B63Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B63Cu) [[unlikely]] return; }
L_0030B63C:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B650u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 444u, depth + 1u); else { c.pc = 0x0030BA40u; return; } if (c.pc != 0x0030B650u) [[unlikely]] return; }
L_0030B650:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B660u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B660u) [[unlikely]] return; }
L_0030B660:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0030B6A0; }
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B674u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B674u) [[unlikely]] return; }
L_0030B674:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B684u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x0030B684u) [[unlikely]] return; }
L_0030B684:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B690u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B690u) [[unlikely]] return; }
L_0030B690:
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0030B6A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 380u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B634u | kUnwind; return; } goto L_0030B634; }
    st32((c.r[20].w[0] + 380u), c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 372u)));
    c.budget -= 2;
L_0030B6B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[20].w[0] + 376u), c.r[17].w[0]);  if (t) { goto L_0030B744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6C8u); set32(c.r[4], ld32((c.r[20].w[0] + 376u)));  if (depth < kMaxDepth) unit_0082(c, 441u, depth + 1u); else { c.pc = 0x0030B9F0u; return; } if (c.pc != 0x0030B6C8u) [[unlikely]] return; }
L_0030B6C8:
    st32((c.r[20].w[0] + 372u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030B6E8; } }
L_0030B6D4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x0030B6E4u) [[unlikely]] return; }
L_0030B6E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030B6E8:
    set32(c.r[17], ld32((c.r[20].w[0] + 380u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 372u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B6D4u | kUnwind; return; } goto L_0030B6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 376u)));  if (t) { goto L_0030B730; } }
L_0030B700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B708u) [[unlikely]] return; }
L_0030B708:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B71Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x0030B71Cu) [[unlikely]] return; }
L_0030B71C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B728u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B728u) [[unlikely]] return; }
L_0030B728:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 376u)));
    c.budget -= 2;
L_0030B730:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B700u | kUnwind; return; } goto L_0030B700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030B74C; } }
L_0030B744:
    st32((c.r[20].w[0] + 372u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0030B74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B754u);  if (depth < kMaxDepth) unit_0082(c, 440u, depth + 1u); else { c.pc = 0x0030B9D0u; return; } if (c.pc != 0x0030B754u) [[unlikely]] return; }
L_0030B754:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0030B758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B760u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030B760u) [[unlikely]] return; }
L_0030B760:
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B770u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0030B770u) [[unlikely]] return; }
L_0030B770:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0030B964; } }
L_0030B784:
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B790u); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030B790u) [[unlikely]] return; }
L_0030B790:
    set32(c.r[16], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 148u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 140u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B7B4u) [[unlikely]] return; }
L_0030B7B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030B7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B7E0; } }
L_0030B7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0030B7E0u) [[unlikely]] return; }
L_0030B7E0:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 380u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0030B840; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    st32((c.r[20].w[0] + 380u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B80Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B80Cu) [[unlikely]] return; }
L_0030B80C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B818u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0082(c, 444u, depth + 1u); else { c.pc = 0x0030BA40u; return; } if (c.pc != 0x0030B818u) [[unlikely]] return; }
L_0030B818:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B828u) [[unlikely]] return; }
L_0030B828:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 372u)));  goto L_0030B8F8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_0030B8F4; } }
L_0030B840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B848u) [[unlikely]] return; }
L_0030B848:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B854u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0082(c, 444u, depth + 1u); else { c.pc = 0x0030BA40u; return; } if (c.pc != 0x0030B854u) [[unlikely]] return; }
L_0030B854:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B864u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B864u) [[unlikely]] return; }
L_0030B864:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0030B8B4; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B878u) [[unlikely]] return; }
L_0030B878:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B88Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 439u, depth + 1u); else { c.pc = 0x0030B9B0u; return; } if (c.pc != 0x0030B88Cu) [[unlikely]] return; }
L_0030B88C:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B89Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B89Cu) [[unlikely]] return; }
L_0030B89C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0030B8F4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 384u), c.r[2].w[0]);  if (t) { goto L_0030B8F4; } }
L_0030B8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x0030B8BCu) [[unlikely]] return; }
L_0030B8BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 444u, depth + 1u); else { c.pc = 0x0030BA40u; return; } if (c.pc != 0x0030B8D0u) [[unlikely]] return; }
L_0030B8D0:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x0030B8E0u) [[unlikely]] return; }
L_0030B8E0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0030B8F4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 3;
L_0030B8F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 372u)));
    c.budget -= 1;
L_0030B8F8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B908u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x0030B908u) [[unlikely]] return; }
L_0030B908:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0030B960; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B92Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030B92Cu) [[unlikely]] return; }
L_0030B92C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B93Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030B93Cu) [[unlikely]] return; }
L_0030B93C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B95C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B95Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0030B95Cu) [[unlikely]] return; }
L_0030B95C:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0030B960:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0030B964:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B784u | kUnwind; return; } goto L_0030B784; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B984u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0030B984u) [[unlikely]] return; }
L_0030B984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030B9B0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0030B9D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0030B9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA10u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0030BA10u) [[unlikely]] return; }
L_0030BA10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[6], c.r[6].w[0] + 6944u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA30u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0030BA30u) [[unlikely]] return; }
L_0030BA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030BA40:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0030BA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030BB64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 324u)));  goto L_0030BAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030BAC0; } }
L_0030BA98:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0030BAC0; }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_0030BAC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BA98u | kUnwind; return; } goto L_0030BA98; }
    st32((c.r[17].w[0] + 332u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 2;
L_0030BAD8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[17].w[0] + 328u), c.r[5].w[0]);  if (t) { goto L_0030BB54; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 328u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAF0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0030BAF0u) [[unlikely]] return; }
L_0030BAF0:
    st32((c.r[17].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030BB14; } }
L_0030BAFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0030BB14:
    set32(c.r[4], ld32((c.r[17].w[0] + 332u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BAFCu | kUnwind; return; } goto L_0030BAFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 328u)));  if (t) { goto L_0030BB40; } }
L_0030BB2C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 328u)));
    c.budget -= 5;
L_0030BB40:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB2Cu | kUnwind; return; } goto L_0030BB2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030BB5C; } }
L_0030BB54:
    st32((c.r[17].w[0] + 324u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0030BB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0030BB64u) [[unlikely]] return; }
L_0030BB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030BC14; } }
L_0030BB6C:
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB78u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030BB78u) [[unlikely]] return; }
L_0030BB78:
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0030BBAC; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 324u)));  goto L_0030BC00; }
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0030BBFC; } }
L_0030BBAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 324u)));  goto L_0030BBDC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BBFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_0030BBFC; } }
L_0030BBDC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BBFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
L_0030BBFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 1;
L_0030BC00:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_0030BC14:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BB6Cu | kUnwind; return; } goto L_0030BB6C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030BC40:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 398u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC64u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0030BC64u) [[unlikely]] return; }
L_0030BC64:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 398u));
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC74u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0030BC74u) [[unlikely]] return; }
L_0030BC74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030BDC8; } }
L_0030BC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC88u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0030BC88u) [[unlikely]] return; }
L_0030BC88:
    set32(c.r[18], ld32((c.r[17].w[0] + 392u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 380u);
    st32((c.r[29].w[0] + 380u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030BCACu) [[unlikely]] return; }
L_0030BCAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 27532u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030BCEC; } }
L_0030BCD8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0030BCEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BCD8u | kUnwind; return; } goto L_0030BCD8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);  if (t) { goto L_0030BD04; } }
    breakpoint(c, 0x0030BD00u);
    c.budget -= 1;
L_0030BD04:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_0030BD44; } }
L_0030BD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD24u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0030BD24u) [[unlikely]] return; }
L_0030BD24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_0030BD44; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0030BD50; } }
L_0030BD44:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BD1Cu | kUnwind; return; } goto L_0030BD1C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030BD50:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0030BDC8; }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD68u); st32((c.r[17].w[0] + 772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030BD68u) [[unlikely]] return; }
L_0030BD68:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0030BD78; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_0030BD78:
    set32(c.r[4], c.r[17].w[0] + 776u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0030BD84u) [[unlikely]] return; }
L_0030BD84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD94u); set32(c.r[4], c.r[4].w[0] - 20420u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030BD94u) [[unlikely]] return; }
L_0030BD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD9Cu); set32(c.r[4], c.r[17].w[0] + 776u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0030BD9Cu) [[unlikely]] return; }
L_0030BD9C:
    set32(c.r[3], 0u + 259u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[17].w[0] + 776u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDB4u); set32(c.r[5], c.r[5].w[0] - 20420u);  if (depth < kMaxDepth) unit_00AE(c, 265u, depth + 1u); else { c.pc = 0x003BA510u; return; } if (c.pc != 0x0030BDB4u) [[unlikely]] return; }
L_0030BDB4:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
L_0030BDC8:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 398u));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BC80u | kUnwind; return; } goto L_0030BC80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 20u, depth); } }
L_0030BDE0:
    set32(c.r[5], c.r[29].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDECu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0030BDECu) [[unlikely]] return; }
L_0030BDEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 396u));  goto L_0030BE24; }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 396u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BE20; } }
    c.r[2].d[0] = c.r[3].d[0] & 32767ull;
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[29].w[0] + 396u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030BE20:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 396u));
    c.budget -= 1;
L_0030BE24:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BE58; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0030BE58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0030BE50u) [[unlikely]] return; }
L_0030BE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 22u, depth); } }
L_0030BE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BFF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 392u), 0u);  if (t) { goto L_0030BE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030BE74u) [[unlikely]] return; }
L_0030BE74:
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE88u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030BE88u) [[unlikely]] return; }
L_0030BE88:
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 372u);  goto L_0030BEE0; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 376u);
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030BEACu) [[unlikely]] return; }
L_0030BEAC:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEB8u); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030BEB8u) [[unlikely]] return; }
L_0030BEB8:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030BEC8u) [[unlikely]] return; }
L_0030BEC8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 300u)));  goto L_0030BF98; }
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 312u), c.r[2].w[0]);  if (t) { goto L_0030BF94; } }
L_0030BEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030BEE8u) [[unlikely]] return; }
L_0030BEE8:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BEF4u); set32(c.r[5], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030BEF4u) [[unlikely]] return; }
L_0030BEF4:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 372u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030BF04u) [[unlikely]] return; }
L_0030BF04:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 364u);  goto L_0030BF54; }
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030BF18u) [[unlikely]] return; }
L_0030BF18:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF2Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 381u, depth + 1u); else { c.pc = 0x0030B3E0u; return; } if (c.pc != 0x0030BF2Cu) [[unlikely]] return; }
L_0030BF2C:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030BF3Cu) [[unlikely]] return; }
L_0030BF3C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0030BF94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 312u), c.r[2].w[0]);  if (t) { goto L_0030BF94; } }
L_0030BF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 396u, depth + 1u); else { c.pc = 0x0030B590u; return; } if (c.pc != 0x0030BF5Cu) [[unlikely]] return; }
L_0030BF5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 364u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF70u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 395u, depth + 1u); else { c.pc = 0x0030B570u; return; } if (c.pc != 0x0030BF70u) [[unlikely]] return; }
L_0030BF70:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 322u, depth + 1u); else { c.pc = 0x002473D0u; return; } if (c.pc != 0x0030BF80u) [[unlikely]] return; }
L_0030BF80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0030BF94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 3;
L_0030BF94:
    set32(c.r[2], ld32((c.r[17].w[0] + 300u)));
    c.budget -= 1;
L_0030BF98:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFA8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 389u, depth + 1u); else { c.pc = 0x0030B4C0u; return; } if (c.pc != 0x0030BFA8u) [[unlikely]] return; }
L_0030BFA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  [[clang::musttail]] return unit_0083(c, 20u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030BFBCu) [[unlikely]] return; }
L_0030BFBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFD0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030BFD0u) [[unlikely]] return; }
L_0030BFD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 19u, depth); } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030BFF0u) [[unlikely]] return; }
L_0030BFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 19u, depth); } }
L_0030BFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0083(c, 1u, depth);
}

}
