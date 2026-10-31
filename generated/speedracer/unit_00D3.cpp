#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D3[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    58, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266,
    0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    361, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0,
    392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0044C000;
    case 2u: goto L_0044C028;
    case 3u: goto L_0044C030;
    case 4u: goto L_0044C04C;
    case 5u: goto L_0044C050;
    case 6u: goto L_0044C080;
    case 7u: goto L_0044C0EC;
    case 8u: goto L_0044C148;
    case 9u: goto L_0044C164;
    case 10u: goto L_0044C178;
    case 11u: goto L_0044C198;
    case 12u: goto L_0044C1C4;
    case 13u: goto L_0044C24C;
    case 14u: goto L_0044C290;
    case 15u: goto L_0044C2F8;
    case 16u: goto L_0044C354;
    case 17u: goto L_0044C370;
    case 18u: goto L_0044C384;
    case 19u: goto L_0044C3E4;
    case 20u: goto L_0044C410;
    case 21u: goto L_0044C430;
    case 22u: goto L_0044C460;
    case 23u: goto L_0044C470;
    case 24u: goto L_0044C4DC;
    case 25u: goto L_0044C4EC;
    case 26u: goto L_0044C500;
    case 27u: goto L_0044C518;
    case 28u: goto L_0044C534;
    case 29u: goto L_0044C54C;
    case 30u: goto L_0044C5EC;
    case 31u: goto L_0044C608;
    case 32u: goto L_0044C620;
    case 33u: goto L_0044C62C;
    case 34u: goto L_0044C65C;
    case 35u: goto L_0044C738;
    case 36u: goto L_0044C768;
    case 37u: goto L_0044C778;
    case 38u: goto L_0044C804;
    case 39u: goto L_0044C814;
    case 40u: goto L_0044C830;
    case 41u: goto L_0044C844;
    case 42u: goto L_0044C854;
    case 43u: goto L_0044C8A4;
    case 44u: goto L_0044C8BC;
    case 45u: goto L_0044C908;
    case 46u: goto L_0044C91C;
    case 47u: goto L_0044C924;
    case 48u: goto L_0044C970;
    case 49u: goto L_0044C990;
    case 50u: goto L_0044C9D0;
    case 51u: goto L_0044C9E0;
    case 52u: goto L_0044C9FC;
    case 53u: goto L_0044CA0C;
    case 54u: goto L_0044CA28;
    case 55u: goto L_0044CA3C;
    case 56u: goto L_0044CA4C;
    case 57u: goto L_0044CA6C;
    case 58u: goto L_0044CA80;
    case 59u: goto L_0044CA84;
    case 60u: goto L_0044CAA4;
    case 61u: goto L_0044CAAC;
    case 62u: goto L_0044CABC;
    case 63u: goto L_0044CAD8;
    case 64u: goto L_0044CAE8;
    case 65u: goto L_0044CB04;
    case 66u: goto L_0044CB10;
    case 67u: goto L_0044CB1C;
    case 68u: goto L_0044CB28;
    case 69u: goto L_0044CB34;
    case 70u: goto L_0044CB40;
    case 71u: goto L_0044CBB4;
    case 72u: goto L_0044CBC4;
    case 73u: goto L_0044CC40;
    case 74u: goto L_0044CC48;
    case 75u: goto L_0044CC60;
    case 76u: goto L_0044CC98;
    case 77u: goto L_0044CCA4;
    case 78u: goto L_0044CCBC;
    case 79u: goto L_0044CCCC;
    case 80u: goto L_0044CCE4;
    case 81u: goto L_0044CD0C;
    case 82u: goto L_0044CD18;
    case 83u: goto L_0044CD40;
    case 84u: goto L_0044CD5C;
    case 85u: goto L_0044CD70;
    case 86u: goto L_0044CD90;
    case 87u: goto L_0044CDB0;
    case 88u: goto L_0044CDC0;
    case 89u: goto L_0044CE4C;
    case 90u: goto L_0044CE5C;
    case 91u: goto L_0044CE78;
    case 92u: goto L_0044CE8C;
    case 93u: goto L_0044CE9C;
    case 94u: goto L_0044CEA8;
    case 95u: goto L_0044CEBC;
    case 96u: goto L_0044CF00;
    case 97u: goto L_0044CF0C;
    case 98u: goto L_0044CF18;
    case 99u: goto L_0044CF28;
    case 100u: goto L_0044CF34;
    case 101u: goto L_0044CF40;
    case 102u: goto L_0044CF50;
    case 103u: goto L_0044CF5C;
    case 104u: goto L_0044CF68;
    case 105u: goto L_0044CF78;
    case 106u: goto L_0044CF84;
    case 107u: goto L_0044CF90;
    case 108u: goto L_0044CFA0;
    case 109u: goto L_0044CFA8;
    case 110u: goto L_0044CFD0;
    case 111u: goto L_0044CFE0;
    case 112u: goto L_0044CFFC;
    case 113u: goto L_0044D010;
    case 114u: goto L_0044D020;
    case 115u: goto L_0044D03C;
    case 116u: goto L_0044D04C;
    case 117u: goto L_0044D068;
    case 118u: goto L_0044D07C;
    case 119u: goto L_0044D08C;
    case 120u: goto L_0044D0A8;
    case 121u: goto L_0044D0B8;
    case 122u: goto L_0044D0D4;
    case 123u: goto L_0044D0E8;
    case 124u: goto L_0044D0F8;
    case 125u: goto L_0044D10C;
    case 126u: goto L_0044D11C;
    case 127u: goto L_0044D138;
    case 128u: goto L_0044D15C;
    case 129u: goto L_0044D178;
    case 130u: goto L_0044D194;
    case 131u: goto L_0044D1A0;
    case 132u: goto L_0044D1D8;
    case 133u: goto L_0044D1EC;
    case 134u: goto L_0044D20C;
    case 135u: goto L_0044D218;
    case 136u: goto L_0044D250;
    case 137u: goto L_0044D274;
    case 138u: goto L_0044D280;
    case 139u: goto L_0044D29C;
    case 140u: goto L_0044D2D8;
    case 141u: goto L_0044D2E4;
    case 142u: goto L_0044D2F4;
    case 143u: goto L_0044D30C;
    case 144u: goto L_0044D330;
    case 145u: goto L_0044D360;
    case 146u: goto L_0044D378;
    case 147u: goto L_0044D390;
    case 148u: goto L_0044D3A8;
    case 149u: goto L_0044D3D8;
    case 150u: goto L_0044D3EC;
    case 151u: goto L_0044D3F8;
    case 152u: goto L_0044D400;
    case 153u: goto L_0044D42C;
    case 154u: goto L_0044D43C;
    case 155u: goto L_0044D458;
    case 156u: goto L_0044D484;
    case 157u: goto L_0044D4A0;
    case 158u: goto L_0044D4E8;
    case 159u: goto L_0044D4F8;
    case 160u: goto L_0044D504;
    case 161u: goto L_0044D53C;
    case 162u: goto L_0044D548;
    case 163u: goto L_0044D55C;
    case 164u: goto L_0044D570;
    case 165u: goto L_0044D590;
    case 166u: goto L_0044D5B0;
    case 167u: goto L_0044D5D0;
    case 168u: goto L_0044D5F0;
    case 169u: goto L_0044D60C;
    case 170u: goto L_0044D630;
    case 171u: goto L_0044D640;
    case 172u: goto L_0044D678;
    case 173u: goto L_0044D688;
    case 174u: goto L_0044D6A0;
    case 175u: goto L_0044D6C8;
    case 176u: goto L_0044D6D8;
    case 177u: goto L_0044D6F0;
    case 178u: goto L_0044D714;
    case 179u: goto L_0044D77C;
    case 180u: goto L_0044D790;
    case 181u: goto L_0044D79C;
    case 182u: goto L_0044D7F0;
    case 183u: goto L_0044D838;
    case 184u: goto L_0044D84C;
    case 185u: goto L_0044D858;
    case 186u: goto L_0044D864;
    case 187u: goto L_0044D86C;
    case 188u: goto L_0044D87C;
    case 189u: goto L_0044D89C;
    case 190u: goto L_0044D8B0;
    case 191u: goto L_0044D8BC;
    case 192u: goto L_0044D8C8;
    case 193u: goto L_0044D8D0;
    case 194u: goto L_0044D8E0;
    case 195u: goto L_0044D8EC;
    case 196u: goto L_0044D8F4;
    case 197u: goto L_0044D904;
    case 198u: goto L_0044D930;
    case 199u: goto L_0044D944;
    case 200u: goto L_0044D950;
    case 201u: goto L_0044D95C;
    case 202u: goto L_0044D964;
    case 203u: goto L_0044D974;
    case 204u: goto L_0044D994;
    case 205u: goto L_0044D9A8;
    case 206u: goto L_0044D9B4;
    case 207u: goto L_0044D9C0;
    case 208u: goto L_0044D9C8;
    case 209u: goto L_0044D9D8;
    case 210u: goto L_0044D9E4;
    case 211u: goto L_0044D9EC;
    case 212u: goto L_0044D9FC;
    case 213u: goto L_0044DA0C;
    case 214u: goto L_0044DA30;
    case 215u: goto L_0044DA44;
    case 216u: goto L_0044DA50;
    case 217u: goto L_0044DA60;
    case 218u: goto L_0044DA70;
    case 219u: goto L_0044DA80;
    case 220u: goto L_0044DAA0;
    case 221u: goto L_0044DAC0;
    case 222u: goto L_0044DAF0;
    case 223u: goto L_0044DB2C;
    case 224u: goto L_0044DB70;
    case 225u: goto L_0044DBC0;
    case 226u: goto L_0044DBF4;
    case 227u: goto L_0044DCB0;
    case 228u: goto L_0044DCE0;
    case 229u: goto L_0044DD38;
    case 230u: goto L_0044DD40;
    case 231u: goto L_0044DD4C;
    case 232u: goto L_0044DDAC;
    case 233u: goto L_0044DDE0;
    case 234u: goto L_0044DE04;
    case 235u: goto L_0044DE30;
    case 236u: goto L_0044DE5C;
    case 237u: goto L_0044DE90;
    case 238u: goto L_0044DEBC;
    case 239u: goto L_0044DEF0;
    case 240u: goto L_0044DF14;
    case 241u: goto L_0044DF40;
    case 242u: goto L_0044DFD8;
    case 243u: goto L_0044E018;
    case 244u: goto L_0044E0B0;
    case 245u: goto L_0044E0EC;
    case 246u: goto L_0044E118;
    case 247u: goto L_0044E168;
    case 248u: goto L_0044E170;
    case 249u: goto L_0044E1A0;
    case 250u: goto L_0044E1C8;
    case 251u: goto L_0044E300;
    case 252u: goto L_0044E370;
    case 253u: goto L_0044E3D0;
    case 254u: goto L_0044E48C;
    case 255u: goto L_0044E49C;
    case 256u: goto L_0044E4A8;
    case 257u: goto L_0044E4B0;
    case 258u: goto L_0044E4BC;
    case 259u: goto L_0044E4C4;
    case 260u: goto L_0044E4D4;
    case 261u: goto L_0044E4E0;
    case 262u: goto L_0044E4E8;
    case 263u: goto L_0044E4F4;
    case 264u: goto L_0044E560;
    case 265u: goto L_0044E570;
    case 266u: goto L_0044E57C;
    case 267u: goto L_0044E584;
    case 268u: goto L_0044E590;
    case 269u: goto L_0044E5BC;
    case 270u: goto L_0044E5CC;
    case 271u: goto L_0044E5D8;
    case 272u: goto L_0044E5E0;
    case 273u: goto L_0044E5EC;
    case 274u: goto L_0044E6E0;
    case 275u: goto L_0044E770;
    case 276u: goto L_0044E7BC;
    case 277u: goto L_0044E7D0;
    case 278u: goto L_0044E7E0;
    case 279u: goto L_0044E7F0;
    case 280u: goto L_0044E800;
    case 281u: goto L_0044E810;
    case 282u: goto L_0044E820;
    case 283u: goto L_0044E83C;
    case 284u: goto L_0044E8AC;
    case 285u: goto L_0044E8BC;
    case 286u: goto L_0044E900;
    case 287u: goto L_0044E918;
    case 288u: goto L_0044E924;
    case 289u: goto L_0044E9B0;
    case 290u: goto L_0044E9DC;
    case 291u: goto L_0044E9F8;
    case 292u: goto L_0044EA10;
    case 293u: goto L_0044EA5C;
    case 294u: goto L_0044EAA0;
    case 295u: goto L_0044EAC4;
    case 296u: goto L_0044EADC;
    case 297u: goto L_0044EB00;
    case 298u: goto L_0044EB48;
    case 299u: goto L_0044EB5C;
    case 300u: goto L_0044EB70;
    case 301u: goto L_0044EBA0;
    case 302u: goto L_0044EBB4;
    case 303u: goto L_0044EBC8;
    case 304u: goto L_0044EBD8;
    case 305u: goto L_0044EBEC;
    case 306u: goto L_0044EC04;
    case 307u: goto L_0044EC1C;
    case 308u: goto L_0044EC3C;
    case 309u: goto L_0044EC48;
    case 310u: goto L_0044EC54;
    case 311u: goto L_0044EC90;
    case 312u: goto L_0044ED58;
    case 313u: goto L_0044ED64;
    case 314u: goto L_0044ED90;
    case 315u: goto L_0044EDB0;
    case 316u: goto L_0044EDC0;
    case 317u: goto L_0044EDD4;
    case 318u: goto L_0044EDE4;
    case 319u: goto L_0044EE04;
    case 320u: goto L_0044EE14;
    case 321u: goto L_0044EE30;
    case 322u: goto L_0044EE44;
    case 323u: goto L_0044EE54;
    case 324u: goto L_0044EE70;
    case 325u: goto L_0044EE80;
    case 326u: goto L_0044EE9C;
    case 327u: goto L_0044EEB0;
    case 328u: goto L_0044EEC0;
    case 329u: goto L_0044EED4;
    case 330u: goto L_0044EEF4;
    case 331u: goto L_0044EF04;
    case 332u: goto L_0044EF20;
    case 333u: goto L_0044EF34;
    case 334u: goto L_0044EF44;
    case 335u: goto L_0044EF64;
    case 336u: goto L_0044EF74;
    case 337u: goto L_0044EF90;
    case 338u: goto L_0044EFA4;
    case 339u: goto L_0044EFB4;
    case 340u: goto L_0044EFC8;
    case 341u: goto L_0044EFD8;
    case 342u: goto L_0044EFF4;
    case 343u: goto L_0044F008;
    case 344u: goto L_0044F018;
    case 345u: goto L_0044F034;
    case 346u: goto L_0044F0DC;
    case 347u: goto L_0044F0F0;
    case 348u: goto L_0044F110;
    case 349u: goto L_0044F140;
    case 350u: goto L_0044F18C;
    case 351u: goto L_0044F1F0;
    case 352u: goto L_0044F210;
    case 353u: goto L_0044F230;
    case 354u: goto L_0044F240;
    case 355u: goto L_0044F27C;
    case 356u: goto L_0044F290;
    case 357u: goto L_0044F2B0;
    case 358u: goto L_0044F2C0;
    case 359u: goto L_0044F2DC;
    case 360u: goto L_0044F2F0;
    case 361u: goto L_0044F300;
    case 362u: goto L_0044F30C;
    case 363u: goto L_0044F31C;
    case 364u: goto L_0044F394;
    case 365u: goto L_0044F3B8;
    case 366u: goto L_0044F3C8;
    case 367u: goto L_0044F3E4;
    case 368u: goto L_0044F3F8;
    case 369u: goto L_0044F408;
    case 370u: goto L_0044F414;
    case 371u: goto L_0044F428;
    case 372u: goto L_0044F470;
    case 373u: goto L_0044F494;
    case 374u: goto L_0044F4A4;
    case 375u: goto L_0044F4C0;
    case 376u: goto L_0044F4D4;
    case 377u: goto L_0044F4E4;
    case 378u: goto L_0044F4F0;
    case 379u: goto L_0044F504;
    case 380u: goto L_0044F524;
    case 381u: goto L_0044F548;
    case 382u: goto L_0044F558;
    case 383u: goto L_0044F574;
    case 384u: goto L_0044F588;
    case 385u: goto L_0044F598;
    case 386u: goto L_0044F5A4;
    case 387u: goto L_0044F5B4;
    case 388u: goto L_0044F5D0;
    case 389u: goto L_0044F5DC;
    case 390u: goto L_0044F5E8;
    case 391u: goto L_0044F5F4;
    case 392u: goto L_0044F600;
    case 393u: goto L_0044F60C;
    case 394u: goto L_0044F660;
    case 395u: goto L_0044F684;
    case 396u: goto L_0044F694;
    case 397u: goto L_0044F6B0;
    case 398u: goto L_0044F6C4;
    case 399u: goto L_0044F6D4;
    case 400u: goto L_0044F700;
    case 401u: goto L_0044F74C;
    case 402u: goto L_0044F788;
    case 403u: goto L_0044F89C;
    case 404u: goto L_0044F8E0;
    case 405u: goto L_0044F900;
    case 406u: goto L_0044F938;
    case 407u: goto L_0044F9BC;
    case 408u: goto L_0044F9CC;
    case 409u: goto L_0044F9EC;
    case 410u: goto L_0044FA04;
    case 411u: goto L_0044FA38;
    case 412u: goto L_0044FA44;
    case 413u: goto L_0044FA74;
    case 414u: goto L_0044FA84;
    case 415u: goto L_0044FAA0;
    case 416u: goto L_0044FAB4;
    case 417u: goto L_0044FAC4;
    case 418u: goto L_0044FADC;
    case 419u: goto L_0044FB58;
    case 420u: goto L_0044FB68;
    case 421u: goto L_0044FB84;
    case 422u: goto L_0044FB98;
    case 423u: goto L_0044FBA8;
    case 424u: goto L_0044FBBC;
    case 425u: goto L_0044FBF8;
    case 426u: goto L_0044FC40;
    case 427u: goto L_0044FC54;
    case 428u: goto L_0044FC60;
    case 429u: goto L_0044FC78;
    case 430u: goto L_0044FC94;
    case 431u: goto L_0044FCA4;
    case 432u: goto L_0044FCC0;
    case 433u: goto L_0044FCD4;
    case 434u: goto L_0044FCE4;
    case 435u: goto L_0044FD60;
    case 436u: goto L_0044FD88;
    case 437u: goto L_0044FD94;
    case 438u: goto L_0044FDA4;
    case 439u: goto L_0044FDD0;
    case 440u: goto L_0044FDFC;
    case 441u: goto L_0044FE34;
    case 442u: goto L_0044FE88;
    case 443u: goto L_0044FF24;
    case 444u: goto L_0044FF34;
    case 445u: goto L_0044FF60;
    case 446u: goto L_0044FF70;
    case 447u: goto L_0044FF90;
    case 448u: goto L_0044FFE0;
    default: bad_entry(c, 0x0044C000u); return;
    }
L_0044C000:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.budget -= 10;
L_0044C028:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 12u);
    c.budget -= 2;
L_0044C030:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044BF58u | kUnwind; return; } [[clang::musttail]] return unit_00D2(c, 423u, depth); }
L_0044C04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0044C050:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0044C080:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0044C264; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0044C268; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044C264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C0ECu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x0044C0ECu) [[unlikely]] return; }
L_0044C0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044C264; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 748u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0]));  goto L_0044C10C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044C264; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_0044C10C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[20] = ld32((c.r[28].w[0] - 29052u));
    set32(c.r[5], c.r[17].w[0] + 44u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 172u);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C148u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 180u, depth + 1u); else { c.pc = 0x0044D790u; return; } if (c.pc != 0x0044C148u) [[unlikely]] return; }
L_0044C148:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[3], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0044C264; } }
    set32(c.r[20], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C164u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x0044C164u) [[unlikely]] return; }
L_0044C164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[29].w[0] + 164u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C178u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00BE(c, 260u, depth + 1u); else { c.pc = 0x003FAB50u; return; } if (c.pc != 0x0044C178u) [[unlikely]] return; }
L_0044C178:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], 0u + 4u);  goto L_0044C198; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[19], 0u + 4u);
    c.budget -= 5;
L_0044C198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::divu(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_0044C250; } }
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0044C1C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_0044C24C; } }
    c.f[3] = ld32((c.r[28].w[0] - 32528u));
    st32((c.r[29].w[0] + 112u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; st32((c.r[29].w[0] + 124u), c.f[20]);  if (t) { goto L_0044C200; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044C21C; } }
L_0044C200:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0044C21C:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 152u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C24Cu); st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 225u, depth + 1u); else { c.pc = 0x0044DBC0u; return; } if (c.pc != 0x0044C24Cu) [[unlikely]] return; }
L_0044C24C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0044C250:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 160u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C1C4u | kUnwind; return; } goto L_0044C1C4; }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C198u | kUnwind; return; } goto L_0044C198; } }
L_0044C264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0044C268:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0044C290:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0044C3E4; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 749u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0044C3E8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044C3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C2F8u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x0044C2F8u) [[unlikely]] return; }
L_0044C2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044C3E4; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 748u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0]));  goto L_0044C318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044C3E4; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_0044C318:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.f[20] = ld32((c.r[28].w[0] - 29052u));
    set32(c.r[5], c.r[19].w[0] + 44u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 156u);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C354u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 180u, depth + 1u); else { c.pc = 0x0044D790u; return; } if (c.pc != 0x0044C354u) [[unlikely]] return; }
L_0044C354:
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0044C3E4; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C370u); set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x0044C370u) [[unlikely]] return; }
L_0044C370:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], c.r[29].w[0] + 148u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C384u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BE(c, 260u, depth + 1u); else { c.pc = 0x003FAB50u; return; } if (c.pc != 0x0044C384u) [[unlikely]] return; }
L_0044C384:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 144u));  goto L_0044C3A4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 5;
L_0044C3A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.r[17].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C3E4u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 225u, depth + 1u); else { c.pc = 0x0044DBC0u; return; } if (c.pc != 0x0044C3E4u) [[unlikely]] return; }
L_0044C3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0044C3E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0044C410:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044C454; } }
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044C454; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044C430:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 68u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C430u | kUnwind; return; } goto L_0044C430; } }
L_0044C454:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044C460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044C470:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044C924; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 744u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_0044C928; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C4DCu); st32((c.r[29].w[0] + 228u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044C4DCu) [[unlikely]] return; }
L_0044C4DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C4ECu); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x0044C4ECu) [[unlikely]] return; }
L_0044C4EC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 252u);
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C500u); set32(c.r[6], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_00D3(c, 180u, depth + 1u); else { c.pc = 0x0044D790u; return; } if (c.pc != 0x0044C500u) [[unlikely]] return; }
L_0044C500:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0044C520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C518u); set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044C518u) [[unlikely]] return; }
L_0044C518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044C924; } }
L_0044C520:
    c.f[21] = ld32((c.r[28].w[0] - 29052u));
    set32(c.r[21], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044C534u) [[unlikely]] return; }
L_0044C534:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C54Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044C54Cu) [[unlikely]] return; }
L_0044C54C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], c.r[23].w[0] + 308u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 328u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044C584; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044C584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044C598; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044C598:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0044C5A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044C5C8; } }
L_0044C5A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0044C5C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044C5C8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044C5C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[21].w[0] + 16u)));  goto L_0044C624; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0044C5F8; }
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[16].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C5ECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0044C5ECu) [[unlikely]] return; }
L_0044C5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044C620; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0044C5F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044C608u) [[unlikely]] return; }
L_0044C608:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C620u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0044C620u) [[unlikely]] return; }
L_0044C620:
    set32(c.r[18], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_0044C624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[21].w[0] + 12u);  if (t) { goto L_0044C8D4; } }
L_0044C62C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[2].w[0] + 8u);  if (t) { goto L_0044C668; } }
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C65Cu); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_00D3(c, 224u, depth + 1u); else { c.pc = 0x0044DB70u; return; } if (c.pc != 0x0044C65Cu) [[unlikely]] return; }
L_0044C65C:
    set32(c.r[18], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[21].w[0] + 12u);  if (t) { goto L_0044C8D4; } }
L_0044C668:
    fpu_div(c, 5u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 28128u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[28].w[0] - 31848u));
    c.f[1] = 0u;
    c.f[4] = ld32((c.r[4].w[0]));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 31832u));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 21;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_0044C8C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::sub(c.f[1], c.f[5]);  if (t) { goto L_0044C6DC; } }
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[22] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0044C6E0; } }
L_0044C6DC:
    c.f[22] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 1;
L_0044C6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 544u)));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[28].w[0] - 32316u));
    c.f[1] = 0u;
    st32((c.r[3].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.facc = fp::add(c.f[1], c.f[2]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 268u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C738u); c.f[23] = fp::sub(c.facc, fp::mul(c.f[3], c.f[4]));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x0044C738u) [[unlikely]] return; }
L_0044C738:
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[22].d[0] != 0ull) { set32(c.r[19], ld32((c.r[22].w[0] + 8u)));  goto L_0044C7EC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044C768u) [[unlikely]] return; }
L_0044C768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));  goto L_0044C77C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C778u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0044C778u) [[unlikely]] return; }
L_0044C778:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));
    c.budget -= 1;
L_0044C77C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044C7A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044C7E0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044C7E0; } }
L_0044C7A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_0044C7C8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_0044C7E4; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044C7E0; } }
L_0044C7C8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044C7E0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0044C7E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_0044C7E4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 2;
L_0044C7EC:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[20].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 744u)));  goto L_0044C858; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[22].w[0] + 8u), c.r[20].w[0]);  goto L_0044C834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C804u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044C804u) [[unlikely]] return; }
L_0044C804:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C814u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044C814u) [[unlikely]] return; }
L_0044C814:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044C830; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C830u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044C830u) [[unlikely]] return; }
L_0044C830:
    st32((c.r[22].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 1;
L_0044C834:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0044C854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C844u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044C844u) [[unlikely]] return; }
L_0044C844:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C854u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044C854u) [[unlikely]] return; }
L_0044C854:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    c.budget -= 1;
L_0044C858:
    c.f[0] = c.f[20] & fp::kAbs;
    c.f[12] = c.f[21];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[2].w[0] + 96u), c.f[22]);
    st32((c.r[2].w[0] + 100u), c.f[23]);
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[2].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C8A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044C8A4u) [[unlikely]] return; }
L_0044C8A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C8BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x0044C8BCu) [[unlikely]] return; }
L_0044C8BC:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0044C8C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 744u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 744u), c.r[2].w[0]);
    c.budget -= 5;
L_0044C8D4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[23].d[0] + 0ull;  goto L_0044C900; }
    set32(c.r[3], ld32((c.r[17].w[0] + 744u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044C62Cu | kUnwind; return; } goto L_0044C62C; }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0044C900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 350u, depth + 1u); else { c.pc = 0x002CAF50u; return; } if (c.pc != 0x0044C908u) [[unlikely]] return; }
L_0044C908:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 192u));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C91Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044C91Cu) [[unlikely]] return; }
L_0044C91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C924u); set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044C924u) [[unlikely]] return; }
L_0044C924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0044C928:
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0044C970:
    st32((c.r[4].w[0] + 744u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044C984; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 1;
L_0044C984:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044C990:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9D0u); st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0044C9D0u) [[unlikely]] return; }
L_0044C9D0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9E0u); st32((c.r[29].w[0] + 188u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044C9E0u) [[unlikely]] return; }
L_0044C9E0:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0044CA4C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[17].w[0]);  goto L_0044CA2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044C9FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044C9FCu) [[unlikely]] return; }
L_0044C9FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CA0Cu) [[unlikely]] return; }
L_0044CA0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044CA28; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044CA28u) [[unlikely]] return; }
L_0044CA28:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0044CA2C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0044CA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CA3Cu) [[unlikely]] return; }
L_0044CA3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA4Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CA4Cu) [[unlikely]] return; }
L_0044CA4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0044CA50:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_0044CA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CA6Cu) [[unlikely]] return; }
L_0044CA6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CA80u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CA80u) [[unlikely]] return; }
L_0044CA80:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044CA84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CAA4u); set32(c.r[17], c.r[3].w[0] + 268u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0044CAA4u) [[unlikely]] return; }
L_0044CAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CAACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x0044CAACu) [[unlikely]] return; }
L_0044CAAC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CABCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0044CABCu) [[unlikely]] return; }
L_0044CABC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044CA84u | kUnwind; return; } goto L_0044CA84; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CAD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CAD8u) [[unlikely]] return; }
L_0044CAD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044CB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CAE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x0044CAE8u) [[unlikely]] return; }
L_0044CAE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB04u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x0044CB04u) [[unlikely]] return; }
L_0044CB04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB10u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x0044CB10u) [[unlikely]] return; }
L_0044CB10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB1Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x0044CB1Cu) [[unlikely]] return; }
L_0044CB1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x0044CB28u) [[unlikely]] return; }
L_0044CB28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0044CB34u) [[unlikely]] return; }
L_0044CB34:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CB40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x0044CB40u) [[unlikely]] return; }
L_0044CB40:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0044CB48:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CBB4u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CBB4u) [[unlikely]] return; }
L_0044CBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044CC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CBC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x0044CBC4u) [[unlikely]] return; }
L_0044CBC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_0044CC0C:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[23].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 256u);
    c.budget -= 13;
L_0044CC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CC48u) [[unlikely]] return; }
L_0044CC48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 216u), c.r[16].w[0]);  goto L_0044CCAC; }
    set32(c.r[4], 0u + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CC60u) [[unlikely]] return; }
L_0044CC60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0044CC9C; }
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CC98u); c.r[11].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x0044CC98u) [[unlikely]] return; }
L_0044CC98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044CC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CCA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x0044CCA4u) [[unlikely]] return; }
L_0044CCA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 2;
L_0044CCAC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  goto L_0044CCD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CCBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CCBCu) [[unlikely]] return; }
L_0044CCBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CCCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CCCCu) [[unlikely]] return; }
L_0044CCCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0044CCD0:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CCE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x0044CCE4u) [[unlikely]] return; }
L_0044CCE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 220u)));
    c.f[14] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD0Cu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x0044CD0Cu) [[unlikely]] return; }
L_0044CD0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD18u); set32(c.r[4], ld32((c.r[2].w[0] + 220u)));  if (depth < kMaxDepth) unit_0073(c, 124u, depth + 1u); else { c.pc = 0x002CCCA0u; return; } if (c.pc != 0x0044CD18u) [[unlikely]] return; }
L_0044CD18:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 220u)));
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD40u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 126u, depth + 1u); else { c.pc = 0x002CCCD0u; return; } if (c.pc != 0x0044CD40u) [[unlikely]] return; }
L_0044CD40:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD5Cu); st32((c.r[2].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CD5Cu) [[unlikely]] return; }
L_0044CD5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_0044CD78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x0044CD70u) [[unlikely]] return; }
L_0044CD70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 2;
L_0044CD78:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CD90u); set32(c.r[4], ld32((c.r[20].w[0] + 272u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x0044CD90u) [[unlikely]] return; }
L_0044CD90:
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[22].d[0] != 0ull) { set32(c.r[16], ld32((c.r[22].w[0] + 8u)));  goto L_0044CE34; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CDB0u) [[unlikely]] return; }
L_0044CDB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_0044CDC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CDC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0044CDC0u) [[unlikely]] return; }
L_0044CDC0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_0044CDC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044CDE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044CE28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044CE28; } }
L_0044CDE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_0044CE10; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_0044CE2C; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0044CE28; } }
L_0044CE10:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044CE28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0044CE28:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0044CE2C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 2;
L_0044CE34:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[4], 0u + 92u);  goto L_0044CEA0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  goto L_0044CE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CE4Cu) [[unlikely]] return; }
L_0044CE4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CE5Cu) [[unlikely]] return; }
L_0044CE5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044CE78; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044CE78u) [[unlikely]] return; }
L_0044CE78:
    st32((c.r[22].w[0] + 8u), c.r[21].w[0]);
    c.budget -= 1;
L_0044CE7C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0044CE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CE8Cu) [[unlikely]] return; }
L_0044CE8C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CE9Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CE9Cu) [[unlikely]] return; }
L_0044CE9C:
    set32(c.r[4], 0u + 92u);
    c.budget -= 1;
L_0044CEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044CEA8u) [[unlikely]] return; }
L_0044CEA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0044CEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x0044CEBCu) [[unlikely]] return; }
L_0044CEBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044CEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 18104u));
    set32(c.r[21], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 18108u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18112u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF00u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0044CF00u) [[unlikely]] return; }
L_0044CF00:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF0Cu); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0044CF0Cu) [[unlikely]] return; }
L_0044CF0C:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0044CF18u) [[unlikely]] return; }
L_0044CF18:
    set32(c.r[21], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF28u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0044CF28u) [[unlikely]] return; }
L_0044CF28:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF34u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0044CF34u) [[unlikely]] return; }
L_0044CF34:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0044CF40u) [[unlikely]] return; }
L_0044CF40:
    set32(c.r[21], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0044CF50u) [[unlikely]] return; }
L_0044CF50:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF5Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0044CF5Cu) [[unlikely]] return; }
L_0044CF5C:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0044CF68u) [[unlikely]] return; }
L_0044CF68:
    set32(c.r[21], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0044CF78u) [[unlikely]] return; }
L_0044CF78:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF84u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0044CF84u) [[unlikely]] return; }
L_0044CF84:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CF90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0044CF90u) [[unlikely]] return; }
L_0044CF90:
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044CFA0u) [[unlikely]] return; }
L_0044CFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFA8u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0044CFA8u) [[unlikely]] return; }
L_0044CFA8:
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[22], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[22].w[0] + 68u)));
    c.budget -= 6;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[21], ld32((c.r[22].w[0] + 544u)));  goto L_0044D024; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[29].w[0] + 216u)));  goto L_0044D000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044CFD0u) [[unlikely]] return; }
L_0044CFD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFE0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044CFE0u) [[unlikely]] return; }
L_0044CFE0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044CFFC; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044CFFCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044CFFCu) [[unlikely]] return; }
L_0044CFFC:
    set32(c.r[21], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0044D000:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[22].w[0] + 68u), c.r[21].w[0]);  if (t) { goto L_0044D020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D010u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D010u) [[unlikely]] return; }
L_0044D010:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D020u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D020u) [[unlikely]] return; }
L_0044D020:
    set32(c.r[21], ld32((c.r[22].w[0] + 544u)));
    c.budget -= 1;
L_0044D024:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[22].w[0] + 344u)));  goto L_0044D090; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[22].w[0] + 544u), c.r[16].w[0]);  goto L_0044D06C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D03Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D03Cu) [[unlikely]] return; }
L_0044D03C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D04Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D04Cu) [[unlikely]] return; }
L_0044D04C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044D068; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D068u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044D068u) [[unlikely]] return; }
L_0044D068:
    st32((c.r[22].w[0] + 544u), c.r[16].w[0]);
    c.budget -= 1;
L_0044D06C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0044D08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D07Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D07Cu) [[unlikely]] return; }
L_0044D07C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D08Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D08Cu) [[unlikely]] return; }
L_0044D08C:
    set32(c.r[16], ld32((c.r[22].w[0] + 344u)));
    c.budget -= 1;
L_0044D090:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 216u)));  goto L_0044D0FC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[22].w[0] + 344u), c.r[17].w[0]);  goto L_0044D0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D0A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D0A8u) [[unlikely]] return; }
L_0044D0A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D0B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D0B8u) [[unlikely]] return; }
L_0044D0B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044D0D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D0D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044D0D4u) [[unlikely]] return; }
L_0044D0D4:
    st32((c.r[22].w[0] + 344u), c.r[17].w[0]);
    c.budget -= 1;
L_0044D0D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0044D0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D0E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D0E8u) [[unlikely]] return; }
L_0044D0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D0F8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D0F8u) [[unlikely]] return; }
L_0044D0F8:
    set32(c.r[16], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0044D0FC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_0044D13C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D10Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D10Cu) [[unlikely]] return; }
L_0044D10C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D11Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D11Cu) [[unlikely]] return; }
L_0044D11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044D138; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044D138u) [[unlikely]] return; }
L_0044D138:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0044D13C:
    c.r[2].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044CC40u | kUnwind; return; } goto L_0044CC40; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0044D1A8; } }
L_0044D15C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D178u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0044D178u) [[unlikely]] return; }
L_0044D178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D194; } }
    set32(c.r[2], c.r[20].w[0] + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D194u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00D3(c, 227u, depth + 1u); else { c.pc = 0x0044DCB0u; return; } if (c.pc != 0x0044D194u) [[unlikely]] return; }
L_0044D194:
    set32(c.r[4], c.r[20].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D1A0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_00D3(c, 177u, depth + 1u); else { c.pc = 0x0044D6F0u; return; } if (c.pc != 0x0044D1A0u) [[unlikely]] return; }
L_0044D1A0:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0044D1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D15Cu | kUnwind; return; } goto L_0044D15C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[20].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0044D20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D1D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D1D8u) [[unlikely]] return; }
L_0044D1D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D1ECu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D1ECu) [[unlikely]] return; }
L_0044D1EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  goto L_0044D210; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D20Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044D20Cu) [[unlikely]] return; }
L_0044D20C:
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_0044D210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D218u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044D218u) [[unlikely]] return; }
L_0044D218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0044D250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044D30C; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0044D274:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D280u); set32(c.r[4], ld32((c.r[2].w[0] + 268u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0044D280u) [[unlikely]] return; }
L_0044D280:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D274u | kUnwind; return; } goto L_0044D274; }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0044D2F4; } }
L_0044D29C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_0044D2E8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D2DC; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0044D2D8; } }
    set32(c.r[2], c.r[17].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D2D8u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 222u, depth + 1u); else { c.pc = 0x0044DAF0u; return; } if (c.pc != 0x0044D2D8u) [[unlikely]] return; }
L_0044D2D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D2E4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0044D2E4u) [[unlikely]] return; }
L_0044D2E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0044D2E8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D2F4u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0044D2F4u) [[unlikely]] return; }
L_0044D2F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 56u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D29Cu | kUnwind; return; } goto L_0044D29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D30Cu); set32(c.r[4], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00D3(c, 219u, depth + 1u); else { c.pc = 0x0044DA80u; return; } if (c.pc != 0x0044D30Cu) [[unlikely]] return; }
L_0044D30C:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044D330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044D484; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D360u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 136u, depth + 1u); else { c.pc = 0x0044D250u; return; } if (c.pc != 0x0044D360u) [[unlikely]] return; }
L_0044D360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    set32(c.r[5], c.r[5].w[0] - 7344u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D378u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0044D378u) [[unlikely]] return; }
L_0044D378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 344u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D390u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0044D390u) [[unlikely]] return; }
L_0044D390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    set32(c.r[5], c.r[5].w[0] - 6864u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D3A8u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0044D3A8u) [[unlikely]] return; }
L_0044D3A8:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_0044D3DC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044D3D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044D3D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0044D3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D3D8u);  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D3D8u) [[unlikely]] return; }
L_0044D3D8:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_0044D3DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0044D410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0044D404; } }
L_0044D3EC:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D3F8u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044D3F8u) [[unlikely]] return; }
L_0044D3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D400u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0044D400u) [[unlikely]] return; }
L_0044D400:
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0044D404:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D3ECu | kUnwind; return; } goto L_0044D3EC; }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0044D410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044D458; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0044D458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D42Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D42Cu) [[unlikely]] return; }
L_0044D42C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D43Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D43Cu) [[unlikely]] return; }
L_0044D43C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044D458; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044D458u) [[unlikely]] return; }
L_0044D458:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0044D470; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0044D470:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0044D484u) [[unlikely]] return; }
L_0044D484:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044D4A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28848u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_0044D4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D4E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D4E8u) [[unlikely]] return; }
L_0044D4E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D4F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D4F8u) [[unlikely]] return; }
L_0044D4F8:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D504u); st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0044D504u) [[unlikely]] return; }
L_0044D504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[3], c.r[3].w[0] + 28407u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], 0u + 16u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], 0u + 28u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D53Cu); st32((c.r[17].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 289u, depth + 1u); else { c.pc = 0x00117D00u; return; } if (c.pc != 0x0044D53Cu) [[unlikely]] return; }
L_0044D53C:
    set32(c.r[18], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D548u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0044D548u) [[unlikely]] return; }
L_0044D548:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0044D560; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D55Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0044D55Cu) [[unlikely]] return; }
L_0044D55C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0044D560:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  goto L_0044D574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D570u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0044D570u) [[unlikely]] return; }
L_0044D570:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0044D574:
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D590u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D3(c, 221u, depth + 1u); else { c.pc = 0x0044DAC0u; return; } if (c.pc != 0x0044D590u) [[unlikely]] return; }
L_0044D590:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    set32(c.r[5], c.r[5].w[0] - 6496u);
    set32(c.r[6], c.r[6].w[0] - 6864u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5B0u); set32(c.r[8], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0044D5B0u) [[unlikely]] return; }
L_0044D5B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 344u);
    set32(c.r[5], c.r[5].w[0] - 10688u);
    set32(c.r[6], c.r[6].w[0] - 4096u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5D0u); set32(c.r[8], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0044D5D0u) [[unlikely]] return; }
L_0044D5D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    set32(c.r[5], c.r[5].w[0] - 10704u);
    set32(c.r[6], c.r[6].w[0] - 7344u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D5F0u); set32(c.r[8], 0u + 50u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0044D5F0u) [[unlikely]] return; }
L_0044D5F0:
    st32((c.r[17].w[0] + 744u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D60Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 49u, depth + 1u); else { c.pc = 0x0044C990u; return; } if (c.pc != 0x0044D60Cu) [[unlikely]] return; }
L_0044D60C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044D630:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0044D650; }
L_0044D640:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0044D6A0; }
L_0044D650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0044D688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D678u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D678u) [[unlikely]] return; }
L_0044D678:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D688u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D688u) [[unlikely]] return; }
L_0044D688:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044D6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0044D6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D6C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044D6C8u) [[unlikely]] return; }
L_0044D6C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D6D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044D6D8u) [[unlikely]] return; }
L_0044D6D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044D6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0044D740; } }
L_0044D714:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0044D730; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044D740; } }
L_0044D730:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0044D740:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D714u | kUnwind; return; } goto L_0044D714; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_0044D768; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_0044D780; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0044D768:
    set32(c.r[8], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D77Cu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00D3(c, 228u, depth + 1u); else { c.pc = 0x0044DCE0u; return; } if (c.pc != 0x0044D77Cu) [[unlikely]] return; }
L_0044D77C:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0044D780:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044D790:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_0044D7B4; } }
L_0044D79C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_0044D7B4; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_0044D7B4:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044D79Cu | kUnwind; return; } goto L_0044D79C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_0044D7E0; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_0044D7E4; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_0044D7E0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0044D7E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044D7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044D904; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0044D880; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0044D83C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D838u);  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D838u) [[unlikely]] return; }
L_0044D838:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0044D83C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D850; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D84Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D84Cu) [[unlikely]] return; }
L_0044D84C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D858u);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D858u) [[unlikely]] return; }
L_0044D858:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D864u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D3(c, 217u, depth + 1u); else { c.pc = 0x0044DA60u; return; } if (c.pc != 0x0044D864u) [[unlikely]] return; }
L_0044D864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D86Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D86Cu) [[unlikely]] return; }
L_0044D86C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D87Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 214u, depth + 1u); else { c.pc = 0x0044DA30u; return; } if (c.pc != 0x0044D87Cu) [[unlikely]] return; }
L_0044D87C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0044D880:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D8E4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0044D8A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D89Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D89Cu) [[unlikely]] return; }
L_0044D89C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0044D8A0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D8B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D8B0u) [[unlikely]] return; }
L_0044D8B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8BCu);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D8BCu) [[unlikely]] return; }
L_0044D8BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8C8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D3(c, 217u, depth + 1u); else { c.pc = 0x0044DA60u; return; } if (c.pc != 0x0044D8C8u) [[unlikely]] return; }
L_0044D8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D8D0u) [[unlikely]] return; }
L_0044D8D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 214u, depth + 1u); else { c.pc = 0x0044DA30u; return; } if (c.pc != 0x0044D8E0u) [[unlikely]] return; }
L_0044D8E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8ECu);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D8ECu) [[unlikely]] return; }
L_0044D8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D8F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D8F4u) [[unlikely]] return; }
L_0044D8F4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0044D908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D904u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044D904u) [[unlikely]] return; }
L_0044D904:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0044D908:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044D9FC; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0044D978; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0044D934; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D930u) [[unlikely]] return; }
L_0044D930:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0044D934:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D944u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D944u) [[unlikely]] return; }
L_0044D944:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D950u);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D950u) [[unlikely]] return; }
L_0044D950:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D95Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D3(c, 217u, depth + 1u); else { c.pc = 0x0044DA60u; return; } if (c.pc != 0x0044D95Cu) [[unlikely]] return; }
L_0044D95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D964u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D964u) [[unlikely]] return; }
L_0044D964:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D974u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 214u, depth + 1u); else { c.pc = 0x0044DA30u; return; } if (c.pc != 0x0044D974u) [[unlikely]] return; }
L_0044D974:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0044D978:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D9DC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0044D998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D994u) [[unlikely]] return; }
L_0044D994:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0044D998:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0044D9AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044D9A8u) [[unlikely]] return; }
L_0044D9A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9B4u);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D9B4u) [[unlikely]] return; }
L_0044D9B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9C0u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D3(c, 217u, depth + 1u); else { c.pc = 0x0044DA60u; return; } if (c.pc != 0x0044D9C0u) [[unlikely]] return; }
L_0044D9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D9C8u) [[unlikely]] return; }
L_0044D9C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D3(c, 214u, depth + 1u); else { c.pc = 0x0044DA30u; return; } if (c.pc != 0x0044D9D8u) [[unlikely]] return; }
L_0044D9D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044D9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9E4u);  if (depth < kMaxDepth) unit_00D3(c, 218u, depth + 1u); else { c.pc = 0x0044DA70u; return; } if (c.pc != 0x0044D9E4u) [[unlikely]] return; }
L_0044D9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 216u, depth + 1u); else { c.pc = 0x0044DA50u; return; } if (c.pc != 0x0044D9ECu) [[unlikely]] return; }
L_0044D9EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044D9FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044D9FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044D9FCu) [[unlikely]] return; }
L_0044D9FC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0044DA10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044DA0Cu) [[unlikely]] return; }
L_0044DA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0044DA10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044DA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0044DA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DA44u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044DA44u) [[unlikely]] return; }
L_0044DA44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0044DA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0044DA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044DA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0044DA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044DAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DAA0u);  if (depth < kMaxDepth) unit_00D3(c, 182u, depth + 1u); else { c.pc = 0x0044D7F0u; return; } if (c.pc != 0x0044DAA0u) [[unlikely]] return; }
L_0044DAA0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0044DAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0044DAC0:
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
L_0044DAF0:
    set32(c.r[10], ld32((c.r[7].w[0])));
    set32(c.r[9], ld32((c.r[6].w[0])));
    c.budget -= 4;
    if (c.r[9].d[0] != c.r[10].d[0]) { set32(c.r[8], ld32((c.r[10].w[0])));  goto L_0044DB08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[10].w[0]);  if (t) { goto L_0044DB68; } }
L_0044DB08:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == c.r[10].d[0]; st32((c.r[3].w[0]), c.r[7].w[0]);  if (t) { goto L_0044DB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 8u);  if (t) { goto L_0044DB58; } }
L_0044DB2C:
    set32(c.r[7], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
L_0044DB58:
    set32(c.r[9], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[10].d[0]) { set32(c.r[3], ld32((c.r[9].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044DB2Cu | kUnwind; return; } goto L_0044DB2C; }
L_0044DB64:
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.budget -= 1;
L_0044DB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0044DB70:
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[7].w[0]);  c.pc = t; return; }
L_0044DBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DBF4u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0006(c, 17u, depth + 1u); else { c.pc = 0x001181E0u; return; } if (c.pc != 0x0044DBF4u) [[unlikely]] return; }
L_0044DBF4:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0044DC30; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 10;
L_0044DC30:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0]), c.r[5].w[0]);  if (t) { goto L_0044DC8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
L_0044DC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0044DCB0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0044DCE0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0044DD40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD38u); set32(c.r[5], c.r[5].w[0] + 28427u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0044DD38u) [[unlikely]] return; }
L_0044DD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD40u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0044DD40u) [[unlikely]] return; }
L_0044DD40:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DD4Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0044DD4Cu) [[unlikely]] return; }
L_0044DD4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0044DD70; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_0044DD70:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0044DD90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0044DD94; } }
L_0044DD90:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0044DD94:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DDACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0044DDACu) [[unlikely]] return; }
L_0044DDAC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0044DDBC; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0044DDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0044DDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DE04u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x0044DE04u) [[unlikely]] return; }
L_0044DE04:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_0044DE18; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044DE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044DE30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DE5Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x0044DE5Cu) [[unlikely]] return; }
L_0044DE5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_0044DE70; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044DE70:
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    st32((c.r[3].w[0] + 28u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044DE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DEBCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x0044DEBCu) [[unlikely]] return; }
L_0044DEBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_0044DED0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044DED0:
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    st32((c.r[3].w[0] + 24u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0044DEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DF14u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x0044DF14u) [[unlikely]] return; }
L_0044DF14:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_0044DF28; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044DF28:
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0044DF40:
    set32(c.r[29], c.r[29].w[0] - 736u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 316u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
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
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 12u)));
    c.budget -= 38;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044DFD8u); st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044DFD8u) [[unlikely]] return; }
L_0044DFD8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044DFEC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044E004; } }
L_0044DFEC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.budget -= 6;
L_0044E004:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E018u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044E018u) [[unlikely]] return; }
L_0044E018:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044E02C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044E044; } }
L_0044E02C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[4]);
    c.budget -= 6;
L_0044E044:
    fpu_div(c, 3u, c.f[20], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 428u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 380u), 0u);
    st32((c.r[29].w[0] + 396u), 0u);
    st32((c.r[29].w[0] + 412u), 0u);
    c.f[21] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[6].w[0];
    c.f[31] = fp::mul(c.f[21], c.f[3]);
    c.f[20] = fp::mul(c.f[2], c.f[31]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 23u, c.f[0], c.f[4]);
    fpu_div(c, 30u, c.f[1], c.f[20]);
    c.f[22] = fp::sub(c.f[1], c.f[23]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0B0u);  if (depth < kMaxDepth) unit_0068(c, 420u, depth + 1u); else { c.pc = 0x002A3770u; return; } if (c.pc != 0x0044E0B0u) [[unlikely]] return; }
L_0044E0B0:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[29].w[0] + 360u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[30].w[0] + 4u);
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 328u), c.f[22]);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 332u), c.f[23]);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 124u), c.f[22]);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 128u), c.f[23]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E0ECu); st32((c.r[29].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0044E0ECu) [[unlikely]] return; }
L_0044E0EC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0044E108; }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 2;
L_0044E108:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044E120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E118u);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0044E118u) [[unlikely]] return; }
L_0044E118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[0];  if (t) { goto L_0044E124; } }
L_0044E120:
    c.f[24] = 0u;
    c.budget -= 1;
L_0044E124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.f[29] = fp::mul(c.f[0], c.f[24]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[28].w[0] - 30640u), c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[28].w[0] - 32412u));
    c.f[2] = ld32((c.r[28].w[0] - 29056u));
    c.f[3] = c.r[4].w[0];
    c.f[21] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[28].w[0] - 32408u));
    c.f[27] = fp::mul(c.f[3], c.f[2]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[29] ^ fp::kSign;  if (t) { goto L_0044E92C; } }
L_0044E168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E170u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0044E170u) [[unlikely]] return; }
L_0044E170:
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    set32(c.r[17], ld32((c.r[21].w[0] + 172u)));
    c.f[23] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], ld32((c.r[21].w[0] + 128u)));  goto L_0044E1A8; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29662u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E1A0u) [[unlikely]] return; }
L_0044E1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_0044E92C; } }
L_0044E1A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044E928; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 732u);
    set32(c.r[6], c.r[29].w[0] + 728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E1C8u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00D9(c, 95u, depth + 1u); else { c.pc = 0x00464CE0u; return; } if (c.pc != 0x0044E1C8u) [[unlikely]] return; }
L_0044E1C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[2] = ld32((c.r[5].w[0] + 72u));  if (t) { goto L_0044E1F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 4;
L_0044E1F0:
    c.f[1] = ld32((c.r[29].w[0] + 732u));
    c.f[0] = ld32((c.r[28].w[0] - 32452u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  goto L_0044E254; }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0044E250; } }
    c.f[0] = ld32((c.r[29].w[0] + 728u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0044E250; } }
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.f[1] = fp::sub(c.f[1], c.f[27]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_0044E284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0044E928; } }
L_0044E250:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0044E254:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[26] = ld32((c.r[16].w[0] + 196u));  goto L_0044E288; }
    c.f[0] = fp::add(c.f[0], c.f[27]);
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.budget -= 3;
L_0044E284:
    c.f[26] = ld32((c.r[16].w[0] + 196u));
    c.budget -= 1;
L_0044E288:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E2A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E2A0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0044E2C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E2C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044E2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0044E2E4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E2E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[4].d[0] & 255ull;  goto L_0044E308; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29707u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E300u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E300u) [[unlikely]] return; }
L_0044E300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044E928; } }
L_0044E308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0044E330; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E330:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044E354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0044E354; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E354:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 80u));  goto L_0044E378; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29758u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E370u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E370u) [[unlikely]] return; }
L_0044E370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044E928; } }
L_0044E378:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[25] = fp::mul(c.f[1], c.f[30]);  if (t) { goto L_0044E390; } }
    c.f[2] = fp::add(c.f[2], c.f[24]);
    c.budget -= 1;
L_0044E390:
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[28] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[29]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0044E3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[28] = fp::sub(c.f[28], c.f[24]);  if (t) { goto L_0044E3C4; } }
L_0044E3B4:
    fpu_compare(c, fp::key(c.f[28]) < fp::key(c.f[22]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[21].w[0] + 440u)));  goto L_0044E3C8; }
    c.f[28] = fp::add(c.f[28], c.f[24]);
    c.budget -= 1;
L_0044E3C4:
    set32(c.r[5], ld32((c.r[21].w[0] + 440u)));
    c.budget -= 1;
L_0044E3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E3D0u); set32(c.r[4], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_00F4(c, 75u, depth + 1u); else { c.pc = 0x004D0990u; return; } if (c.pc != 0x0044E3D0u) [[unlikely]] return; }
L_0044E3D0:
    set32(c.r[2], c.r[16].w[0] + 136u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 712u));
    set32(c.r[2], c.r[16].w[0] + 140u);
    c.f[8] = ld32((c.r[16].w[0] + 132u));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 716u));
    c.f[7] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 720u));
    c.f[6] = ld32((c.r[16].w[0] + 140u));
    c.facc = fp::mul(c.f[2], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    set32(c.r[21], c.r[17].w[0] + 160u);
    c.f[5] = ld32((c.r[17].w[0] + 160u));
    c.f[2] = ld32((c.r[16].w[0] + 144u));
    c.f[4] = ld32((c.r[17].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.f[3] = ld32((c.r[17].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[1], c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 696u), c.f[8]);
    set32(c.r[2], c.r[16].w[0] + 116u);
    set32(c.r[4], c.r[29].w[0] + 552u);
    st32((c.r[29].w[0] + 700u), c.f[7]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 704u), c.f[6]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[29].w[0] + 680u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[29].w[0] + 684u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E48Cu); st32((c.r[29].w[0] + 688u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0044E48Cu) [[unlikely]] return; }
L_0044E48C:
    set32(c.r[4], c.r[29].w[0] + 536u);
    set32(c.r[5], c.r[29].w[0] + 696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E49Cu); set32(c.r[6], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0044E49Cu) [[unlikely]] return; }
L_0044E49C:
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4A8u); set32(c.r[5], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0044E4A8u) [[unlikely]] return; }
L_0044E4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4B0u); set32(c.r[4], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0044E4B0u) [[unlikely]] return; }
L_0044E4B0:
    set32(c.r[4], c.r[29].w[0] + 664u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4BCu); set32(c.r[5], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0044E4BCu) [[unlikely]] return; }
L_0044E4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4C4u); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0044E4C4u) [[unlikely]] return; }
L_0044E4C4:
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], c.r[29].w[0] + 664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4D4u); set32(c.r[6], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0044E4D4u) [[unlikely]] return; }
L_0044E4D4:
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4E0u); set32(c.r[5], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0044E4E0u) [[unlikely]] return; }
L_0044E4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4E8u); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0044E4E8u) [[unlikely]] return; }
L_0044E4E8:
    set32(c.r[4], c.r[29].w[0] + 600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E4F4u); set32(c.r[5], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0044E4F4u) [[unlikely]] return; }
L_0044E4F4:
    c.f[2] = ld32((c.r[29].w[0] + 600u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 604u));
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    st32((c.r[29].w[0] + 680u), c.f[2]);
    st32((c.r[29].w[0] + 684u), c.f[1]);
    st32((c.r[29].w[0] + 688u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[29].w[0] + 648u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 652u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 656u), c.f[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 636u), c.f[1]);
    st32((c.r[29].w[0] + 632u), c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E560u); st32((c.r[29].w[0] + 640u), c.f[2]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0044E560u) [[unlikely]] return; }
L_0044E560:
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[5], c.r[29].w[0] + 632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E570u); set32(c.r[6], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0044E570u) [[unlikely]] return; }
L_0044E570:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E57Cu); set32(c.r[5], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0044E57Cu) [[unlikely]] return; }
L_0044E57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E584u); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0044E584u) [[unlikely]] return; }
L_0044E584:
    set32(c.r[4], c.r[29].w[0] + 584u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E590u); set32(c.r[5], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0044E590u) [[unlikely]] return; }
L_0044E590:
    c.f[2] = ld32((c.r[29].w[0] + 584u));
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.f[1] = ld32((c.r[29].w[0] + 588u));
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 616u), c.f[2]);
    st32((c.r[29].w[0] + 620u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5BCu); st32((c.r[29].w[0] + 624u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0044E5BCu) [[unlikely]] return; }
L_0044E5BC:
    set32(c.r[4], c.r[29].w[0] + 440u);
    set32(c.r[5], c.r[29].w[0] + 616u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5CCu); set32(c.r[6], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0044E5CCu) [[unlikely]] return; }
L_0044E5CC:
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5D8u); set32(c.r[5], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0044E5D8u) [[unlikely]] return; }
L_0044E5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5E0u); set32(c.r[4], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0044E5E0u) [[unlikely]] return; }
L_0044E5E0:
    set32(c.r[4], c.r[29].w[0] + 568u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E5ECu); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0044E5ECu) [[unlikely]] return; }
L_0044E5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 380u), 0u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 396u), 0u);
    c.f[12] = fp::mul(c.f[1], c.f[23]);
    st32((c.r[29].w[0] + 412u), 0u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.f[5] = ld32((c.r[29].w[0] + 568u));
    c.f[4] = ld32((c.r[29].w[0] + 572u));
    c.f[3] = ld32((c.r[29].w[0] + 576u));
    c.f[1] = ld32((c.r[28].w[0] - 32408u));
    c.f[8] = ld32((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 632u), c.f[5]);
    c.f[6] = fp::mul(c.f[1], c.f[26]);
    st32((c.r[29].w[0] + 400u), c.f[8]);
    c.f[11] = ld32((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 636u), c.f[4]);
    st32((c.r[29].w[0] + 640u), c.f[3]);
    c.f[7] = ld32((c.r[21].w[0]));
    c.f[0] = 0u;
    c.f[8] = fp::mul(c.f[6], c.f[8]);
    c.facc = fp::add(c.f[0], c.f[7]);
    c.f[7] = ld32((c.r[29].w[0] + 620u));
    c.f[13] = ld32((c.r[29].w[0] + 648u));
    st32((c.r[29].w[0] + 408u), c.f[11]);
    st32((c.r[29].w[0] + 404u), c.f[7]);
    c.f[7] = fp::mul(c.f[6], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[11]);
    c.f[11] = c.f[13] ^ fp::kSign;
    st32((c.r[29].w[0] + 368u), c.f[11]);
    c.f[11] = fp::add(c.facc, fp::mul(c.f[12], c.f[13]));
    c.f[10] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 652u));
    c.f[9] = ld32((c.r[21].w[0] + 8u));
    c.facc = fp::add(c.f[0], c.f[10]);
    c.f[10] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.f[2] = ld32((c.r[29].w[0] + 656u));
    c.facc = fp::add(c.f[0], c.f[9]);
    c.f[8] = fp::add(c.f[11], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[2]));
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32404u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[2] = fp::mul(c.f[0], c.f[28]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[8], c.f[0]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[29].w[0] + 384u), c.f[5]);
    st32((c.r[29].w[0] + 388u), c.f[4]);
    st32((c.r[29].w[0] + 392u), c.f[3]);
    st32((c.r[29].w[0] + 372u), c.f[10]);
    st32((c.r[29].w[0] + 420u), c.f[1]);
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.budget -= 61;
L_0044E6E0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E6E0u | kUnwind; return; } goto L_0044E6E0; } }
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    st32((c.r[19].w[0] + 100u), c.f[2]);
    st32((c.r[19].w[0] + 104u), c.f[1]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32400u));
    fpu_compare(c, fp::key(c.f[31]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E738; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044E754; } }
    c.f[0] = ld32((c.r[28].w[0] - 32456u));
    fpu_compare(c, fp::key(c.f[31]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E754; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32400u));  goto L_0044E774; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E770u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E770u) [[unlikely]] return; }
L_0044E770:
    c.f[0] = ld32((c.r[28].w[0] - 32400u));
    c.budget -= 1;
L_0044E774:
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E784; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044E7A0; } }
    c.f[0] = ld32((c.r[28].w[0] - 32456u));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0044E7A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044E7A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = fp::mul(c.f[25], c.f[21]);  goto L_0044E7C0; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29830u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E7BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E7BCu) [[unlikely]] return; }
L_0044E7BC:
    c.f[1] = fp::mul(c.f[25], c.f[21]);
    c.budget -= 1;
L_0044E7C0:
    c.f[0] = ld32((c.r[28].w[0] - 32408u));
    c.f[25] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E7D0u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x0044E7D0u) [[unlikely]] return; }
L_0044E7D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 8u);  goto L_0044E82C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E7E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x0044E7E0u) [[unlikely]] return; }
L_0044E7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044E828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E7F0u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x0044E7F0u) [[unlikely]] return; }
L_0044E7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044E828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E800u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x0044E800u) [[unlikely]] return; }
L_0044E800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044E828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E810u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x0044E810u) [[unlikely]] return; }
L_0044E810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044E828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E820u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x0044E820u) [[unlikely]] return; }
L_0044E820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = c.f[25] ^ fp::kSign;  goto L_0044E844; }
L_0044E828:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_0044E82C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29843u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E83Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0044E83Cu) [[unlikely]] return; }
L_0044E83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044E928; } }
L_0044E844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    fpu_compare(c, fp::key(c.f[25]) == fp::key(c.f[0]));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32596u));
    c.f[1] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 340u), c.f[25]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 344u), c.f[20]);
    st32((c.r[29].w[0] + 348u), c.f[1]);
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 352u), c.f[0]);  if (t) { goto L_0044E928; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0044E928; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0044E928; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8ACu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x0044E8ACu) [[unlikely]] return; }
L_0044E8AC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E8BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044E8BCu) [[unlikely]] return; }
L_0044E8BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 316u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[3].w[0] + 68u), 0u);
    st32((c.r[3].w[0] + 72u), 0u);
    st32((c.r[3].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E900u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044E900u) [[unlikely]] return; }
L_0044E900:
    set32(c.r[3], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044E928; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E918u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 350u, depth + 1u); else { c.pc = 0x002CAF50u; return; } if (c.pc != 0x0044E918u) [[unlikely]] return; }
L_0044E918:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E924u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 210u, depth + 1u); else { c.pc = 0x0029AA30u; return; } if (c.pc != 0x0044E924u) [[unlikely]] return; }
L_0044E924:
    st32((c.r[23].w[0] + 4u), 0u);
    c.budget -= 1;
L_0044E928:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0044E92C:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[30].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E168u | kUnwind; return; } goto L_0044E168; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[28].w[0] - 30640u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_0044E9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044EADC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28880u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0044EA10; } }
L_0044E9DC:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 132u)));  goto L_0044E9FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044E9F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044E9F8u) [[unlikely]] return; }
L_0044E9F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_0044E9FC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 120u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA10u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110490u; return; } if (c.pc != 0x0044EA10u) [[unlikely]] return; }
L_0044EA10:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044E9DCu | kUnwind; return; } goto L_0044E9DC; }
    set32(c.r[2], c.r[17].w[0] + 140u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 120u);  goto L_0044EA60; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044EA5C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044EA5C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044EA5C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044EA5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044EA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EA5Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044EA5Cu) [[unlikely]] return; }
L_0044EA5C:
    set32(c.r[5], c.r[17].w[0] + 120u);
    c.budget -= 1;
L_0044EA60:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0044EAA4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0044EAA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0044EAA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0044EAA0; } }
    set32(c.r[2], c.r[17].w[0] + 132u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[7], c.r[29].w[0] + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EAA0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x0044EAA0u) [[unlikely]] return; }
L_0044EAA0:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0044EAA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0044EAC8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044EAC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044EAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EAC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 488u, depth + 1u); else { c.pc = 0x004538D0u; return; } if (c.pc != 0x0044EAC4u) [[unlikely]] return; }
L_0044EAC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0044EAC8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0044EAE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EADCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0044EADCu) [[unlikely]] return; }
L_0044EADC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044EAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044EB00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28880u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0044EB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0044EB48u) [[unlikely]] return; }
L_0044EB48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0044EB60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB5Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0044EB5Cu) [[unlikely]] return; }
L_0044EB5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0044EB60:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0044EB74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EB70u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0044EB70u) [[unlikely]] return; }
L_0044EB70:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0044EB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], c.r[19].w[0] + 120u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[19].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0044EBC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0044EBA0u) [[unlikely]] return; }
L_0044EBA0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0044EBB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBB4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0044EBB4u) [[unlikely]] return; }
L_0044EBB4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0044EBB8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  goto L_0044EBCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBC8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0044EBC8u) [[unlikely]] return; }
L_0044EBC8:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_0044EBCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBD8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x0044EBD8u) [[unlikely]] return; }
L_0044EBD8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 140u);  if (t) { goto L_0044EC20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EBECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0044EBECu) [[unlikely]] return; }
L_0044EBEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0044EC0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC04u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0044EC04u) [[unlikely]] return; }
L_0044EC04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0044EC0C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_0044EC24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC1Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0044EC1Cu) [[unlikely]] return; }
L_0044EC1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0044EC20:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0044EC24:
    set32(c.r[4], c.r[19].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC3Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 429u, depth + 1u); else { c.pc = 0x00453010u; return; } if (c.pc != 0x0044EC3Cu) [[unlikely]] return; }
L_0044EC3C:
    set32(c.r[4], c.r[19].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EC48u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0044EC48u) [[unlikely]] return; }
L_0044EC48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0044EC64; } }
L_0044EC54:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_0044EC64:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(22ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044EC54u | kUnwind; return; } goto L_0044EC54; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0044EC90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0044F0F0; } }
    st8((c.r[17].w[0] + 2876u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_0044ECDC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044ECDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044ECF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044ECF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  goto L_0044ED00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044ED20; } }
L_0044ED00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0044ED20; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044ED20; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044ED20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));  goto L_0044ED30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044ED3C; } }
L_0044ED30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044ED3C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044ED3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0044F038; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 368u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED58u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044ED58u) [[unlikely]] return; }
L_0044ED58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0044F034; } }
L_0044ED64:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0044ED78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_0044ED7C; } }
L_0044ED78:
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 1;
L_0044ED7C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044ED90u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044ED90u) [[unlikely]] return; }
L_0044ED90:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[19].w[0]);  if (t) { goto L_0044EDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EDB0u) [[unlikely]] return; }
L_0044EDB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDC0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EDC0u) [[unlikely]] return; }
L_0044EDC0:
    set32(c.r[19], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[19].w[0]);  if (t) { goto L_0044EDE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EDD4u) [[unlikely]] return; }
L_0044EDD4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EDE4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EDE4u) [[unlikely]] return; }
L_0044EDE4:
    set32(c.r[19], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[16].w[0] + 216u)));  goto L_0044EE58; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[19].w[0]);  goto L_0044EE34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EE04u) [[unlikely]] return; }
L_0044EE04:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE14u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EE14u) [[unlikely]] return; }
L_0044EE14:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044EE30; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EE30u) [[unlikely]] return; }
L_0044EE30:
    st32((c.r[16].w[0] + 212u), c.r[19].w[0]);
    c.budget -= 1;
L_0044EE34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044EE54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EE44u) [[unlikely]] return; }
L_0044EE44:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE54u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EE54u) [[unlikely]] return; }
L_0044EE54:
    set32(c.r[19], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_0044EE58:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0044EEC4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0044EEA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EE70u) [[unlikely]] return; }
L_0044EE70:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE80u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EE80u) [[unlikely]] return; }
L_0044EE80:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044EE9C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EE9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EE9Cu) [[unlikely]] return; }
L_0044EE9C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044EEA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 216u), 0u);  if (t) { goto L_0044EEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EEB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EEB0u) [[unlikely]] return; }
L_0044EEB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EEC0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EEC0u) [[unlikely]] return; }
L_0044EEC0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0044EEC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 384u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EED4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EED4u) [[unlikely]] return; }
L_0044EED4:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 104u)));  goto L_0044EF48; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[19].w[0]);  goto L_0044EF24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EEF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EEF4u) [[unlikely]] return; }
L_0044EEF4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF04u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EF04u) [[unlikely]] return; }
L_0044EF04:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044EF20; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF20u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EF20u) [[unlikely]] return; }
L_0044EF20:
    st32((c.r[16].w[0] + 212u), c.r[19].w[0]);
    c.budget -= 1;
L_0044EF24:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044EF44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EF34u) [[unlikely]] return; }
L_0044EF34:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF44u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EF44u) [[unlikely]] return; }
L_0044EF44:
    set32(c.r[19], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0044EF48:
    set32(c.r[20], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_0044EFB8; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0] + 216u), c.r[19].w[0]);  goto L_0044EF94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EF64u) [[unlikely]] return; }
L_0044EF64:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF74u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EF74u) [[unlikely]] return; }
L_0044EF74:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044EF90; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EF90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EF90u) [[unlikely]] return; }
L_0044EF90:
    st32((c.r[16].w[0] + 216u), c.r[19].w[0]);
    c.budget -= 1;
L_0044EF94:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044EFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EFA4u) [[unlikely]] return; }
L_0044EFA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFB4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EFB4u) [[unlikely]] return; }
L_0044EFB4:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0044EFB8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_0044EFF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044EFC8u) [[unlikely]] return; }
L_0044EFC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044EFD8u) [[unlikely]] return; }
L_0044EFD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044EFF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044EFF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044EFF4u) [[unlikely]] return; }
L_0044EFF4:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0044EFF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0044F034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F008u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F008u) [[unlikely]] return; }
L_0044F008:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F018u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F018u) [[unlikely]] return; }
L_0044F018:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F034; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F034u) [[unlikely]] return; }
L_0044F034:
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0044F038:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044ED64u | kUnwind; return; } goto L_0044ED64; }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F060; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044F060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F074; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044F074:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  goto L_0044F084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F0A4; } }
L_0044F084:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0044F0A4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044F0A4; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044F0A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 112u));  goto L_0044F0B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F0C4; } }
L_0044F0B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044F0C4; }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0044F0C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0044F0E4; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 372u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F0DCu) [[unlikely]] return; }
L_0044F0DC:
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0044F0E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F0F0u); st8((c.r[17].w[0] + 2876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005F(c, 216u, depth + 1u); else { c.pc = 0x0027F1C0u; return; } if (c.pc != 0x0044F0F0u) [[unlikely]] return; }
L_0044F0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0044F110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0044F1C0; } }
L_0044F140:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 60u)));  goto L_0044F180; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0044F1C0; }
    set32(c.r[25], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_0044F180:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F18Cu); set32(c.r[4], c.r[20].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F18Cu) [[unlikely]] return; }
L_0044F18C:
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  goto L_0044F1AC; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0044F1AC:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_0044F1C0:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0044F140u | kUnwind; return; } goto L_0044F140; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0044F1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F210u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 203u, depth + 1u); else { c.pc = 0x00281440u; return; } if (c.pc != 0x0044F210u) [[unlikely]] return; }
L_0044F210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28896u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_0044F240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F230u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F230u) [[unlikely]] return; }
L_0044F230:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F240u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F240u) [[unlikely]] return; }
L_0044F240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    set32(c.r[3], c.r[3].w[0] + 7360u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F27Cu); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044F27Cu) [[unlikely]] return; }
L_0044F27C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 52u)));  goto L_0044F298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 184u, depth + 1u); else { c.pc = 0x002C9330u; return; } if (c.pc != 0x0044F290u) [[unlikely]] return; }
L_0044F290:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_0044F298:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 32u);  goto L_0044F304; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  goto L_0044F2E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F2B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F2B0u) [[unlikely]] return; }
L_0044F2B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F2C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F2C0u) [[unlikely]] return; }
L_0044F2C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F2DC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F2DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F2DCu) [[unlikely]] return; }
L_0044F2DC:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_0044F2E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0044F300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F2F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F2F0u) [[unlikely]] return; }
L_0044F2F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F300u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F300u) [[unlikely]] return; }
L_0044F300:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0044F304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F30Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044F30Cu) [[unlikely]] return; }
L_0044F30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044F35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F31Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x0044F31Cu) [[unlikely]] return; }
L_0044F31C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_0044F35C:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[3], 0u - 49u);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0044F408; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F394u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F394u) [[unlikely]] return; }
L_0044F394:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0044F408; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0044F3E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F3B8u) [[unlikely]] return; }
L_0044F3B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F3C8u) [[unlikely]] return; }
L_0044F3C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F3E4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F3E4u) [[unlikely]] return; }
L_0044F3E4:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0044F3E8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 92u);  goto L_0044F40C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F3F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F3F8u) [[unlikely]] return; }
L_0044F3F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F408u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F408u) [[unlikely]] return; }
L_0044F408:
    set32(c.r[4], 0u + 92u);
    c.budget -= 1;
L_0044F40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044F414u) [[unlikely]] return; }
L_0044F414:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), 0u);  goto L_0044F430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F428u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x0044F428u) [[unlikely]] return; }
L_0044F428:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 68u), 0u);
    c.budget -= 2;
L_0044F430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[19].w[0] + 72u), 0u);
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0044F4E4; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F470u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F470u) [[unlikely]] return; }
L_0044F470:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0044F4E4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0044F4C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F494u) [[unlikely]] return; }
L_0044F494:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4A4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F4A4u) [[unlikely]] return; }
L_0044F4A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F4C0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F4C0u) [[unlikely]] return; }
L_0044F4C0:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0044F4C4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 56u);  goto L_0044F4E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F4D4u) [[unlikely]] return; }
L_0044F4D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4E4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F4E4u) [[unlikely]] return; }
L_0044F4E4:
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_0044F4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044F4F0u) [[unlikely]] return; }
L_0044F4F0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  goto L_0044F50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F504u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x0044F504u) [[unlikely]] return; }
L_0044F504:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 2;
L_0044F50C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0044F59C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F524u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F524u) [[unlikely]] return; }
L_0044F524:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0044F598; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0044F578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F548u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F548u) [[unlikely]] return; }
L_0044F548:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F558u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F558u) [[unlikely]] return; }
L_0044F558:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F574; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F574u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F574u) [[unlikely]] return; }
L_0044F574:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0044F578:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044F598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F588u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F588u) [[unlikely]] return; }
L_0044F588:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F598u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F598u) [[unlikely]] return; }
L_0044F598:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_0044F59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0044F5A4u) [[unlikely]] return; }
L_0044F5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0044F614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x0044F5B4u) [[unlikely]] return; }
L_0044F5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5D0u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x0044F5D0u) [[unlikely]] return; }
L_0044F5D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5DCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x0044F5DCu) [[unlikely]] return; }
L_0044F5DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5E8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x0044F5E8u) [[unlikely]] return; }
L_0044F5E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F5F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x0044F5F4u) [[unlikely]] return; }
L_0044F5F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0044F600u) [[unlikely]] return; }
L_0044F600:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F60Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x0044F60Cu) [[unlikely]] return; }
L_0044F60C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0044F614:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[3], 0u - 7169u);
    set32(c.r[2], 0u + 127u);
    c.r[4].d[0] = c.r[4].d[0] & 65534ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0044F6D4; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F660u) [[unlikely]] return; }
L_0044F660:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_0044F6D4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0044F6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F684u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F684u) [[unlikely]] return; }
L_0044F684:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F694u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F694u) [[unlikely]] return; }
L_0044F694:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F6B0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F6B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F6B0u) [[unlikely]] return; }
L_0044F6B0:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0044F6B4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_0044F6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F6C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044F6C4u) [[unlikely]] return; }
L_0044F6C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F6D4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044F6D4u) [[unlikely]] return; }
L_0044F6D4:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_0044F6D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0044F700:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32420u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[5].w[0] + 236u));
    set32(c.r[18], ld32((c.r[5].w[0] + 36u)));
    c.f[0] = ld32((c.r[5].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F74Cu); c.f[21] = fp::mul(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F74Cu) [[unlikely]] return; }
L_0044F74C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044F760; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044F778; } }
L_0044F760:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.budget -= 6;
L_0044F778:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F788u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F788u) [[unlikely]] return; }
L_0044F788:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044F79C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044F7B4; } }
L_0044F79C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0044F7B4:
    fpu_div(c, 0u, c.f[20], c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.f[21] ^ fp::kSign;
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 132u));
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.f[4] = ld32((c.r[3].w[0] + 128u));
    c.f[8] = fp::mul(c.f[1], c.f[3]);
    c.f[9] = fp::mul(c.f[1], c.f[2]);
    c.f[7] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[3].w[0] + 144u));
    c.f[2] = ld32((c.r[3].w[0] + 148u));
    c.f[1] = ld32((c.r[3].w[0] + 152u));
    c.f[4] = fp::mul(c.f[0], c.f[3]);
    c.f[5] = fp::mul(c.f[0], c.f[2]);
    c.f[6] = fp::mul(c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[3].w[0] + 160u));
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[1], c.f[6]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[10] = fp::sub(c.f[10], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[8]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[4].w[0] + 31024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[29].w[0] + 80u), c.f[4]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[29].w[0] + 96u), c.f[5]);
    st32((c.r[29].w[0] + 112u), c.f[6]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 84u), c.f[7]);
    st32((c.r[29].w[0] + 100u), c.f[8]);
    set32(c.r[4], c.r[2].w[0] + 336u);
    st32((c.r[29].w[0] + 116u), c.f[9]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 58;
L_0044F89C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044F89Cu | kUnwind; return; } goto L_0044F89C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.f[1] = c.f[10] ^ fp::kSign;
    c.f[0] = c.f[3] ^ fp::kSign;
    c.f[12] = 0u;
    st32((c.r[2].w[0] + 384u), c.f[1]);
    st32((c.r[2].w[0] + 388u), c.f[0]);
    st32((c.r[2].w[0] + 392u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F8E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044F8E0u) [[unlikely]] return; }
L_0044F8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0044F900:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F938u); st32((c.r[29].w[0] + 140u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044F938u) [[unlikely]] return; }
L_0044F938:
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_0044F960; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044F960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044F974; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044F974:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0044F984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044F9A0; } }
L_0044F984:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0044F9A0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044F9A0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044F9A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 24712u)));  goto L_0044FA48; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0044F9C4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F9BCu); set32(c.r[4], c.r[4].w[0] + 31376u);  if (depth < kMaxDepth) unit_0072(c, 353u, depth + 1u); else { c.pc = 0x002CB050u; return; } if (c.pc != 0x0044F9BCu) [[unlikely]] return; }
L_0044F9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044FA44; } }
L_0044F9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F9CCu);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0044F9CCu) [[unlikely]] return; }
L_0044F9CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0044F9F0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044F9ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044F9ECu) [[unlikely]] return; }
L_0044F9EC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0044F9F0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 360u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FA04u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FA04u) [[unlikely]] return; }
L_0044FA04:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_0044FA1C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0044FA44; } }
L_0044FA1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0044FA3C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FA38u) [[unlikely]] return; }
L_0044FA38:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0044FA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FA44u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0044FA44u) [[unlikely]] return; }
L_0044FA44:
    set32(c.r[2], ld32((c.r[28].w[0] - 24712u)));
    c.budget -= 1;
L_0044FA48:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0044FAC8; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[19].w[0]);  goto L_0044FAA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FA74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FA74u) [[unlikely]] return; }
L_0044FA74:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FA84u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FA84u) [[unlikely]] return; }
L_0044FA84:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044FAA0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FAA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FAA0u) [[unlikely]] return; }
L_0044FAA0:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_0044FAA4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044FAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FAB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FAB4u) [[unlikely]] return; }
L_0044FAB4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FAC4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FAC4u) [[unlikely]] return; }
L_0044FAC4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0044FAC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  goto L_0044FC68; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FADCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 439u, depth + 1u); else { c.pc = 0x0044FDD0u; return; } if (c.pc != 0x0044FADCu) [[unlikely]] return; }
L_0044FADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[17].w[0] + 208u));
    c.f[2] = ld32((c.r[17].w[0] + 212u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  goto L_0044FC7C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    st32((c.r[3].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 12;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 36u)));  goto L_0044FBAC; }
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 460u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[19].d[0];  if (t) { goto L_0044FBA8; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[20].w[0] + 460u), c.r[19].w[0]);  goto L_0044FB88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FB58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FB58u) [[unlikely]] return; }
L_0044FB58:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FB68u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FB68u) [[unlikely]] return; }
L_0044FB68:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044FB84; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FB84u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FB84u) [[unlikely]] return; }
L_0044FB84:
    st32((c.r[20].w[0] + 460u), c.r[19].w[0]);
    c.budget -= 1;
L_0044FB88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0044FBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FB98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FB98u) [[unlikely]] return; }
L_0044FB98:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FBA8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FBA8u) [[unlikely]] return; }
L_0044FBA8:
    set32(c.r[19], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0044FBAC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FBBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FBBCu) [[unlikely]] return; }
L_0044FBBC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044FBD0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044FBE8; } }
L_0044FBD0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.budget -= 6;
L_0044FBE8:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FBF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FBF8u) [[unlikely]] return; }
L_0044FBF8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0044FC0C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0044FC24; } }
L_0044FC0C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0044FC24:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 137u, depth + 1u); else { c.pc = 0x00289240u; return; } if (c.pc != 0x0044FC40u) [[unlikely]] return; }
L_0044FC40:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC54u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029AB30u; return; } if (c.pc != 0x0044FC54u) [[unlikely]] return; }
L_0044FC54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 400u, depth + 1u); else { c.pc = 0x0044F700u; return; } if (c.pc != 0x0044FC60u) [[unlikely]] return; }
L_0044FC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044FC78; } }
L_0044FC68:
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC78u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 241u, depth + 1u); else { c.pc = 0x0044DF40u; return; } if (c.pc != 0x0044FC78u) [[unlikely]] return; }
L_0044FC78:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0044FC7C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_0044FCE8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0044FCC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FC94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FC94u) [[unlikely]] return; }
L_0044FC94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FCA4u) [[unlikely]] return; }
L_0044FCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044FCC0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FCC0u) [[unlikely]] return; }
L_0044FCC0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044FCC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0044FCE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0044FCD4u) [[unlikely]] return; }
L_0044FCD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FCE4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0044FCE4u) [[unlikely]] return; }
L_0044FCE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_0044FCE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044FD04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044FD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0044FD18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0044FD18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_0044FD28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044FD48; } }
L_0044FD28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0044FD48; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044FD48; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0044FD48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  goto L_0044FD9C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 364u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FD60u) [[unlikely]] return; }
L_0044FD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0044FD98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 48u);  goto L_0044FD8C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FD88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FD88u) [[unlikely]] return; }
L_0044FD88:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0044FD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FD94u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0044FD94u) [[unlikely]] return; }
L_0044FD94:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0044FD98:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0044FD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FDA4u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0044FDA4u) [[unlikely]] return; }
L_0044FDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0044FDD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FDFCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0068(c, 420u, depth + 1u); else { c.pc = 0x002A3770u; return; } if (c.pc != 0x0044FDFCu) [[unlikely]] return; }
L_0044FDFC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 224u));  goto L_0044FE58; }
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    set32(c.r[2], c.r[18].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FE34u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 338u, depth + 1u); else { c.pc = 0x004525A0u; return; } if (c.pc != 0x0044FE34u) [[unlikely]] return; }
L_0044FE34:
    c.f[1] = ld32((c.r[18].w[0] + 236u));
    c.f[0] = ld32((c.r[28].w[0] - 32432u));
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 84u), c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.budget -= 9;
L_0044FE58:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[18].w[0] + 16u));  goto L_0044FECC; }
    set32(c.r[17], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FE88u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00F4(c, 75u, depth + 1u); else { c.pc = 0x004D0990u; return; } if (c.pc != 0x0044FE88u) [[unlikely]] return; }
L_0044FE88:
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 212u), c.f[1]);  if (t) { goto L_0044FEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), c.f[0]);  if (t) { goto L_0044FEE0; } }
L_0044FECC:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[4] = c.f[1] ^ fp::kSign;
    c.f[5] = c.f[0] ^ fp::kSign;
    c.budget -= 5;
L_0044FEE0:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[20], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[4]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[3]));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044FF24u) [[unlikely]] return; }
L_0044FF24:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF34u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0062(c, 119u, depth + 1u); else { c.pc = 0x00288FE0u; return; } if (c.pc != 0x0044FF34u) [[unlikely]] return; }
L_0044FF34:
    c.f[1] = ld32((c.r[28].w[0] - 32424u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32596u));
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF60u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0062(c, 138u, depth + 1u); else { c.pc = 0x002892D0u; return; } if (c.pc != 0x0044FF60u) [[unlikely]] return; }
L_0044FF60:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FF70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0044FF70u) [[unlikely]] return; }
L_0044FF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0044FF90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00D4(c, 14u, depth); } }
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0044FFD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044FFF8; } }
L_0044FFD4:
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044FFE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044FFE0u) [[unlikely]] return; }
L_0044FFE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_0044FFF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0044FFF8; } }
L_0044FFF0:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0044FFF8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  [[clang::musttail]] return unit_00D4(c, 15u, depth); }
    [[clang::musttail]] return unit_00D4(c, 1u, depth);
}

}
