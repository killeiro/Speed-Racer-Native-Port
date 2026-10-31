#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0,
    0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231,
    0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    247, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287,
    0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0,
    0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0,
    0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0041C000;
    case 2u: goto L_0041C06C;
    case 3u: goto L_0041C074;
    case 4u: goto L_0041C0A4;
    case 5u: goto L_0041C0BC;
    case 6u: goto L_0041C0CC;
    case 7u: goto L_0041C154;
    case 8u: goto L_0041C1E8;
    case 9u: goto L_0041C204;
    case 10u: goto L_0041C230;
    case 11u: goto L_0041C284;
    case 12u: goto L_0041C2D8;
    case 13u: goto L_0041C2E8;
    case 14u: goto L_0041C2F4;
    case 15u: goto L_0041C30C;
    case 16u: goto L_0041C334;
    case 17u: goto L_0041C350;
    case 18u: goto L_0041C36C;
    case 19u: goto L_0041C388;
    case 20u: goto L_0041C3A0;
    case 21u: goto L_0041C3BC;
    case 22u: goto L_0041C3D8;
    case 23u: goto L_0041C3F0;
    case 24u: goto L_0041C440;
    case 25u: goto L_0041C454;
    case 26u: goto L_0041C4C4;
    case 27u: goto L_0041C4E0;
    case 28u: goto L_0041C520;
    case 29u: goto L_0041C530;
    case 30u: goto L_0041C54C;
    case 31u: goto L_0041C58C;
    case 32u: goto L_0041C5B0;
    case 33u: goto L_0041C5BC;
    case 34u: goto L_0041C5D8;
    case 35u: goto L_0041C600;
    case 36u: goto L_0041C620;
    case 37u: goto L_0041C638;
    case 38u: goto L_0041C64C;
    case 39u: goto L_0041C660;
    case 40u: goto L_0041C674;
    case 41u: goto L_0041C68C;
    case 42u: goto L_0041C6A0;
    case 43u: goto L_0041C6B4;
    case 44u: goto L_0041C6C8;
    case 45u: goto L_0041C6E4;
    case 46u: goto L_0041C700;
    case 47u: goto L_0041C718;
    case 48u: goto L_0041C730;
    case 49u: goto L_0041C744;
    case 50u: goto L_0041C758;
    case 51u: goto L_0041C76C;
    case 52u: goto L_0041C784;
    case 53u: goto L_0041C798;
    case 54u: goto L_0041C7AC;
    case 55u: goto L_0041C7C0;
    case 56u: goto L_0041C7F0;
    case 57u: goto L_0041C804;
    case 58u: goto L_0041C814;
    case 59u: goto L_0041C820;
    case 60u: goto L_0041C880;
    case 61u: goto L_0041C888;
    case 62u: goto L_0041C8D8;
    case 63u: goto L_0041C9B0;
    case 64u: goto L_0041CA9C;
    case 65u: goto L_0041CBA8;
    case 66u: goto L_0041CBC0;
    case 67u: goto L_0041CBFC;
    case 68u: goto L_0041CC0C;
    case 69u: goto L_0041CC6C;
    case 70u: goto L_0041CCA0;
    case 71u: goto L_0041CCC4;
    case 72u: goto L_0041CD9C;
    case 73u: goto L_0041CE70;
    case 74u: goto L_0041CF98;
    case 75u: goto L_0041CFB4;
    case 76u: goto L_0041CFE0;
    case 77u: goto L_0041D028;
    case 78u: goto L_0041D04C;
    case 79u: goto L_0041D174;
    case 80u: goto L_0041D190;
    case 81u: goto L_0041D1B0;
    case 82u: goto L_0041D1F8;
    case 83u: goto L_0041D234;
    case 84u: goto L_0041D240;
    case 85u: goto L_0041D264;
    case 86u: goto L_0041D280;
    case 87u: goto L_0041D298;
    case 88u: goto L_0041D2B0;
    case 89u: goto L_0041D2FC;
    case 90u: goto L_0041D30C;
    case 91u: goto L_0041D370;
    case 92u: goto L_0041D380;
    case 93u: goto L_0041D3AC;
    case 94u: goto L_0041D3C0;
    case 95u: goto L_0041D3E4;
    case 96u: goto L_0041D408;
    case 97u: goto L_0041D420;
    case 98u: goto L_0041D42C;
    case 99u: goto L_0041D440;
    case 100u: goto L_0041D450;
    case 101u: goto L_0041D460;
    case 102u: goto L_0041D47C;
    case 103u: goto L_0041D498;
    case 104u: goto L_0041D4CC;
    case 105u: goto L_0041D4E0;
    case 106u: goto L_0041D4F0;
    case 107u: goto L_0041D508;
    case 108u: goto L_0041D51C;
    case 109u: goto L_0041D530;
    case 110u: goto L_0041D550;
    case 111u: goto L_0041D580;
    case 112u: goto L_0041D588;
    case 113u: goto L_0041D590;
    case 114u: goto L_0041D5A0;
    case 115u: goto L_0041D5AC;
    case 116u: goto L_0041D5D0;
    case 117u: goto L_0041D5DC;
    case 118u: goto L_0041D600;
    case 119u: goto L_0041D624;
    case 120u: goto L_0041D62C;
    case 121u: goto L_0041D648;
    case 122u: goto L_0041D660;
    case 123u: goto L_0041D67C;
    case 124u: goto L_0041D698;
    case 125u: goto L_0041D6A4;
    case 126u: goto L_0041D6B4;
    case 127u: goto L_0041D6C4;
    case 128u: goto L_0041D6E8;
    case 129u: goto L_0041D6F0;
    case 130u: goto L_0041D710;
    case 131u: goto L_0041D73C;
    case 132u: goto L_0041D75C;
    case 133u: goto L_0041D76C;
    case 134u: goto L_0041D7CC;
    case 135u: goto L_0041D7DC;
    case 136u: goto L_0041D820;
    case 137u: goto L_0041D830;
    case 138u: goto L_0041D8A0;
    case 139u: goto L_0041D8E8;
    case 140u: goto L_0041D910;
    case 141u: goto L_0041D924;
    case 142u: goto L_0041D938;
    case 143u: goto L_0041D958;
    case 144u: goto L_0041D96C;
    case 145u: goto L_0041D97C;
    case 146u: goto L_0041D99C;
    case 147u: goto L_0041D9B8;
    case 148u: goto L_0041D9D4;
    case 149u: goto L_0041D9F8;
    case 150u: goto L_0041DA20;
    case 151u: goto L_0041DA50;
    case 152u: goto L_0041DA84;
    case 153u: goto L_0041DAB0;
    case 154u: goto L_0041DB0C;
    case 155u: goto L_0041DB24;
    case 156u: goto L_0041DB40;
    case 157u: goto L_0041DB5C;
    case 158u: goto L_0041DB70;
    case 159u: goto L_0041DB84;
    case 160u: goto L_0041DBE0;
    case 161u: goto L_0041DC00;
    case 162u: goto L_0041DC10;
    case 163u: goto L_0041DC20;
    case 164u: goto L_0041DC50;
    case 165u: goto L_0041DC60;
    case 166u: goto L_0041DC74;
    case 167u: goto L_0041DC8C;
    case 168u: goto L_0041DCB8;
    case 169u: goto L_0041DCC8;
    case 170u: goto L_0041DCE8;
    case 171u: goto L_0041DD00;
    case 172u: goto L_0041DD2C;
    case 173u: goto L_0041DD3C;
    case 174u: goto L_0041DD5C;
    case 175u: goto L_0041DD74;
    case 176u: goto L_0041DDA0;
    case 177u: goto L_0041DDB0;
    case 178u: goto L_0041DDD0;
    case 179u: goto L_0041DDF0;
    case 180u: goto L_0041DE1C;
    case 181u: goto L_0041DE4C;
    case 182u: goto L_0041DE5C;
    case 183u: goto L_0041DE7C;
    case 184u: goto L_0041DE98;
    case 185u: goto L_0041DEC8;
    case 186u: goto L_0041DED8;
    case 187u: goto L_0041DEF8;
    case 188u: goto L_0041DF14;
    case 189u: goto L_0041DF44;
    case 190u: goto L_0041DF54;
    case 191u: goto L_0041DF74;
    case 192u: goto L_0041DF7C;
    case 193u: goto L_0041DF90;
    case 194u: goto L_0041DFEC;
    case 195u: goto L_0041DFFC;
    case 196u: goto L_0041E050;
    case 197u: goto L_0041E06C;
    case 198u: goto L_0041E0AC;
    case 199u: goto L_0041E0C0;
    case 200u: goto L_0041E0CC;
    case 201u: goto L_0041E0DC;
    case 202u: goto L_0041E0E8;
    case 203u: goto L_0041E0F0;
    case 204u: goto L_0041E10C;
    case 205u: goto L_0041E114;
    case 206u: goto L_0041E134;
    case 207u: goto L_0041E140;
    case 208u: goto L_0041E150;
    case 209u: goto L_0041E15C;
    case 210u: goto L_0041E164;
    case 211u: goto L_0041E170;
    case 212u: goto L_0041E1E0;
    case 213u: goto L_0041E230;
    case 214u: goto L_0041E244;
    case 215u: goto L_0041E280;
    case 216u: goto L_0041E2B4;
    case 217u: goto L_0041E2C4;
    case 218u: goto L_0041E318;
    case 219u: goto L_0041E330;
    case 220u: goto L_0041E350;
    case 221u: goto L_0041E35C;
    case 222u: goto L_0041E3B0;
    case 223u: goto L_0041E3F8;
    case 224u: goto L_0041E40C;
    case 225u: goto L_0041E418;
    case 226u: goto L_0041E424;
    case 227u: goto L_0041E42C;
    case 228u: goto L_0041E43C;
    case 229u: goto L_0041E45C;
    case 230u: goto L_0041E470;
    case 231u: goto L_0041E47C;
    case 232u: goto L_0041E488;
    case 233u: goto L_0041E490;
    case 234u: goto L_0041E4A0;
    case 235u: goto L_0041E4AC;
    case 236u: goto L_0041E4B8;
    case 237u: goto L_0041E4C0;
    case 238u: goto L_0041E4D0;
    case 239u: goto L_0041E4FC;
    case 240u: goto L_0041E510;
    case 241u: goto L_0041E51C;
    case 242u: goto L_0041E528;
    case 243u: goto L_0041E530;
    case 244u: goto L_0041E540;
    case 245u: goto L_0041E560;
    case 246u: goto L_0041E574;
    case 247u: goto L_0041E580;
    case 248u: goto L_0041E58C;
    case 249u: goto L_0041E594;
    case 250u: goto L_0041E5A4;
    case 251u: goto L_0041E5B0;
    case 252u: goto L_0041E5BC;
    case 253u: goto L_0041E5C4;
    case 254u: goto L_0041E5D4;
    case 255u: goto L_0041E618;
    case 256u: goto L_0041E624;
    case 257u: goto L_0041E634;
    case 258u: goto L_0041E644;
    case 259u: goto L_0041E660;
    case 260u: goto L_0041E674;
    case 261u: goto L_0041E680;
    case 262u: goto L_0041E690;
    case 263u: goto L_0041E6DC;
    case 264u: goto L_0041E6F0;
    case 265u: goto L_0041E700;
    case 266u: goto L_0041E738;
    case 267u: goto L_0041E75C;
    case 268u: goto L_0041E790;
    case 269u: goto L_0041E7D4;
    case 270u: goto L_0041E7E0;
    case 271u: goto L_0041E7F0;
    case 272u: goto L_0041E800;
    case 273u: goto L_0041E830;
    case 274u: goto L_0041E860;
    case 275u: goto L_0041E8BC;
    case 276u: goto L_0041E8F0;
    case 277u: goto L_0041E920;
    case 278u: goto L_0041E978;
    case 279u: goto L_0041E980;
    case 280u: goto L_0041E98C;
    case 281u: goto L_0041E99C;
    case 282u: goto L_0041E9B0;
    case 283u: goto L_0041E9F0;
    case 284u: goto L_0041EA30;
    case 285u: goto L_0041EA64;
    case 286u: goto L_0041EA70;
    case 287u: goto L_0041EA7C;
    case 288u: goto L_0041EA88;
    case 289u: goto L_0041EA9C;
    case 290u: goto L_0041EAC0;
    case 291u: goto L_0041EAF8;
    case 292u: goto L_0041EB10;
    case 293u: goto L_0041EB30;
    case 294u: goto L_0041EB40;
    case 295u: goto L_0041EB50;
    case 296u: goto L_0041EB68;
    case 297u: goto L_0041EB80;
    case 298u: goto L_0041EB98;
    case 299u: goto L_0041EBB0;
    case 300u: goto L_0041EBD0;
    case 301u: goto L_0041EBE0;
    case 302u: goto L_0041EC14;
    case 303u: goto L_0041EC40;
    case 304u: goto L_0041EC48;
    case 305u: goto L_0041EC64;
    case 306u: goto L_0041EC90;
    case 307u: goto L_0041EC98;
    case 308u: goto L_0041ECC0;
    case 309u: goto L_0041ED00;
    case 310u: goto L_0041ED14;
    case 311u: goto L_0041ED28;
    case 312u: goto L_0041ED48;
    case 313u: goto L_0041ED54;
    case 314u: goto L_0041ED64;
    case 315u: goto L_0041ED78;
    case 316u: goto L_0041ED84;
    case 317u: goto L_0041ED90;
    case 318u: goto L_0041EDA0;
    case 319u: goto L_0041EDD0;
    case 320u: goto L_0041EDDC;
    case 321u: goto L_0041EE00;
    case 322u: goto L_0041EE98;
    case 323u: goto L_0041EEA0;
    case 324u: goto L_0041EEAC;
    case 325u: goto L_0041EED0;
    case 326u: goto L_0041F02C;
    case 327u: goto L_0041F040;
    case 328u: goto L_0041F048;
    case 329u: goto L_0041F078;
    case 330u: goto L_0041F0B0;
    case 331u: goto L_0041F0B8;
    case 332u: goto L_0041F0D0;
    case 333u: goto L_0041F0E0;
    case 334u: goto L_0041F130;
    case 335u: goto L_0041F154;
    case 336u: goto L_0041F17C;
    case 337u: goto L_0041F19C;
    case 338u: goto L_0041F1BC;
    case 339u: goto L_0041F1E8;
    case 340u: goto L_0041F220;
    case 341u: goto L_0041F240;
    case 342u: goto L_0041F24C;
    case 343u: goto L_0041F260;
    case 344u: goto L_0041F270;
    case 345u: goto L_0041F298;
    case 346u: goto L_0041F2D0;
    case 347u: goto L_0041F2E0;
    case 348u: goto L_0041F320;
    case 349u: goto L_0041F32C;
    case 350u: goto L_0041F33C;
    case 351u: goto L_0041F34C;
    case 352u: goto L_0041F378;
    case 353u: goto L_0041F388;
    case 354u: goto L_0041F3A4;
    case 355u: goto L_0041F3B8;
    case 356u: goto L_0041F3C8;
    case 357u: goto L_0041F3D0;
    case 358u: goto L_0041F3E0;
    case 359u: goto L_0041F3E8;
    case 360u: goto L_0041F3FC;
    case 361u: goto L_0041F40C;
    case 362u: goto L_0041F428;
    case 363u: goto L_0041F440;
    case 364u: goto L_0041F474;
    case 365u: goto L_0041F488;
    case 366u: goto L_0041F4E8;
    case 367u: goto L_0041F540;
    case 368u: goto L_0041F568;
    case 369u: goto L_0041F590;
    case 370u: goto L_0041F5C0;
    case 371u: goto L_0041F5F0;
    case 372u: goto L_0041F648;
    case 373u: goto L_0041F660;
    case 374u: goto L_0041F66C;
    case 375u: goto L_0041F69C;
    case 376u: goto L_0041F6A8;
    case 377u: goto L_0041F6D0;
    case 378u: goto L_0041F6E8;
    case 379u: goto L_0041F700;
    case 380u: goto L_0041F730;
    case 381u: goto L_0041F7BC;
    case 382u: goto L_0041F7D4;
    case 383u: goto L_0041F840;
    case 384u: goto L_0041F870;
    case 385u: goto L_0041F8A4;
    case 386u: goto L_0041F8D0;
    case 387u: goto L_0041F8FC;
    case 388u: goto L_0041F928;
    case 389u: goto L_0041F954;
    case 390u: goto L_0041F970;
    case 391u: goto L_0041F994;
    case 392u: goto L_0041FA14;
    case 393u: goto L_0041FA2C;
    case 394u: goto L_0041FA60;
    case 395u: goto L_0041FA7C;
    case 396u: goto L_0041FA90;
    case 397u: goto L_0041FA9C;
    case 398u: goto L_0041FAB0;
    case 399u: goto L_0041FAD4;
    case 400u: goto L_0041FADC;
    case 401u: goto L_0041FAF4;
    case 402u: goto L_0041FB10;
    case 403u: goto L_0041FB30;
    case 404u: goto L_0041FB4C;
    case 405u: goto L_0041FB60;
    case 406u: goto L_0041FB6C;
    case 407u: goto L_0041FBC0;
    case 408u: goto L_0041FC08;
    case 409u: goto L_0041FC1C;
    case 410u: goto L_0041FC28;
    case 411u: goto L_0041FC34;
    case 412u: goto L_0041FC3C;
    case 413u: goto L_0041FC4C;
    case 414u: goto L_0041FC6C;
    case 415u: goto L_0041FC80;
    case 416u: goto L_0041FC8C;
    case 417u: goto L_0041FC98;
    case 418u: goto L_0041FCA0;
    case 419u: goto L_0041FCB0;
    case 420u: goto L_0041FCBC;
    case 421u: goto L_0041FCC4;
    case 422u: goto L_0041FCD4;
    case 423u: goto L_0041FD00;
    case 424u: goto L_0041FD14;
    case 425u: goto L_0041FD20;
    case 426u: goto L_0041FD2C;
    case 427u: goto L_0041FD34;
    case 428u: goto L_0041FD44;
    case 429u: goto L_0041FD64;
    case 430u: goto L_0041FD78;
    case 431u: goto L_0041FD84;
    case 432u: goto L_0041FD90;
    case 433u: goto L_0041FD98;
    case 434u: goto L_0041FDA8;
    case 435u: goto L_0041FDB4;
    case 436u: goto L_0041FDBC;
    case 437u: goto L_0041FDCC;
    case 438u: goto L_0041FDDC;
    case 439u: goto L_0041FE00;
    case 440u: goto L_0041FE14;
    case 441u: goto L_0041FE20;
    case 442u: goto L_0041FE30;
    case 443u: goto L_0041FE40;
    case 444u: goto L_0041FE50;
    case 445u: goto L_0041FE84;
    case 446u: goto L_0041FEA8;
    case 447u: goto L_0041FEDC;
    case 448u: goto L_0041FEEC;
    case 449u: goto L_0041FF10;
    case 450u: goto L_0041FF3C;
    case 451u: goto L_0041FF78;
    case 452u: goto L_0041FF90;
    case 453u: goto L_0041FFC0;
    default: bad_entry(c, 0x0041C000u); return;
    }
L_0041C000:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[16].w[0] + 20u);
    st32((c.r[4].w[0] + 312u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[5].w[0] + 24u));
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0] + 28u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[5] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = ld32((c.r[2].w[0] + 312u));
    c.f[3] = ld32((c.r[2].w[0] + 308u));
    c.f[2] = ld32((c.r[2].w[0] + 316u));
    c.f[1] = ld32((c.r[2].w[0] + 320u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 308u), c.f[0]);
    c.budget -= 27;
L_0041C06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C074u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x0041C074u) [[unlikely]] return; }
L_0041C074:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C06Cu | kUnwind; return; } goto L_0041C06C; } }
    set32(c.r[2], 0u + 63u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C0A4u); set32(c.r[6], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0068(c, 421u, depth + 1u); else { c.pc = 0x002A3780u; return; } if (c.pc != 0x0041C0A4u) [[unlikely]] return; }
L_0041C0A4:
    set32(c.r[2], 0u + 63u);
    set32(c.r[4], c.r[17].w[0] + 292u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C0BCu); set32(c.r[6], c.r[28].w[0] - 30232u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x0041C0BCu) [[unlikely]] return; }
L_0041C0BC:
    set32(c.r[19], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0041C1EC; } }
L_0041C0CC:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 160u));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 164u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    c.f[2] = fp::sub(c.f[7], c.f[2]);
    c.f[1] = fp::sub(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 308u));
    c.f[0] = ld32((c.r[28].w[0] - 30236u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 30;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 6u);  goto L_0041C1BC; }
    c.f[0] = c.f[4] ^ fp::kSign;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0041C1AC; } }
L_0041C154:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0041C190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041C1A0; } }
L_0041C190:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041C1A0; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0041C1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0041C1B8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0041C1AC:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C154u | kUnwind; return; } goto L_0041C154; }
L_0041C1B8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0041C1BC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0041C1EC; }
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + 292u);
    set32(c.r[3], ld32((c.r[17].w[0] + 300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    set32(c.r[7], c.r[29].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C1E8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0041C1E8u) [[unlikely]] return; }
L_0041C1E8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0041C1EC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C0CCu | kUnwind; return; } goto L_0041C0CC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C204u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 222u, depth + 1u); else { c.pc = 0x002A5B10u; return; } if (c.pc != 0x0041C204u) [[unlikely]] return; }
L_0041C204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0041C230:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[7], c.r[16].w[0] + 112u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 21;
L_0041C284:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C284u | kUnwind; return; } goto L_0041C284; } }
    c.f[2] = ld32((c.r[7].w[0] + 48u));
    c.f[1] = ld32((c.r[7].w[0] + 52u));
    c.f[0] = ld32((c.r[7].w[0] + 56u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 60u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st16((c.r[29].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 284u)));  goto L_0041C310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2D8u); st32((c.r[17].w[0] + 272u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041C2D8u) [[unlikely]] return; }
L_0041C2D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041C2E8u) [[unlikely]] return; }
L_0041C2E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C2F4u); set32(c.r[4], c.r[17].w[0] + 276u);  if (depth < kMaxDepth) unit_00C7(c, 76u, depth + 1u); else { c.pc = 0x0041CFE0u; return; } if (c.pc != 0x0041C2F4u) [[unlikely]] return; }
L_0041C2F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C30Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C30Cu) [[unlikely]] return; }
L_0041C30C:
    set32(c.r[5], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 1;
L_0041C310:
    set32(c.r[4], c.r[17].w[0] + 276u);
    set32(c.r[2], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C334u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 59u, depth + 1u); else { c.pc = 0x0041C820u; return; } if (c.pc != 0x0041C334u) [[unlikely]] return; }
L_0041C334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0041C350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C36Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 113u, depth + 1u); else { c.pc = 0x002A4ED0u; return; } if (c.pc != 0x0041C36Cu) [[unlikely]] return; }
L_0041C36C:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041C38C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C388u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C388u) [[unlikely]] return; }
L_0041C388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041C38C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041C3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 125u, depth + 1u); else { c.pc = 0x002A5000u; return; } if (c.pc != 0x0041C3BCu) [[unlikely]] return; }
L_0041C3BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041C3DC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C3D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C3D8u) [[unlikely]] return; }
L_0041C3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041C3DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041C3F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041C488; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 288u)));
    set32(c.r[18], 0u + 1u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[19].w[0] + 256u), c.f[2]);
    st32((c.r[19].w[0] + 260u), c.f[1]);
    st32((c.r[19].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 268u), c.f[0]);  if (t) { goto L_0041C458; } }
L_0041C440:
    set32(c.r[4], c.r[19].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C454u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x0041C454u) [[unlikely]] return; }
L_0041C454:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0041C458:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C440u | kUnwind; return; } goto L_0041C440; }
    c.f[2] = ld32((c.r[19].w[0] + 256u));
    c.f[1] = ld32((c.r[19].w[0] + 260u));
    c.f[0] = ld32((c.r[19].w[0] + 264u));
    st32((c.r[19].w[0] + 32u), c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 268u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.f[0]);  if (t) { goto L_0041C4B8; } }
L_0041C488:
    st32((c.r[19].w[0] + 268u), 0u);
    st32((c.r[19].w[0] + 256u), 0u);
    st32((c.r[19].w[0] + 260u), 0u);
    st32((c.r[19].w[0] + 264u), 0u);
    c.f[2] = ld32((c.r[19].w[0] + 256u));
    c.f[1] = ld32((c.r[19].w[0] + 260u));
    c.f[0] = ld32((c.r[19].w[0] + 264u));
    st32((c.r[19].w[0] + 32u), c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 268u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.budget -= 12;
L_0041C4B8:
    set32(c.r[5], c.r[17].w[0] >> 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C4C4u); set32(c.r[4], c.r[19].w[0] + 292u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0041C4C4u) [[unlikely]] return; }
L_0041C4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041C4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041C5D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26080u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 292u);  goto L_0041C550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C520u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041C520u) [[unlikely]] return; }
L_0041C520:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C530u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041C530u) [[unlikely]] return; }
L_0041C530:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041C54C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C54Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041C54Cu) [[unlikely]] return; }
L_0041C54C:
    set32(c.r[2], c.r[17].w[0] + 292u);
    c.budget -= 1;
L_0041C550:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 276u);  goto L_0041C590; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041C58C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041C58C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041C58C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041C58C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041C58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C58Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041C58Cu) [[unlikely]] return; }
L_0041C58C:
    set32(c.r[4], c.r[17].w[0] + 276u);
    c.budget -= 1;
L_0041C590:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041C5B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041C5B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041C5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 84u, depth + 1u); else { c.pc = 0x0041D240u; return; } if (c.pc != 0x0041C5B0u) [[unlikely]] return; }
L_0041C5B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041C5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x0041C5BCu) [[unlikely]] return; }
L_0041C5BC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041C5DC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C5D8u); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0041C5D8u) [[unlikely]] return; }
L_0041C5D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041C5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041C600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C620u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x0041C620u) [[unlikely]] return; }
L_0041C620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + 26080u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C638u); st32((c.r[17].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C638u) [[unlikely]] return; }
L_0041C638:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[17].w[0] + 276u);  if (t) { goto L_0041C674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C64Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C64Cu) [[unlikely]] return; }
L_0041C64C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041C664; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C660u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041C660u) [[unlikely]] return; }
L_0041C660:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041C664:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0041C678; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C674u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041C674u) [[unlikely]] return; }
L_0041C674:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0041C678:
    set32(c.r[4], c.r[17].w[0] + 256u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C68Cu); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C68Cu) [[unlikely]] return; }
L_0041C68C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[17].w[0] + 292u);  if (t) { goto L_0041C6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C6A0u) [[unlikely]] return; }
L_0041C6A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041C6B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6B4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041C6B4u) [[unlikely]] return; }
L_0041C6B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041C6B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0041C6CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6C8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041C6C8u) [[unlikely]] return; }
L_0041C6C8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0041C6CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C6E4u); st32((c.r[17].w[0] + 316u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C6E4u) [[unlikely]] return; }
L_0041C6E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041C700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C718u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x0041C718u) [[unlikely]] return; }
L_0041C718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + 26080u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C730u); st32((c.r[16].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C730u) [[unlikely]] return; }
L_0041C730:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[16].w[0] + 276u);  if (t) { goto L_0041C76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C744u) [[unlikely]] return; }
L_0041C744:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041C75C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C758u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041C758u) [[unlikely]] return; }
L_0041C758:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041C75C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0041C770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C76Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041C76Cu) [[unlikely]] return; }
L_0041C76C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0041C770:
    set32(c.r[4], c.r[16].w[0] + 256u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C784u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C784u) [[unlikely]] return; }
L_0041C784:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[16].w[0] + 292u);  if (t) { goto L_0041C7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041C798u) [[unlikely]] return; }
L_0041C798:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041C7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7ACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041C7ACu) [[unlikely]] return; }
L_0041C7AC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041C7B0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0041C7C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C7C0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041C7C0u) [[unlikely]] return; }
L_0041C7C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0041C7C4:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041C7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 320u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041C804u) [[unlikely]] return; }
L_0041C804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0041C818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C814u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 46u, depth + 1u); else { c.pc = 0x0041C700u; return; } if (c.pc != 0x0041C814u) [[unlikely]] return; }
L_0041C814:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041C818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041C820:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0041CFB4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0041C88C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C880u); set32(c.r[5], c.r[5].w[0] + 14640u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0041C880u) [[unlikely]] return; }
L_0041C880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041C888u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0041C888u) [[unlikely]] return; }
L_0041C888:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0041C88C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0041CC48; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], 0u + 96u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[19].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] << 1);  goto L_0041CA88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041C99C; } }
L_0041C8D8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0041C98C; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[6].w[0] + 16u), c.f[3]);
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[6].w[0] + 32u), c.f[3]);
    st32((c.r[6].w[0] + 36u), c.f[2]);
    st32((c.r[6].w[0] + 40u), c.f[1]);
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[6].w[0] + 48u), c.f[3]);
    st32((c.r[6].w[0] + 52u), c.f[2]);
    st32((c.r[6].w[0] + 56u), c.f[1]);
    st32((c.r[6].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[6].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));
    st16((c.r[6].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 43;
L_0041C98C:
    set32(c.r[6], c.r[6].w[0] + 96u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0041C99C:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C8D8u | kUnwind; return; } goto L_0041C8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0041CA74; } }
L_0041C9B0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0041CA64; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[6].w[0] + 16u), c.f[3]);
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[6].w[0] + 32u), c.f[3]);
    st32((c.r[6].w[0] + 36u), c.f[2]);
    st32((c.r[6].w[0] + 40u), c.f[1]);
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[6].w[0] + 48u), c.f[3]);
    st32((c.r[6].w[0] + 52u), c.f[2]);
    st32((c.r[6].w[0] + 56u), c.f[1]);
    st32((c.r[6].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    st32((c.r[6].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    st32((c.r[6].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 80u));
    st16((c.r[6].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 43;
L_0041CA64:
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0041CA74:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041C9B0u | kUnwind; return; } goto L_0041C9B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { goto L_0041CBF4; } }
L_0041CA88:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] << 5);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0041CB60; } }
L_0041CA9C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0041CB50; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[8].w[0] + 16u));
    c.f[2] = ld32((c.r[8].w[0] + 20u));
    c.f[1] = ld32((c.r[8].w[0] + 24u));
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    st32((c.r[7].w[0] + 16u), c.f[3]);
    st32((c.r[7].w[0] + 20u), c.f[2]);
    st32((c.r[7].w[0] + 24u), c.f[1]);
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[8].w[0] + 32u));
    c.f[2] = ld32((c.r[8].w[0] + 36u));
    c.f[1] = ld32((c.r[8].w[0] + 40u));
    c.f[0] = ld32((c.r[8].w[0] + 44u));
    st32((c.r[7].w[0] + 32u), c.f[3]);
    st32((c.r[7].w[0] + 36u), c.f[2]);
    st32((c.r[7].w[0] + 40u), c.f[1]);
    st32((c.r[7].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[8].w[0] + 48u));
    c.f[2] = ld32((c.r[8].w[0] + 52u));
    c.f[1] = ld32((c.r[8].w[0] + 56u));
    c.f[0] = ld32((c.r[8].w[0] + 60u));
    st32((c.r[7].w[0] + 48u), c.f[3]);
    st32((c.r[7].w[0] + 52u), c.f[2]);
    st32((c.r[7].w[0] + 56u), c.f[1]);
    st32((c.r[7].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 64u));
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 68u));
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 72u));
    st32((c.r[7].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 76u));
    st32((c.r[7].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0] + 80u));
    st16((c.r[7].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 43;
L_0041CB50:
    set32(c.r[8], c.r[8].w[0] + 96u);
    set32(c.r[7], c.r[7].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0041CB60:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CA9Cu | kUnwind; return; } goto L_0041CA9C; } }
    set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[9], c.r[19].w[0] + c.r[5].w[0]);  goto L_0041CBA0; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0041CB9C; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0041CB9C:
    set32(c.r[9], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0041CBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0041CBE4; } }
L_0041CBA8:
    set32(c.r[3], c.r[3].w[0] - 96u);
    ld128((c.r[9].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[9].w[0] + 16u);
    set32(c.r[7], c.r[3].w[0] + 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.budget -= 6;
L_0041CBC0:
    ld128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CBC0u | kUnwind; return; } goto L_0041CBC0; } }
    c.r[4].d[0] = ld16((c.r[9].w[0] + 80u));
    st16((c.r[3].w[0] + 80u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0041CBE4:
    c.r[1].d[0] = c.r[19].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[9], c.r[9].w[0] - 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CBA8u | kUnwind; return; } goto L_0041CBA8; }
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0041CBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0041CC38; } }
L_0041CBFC:
    set32(c.r[7], c.r[19].w[0] + 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[19].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
L_0041CC0C:
    ld128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC0Cu | kUnwind; return; } goto L_0041CC0C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    set32(c.r[18], c.r[18].w[0] - 1u);
    st16((c.r[19].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 96u);
    c.budget -= 4;
L_0041CC38:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { ld128((c.r[17].w[0]) & ~15u, c.r[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CBFCu | kUnwind; return; } goto L_0041CBFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0041CFB8; } }
L_0041CC48:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0041CC64; }
L_0041CC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041CC80; } }
L_0041CC6C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0041CC80; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0041CC80:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CC6Cu | kUnwind; return; } goto L_0041CC6C; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CCA0u); set32(c.r[4], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0041CCA0u) [[unlikely]] return; }
L_0041CCA0:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0041CD88; } }
L_0041CCC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0041CD78; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 16u), c.f[3]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 80u));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 43;
L_0041CD78:
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0041CD88:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CCC4u | kUnwind; return; } goto L_0041CCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041CE60; } }
L_0041CD9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0041CE50; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[2].w[0] + 16u), c.f[3]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 43;
L_0041CE50:
    set32(c.r[2], c.r[2].w[0] + 96u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0041CE60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CD9Cu | kUnwind; return; } goto L_0041CD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0041CF38; } }
L_0041CE70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0041CF24; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 16u), c.f[3]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 80u));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 43;
L_0041CF24:
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0041CF38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041CE70u | kUnwind; return; } goto L_0041CE70; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0041CF90; }
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
L_0041CF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CF98u);  if (depth < kMaxDepth) unit_00C7(c, 91u, depth + 1u); else { c.pc = 0x0041D370u; return; } if (c.pc != 0x0041CF98u) [[unlikely]] return; }
L_0041CF98:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041CFB4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041CFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041CFB4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041CFB4u) [[unlikely]] return; }
L_0041CFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0041CFB8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0041CFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041D190; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D028u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0041D028u) [[unlikely]] return; }
L_0041D028:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0041D110; } }
L_0041D04C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0041D100; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 16u), c.f[3]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[1] = ld32((c.r[5].w[0] + 56u));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    st32((c.r[2].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 80u));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 43;
L_0041D100:
    set32(c.r[5], c.r[5].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0041D110:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D04Cu | kUnwind; return; } goto L_0041D04C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0041D16C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
L_0041D16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D174u);  if (depth < kMaxDepth) unit_00C7(c, 91u, depth + 1u); else { c.pc = 0x0041D370u; return; } if (c.pc != 0x0041D174u) [[unlikely]] return; }
L_0041D174:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041D194; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D190u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D190u) [[unlikely]] return; }
L_0041D190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041D194:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041D1B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0041D200; }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[3], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D1F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 59u, depth + 1u); else { c.pc = 0x0041C820u; return; } if (c.pc != 0x0041D1F8u) [[unlikely]] return; }
L_0041D1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0041D238; } }
L_0041D200:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0041D234; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D234u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 88u, depth + 1u); else { c.pc = 0x0041D2B0u; return; } if (c.pc != 0x0041D234u) [[unlikely]] return; }
L_0041D234:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041D238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041D240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041D298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D264u);  if (depth < kMaxDepth) unit_00C7(c, 91u, depth + 1u); else { c.pc = 0x0041D370u; return; } if (c.pc != 0x0041D264u) [[unlikely]] return; }
L_0041D264:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0041D284; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D280u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D280u) [[unlikely]] return; }
L_0041D280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0041D284:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041D29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0041D298u) [[unlikely]] return; }
L_0041D298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041D29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041D2B0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  goto L_0041D2C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041D364; } }
L_0041D2C0:
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[10], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[10].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  goto L_0041D348; }
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0041D338; } }
L_0041D2FC:
    set32(c.r[9], c.r[12].w[0] + 16u);
    set32(c.r[8], c.r[11].w[0] + 16u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[11].w[0]) & ~15u, c.r[2]);
    c.budget -= 4;
L_0041D30C:
    ld128((c.r[9].w[0]) & ~15u, c.r[2]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D30Cu | kUnwind; return; } goto L_0041D30C; } }
    c.r[2].d[0] = ld16((c.r[12].w[0] + 80u));
    st16((c.r[11].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[12], c.r[12].w[0] + 96u);
    set32(c.r[11], c.r[11].w[0] + 96u);
    c.budget -= 4;
L_0041D338:
    c.r[2].d[0] = c.r[12].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[12].w[0]) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D2FCu | kUnwind; return; } goto L_0041D2FC; }
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0041D348:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 96u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_0041D364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041D370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0041D380:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D3ACu); st32((c.r[29].w[0] + 148u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041D3ACu) [[unlikely]] return; }
L_0041D3AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 25764u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1968u);
    c.budget -= 5;
L_0041D3C0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D3C0u | kUnwind; return; } goto L_0041D3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D3E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 118u, depth + 1u); else { c.pc = 0x0041D600u; return; } if (c.pc != 0x0041D3E4u) [[unlikely]] return; }
L_0041D3E4:
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 164u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D408u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C7(c, 276u, depth + 1u); else { c.pc = 0x0041E8F0u; return; } if (c.pc != 0x0041D408u) [[unlikely]] return; }
L_0041D408:
    st32((c.r[29].w[0] + 136u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D420u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C7(c, 130u, depth + 1u); else { c.pc = 0x0041D710u; return; } if (c.pc != 0x0041D420u) [[unlikely]] return; }
L_0041D420:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_0041D460; } }
L_0041D42C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_0041D458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D440u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041D440u) [[unlikely]] return; }
L_0041D440:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D450u); st32((c.r[29].w[0] + 156u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 265u, depth + 1u); else { c.pc = 0x0041E700u; return; } if (c.pc != 0x0041D450u) [[unlikely]] return; }
L_0041D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_0041D464; } }
L_0041D458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D460u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041D460u) [[unlikely]] return; }
L_0041D460:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_0041D464:
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D42Cu | kUnwind; return; } goto L_0041D42C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_0041D5AC; } }
L_0041D47C:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0041D554; } }
L_0041D498:
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0041D554; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_0041D4E8; }
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041D4CCu) [[unlikely]] return; }
L_0041D4CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = c.r[2].d[0] + 0ull;  goto L_0041D4E4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 35u, depth + 1u); else { c.pc = 0x0041C600u; return; } if (c.pc != 0x0041D4E0u) [[unlikely]] return; }
L_0041D4E0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041D4E4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0041D4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D4F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 10u, depth + 1u); else { c.pc = 0x0041C230u; return; } if (c.pc != 0x0041D4F0u) [[unlikely]] return; }
L_0041D4F0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D508u); set32(c.r[4], c.r[29].w[0] + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D508u) [[unlikely]] return; }
L_0041D508:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041D550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D51Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041D51Cu) [[unlikely]] return; }
L_0041D51C:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D530u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041D530u) [[unlikely]] return; }
L_0041D530:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041D550; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D550u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D550u) [[unlikely]] return; }
L_0041D550:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0041D554:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D498u | kUnwind; return; } goto L_0041D498; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_0041D5A4; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D580u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D580u) [[unlikely]] return; }
L_0041D580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D588u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0041D588u) [[unlikely]] return; }
L_0041D588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D590u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x0041D590u) [[unlikely]] return; }
L_0041D590:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D5A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0041D5A0u) [[unlikely]] return; }
L_0041D5A0:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_0041D5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D5ACu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041D5ACu) [[unlikely]] return; }
L_0041D5AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D47Cu | kUnwind; return; } goto L_0041D47C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_0041D5D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D5D0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041D5D0u) [[unlikely]] return; }
L_0041D5D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_0041D5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D5DCu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041D5DCu) [[unlikely]] return; }
L_0041D5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0041D600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D624u); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00C7(c, 193u, depth + 1u); else { c.pc = 0x0041DF90u; return; } if (c.pc != 0x0041D624u) [[unlikely]] return; }
L_0041D624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D62Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C6(c, 379u, depth + 1u); else { c.pc = 0x0041AEC0u; return; } if (c.pc != 0x0041D62Cu) [[unlikely]] return; }
L_0041D62C:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0041D64C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D648u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D648u) [[unlikely]] return; }
L_0041D648:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041D64C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041D660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[28].w[0] - 25748u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D67Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x0041D67Cu) [[unlikely]] return; }
L_0041D67C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041D690; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041D6F0; } }
L_0041D690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D698u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0041D698u) [[unlikely]] return; }
L_0041D698:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041D6A4u) [[unlikely]] return; }
L_0041D6A4:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041D6B4u) [[unlikely]] return; }
L_0041D6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041D6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x0041D6C4u) [[unlikely]] return; }
L_0041D6C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 7760u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0041D6D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6E8u); set32(c.r[5], c.r[28].w[0] - 25748u);  if (depth < kMaxDepth) unit_006F(c, 142u, depth + 1u); else { c.pc = 0x002BD280u; return; } if (c.pc != 0x0041D6E8u) [[unlikely]] return; }
L_0041D6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D6F0u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041D6F0u) [[unlikely]] return; }
L_0041D6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041D710:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[5].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[28].w[0] - 25756u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D73Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x0041D73Cu) [[unlikely]] return; }
L_0041D73C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0041D750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041D798; } }
L_0041D750:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D75Cu) [[unlikely]] return; }
L_0041D75C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20680u);  if (t) { goto L_0041D77C; } }
L_0041D76C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041D77C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041D788; } }
L_0041D77C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D76Cu | kUnwind; return; } goto L_0041D76C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041D788:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0041D798; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041D798; } }
L_0041D798:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0041D7B0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0041D7AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0041D7AC:
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 1;
L_0041D7B0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0041D7C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0041D7FC; } }
L_0041D7C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D7CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D7CCu) [[unlikely]] return; }
L_0041D7CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14552u);  if (t) { goto L_0041D7EC; } }
L_0041D7DC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041D7EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041D7F8; } }
L_0041D7EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D7DCu | kUnwind; return; } goto L_0041D7DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041D7F8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0041D7FC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_0041D9FC; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0041D814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0041D85C; } }
L_0041D814:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D820u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041D820u) [[unlikely]] return; }
L_0041D820:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_0041D840; } }
L_0041D830:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041D840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041D84C; } }
L_0041D840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041D830u | kUnwind; return; } goto L_0041D830; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041D84C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0041D85C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0041D85C; } }
L_0041D85C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 200u), c.r[4].w[0]);  if (t) { goto L_0041D9F8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1968u);
    set32(c.r[6], ld32((c.r[28].w[0] - 25764u)));
    set32(c.r[8], c.r[5].w[0] + 16u);
    set32(c.r[7], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    set32(c.r[3], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25764u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D8A0u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 389u, depth + 1u); else { c.pc = 0x0041B170u; return; } if (c.pc != 0x0041D8A0u) [[unlikely]] return; }
L_0041D8A0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041D9F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[3], 0u + 16384u);
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[4].d[0] = c.r[4].d[0] & 61440ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0041D9F8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 54u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041D9F8; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D8E8u); set32(c.r[6], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_00C7(c, 220u, depth + 1u); else { c.pc = 0x0041E350u; return; } if (c.pc != 0x0041D8E8u) [[unlikely]] return; }
L_0041D8E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[18].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  goto L_0041D9D8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 25752u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_0041D938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D910u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041D910u) [[unlikely]] return; }
L_0041D910:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041D928; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D924u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041D924u) [[unlikely]] return; }
L_0041D924:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041D928:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  goto L_0041D93C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D938u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041D938u) [[unlikely]] return; }
L_0041D938:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0041D93C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 164u), 0u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D958u); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_00C7(c, 161u, depth + 1u); else { c.pc = 0x0041DC00u; return; } if (c.pc != 0x0041D958u) [[unlikely]] return; }
L_0041D958:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D96Cu); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 156u, depth + 1u); else { c.pc = 0x0041DB40u; return; } if (c.pc != 0x0041D96Cu) [[unlikely]] return; }
L_0041D96C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D97Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00C7(c, 273u, depth + 1u); else { c.pc = 0x0041E830u; return; } if (c.pc != 0x0041D97Cu) [[unlikely]] return; }
L_0041D97C:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0041D99C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_0041D9A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D99Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D99Cu) [[unlikely]] return; }
L_0041D99C:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_0041D9A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  goto L_0041D9BC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9B8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D9B8u) [[unlikely]] return; }
L_0041D9B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_0041D9BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D9D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041D9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9D4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041D9D4u) [[unlikely]] return; }
L_0041D9D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_0041D9D8:
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 200u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041D9F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0041D9F8u) [[unlikely]] return; }
L_0041D9F8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 1;
L_0041D9FC:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0041DA98; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));  goto L_0041DA48; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA20u); set32(c.r[5], c.r[28].w[0] - 25748u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x0041DA20u) [[unlikely]] return; }
L_0041DA20:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] & 255ull;  goto L_0041DA38; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
L_0041DA38:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 4;
L_0041DA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0041DA88; } }
L_0041DA50:
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 212u)));  goto L_0041DA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0041DA70; } }
L_0041DA64:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0041DA70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041DA88; }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DA84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 130u, depth + 1u); else { c.pc = 0x0041D710u; return; } if (c.pc != 0x0041DA84u) [[unlikely]] return; }
L_0041DA84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041DA88:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DA50u | kUnwind; return; } goto L_0041DA50; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0041DA98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0041DAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041DB24; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0041DB10; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041DB0C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041DB0C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041DB0C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041DB0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041DB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB0Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041DB0Cu) [[unlikely]] return; }
L_0041DB0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0041DB10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041DB28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0041DB24u) [[unlikely]] return; }
L_0041DB24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041DB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041DB40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041DB5Cu) [[unlikely]] return; }
L_0041DB5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041DB74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB70u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041DB70u) [[unlikely]] return; }
L_0041DB70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041DB74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  goto L_0041DB88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DB84u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041DB84u) [[unlikely]] return; }
L_0041DB84:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0041DB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DBE0u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C7(c, 212u, depth + 1u); else { c.pc = 0x0041E1E0u; return; } if (c.pc != 0x0041DBE0u) [[unlikely]] return; }
L_0041DBE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041DC00:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DB40u | kUnwind; return; } goto L_0041DB40; }
L_0041DC10:
    st32((c.r[28].w[0] - 25764u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1968u);
    c.budget -= 4;
L_0041DC20:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DC20u | kUnwind; return; } goto L_0041DC20; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041DC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[28].w[0] - 25756u);  c.pc = t; return; }
L_0041DC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DC74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C6(c, 435u, depth + 1u); else { c.pc = 0x0041BC20u; return; } if (c.pc != 0x0041DC74u) [[unlikely]] return; }
L_0041DC74:
    set32(c.r[3], ld32((c.r[28].w[0] - 25760u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 25756u)));  goto L_0041DCEC; }
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DC8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DC8Cu) [[unlikely]] return; }
L_0041DC8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 25760u), c.r[2].w[0]);  if (t) { goto L_0041DCE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCB8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DCB8u) [[unlikely]] return; }
L_0041DCB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCC8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DCC8u) [[unlikely]] return; }
L_0041DCC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0041DCE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DCE8u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DCE8u) [[unlikely]] return; }
L_0041DCE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25756u)));
    c.budget -= 1;
L_0041DCEC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 25748u)));  goto L_0041DD60; }
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DD00u) [[unlikely]] return; }
L_0041DD00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 25756u), c.r[2].w[0]);  if (t) { goto L_0041DD5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD2Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DD2Cu) [[unlikely]] return; }
L_0041DD2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD3Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DD3Cu) [[unlikely]] return; }
L_0041DD3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0041DD5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD5Cu); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DD5Cu) [[unlikely]] return; }
L_0041DD5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25748u)));
    c.budget -= 1;
L_0041DD60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041DDD4; }
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DD74u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DD74u) [[unlikely]] return; }
L_0041DD74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 25748u), c.r[2].w[0]);  if (t) { goto L_0041DDD0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDA0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DDA0u) [[unlikely]] return; }
L_0041DDA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DDB0u) [[unlikely]] return; }
L_0041DDB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0041DDD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DDD0u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DDD0u) [[unlikely]] return; }
L_0041DDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041DDD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041DDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14672u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25760u)));
    c.budget -= 9;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 25756u)));  goto L_0041DE80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE1Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DE1Cu) [[unlikely]] return; }
L_0041DE1C:
    st32((c.r[28].w[0] - 25760u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0041DE7C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE4Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DE4Cu) [[unlikely]] return; }
L_0041DE4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DE5Cu) [[unlikely]] return; }
L_0041DE5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041DE7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE7Cu); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DE7Cu) [[unlikely]] return; }
L_0041DE7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25756u)));
    c.budget -= 1;
L_0041DE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 14679u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 25748u)));  goto L_0041DEFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DE98u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DE98u) [[unlikely]] return; }
L_0041DE98:
    st32((c.r[28].w[0] - 25756u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0041DEF8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DEC8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DEC8u) [[unlikely]] return; }
L_0041DEC8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DED8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DED8u) [[unlikely]] return; }
L_0041DED8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041DEF8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DEF8u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DEF8u) [[unlikely]] return; }
L_0041DEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25748u)));
    c.budget -= 1;
L_0041DEFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 14685u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0041DF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF14u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0041DF14u) [[unlikely]] return; }
L_0041DF14:
    st32((c.r[28].w[0] - 25748u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0041DF74; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF44u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041DF44u) [[unlikely]] return; }
L_0041DF44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF54u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041DF54u) [[unlikely]] return; }
L_0041DF54:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0041DF74; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF74u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0041DF74u) [[unlikely]] return; }
L_0041DF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DF7Cu);  if (depth < kMaxDepth) unit_00C6(c, 436u, depth + 1u); else { c.pc = 0x0041BC30u; return; } if (c.pc != 0x0041DF7Cu) [[unlikely]] return; }
L_0041DF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041DF90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0041E1A4; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_0041E054; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0041DFE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0041E028; } }
L_0041DFE0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041DFECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041DFECu) [[unlikely]] return; }
L_0041DFEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_0041E00C; } }
L_0041DFFC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041E00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041E018; } }
L_0041E00C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041DFFCu | kUnwind; return; } goto L_0041DFFC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041E018:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0041E028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0041E028; } }
L_0041E028:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_0041E050; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E050u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0041E050u) [[unlikely]] return; }
L_0041E050:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_0041E054:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0041E1A8; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0041E198; } }
L_0041E06C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_0041E080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0041E08C; } }
L_0041E080:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0041E08C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0041E198; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0041E0C4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0ACu); set32(c.r[4], c.r[4].w[0] + 19952u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x0041E0ACu) [[unlikely]] return; }
L_0041E0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0041E0C0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0C0u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00C7(c, 219u, depth + 1u); else { c.pc = 0x0041E330u; return; } if (c.pc != 0x0041E0C0u) [[unlikely]] return; }
L_0041E0C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0041E0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0CCu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x0041E0CCu) [[unlikely]] return; }
L_0041E0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0DCu); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x0041E0DCu) [[unlikely]] return; }
L_0041E0DC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0041E188; } }
L_0041E0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E0F0u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x0041E0F0u) [[unlikely]] return; }
L_0041E0F0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_0041E104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041E118; } }
L_0041E104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E10Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x0041E10Cu) [[unlikely]] return; }
L_0041E10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E114u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x0041E114u) [[unlikely]] return; }
L_0041E114:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041E118:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041E188; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041E138; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E134u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 215u, depth + 1u); else { c.pc = 0x0041E280u; return; } if (c.pc != 0x0041E134u) [[unlikely]] return; }
L_0041E134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041E138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E140u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x0041E140u) [[unlikely]] return; }
L_0041E140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041E184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x0041E150u) [[unlikely]] return; }
L_0041E150:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0041E174; } }
L_0041E15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E164u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x0041E164u) [[unlikely]] return; }
L_0041E164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E170u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 193u, depth + 1u); else { c.pc = 0x0041DF90u; return; } if (c.pc != 0x0041E170u) [[unlikely]] return; }
L_0041E170:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0041E174:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E15Cu | kUnwind; return; } goto L_0041E15C; }
L_0041E184:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041E188:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E0E8u | kUnwind; return; } goto L_0041E0E8; } }
L_0041E194:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0041E198:
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E06Cu | kUnwind; return; } goto L_0041E06C; }
L_0041E1A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0041E1A8:
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
L_0041E1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[5].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0041E218; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0041E218:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0041E264; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E230u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0041E230u) [[unlikely]] return; }
L_0041E230:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0041E250; } }
L_0041E244:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
L_0041E250:
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E244u | kUnwind; return; } goto L_0041E244; }
L_0041E264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041E280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041E2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041E2F0; } }
L_0041E2A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E2B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041E2B4u) [[unlikely]] return; }
L_0041E2B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_0041E2D4; } }
L_0041E2C4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041E2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041E2E0; } }
L_0041E2D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E2C4u | kUnwind; return; } goto L_0041E2C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041E2E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0041E2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041E2F0; } }
L_0041E2F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_0041E318; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E318u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0041E318u) [[unlikely]] return; }
L_0041E318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041E330:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001120D0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 158u, depth); }
L_0041E350:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_0041E374; } }
L_0041E35C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_0041E374; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_0041E374:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E35Cu | kUnwind; return; } goto L_0041E35C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_0041E3A0; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_0041E3A4; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_0041E3A0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0041E3A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041E3B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041E4D0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0041E440; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041E3FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E3F8u);  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E3F8u) [[unlikely]] return; }
L_0041E3F8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041E3FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E40Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E40Cu) [[unlikely]] return; }
L_0041E40C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E418u);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E418u) [[unlikely]] return; }
L_0041E418:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E424u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 262u, depth + 1u); else { c.pc = 0x0041E690u; return; } if (c.pc != 0x0041E424u) [[unlikely]] return; }
L_0041E424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E42Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E42Cu) [[unlikely]] return; }
L_0041E42C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E43Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 259u, depth + 1u); else { c.pc = 0x0041E660u; return; } if (c.pc != 0x0041E43Cu) [[unlikely]] return; }
L_0041E43C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0041E440:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E4A4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041E460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E45Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E45Cu) [[unlikely]] return; }
L_0041E45C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041E460:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E470u) [[unlikely]] return; }
L_0041E470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E47Cu);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E47Cu) [[unlikely]] return; }
L_0041E47C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E488u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 262u, depth + 1u); else { c.pc = 0x0041E690u; return; } if (c.pc != 0x0041E488u) [[unlikely]] return; }
L_0041E488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E490u) [[unlikely]] return; }
L_0041E490:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 259u, depth + 1u); else { c.pc = 0x0041E660u; return; } if (c.pc != 0x0041E4A0u) [[unlikely]] return; }
L_0041E4A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4ACu);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E4ACu) [[unlikely]] return; }
L_0041E4AC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C7(c, 153u, depth + 1u); else { c.pc = 0x0041DAB0u; return; } if (c.pc != 0x0041E4B8u) [[unlikely]] return; }
L_0041E4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E4C0u) [[unlikely]] return; }
L_0041E4C0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0041E4D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E4D0u) [[unlikely]] return; }
L_0041E4D0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0041E4D4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0041E5D8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0041E544; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041E500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E4FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E4FCu) [[unlikely]] return; }
L_0041E4FC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041E500:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E514; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E510u) [[unlikely]] return; }
L_0041E510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E51Cu);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E51Cu) [[unlikely]] return; }
L_0041E51C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E528u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 262u, depth + 1u); else { c.pc = 0x0041E690u; return; } if (c.pc != 0x0041E528u) [[unlikely]] return; }
L_0041E528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E530u) [[unlikely]] return; }
L_0041E530:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E540u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 259u, depth + 1u); else { c.pc = 0x0041E660u; return; } if (c.pc != 0x0041E540u) [[unlikely]] return; }
L_0041E540:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0041E544:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E5A8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041E564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E560u) [[unlikely]] return; }
L_0041E560:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041E564:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041E578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 222u, depth + 1u); else { c.pc = 0x0041E3B0u; return; } if (c.pc != 0x0041E574u) [[unlikely]] return; }
L_0041E574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E580u);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E580u) [[unlikely]] return; }
L_0041E580:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E58Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 262u, depth + 1u); else { c.pc = 0x0041E690u; return; } if (c.pc != 0x0041E58Cu) [[unlikely]] return; }
L_0041E58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E594u) [[unlikely]] return; }
L_0041E594:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 259u, depth + 1u); else { c.pc = 0x0041E660u; return; } if (c.pc != 0x0041E5A4u) [[unlikely]] return; }
L_0041E5A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041E5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5B0u);  if (depth < kMaxDepth) unit_00C7(c, 264u, depth + 1u); else { c.pc = 0x0041E6F0u; return; } if (c.pc != 0x0041E5B0u) [[unlikely]] return; }
L_0041E5B0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C7(c, 153u, depth + 1u); else { c.pc = 0x0041DAB0u; return; } if (c.pc != 0x0041E5BCu) [[unlikely]] return; }
L_0041E5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 261u, depth + 1u); else { c.pc = 0x0041E680u; return; } if (c.pc != 0x0041E5C4u) [[unlikely]] return; }
L_0041E5C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0041E5D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E5D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E5D4u) [[unlikely]] return; }
L_0041E5D4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0041E5D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E618u);  if (depth < kMaxDepth) unit_001A(c, 57u, depth + 1u); else { c.pc = 0x00168680u; return; } if (c.pc != 0x0041E618u) [[unlikely]] return; }
L_0041E618:
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E624u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 56u, depth + 1u); else { c.pc = 0x00168670u; return; } if (c.pc != 0x0041E624u) [[unlikely]] return; }
L_0041E624:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0041E634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E634u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E634u) [[unlikely]] return; }
L_0041E634:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0041E648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E644u) [[unlikely]] return; }
L_0041E644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0041E648:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041E660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041E674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E674u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E674u) [[unlikely]] return; }
L_0041E674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0041E690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041E6DC; } }
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0041E6E0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E6DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E6DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E6DC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E6DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E6DCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E6DCu) [[unlikely]] return; }
L_0041E6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041E6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041E6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0041E700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041E784; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_0041E75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0041E740; } }
L_0041E738:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0041E740:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E738u | kUnwind; return; } goto L_0041E738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0041E77C; } }
L_0041E75C:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E75Cu | kUnwind; return; } goto L_0041E75C; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0041E77C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0041E784:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E790u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x0041E790u) [[unlikely]] return; }
L_0041E790:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7D4u);  if (depth < kMaxDepth) unit_001A(c, 57u, depth + 1u); else { c.pc = 0x00168680u; return; } if (c.pc != 0x0041E7D4u) [[unlikely]] return; }
L_0041E7D4:
    set32(c.r[18], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7E0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 56u, depth + 1u); else { c.pc = 0x00168670u; return; } if (c.pc != 0x0041E7E0u) [[unlikely]] return; }
L_0041E7E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0041E7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E7F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E7F0u) [[unlikely]] return; }
L_0041E7F0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0041E804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041E800u) [[unlikely]] return; }
L_0041E800:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0041E804:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041E830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], c.r[5].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0041E88C; } }
L_0041E860:
    set32(c.r[4], ld32((c.r[9].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0041E87C; } }
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0041E88C; } }
L_0041E87C:
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0041E88C:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041E860u | kUnwind; return; } goto L_0041E860; }
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0041E8B4; }
    set32(c.r[4], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[11].w[0]);  goto L_0041E8CC; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0041E8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E8BCu); c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 277u, depth + 1u); else { c.pc = 0x0041E920u; return; } if (c.pc != 0x0041E8BCu) [[unlikely]] return; }
L_0041E8BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041E8D4; } }
L_0041E8CC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30224u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0041E8D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041E8F0:
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
L_0041E920:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0041E980; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E978u); set32(c.r[5], c.r[5].w[0] + 14729u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0041E978u) [[unlikely]] return; }
L_0041E978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E980u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0041E980u) [[unlikely]] return; }
L_0041E980:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E98Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0041E98Cu) [[unlikely]] return; }
L_0041E98C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E99Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0041E99Cu) [[unlikely]] return; }
L_0041E99C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0041E9B4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E9B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 284u, depth + 1u); else { c.pc = 0x0041EA30u; return; } if (c.pc != 0x0041E9B0u) [[unlikely]] return; }
L_0041E9B0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0041E9B4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0041E9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0041E9D8; } }
L_0041E9D4:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0041E9D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041E9F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0041E9F0u) [[unlikely]] return; }
L_0041E9F0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0041EA00; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0041EA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041EA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[16], c.r[18].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA64u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00C7(c, 300u, depth + 1u); else { c.pc = 0x0041EBD0u; return; } if (c.pc != 0x0041EA64u) [[unlikely]] return; }
L_0041EA64:
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA70u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00C7(c, 299u, depth + 1u); else { c.pc = 0x0041EBB0u; return; } if (c.pc != 0x0041EA70u) [[unlikely]] return; }
L_0041EA70:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 295u, depth + 1u); else { c.pc = 0x0041EB50u; return; } if (c.pc != 0x0041EA7Cu) [[unlikely]] return; }
L_0041EA7C:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 294u, depth + 1u); else { c.pc = 0x0041EB40u; return; } if (c.pc != 0x0041EA88u) [[unlikely]] return; }
L_0041EA88:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EA9Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 290u, depth + 1u); else { c.pc = 0x0041EAC0u; return; } if (c.pc != 0x0041EA9Cu) [[unlikely]] return; }
L_0041EA9C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041EAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EAF8u); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C7(c, 292u, depth + 1u); else { c.pc = 0x0041EB10u; return; } if (c.pc != 0x0041EAF8u) [[unlikely]] return; }
L_0041EAF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041EB10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 60u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB30u); c.r[5].d[0] = ld64((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_00C7(c, 212u, depth + 1u); else { c.pc = 0x0041E1E0u; return; } if (c.pc != 0x0041EB30u) [[unlikely]] return; }
L_0041EB30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041EB40:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0041EB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041EB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB68u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041EB68u) [[unlikely]] return; }
L_0041EB68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0041EB88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB80u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041EB80u) [[unlikely]] return; }
L_0041EB80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0041EB88:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0041EBA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EB98u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041EB98u) [[unlikely]] return; }
L_0041EB98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041EB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0041EBA0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041EBB0:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0041EBD0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0041EBE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041ECAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[17], c.r[4].w[0] + 20u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0041EC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0041EC4C; } }
L_0041EC14:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 16u);  if (t) { goto L_0041EC40; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC40u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041EC40u) [[unlikely]] return; }
L_0041EC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC48u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041EC48u) [[unlikely]] return; }
L_0041EC48:
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0041EC4C:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[6].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EC14u | kUnwind; return; } goto L_0041EC14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0041ECB0; } }
L_0041EC64:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 16u);  if (t) { goto L_0041EC90; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC90u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041EC90u) [[unlikely]] return; }
L_0041EC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EC98u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041EC98u) [[unlikely]] return; }
L_0041EC98:
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[6].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EC64u | kUnwind; return; } goto L_0041EC64; }
L_0041ECAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041ECB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041ECC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + 8u);  if (t) { goto L_0041ED28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0041ED00u) [[unlikely]] return; }
L_0041ED00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0041ED18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED14u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0041ED14u) [[unlikely]] return; }
L_0041ED14:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0041ED18:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  goto L_0041ED2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED28u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0041ED28u) [[unlikely]] return; }
L_0041ED28:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0041ED2C:
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED48u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C7(c, 452u, depth + 1u); else { c.pc = 0x0041FF90u; return; } if (c.pc != 0x0041ED48u) [[unlikely]] return; }
L_0041ED48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED54u); st32((c.r[29].w[0] + 92u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041ED54u) [[unlikely]] return; }
L_0041ED54:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041ED64u) [[unlikely]] return; }
L_0041ED64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_0041ED7C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 398u, depth + 1u); else { c.pc = 0x0041B260u; return; } if (c.pc != 0x0041ED78u) [[unlikely]] return; }
L_0041ED78:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0041ED7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED84u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041ED84u) [[unlikely]] return; }
L_0041ED84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ED90u); st32((c.r[29].w[0] + 84u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041ED90u) [[unlikely]] return; }
L_0041ED90:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EDA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041EDA0u) [[unlikely]] return; }
L_0041EDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041EDD0; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_0041EDC4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0041EDC4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EDD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 262u, depth + 1u); else { c.pc = 0x00321ED0u; return; } if (c.pc != 0x0041EDD0u) [[unlikely]] return; }
L_0041EDD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EDDCu); st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041EDDCu) [[unlikely]] return; }
L_0041EDDC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041EE00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0041F104; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041F108; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0041F104; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_0041F0A4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 180u);  goto L_0041F034; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_0041EE8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F104; } }
L_0041EE8C:
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EE98u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00C7(c, 405u, depth + 1u); else { c.pc = 0x0041FB60u; return; } if (c.pc != 0x0041EE98u) [[unlikely]] return; }
L_0041EE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] + 20u);  if (t) { goto L_0041EED0; } }
L_0041EEA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_0041EEC8; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 1;
L_0041EEAC:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041F108; } }
L_0041EEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041EED0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041EED0u) [[unlikely]] return; }
L_0041EED0:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = ld8((c.r[29].w[0] + 156u));  goto L_0041EEF8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041EEA0u | kUnwind; return; } goto L_0041EEA0; }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 156u));
    c.budget -= 1;
L_0041EEF8:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[10], c.r[2].w[0] << 1);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 116u));
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[9].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[13], c.r[2].w[0] << 2);
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[6].d[0] = ld8((c.r[29].w[0] + 128u));
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[11].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[12].d[0] = ld8((c.r[29].w[0] + 156u));
    set32(c.r[2], 0u - 5u);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 144u));
    set32(c.r[7], 0u - 2u);
    c.r[10].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 156u));
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 136u), c.r[4].w[0]);
    c.r[9].d[0] = c.r[8].d[0] << 62;
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 61;
    c.r[3].d[0] = c.r[9].d[0] >> 63;
    st32((c.r[29].w[0] + 140u), c.r[19].w[0]);
    c.r[9].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[8].d[0] >> 63;
    set32(c.r[8], c.r[9].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[9].d[0] = c.r[11].d[0] | c.r[8].d[0];
    set32(c.r[8], c.r[3].w[0] << 2);
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 116u));
    c.r[9].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[9].d[0] >> 63;
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[8], c.r[3].w[0] << 1);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 116u));
    c.r[8].d[0] = c.r[10].d[0] | c.r[8].d[0];
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld8((c.r[29].w[0] + 128u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[8], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 128u));
    c.r[8].d[0] = c.r[3].d[0] << 62;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[29].w[0] + 144u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 77;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F02Cu); st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C7(c, 449u, depth + 1u); else { c.pc = 0x0041FF10u; return; } if (c.pc != 0x0041F02Cu) [[unlikely]] return; }
L_0041F02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041F108; } }
L_0041F034:
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F040u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00C7(c, 405u, depth + 1u); else { c.pc = 0x0041FB60u; return; } if (c.pc != 0x0041F040u) [[unlikely]] return; }
L_0041F040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { goto L_0041F078; } }
L_0041F048:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 180u);  goto L_0041F070; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041F108; } }
L_0041F070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F078u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041F078u) [[unlikely]] return; }
L_0041F078:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0041F104; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F048u | kUnwind; return; } goto L_0041F048; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F104; } }
L_0041F0A4:
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0B0u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00C7(c, 405u, depth + 1u); else { c.pc = 0x0041FB60u; return; } if (c.pc != 0x0041F0B0u) [[unlikely]] return; }
L_0041F0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + 20u);  if (t) { goto L_0041F0E0; } }
L_0041F0B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_0041F0D8; }
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0D0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00C7(c, 444u, depth + 1u); else { c.pc = 0x0041FE50u; return; } if (c.pc != 0x0041F0D0u) [[unlikely]] return; }
L_0041F0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041F108; } }
L_0041F0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F0E0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0041F0E0u) [[unlikely]] return; }
L_0041F0E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0041F104; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F0B8u | kUnwind; return; } goto L_0041F0B8; }
L_0041F104:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041F108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0041F130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0041F1EC; } }
L_0041F154:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0041F1EC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F17Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 301u, depth + 1u); else { c.pc = 0x0041EBE0u; return; } if (c.pc != 0x0041F17Cu) [[unlikely]] return; }
L_0041F17C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F19Cu); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F19Cu) [[unlikely]] return; }
L_0041F19C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F1BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F1BCu) [[unlikely]] return; }
L_0041F1BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F1E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 301u, depth + 1u); else { c.pc = 0x0041EBE0u; return; } if (c.pc != 0x0041F1E8u) [[unlikely]] return; }
L_0041F1E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0041F1EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F154u | kUnwind; return; } goto L_0041F154; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041F220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F240u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C7(c, 164u, depth + 1u); else { c.pc = 0x0041DC50u; return; } if (c.pc != 0x0041F240u) [[unlikely]] return; }
L_0041F240:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F24Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x0041F24Cu) [[unlikely]] return; }
L_0041F24C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[16].w[0]);  if (t) { goto L_0041F270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F260u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041F260u) [[unlikely]] return; }
L_0041F260:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F270u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041F270u) [[unlikely]] return; }
L_0041F270:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0041F318; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0041F28C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0041F2A8; } }
L_0041F28C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F298u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F298u) [[unlikely]] return; }
L_0041F298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 20680u);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0041F2A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041F314; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0041F2C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041F30C; } }
L_0041F2C4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F2D0u) [[unlikely]] return; }
L_0041F2D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20680u);  if (t) { goto L_0041F2F0; } }
L_0041F2E0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0041F2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0041F2FC; } }
L_0041F2F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F2E0u | kUnwind; return; } goto L_0041F2E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041F2FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0041F30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041F30C; } }
L_0041F30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_0041F3E8; } }
L_0041F314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0041F318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F320u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0041F320u) [[unlikely]] return; }
L_0041F320:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F32Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041F32Cu) [[unlikely]] return; }
L_0041F32C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F33Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0041F33Cu) [[unlikely]] return; }
L_0041F33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041F35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F34Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x0041F34Cu) [[unlikely]] return; }
L_0041F34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10128u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 4;
L_0041F35C:
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_0041F3C8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[16].w[0]);  goto L_0041F3A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F378u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041F378u) [[unlikely]] return; }
L_0041F378:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F388u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041F388u) [[unlikely]] return; }
L_0041F388:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041F3A4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F3A4u) [[unlikely]] return; }
L_0041F3A4:
    st32((c.r[29].w[0] + 76u), c.r[16].w[0]);
    c.budget -= 1;
L_0041F3A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0041F3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041F3B8u) [[unlikely]] return; }
L_0041F3B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041F3C8u) [[unlikely]] return; }
L_0041F3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3D0u);  if (depth < kMaxDepth) unit_00C7(c, 164u, depth + 1u); else { c.pc = 0x0041DC50u; return; } if (c.pc != 0x0041F3D0u) [[unlikely]] return; }
L_0041F3D0:
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 142u, depth + 1u); else { c.pc = 0x002BD280u; return; } if (c.pc != 0x0041F3E0u) [[unlikely]] return; }
L_0041F3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3E8u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0041F3E8u) [[unlikely]] return; }
L_0041F3E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0041F42C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F3FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0041F3FCu) [[unlikely]] return; }
L_0041F3FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F40Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0041F40Cu) [[unlikely]] return; }
L_0041F40C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041F428; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F428u) [[unlikely]] return; }
L_0041F428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0041F42C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041F440:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0041F50C; } }
L_0041F474:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F488u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 388u, depth + 1u); else { c.pc = 0x0041B150u; return; } if (c.pc != 0x0041F488u) [[unlikely]] return; }
L_0041F488:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 25764u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_0041F4B0; }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_0041F4B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0041F4EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F4E8u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0088(c, 262u, depth + 1u); else { c.pc = 0x00321ED0u; return; } if (c.pc != 0x0041F4E8u) [[unlikely]] return; }
L_0041F4E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0041F4EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0041F50C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F474u | kUnwind; return; } goto L_0041F474; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041F540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041F594; } }
L_0041F568:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0041F594; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F590u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F590u) [[unlikely]] return; }
L_0041F590:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041F594:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F568u | kUnwind; return; } goto L_0041F568; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041F5C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041F6B8; } }
L_0041F5F0:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041F6B8; }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0041F6B4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041F6B4; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_0041F6AC; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], ld32((c.r[20].w[0] + 4u)));  goto L_0041F64C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F648u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041F648u) [[unlikely]] return; }
L_0041F648:
    set32(c.r[21], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0041F64C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 8u);  goto L_0041F670; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0041F660u) [[unlikely]] return; }
L_0041F660:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F66Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0041F66Cu) [[unlikely]] return; }
L_0041F66C:
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 1;
L_0041F670:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0041F6A0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F69C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041F69C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0041F69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F69Cu);  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041F69Cu) [[unlikely]] return; }
L_0041F69C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0041F6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F6A8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0041F6A8u) [[unlikely]] return; }
L_0041F6A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0041F6AC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0041F6B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041F6B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F5F0u | kUnwind; return; } goto L_0041F5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F6D0u); set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0041F6D0u) [[unlikely]] return; }
L_0041F6D0:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F6E8u); st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 162u, depth + 1u); else { c.pc = 0x0041DC10u; return; } if (c.pc != 0x0041F6E8u) [[unlikely]] return; }
L_0041F6E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st32((c.r[19].w[0]), c.r[18].w[0]);  if (t) { goto L_0041F700; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 390u, depth + 1u); else { c.pc = 0x0041F970u; return; } if (c.pc != 0x0041F700u) [[unlikely]] return; }
L_0041F700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0041F730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0041F774; } }
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0041F774; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0041F774:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0041F7A0; } }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0041F798; } }
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0041F798; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0041F798:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0041F854; }
L_0041F7A0:
    mmi::pminw(c.r[19], c.r[4], c.r[5]);
    mmi::pmaxw(c.r[18], c.r[7], c.r[6]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F7BCu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0041F7BCu) [[unlikely]] return; }
L_0041F7BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[19].w[0] - c.r[2].w[0]);  if (t) { goto L_0041F82C; } }
L_0041F7D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  goto L_0041F800; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041F7FC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_0041F80C; }
L_0041F7FC:
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 1;
L_0041F800:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_0041F820; } }
L_0041F80C:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0041F820:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0041F82C:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F7D4u | kUnwind; return; } goto L_0041F7D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F840u); set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0041F840u) [[unlikely]] return; }
L_0041F840:
    st32((c.r[20].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_0041F854:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041F870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0041F8EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25764u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0041F8A4; } }
L_0041F8A4:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[5].w[0] - 16u);  goto L_0041F8C4; }
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F8A4u | kUnwind; return; } goto L_0041F8A4; }
    set32(c.r[6], c.r[5].w[0] - 16u);
    c.budget -= 1;
L_0041F8C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 31u);  if (t) { goto L_0041F8D0; } }
L_0041F8D0:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] - 16u);  goto L_0041F8EC; }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F8D0u | kUnwind; return; } goto L_0041F8D0; }
    set32(c.r[3], c.r[5].w[0] - 16u);
    c.budget -= 1;
L_0041F8EC:
    c.r[2].d[0] = 0ull + 0ull;
    mmi::pminw(c.r[17], c.r[2], c.r[6]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::pmaxw(c.r[16], c.r[2], c.r[3]);  if (t) { goto L_0041F92C; } }
L_0041F8FC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25764u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0041F920; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041F92C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0041F920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F928u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 390u, depth + 1u); else { c.pc = 0x0041F970u; return; } if (c.pc != 0x0041F928u) [[unlikely]] return; }
L_0041F928:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041F92C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041F8FCu | kUnwind; return; } goto L_0041F8FC; }
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F954u); set32(c.r[6], c.r[6].w[0] + 14768u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0041F954u) [[unlikely]] return; }
L_0041F954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041F970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041F994u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 380u, depth + 1u); else { c.pc = 0x0041F730u; return; } if (c.pc != 0x0041F994u) [[unlikely]] return; }
L_0041F994:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041FA3C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_0041F9C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041FA3C; } }
L_0041F9C0:
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 16u);  goto L_0041F9E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041FA3C; } }
L_0041F9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0041FA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_0041FA04; } }
L_0041FA00:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_0041FA04:
    mmi::pmaxw(c.r[17], c.r[2], c.r[3]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA14u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0041FA14u) [[unlikely]] return; }
L_0041FA14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_0041FA30; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 308u, depth + 1u); else { c.pc = 0x0041ECC0u; return; } if (c.pc != 0x0041FA2Cu) [[unlikely]] return; }
L_0041FA2C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0041FA30:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0041FA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041FA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA7Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 370u, depth + 1u); else { c.pc = 0x0041F5C0u; return; } if (c.pc != 0x0041FA7Cu) [[unlikely]] return; }
L_0041FA7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 25764u)));  goto L_0041FA94; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 92u, depth + 1u); else { c.pc = 0x0041D380u; return; } if (c.pc != 0x0041FA90u) [[unlikely]] return; }
L_0041FA90:
    set32(c.r[5], ld32((c.r[28].w[0] - 25764u)));
    c.budget -= 1;
L_0041FA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FA9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 384u, depth + 1u); else { c.pc = 0x0041F870u; return; } if (c.pc != 0x0041FA9Cu) [[unlikely]] return; }
L_0041FA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041FAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041FAF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FAD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C7(c, 370u, depth + 1u); else { c.pc = 0x0041F5C0u; return; } if (c.pc != 0x0041FAD4u) [[unlikely]] return; }
L_0041FAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FADCu);  if (depth < kMaxDepth) unit_00C7(c, 165u, depth + 1u); else { c.pc = 0x0041DC60u; return; } if (c.pc != 0x0041FADCu) [[unlikely]] return; }
L_0041FADC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FAF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FAF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0041FAF4u) [[unlikely]] return; }
L_0041FAF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041FB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB30u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_00C7(c, 179u, depth + 1u); else { c.pc = 0x0041DDF0u; return; } if (c.pc != 0x0041FB30u) [[unlikely]] return; }
L_0041FB30:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FB4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 370u, depth + 1u); else { c.pc = 0x0041F5C0u; return; } if (c.pc != 0x0041FB4Cu) [[unlikely]] return; }
L_0041FB4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FB60:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_0041FB84; } }
L_0041FB6C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_0041FB84; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_0041FB84:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FB6Cu | kUnwind; return; } goto L_0041FB6C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_0041FBB0; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_0041FBB4; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_0041FBB0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0041FBB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041FBC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041FCD4; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0041FC50; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041FC0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC08u);  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FC08u) [[unlikely]] return; }
L_0041FC08:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041FC0C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FC20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FC1Cu) [[unlikely]] return; }
L_0041FC1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC28u);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FC28u) [[unlikely]] return; }
L_0041FC28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC34u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 442u, depth + 1u); else { c.pc = 0x0041FE30u; return; } if (c.pc != 0x0041FC34u) [[unlikely]] return; }
L_0041FC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FC3Cu) [[unlikely]] return; }
L_0041FC3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 439u, depth + 1u); else { c.pc = 0x0041FE00u; return; } if (c.pc != 0x0041FC4Cu) [[unlikely]] return; }
L_0041FC4C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0041FC50:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FCB4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041FC70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FC6Cu) [[unlikely]] return; }
L_0041FC6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041FC70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FC84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FC80u) [[unlikely]] return; }
L_0041FC80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC8Cu);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FC8Cu) [[unlikely]] return; }
L_0041FC8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FC98u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 442u, depth + 1u); else { c.pc = 0x0041FE30u; return; } if (c.pc != 0x0041FC98u) [[unlikely]] return; }
L_0041FC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FCA0u) [[unlikely]] return; }
L_0041FCA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 439u, depth + 1u); else { c.pc = 0x0041FE00u; return; } if (c.pc != 0x0041FCB0u) [[unlikely]] return; }
L_0041FCB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCBCu);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FCBCu) [[unlikely]] return; }
L_0041FCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FCC4u) [[unlikely]] return; }
L_0041FCC4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0041FCD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FCD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041FCD4u) [[unlikely]] return; }
L_0041FCD4:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0041FCD8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0041FDCC; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0041FD48; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041FD04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FD00u) [[unlikely]] return; }
L_0041FD00:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041FD04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FD18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FD14u) [[unlikely]] return; }
L_0041FD14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD20u);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FD20u) [[unlikely]] return; }
L_0041FD20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD2Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 442u, depth + 1u); else { c.pc = 0x0041FE30u; return; } if (c.pc != 0x0041FD2Cu) [[unlikely]] return; }
L_0041FD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FD34u) [[unlikely]] return; }
L_0041FD34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 439u, depth + 1u); else { c.pc = 0x0041FE00u; return; } if (c.pc != 0x0041FD44u) [[unlikely]] return; }
L_0041FD44:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0041FD48:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FDAC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0041FD68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FD64u) [[unlikely]] return; }
L_0041FD64:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041FD68:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041FD7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 407u, depth + 1u); else { c.pc = 0x0041FBC0u; return; } if (c.pc != 0x0041FD78u) [[unlikely]] return; }
L_0041FD78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD84u);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FD84u) [[unlikely]] return; }
L_0041FD84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD90u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C7(c, 442u, depth + 1u); else { c.pc = 0x0041FE30u; return; } if (c.pc != 0x0041FD90u) [[unlikely]] return; }
L_0041FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FD98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FD98u) [[unlikely]] return; }
L_0041FD98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 439u, depth + 1u); else { c.pc = 0x0041FE00u; return; } if (c.pc != 0x0041FDA8u) [[unlikely]] return; }
L_0041FDA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041FDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDB4u);  if (depth < kMaxDepth) unit_00C7(c, 443u, depth + 1u); else { c.pc = 0x0041FE40u; return; } if (c.pc != 0x0041FDB4u) [[unlikely]] return; }
L_0041FDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 441u, depth + 1u); else { c.pc = 0x0041FE20u; return; } if (c.pc != 0x0041FDBCu) [[unlikely]] return; }
L_0041FDBC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0041FDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDCCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041FDCCu) [[unlikely]] return; }
L_0041FDCC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0041FDE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FDDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041FDDCu) [[unlikely]] return; }
L_0041FDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0041FDE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0041FE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0041FE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FE14u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041FE14u) [[unlikely]] return; }
L_0041FE14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041FE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0041FE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0041FE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0041FE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041FED0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_0041FEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0041FE8C; } }
L_0041FE84:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0041FE8C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FE84u | kUnwind; return; } goto L_0041FE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0041FEC8; } }
L_0041FEA8:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FEA8u | kUnwind; return; } goto L_0041FEA8; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0041FEC8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0041FED0:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FEDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x0041FEDCu) [[unlikely]] return; }
L_0041FEDC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0041FEF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FEECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0041FEECu) [[unlikely]] return; }
L_0041FEEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0041FEF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041FF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[5].w[0] + 12u);
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0041FF64; } }
L_0041FF3C:
    set32(c.r[3], ld32((c.r[9].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0041FF58; } }
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041FF64; } }
L_0041FF58:
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0041FF64:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041FF3Cu | kUnwind; return; } goto L_0041FF3C; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041FF78u); c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 453u, depth + 1u); else { c.pc = 0x0041FFC0u; return; } if (c.pc != 0x0041FF78u) [[unlikely]] return; }
L_0041FF78:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041FF90:
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
L_0041FFC0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00C8(c, 3u, depth); } }
    [[clang::musttail]] return unit_00C8(c, 1u, depth);
}

}
