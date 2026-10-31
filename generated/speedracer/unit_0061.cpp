#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0061[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 7, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 10, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 254, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326,
    0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0,
    0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0061(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00284000;
    case 2u: goto L_0028400C;
    case 3u: goto L_00284020;
    case 4u: goto L_00284040;
    case 5u: goto L_00284050;
    case 6u: goto L_00284060;
    case 7u: goto L_00284064;
    case 8u: goto L_00284074;
    case 9u: goto L_00284090;
    case 10u: goto L_00284094;
    case 11u: goto L_00284098;
    case 12u: goto L_002840B0;
    case 13u: goto L_002840DC;
    case 14u: goto L_002840EC;
    case 15u: goto L_00284108;
    case 16u: goto L_0028411C;
    case 17u: goto L_0028412C;
    case 18u: goto L_00284138;
    case 19u: goto L_00284154;
    case 20u: goto L_00284170;
    case 21u: goto L_002841C0;
    case 22u: goto L_002841D0;
    case 23u: goto L_002841E4;
    case 24u: goto L_00284204;
    case 25u: goto L_00284214;
    case 26u: goto L_00284228;
    case 27u: goto L_00284238;
    case 28u: goto L_00284254;
    case 29u: goto L_00284280;
    case 30u: goto L_002842D0;
    case 31u: goto L_002842E0;
    case 32u: goto L_002842F4;
    case 33u: goto L_00284314;
    case 34u: goto L_00284324;
    case 35u: goto L_00284338;
    case 36u: goto L_00284348;
    case 37u: goto L_00284364;
    case 38u: goto L_00284390;
    case 39u: goto L_002843B0;
    case 40u: goto L_002843C8;
    case 41u: goto L_00284400;
    case 42u: goto L_00284434;
    case 43u: goto L_00284448;
    case 44u: goto L_0028445C;
    case 45u: goto L_0028447C;
    case 46u: goto L_002844A0;
    case 47u: goto L_002844D4;
    case 48u: goto L_002844E8;
    case 49u: goto L_00284518;
    case 50u: goto L_00284528;
    case 51u: goto L_00284544;
    case 52u: goto L_00284558;
    case 53u: goto L_00284568;
    case 54u: goto L_00284588;
    case 55u: goto L_00284598;
    case 56u: goto L_002845B4;
    case 57u: goto L_002845E4;
    case 58u: goto L_002845F8;
    case 59u: goto L_0028462C;
    case 60u: goto L_00284648;
    case 61u: goto L_00284670;
    case 62u: goto L_00284688;
    case 63u: goto L_002846F0;
    case 64u: goto L_00284700;
    case 65u: goto L_0028471C;
    case 66u: goto L_00284724;
    case 67u: goto L_00284798;
    case 68u: goto L_002847A8;
    case 69u: goto L_002847C4;
    case 70u: goto L_002847D8;
    case 71u: goto L_002847E8;
    case 72u: goto L_00284800;
    case 73u: goto L_00284844;
    case 74u: goto L_00284858;
    case 75u: goto L_00284898;
    case 76u: goto L_002848C0;
    case 77u: goto L_002848F4;
    case 78u: goto L_00284908;
    case 79u: goto L_00284948;
    case 80u: goto L_00284970;
    case 81u: goto L_002849A8;
    case 82u: goto L_002849C0;
    case 83u: goto L_002849D0;
    case 84u: goto L_002849E4;
    case 85u: goto L_002849F0;
    case 86u: goto L_00284A04;
    case 87u: goto L_00284A20;
    case 88u: goto L_00284A30;
    case 89u: goto L_00284A40;
    case 90u: goto L_00284A50;
    case 91u: goto L_00284A60;
    case 92u: goto L_00284A70;
    case 93u: goto L_00284A80;
    case 94u: goto L_00284A90;
    case 95u: goto L_00284AA0;
    case 96u: goto L_00284AB0;
    case 97u: goto L_00284AC0;
    case 98u: goto L_00284AD0;
    case 99u: goto L_00284AE0;
    case 100u: goto L_00284B24;
    case 101u: goto L_00284B38;
    case 102u: goto L_00284B78;
    case 103u: goto L_00284BA0;
    case 104u: goto L_00284BD4;
    case 105u: goto L_00284BE8;
    case 106u: goto L_00284C28;
    case 107u: goto L_00284C50;
    case 108u: goto L_00284C88;
    case 109u: goto L_00284CA0;
    case 110u: goto L_00284CB0;
    case 111u: goto L_00284CD8;
    case 112u: goto L_00284CE8;
    case 113u: goto L_00284D44;
    case 114u: goto L_00284D58;
    case 115u: goto L_00284D78;
    case 116u: goto L_00284DA0;
    case 117u: goto L_00284E40;
    case 118u: goto L_00284E7C;
    case 119u: goto L_00284E80;
    case 120u: goto L_00284E9C;
    case 121u: goto L_00284F28;
    case 122u: goto L_00284F3C;
    case 123u: goto L_00284F4C;
    case 124u: goto L_00284F70;
    case 125u: goto L_00284FB0;
    case 126u: goto L_00284FC4;
    case 127u: goto L_00284FD4;
    case 128u: goto L_00284FE4;
    case 129u: goto L_00285014;
    case 130u: goto L_0028507C;
    case 131u: goto L_00285090;
    case 132u: goto L_002850BC;
    case 133u: goto L_002850F0;
    case 134u: goto L_002850FC;
    case 135u: goto L_00285134;
    case 136u: goto L_0028515C;
    case 137u: goto L_0028517C;
    case 138u: goto L_00285190;
    case 139u: goto L_002851B0;
    case 140u: goto L_002851CC;
    case 141u: goto L_002851E0;
    case 142u: goto L_00285210;
    case 143u: goto L_0028522C;
    case 144u: goto L_00285290;
    case 145u: goto L_002852C8;
    case 146u: goto L_002852D4;
    case 147u: goto L_002852DC;
    case 148u: goto L_00285304;
    case 149u: goto L_0028534C;
    case 150u: goto L_00285360;
    case 151u: goto L_002853A8;
    case 152u: goto L_002853C4;
    case 153u: goto L_002853E0;
    case 154u: goto L_002853F4;
    case 155u: goto L_00285450;
    case 156u: goto L_00285464;
    case 157u: goto L_00285490;
    case 158u: goto L_002854C0;
    case 159u: goto L_002854DC;
    case 160u: goto L_00285500;
    case 161u: goto L_00285510;
    case 162u: goto L_00285534;
    case 163u: goto L_00285544;
    case 164u: goto L_0028559C;
    case 165u: goto L_002855B8;
    case 166u: goto L_002855D4;
    case 167u: goto L_002855F0;
    case 168u: goto L_0028560C;
    case 169u: goto L_00285630;
    case 170u: goto L_0028564C;
    case 171u: goto L_00285658;
    case 172u: goto L_0028566C;
    case 173u: goto L_00285680;
    case 174u: goto L_00285694;
    case 175u: goto L_002856B0;
    case 176u: goto L_002856CC;
    case 177u: goto L_00285710;
    case 178u: goto L_0028572C;
    case 179u: goto L_00285738;
    case 180u: goto L_00285750;
    case 181u: goto L_00285760;
    case 182u: goto L_00285770;
    case 183u: goto L_0028578C;
    case 184u: goto L_00285798;
    case 185u: goto L_002857C0;
    case 186u: goto L_002857D8;
    case 187u: goto L_002857EC;
    case 188u: goto L_00285840;
    case 189u: goto L_00285868;
    case 190u: goto L_0028587C;
    case 191u: goto L_002858C0;
    case 192u: goto L_002858F0;
    case 193u: goto L_00285960;
    case 194u: goto L_00285978;
    case 195u: goto L_00285988;
    case 196u: goto L_002859A0;
    case 197u: goto L_002859B8;
    case 198u: goto L_002859C8;
    case 199u: goto L_002859E0;
    case 200u: goto L_00285A04;
    case 201u: goto L_00285A14;
    case 202u: goto L_00285A30;
    case 203u: goto L_00285A50;
    case 204u: goto L_00285A5C;
    case 205u: goto L_00285A70;
    case 206u: goto L_00285A98;
    case 207u: goto L_00285AD4;
    case 208u: goto L_00285B1C;
    case 209u: goto L_00285B24;
    case 210u: goto L_00285BA0;
    case 211u: goto L_00285BAC;
    case 212u: goto L_00285BF8;
    case 213u: goto L_00285C84;
    case 214u: goto L_00285CF4;
    case 215u: goto L_00285D1C;
    case 216u: goto L_00285D44;
    case 217u: goto L_00285ED4;
    case 218u: goto L_00285F8C;
    case 219u: goto L_00285FFC;
    case 220u: goto L_00286024;
    case 221u: goto L_0028604C;
    case 222u: goto L_002860CC;
    case 223u: goto L_002860D8;
    case 224u: goto L_002860FC;
    case 225u: goto L_0028612C;
    case 226u: goto L_00286160;
    case 227u: goto L_00286298;
    case 228u: goto L_002862A4;
    case 229u: goto L_002862B4;
    case 230u: goto L_002862C0;
    case 231u: goto L_002862C8;
    case 232u: goto L_002862D4;
    case 233u: goto L_002862F8;
    case 234u: goto L_00286320;
    case 235u: goto L_00286348;
    case 236u: goto L_00286380;
    case 237u: goto L_00286390;
    case 238u: goto L_002863C4;
    case 239u: goto L_002863D4;
    case 240u: goto L_002863F0;
    case 241u: goto L_00286410;
    case 242u: goto L_0028642C;
    case 243u: goto L_00286438;
    case 244u: goto L_0028644C;
    case 245u: goto L_0028645C;
    case 246u: goto L_00286470;
    case 247u: goto L_00286490;
    case 248u: goto L_002864D0;
    case 249u: goto L_0028650C;
    case 250u: goto L_00286530;
    case 251u: goto L_0028654C;
    case 252u: goto L_00286558;
    case 253u: goto L_0028656C;
    case 254u: goto L_00286570;
    case 255u: goto L_00286590;
    case 256u: goto L_002865A0;
    case 257u: goto L_002865B0;
    case 258u: goto L_002865CC;
    case 259u: goto L_002865D8;
    case 260u: goto L_002865EC;
    case 261u: goto L_00286600;
    case 262u: goto L_00286620;
    case 263u: goto L_00286638;
    case 264u: goto L_00286648;
    case 265u: goto L_00286670;
    case 266u: goto L_00286698;
    case 267u: goto L_002866A8;
    case 268u: goto L_002866CC;
    case 269u: goto L_002866E0;
    case 270u: goto L_002866F4;
    case 271u: goto L_00286720;
    case 272u: goto L_00286760;
    case 273u: goto L_00286768;
    case 274u: goto L_00286790;
    case 275u: goto L_002867A0;
    case 276u: goto L_00286858;
    case 277u: goto L_002868E0;
    case 278u: goto L_00286904;
    case 279u: goto L_002869A0;
    case 280u: goto L_00286A2C;
    case 281u: goto L_00286A38;
    case 282u: goto L_00286A6C;
    case 283u: goto L_00286A8C;
    case 284u: goto L_00286AAC;
    case 285u: goto L_00286ABC;
    case 286u: goto L_00286AD8;
    case 287u: goto L_00286AEC;
    case 288u: goto L_00286AFC;
    case 289u: goto L_00286B20;
    case 290u: goto L_00286B54;
    case 291u: goto L_00286B74;
    case 292u: goto L_00286BBC;
    case 293u: goto L_00286C0C;
    case 294u: goto L_00286C18;
    case 295u: goto L_00286C28;
    case 296u: goto L_00286C78;
    case 297u: goto L_00286CBC;
    case 298u: goto L_00286CC8;
    case 299u: goto L_00286CD8;
    case 300u: goto L_00286D00;
    case 301u: goto L_00286D0C;
    case 302u: goto L_00286D50;
    case 303u: goto L_00286D5C;
    case 304u: goto L_00286D6C;
    case 305u: goto L_00286DA0;
    case 306u: goto L_00286E38;
    case 307u: goto L_00286F40;
    case 308u: goto L_00286FDC;
    case 309u: goto L_00287008;
    case 310u: goto L_00287040;
    case 311u: goto L_00287058;
    case 312u: goto L_00287070;
    case 313u: goto L_002870C4;
    case 314u: goto L_002870D8;
    case 315u: goto L_002870F8;
    case 316u: goto L_00287104;
    case 317u: goto L_00287110;
    case 318u: goto L_0028711C;
    case 319u: goto L_00287128;
    case 320u: goto L_00287134;
    case 321u: goto L_00287140;
    case 322u: goto L_0028714C;
    case 323u: goto L_00287158;
    case 324u: goto L_00287164;
    case 325u: goto L_00287170;
    case 326u: goto L_0028717C;
    case 327u: goto L_00287188;
    case 328u: goto L_00287194;
    case 329u: goto L_002871A0;
    case 330u: goto L_002871AC;
    case 331u: goto L_002871C4;
    case 332u: goto L_00287270;
    case 333u: goto L_00287304;
    case 334u: goto L_00287398;
    case 335u: goto L_002873C8;
    case 336u: goto L_002873EC;
    case 337u: goto L_002874A8;
    case 338u: goto L_002874D8;
    case 339u: goto L_00287510;
    case 340u: goto L_00287558;
    case 341u: goto L_00287574;
    case 342u: goto L_00287590;
    case 343u: goto L_002875B4;
    case 344u: goto L_002875C8;
    case 345u: goto L_00287640;
    case 346u: goto L_00287690;
    case 347u: goto L_002876C8;
    case 348u: goto L_002876E4;
    case 349u: goto L_00287700;
    case 350u: goto L_00287710;
    case 351u: goto L_00287740;
    case 352u: goto L_0028775C;
    case 353u: goto L_00287780;
    case 354u: goto L_0028779C;
    case 355u: goto L_002877A8;
    case 356u: goto L_002877BC;
    case 357u: goto L_002877CC;
    case 358u: goto L_002877E0;
    case 359u: goto L_00287800;
    case 360u: goto L_00287840;
    case 361u: goto L_00287880;
    case 362u: goto L_0028789C;
    case 363u: goto L_002878B0;
    case 364u: goto L_002878D0;
    case 365u: goto L_002878E0;
    case 366u: goto L_002878F0;
    case 367u: goto L_0028790C;
    case 368u: goto L_00287918;
    case 369u: goto L_00287940;
    case 370u: goto L_00287958;
    case 371u: goto L_00287968;
    case 372u: goto L_00287990;
    case 373u: goto L_002879B8;
    case 374u: goto L_002879C8;
    case 375u: goto L_002879E8;
    case 376u: goto L_00287A10;
    case 377u: goto L_00287A40;
    case 378u: goto L_00287A50;
    case 379u: goto L_00287A5C;
    case 380u: goto L_00287A68;
    case 381u: goto L_00287A74;
    case 382u: goto L_00287A80;
    case 383u: goto L_00287AA8;
    case 384u: goto L_00287AD0;
    case 385u: goto L_00287AEC;
    case 386u: goto L_00287AF8;
    case 387u: goto L_00287B10;
    case 388u: goto L_00287B2C;
    case 389u: goto L_00287B38;
    case 390u: goto L_00287B50;
    case 391u: goto L_00287B80;
    case 392u: goto L_00287B9C;
    case 393u: goto L_00287BC0;
    case 394u: goto L_00287BD0;
    case 395u: goto L_00287BEC;
    case 396u: goto L_00287BF8;
    case 397u: goto L_00287C0C;
    case 398u: goto L_00287C1C;
    case 399u: goto L_00287C30;
    case 400u: goto L_00287C40;
    case 401u: goto L_00287C54;
    case 402u: goto L_00287C70;
    case 403u: goto L_00287C8C;
    case 404u: goto L_00287D30;
    case 405u: goto L_00287D4C;
    case 406u: goto L_00287D58;
    case 407u: goto L_00287D70;
    case 408u: goto L_00287D80;
    case 409u: goto L_00287D90;
    case 410u: goto L_00287DAC;
    case 411u: goto L_00287DB8;
    case 412u: goto L_00287DD0;
    case 413u: goto L_00287DE8;
    case 414u: goto L_00287DFC;
    case 415u: goto L_00287E10;
    case 416u: goto L_00287E18;
    case 417u: goto L_00287E24;
    case 418u: goto L_00287E30;
    case 419u: goto L_00287E50;
    case 420u: goto L_00287E60;
    case 421u: goto L_00287E88;
    case 422u: goto L_00287E9C;
    case 423u: goto L_00287EB0;
    case 424u: goto L_00287EB8;
    case 425u: goto L_00287EC4;
    case 426u: goto L_00287ED0;
    case 427u: goto L_00287EE0;
    case 428u: goto L_00287F20;
    default: bad_entry(c, 0x00284000u); return;
    }
L_00284000:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028400Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0028400Cu) [[unlikely]] return; }
L_0028400C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284020u) [[unlikely]] return; }
L_00284020:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_00284050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284040u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284040u) [[unlikely]] return; }
L_00284040:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284050u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284050u) [[unlikely]] return; }
L_00284050:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00284094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284064u) [[unlikely]] return; }
    goto L_00284064;
L_00284060:
    c.budget -= 1;
L_00284064:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284074u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284074u) [[unlikely]] return; }
L_00284074:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00284090; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284090u) [[unlikely]] return; }
L_00284090:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00284094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00284098:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002840B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028412C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0028410C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002840DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002840DCu) [[unlikely]] return; }
L_002840DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002840ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002840ECu) [[unlikely]] return; }
L_002840EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00284108; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284108u) [[unlikely]] return; }
L_00284108:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028410C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0028412C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028411Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0028411Cu) [[unlikely]] return; }
L_0028411C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028412Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0028412Cu) [[unlikely]] return; }
L_0028412C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284138u); set32(c.r[4], c.r[4].w[0] + 16912u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x00284138u) [[unlikely]] return; }
L_00284138:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284154u); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x00284154u) [[unlikely]] return; }
L_00284154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284170:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002841A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002841AC; } }
L_002841A8:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002841AC:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_002841D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002841C0u) [[unlikely]] return; }
L_002841C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002841D0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002841D0u) [[unlikely]] return; }
L_002841D0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002841E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002841E4u) [[unlikely]] return; }
L_002841E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_00284214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284204u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284204u) [[unlikely]] return; }
L_00284204:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284214u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284214u) [[unlikely]] return; }
L_00284214:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00284258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284228u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284228u) [[unlikely]] return; }
L_00284228:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284238u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284238u) [[unlikely]] return; }
L_00284238:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00284254; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284254u) [[unlikely]] return; }
L_00284254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00284258:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00284280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002842B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_002842BC; } }
L_002842B8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_002842BC:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_002842E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002842D0u) [[unlikely]] return; }
L_002842D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002842E0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002842E0u) [[unlikely]] return; }
L_002842E0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002842F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002842F4u) [[unlikely]] return; }
L_002842F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_00284324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284314u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284314u) [[unlikely]] return; }
L_00284314:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284324u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284324u) [[unlikely]] return; }
L_00284324:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00284368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284338u) [[unlikely]] return; }
L_00284338:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284348u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284348u) [[unlikely]] return; }
L_00284348:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00284364; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284364u) [[unlikely]] return; }
L_00284364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00284368:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00284390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002843D8; } }
L_002843B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_002843D8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002843C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002843C8u) [[unlikely]] return; }
L_002843C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002843D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002843E4; } }
L_002843D8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002843B0u | kUnwind; return; } goto L_002843B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002843E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028447C; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284434u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284434u) [[unlikely]] return; }
L_00284434:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_00284480; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284448u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284448u) [[unlikely]] return; }
L_00284448:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028445Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0028445Cu) [[unlikely]] return; }
L_0028445C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028447C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028447Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028447Cu) [[unlikely]] return; }
L_0028447C:
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_00284480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002844A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 180u)));  if (t) { goto L_002844E8; } }
L_002844D4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002844E8u); set32(c.r[4], c.r[17].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002844E8u) [[unlikely]] return; }
L_002844E8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 176u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002844D4u | kUnwind; return; } goto L_002844D4; }
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    set32(c.r[18], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 192u);  goto L_0028456C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00284548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284518u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284518u) [[unlikely]] return; }
L_00284518:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284528u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284528u) [[unlikely]] return; }
L_00284528:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00284544; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284544u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284544u) [[unlikely]] return; }
L_00284544:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00284548:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 192u), 0u);  if (t) { goto L_00284568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284558u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284558u) [[unlikely]] return; }
L_00284558:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284568u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284568u) [[unlikely]] return; }
L_00284568:
    set32(c.r[2], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_0028456C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 176u);  goto L_002845B8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002845B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284588u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284588u) [[unlikely]] return; }
L_00284588:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284598u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284598u) [[unlikely]] return; }
L_00284598:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002845B4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002845B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002845B4u) [[unlikely]] return; }
L_002845B4:
    set32(c.r[3], c.r[17].w[0] + 176u);
    c.budget -= 1;
L_002845B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00284624; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00284620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7072u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 180u)));  if (t) { goto L_002845F8; } }
L_002845E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002845F8u); set32(c.r[4], c.r[17].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002845F8u) [[unlikely]] return; }
L_002845F8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 176u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002845E4u | kUnwind; return; } goto L_002845E4; }
    st32((c.r[17].w[0] + 188u), 0u);
    set32(c.r[2], c.r[17].w[0] + 176u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 184u), 0u);  if (t) { goto L_00284620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7040u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00284620:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00284624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028462Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x0028462Cu) [[unlikely]] return; }
L_0028462C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028464C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284648u); set32(c.r[5], 0u + 208u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284648u) [[unlikely]] return; }
L_00284648:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028464C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284688u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00284688u) [[unlikely]] return; }
L_00284688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 7040u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], c.r[3].w[0] + 7072u);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 192u), 0u);  if (t) { goto L_00284700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002846F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002846F0u) [[unlikely]] return; }
L_002846F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284700u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00284700u) [[unlikely]] return; }
L_00284700:
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028471Cu); st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x0028471Cu) [[unlikely]] return; }
L_0028471C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284724u); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x00284724u) [[unlikely]] return; }
L_00284724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 25;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002847EC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002847C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284798u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00284798u) [[unlikely]] return; }
L_00284798:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847A8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002847A8u) [[unlikely]] return; }
L_002847A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002847C4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002847C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002847C4u) [[unlikely]] return; }
L_002847C4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002847C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 192u), 0u);  if (t) { goto L_002847E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002847D8u) [[unlikely]] return; }
L_002847D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847E8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002847E8u) [[unlikely]] return; }
L_002847E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002847EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0028487C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00284858; } }
L_00284844:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284858u) [[unlikely]] return; }
L_00284858:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284844u | kUnwind; return; } goto L_00284844; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0028487C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7040u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0028487C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0028489C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284898u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284898u) [[unlikely]] return; }
L_00284898:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028489C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002848C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7072u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_00284908; } }
L_002848F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284908u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284908u) [[unlikely]] return; }
L_00284908:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002848F4u | kUnwind; return; } goto L_002848F4; }
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_0028492C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7040u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0028492C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0028494C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284948u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284948u) [[unlikely]] return; }
L_00284948:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028494C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002849AC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7040u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002849A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849A8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002849A8u) [[unlikely]] return; }
L_002849A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002849AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002849C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17520u);  c.pc = t; return; }
L_002849D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002849E4u) [[unlikely]] return; }
L_002849E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849F0u); set32(c.r[4], ld32((c.r[2].w[0] + 17520u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002849F0u) [[unlikely]] return; }
L_002849F0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A04u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00284A04u) [[unlikely]] return; }
L_00284A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00284A20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 418u, depth); }
L_00284A30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 424u, depth); }
L_00284A40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_00284A50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_00284A60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 428u, depth); }
L_00284A70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 446u, depth); }
L_00284A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17560u);  c.pc = t; return; }
L_00284A90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F160u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 210u, depth); }
L_00284AA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F170u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 211u, depth); }
L_00284AB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F180u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 212u, depth); }
L_00284AC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F190u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 213u, depth); }
L_00284AD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F1A0u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 214u, depth); }
L_00284AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284B78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00284B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7360u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00284B38; } }
L_00284B24:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284B38u) [[unlikely]] return; }
L_00284B38:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284B24u | kUnwind; return; } goto L_00284B24; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00284B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00284B5C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00284B7C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B78u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284B78u) [[unlikely]] return; }
L_00284B78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00284B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00284C28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7360u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_00284BE8; } }
L_00284BD4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284BE8u) [[unlikely]] return; }
L_00284BE8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284BD4u | kUnwind; return; } goto L_00284BD4; }
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_00284C0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00284C0C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00284C2C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C28u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284C28u) [[unlikely]] return; }
L_00284C28:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00284C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00284C8C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7392u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00284C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C88u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00284C88u) [[unlikely]] return; }
L_00284C88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00284C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00284CA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F1B0u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 215u, depth); }
L_00284CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00284CD8u) [[unlikely]] return; }
L_00284CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00284D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 218u, depth + 1u); else { c.pc = 0x0027F1E0u; return; } if (c.pc != 0x00284CE8u) [[unlikely]] return; }
L_00284CE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7232u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], c.r[3].w[0] + 7360u);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27712u)));
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  goto L_00284D60; }
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00284D44u) [[unlikely]] return; }
L_00284D44:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D58u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00284D58u) [[unlikely]] return; }
L_00284D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00284D68; } }
L_00284D60:
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 2;
L_00284D68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 215u, depth + 1u); else { c.pc = 0x0027F1B0u; return; } if (c.pc != 0x00284D78u) [[unlikely]] return; }
L_00284D78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00284DA0:
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], c.r[6].w[0] << 2);  goto L_00284E04; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00284DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00284E30; } }
L_00284DF0:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[2];  goto L_00284DFC; }
L_00284DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_00284E30; } }
L_00284E04:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00284E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[2];  if (t) { goto L_00284E30; } }
L_00284E20:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_00284E2C; }
L_00284E2C:
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00284E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00284E40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00284F4C; } }
    set32(c.r[17], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E7Cu); set32(c.r[16], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0061(c, 116u, depth + 1u); else { c.pc = 0x00284DA0u; return; } if (c.pc != 0x00284E7Cu) [[unlikely]] return; }
L_00284E7C:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 1;
L_00284E80:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[20].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284E80u | kUnwind; return; } goto L_00284E80; }
L_00284E9C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284E9Cu | kUnwind; return; } goto L_00284E9C; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00284F10; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284E7Cu | kUnwind; return; } goto L_00284E7C; } }
L_00284F10:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[18].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_00284F30; }
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F28u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 117u, depth + 1u); else { c.pc = 0x00284E40u; return; } if (c.pc != 0x00284F28u) [[unlikely]] return; }
L_00284F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00284F50; } }
L_00284F30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 117u, depth + 1u); else { c.pc = 0x00284E40u; return; } if (c.pc != 0x00284F3Cu) [[unlikely]] return; }
L_00284F3C:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 117u, depth + 1u); else { c.pc = 0x00284E40u; return; } if (c.pc != 0x00284F4Cu) [[unlikely]] return; }
L_00284F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00284F50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00284F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0028507C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_00284FF0; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00284FB0u) [[unlikely]] return; }
L_00284FB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FC4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00284FC4u) [[unlikely]] return; }
L_00284FC4:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00284FD4u) [[unlikely]] return; }
L_00284FD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FE4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00284FE4u) [[unlikely]] return; }
L_00284FE4:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
L_00284FF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.f[5] = ld32((c.r[2].w[0] + 112u));
    c.f[4] = ld32((c.r[2].w[0] + 116u));
    c.f[3] = ld32((c.r[2].w[0] + 120u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028506C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_00285060; } }
L_00285014:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 19;
L_00285060:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285014u | kUnwind; return; } goto L_00285014; }
L_0028506C:
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028507Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 117u, depth + 1u); else { c.pc = 0x00284E40u; return; } if (c.pc != 0x0028507Cu) [[unlikely]] return; }
L_0028507C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028517C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002850BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002850BCu) [[unlikely]] return; }
L_002850BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_002850E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_002850E8; } }
L_002850E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002850E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00285124; } }
L_002850F0:
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002850FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002850FCu) [[unlikely]] return; }
L_002850FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00285124; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_00285124; } }
L_00285124:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002850F0u | kUnwind; return; } goto L_002850F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_0028516C; } }
L_00285134:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00285148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_0028514C; } }
L_00285148:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0028514C:
    set32(c.r[25], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028515Cu); set32(c.r[4], c.r[17].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028515Cu) [[unlikely]] return; }
L_0028515C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
L_0028516C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285134u | kUnwind; return; } goto L_00285134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028517Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 216u, depth + 1u); else { c.pc = 0x0027F1C0u; return; } if (c.pc != 0x0028517Cu) [[unlikely]] return; }
L_0028517C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851B0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002851B0u) [[unlikely]] return; }
L_002851B0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851CCu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002851CCu) [[unlikely]] return; }
L_002851CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002851E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00285260; } }
L_00285210:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[25], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028522Cu); set32(c.r[4], c.r[19].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028522Cu) [[unlikely]] return; }
L_0028522C:
    st32((c.r[2].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  goto L_0028524C; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0028524C:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_00285260:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285210u | kUnwind; return; } goto L_00285210; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00285290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002853C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7232u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002852C8u) [[unlikely]] return; }
L_002852C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002852D4u) [[unlikely]] return; }
L_002852D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00285314; } }
L_002852DC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002852F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_002852F4; } }
L_002852F0:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_002852F4:
    set32(c.r[25], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285304u); set32(c.r[4], c.r[17].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285304u) [[unlikely]] return; }
L_00285304:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
L_00285314:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002852DCu | kUnwind; return; } goto L_002852DC; }
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00285388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00285388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7360u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_00285360; } }
L_0028534C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285360u); set32(c.r[4], c.r[17].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285360u) [[unlikely]] return; }
L_00285360:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028534Cu | kUnwind; return; } goto L_0028534C; }
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00285388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_00285388:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002853AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853A8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002853A8u) [[unlikely]] return; }
L_002853A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002853AC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002853C8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853C4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002853C4u) [[unlikely]] return; }
L_002853C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002853C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002853E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 218u, depth + 1u); else { c.pc = 0x0027F1E0u; return; } if (c.pc != 0x002853F4u) [[unlikely]] return; }
L_002853F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7232u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], c.r[3].w[0] + 7360u);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27712u)));
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  goto L_0028546C; }
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00285450u) [[unlikely]] return; }
L_00285450:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285464u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00285464u) [[unlikely]] return; }
L_00285464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00285474; } }
L_0028546C:
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 2;
L_00285474:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002854DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x002854C0u) [[unlikely]] return; }
L_002854C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002854E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854DCu); set32(c.r[5], 0u + 272u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002854DCu) [[unlikely]] return; }
L_002854DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002854E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17600u);  c.pc = t; return; }
L_00285510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285534u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00285534u) [[unlikely]] return; }
L_00285534:
    set32(c.r[17], c.r[2].w[0] + 22u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285544u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00285544u) [[unlikely]] return; }
L_00285544:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002855F8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002855DC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002855C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002855A4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00285588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285610; } }
L_00285588:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028559Cu); set32(c.r[6], c.r[6].w[0] + 17616u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0028559Cu) [[unlikely]] return; }
L_0028559C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028560C; } }
L_002855A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855B8u); set32(c.r[6], c.r[6].w[0] + 17640u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002855B8u) [[unlikely]] return; }
L_002855B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028560C; } }
L_002855C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855D4u); set32(c.r[6], c.r[6].w[0] + 17661u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002855D4u) [[unlikely]] return; }
L_002855D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028560C; } }
L_002855DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855F0u); set32(c.r[6], c.r[6].w[0] + 17684u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002855F0u) [[unlikely]] return; }
L_002855F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028560C; } }
L_002855F8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028560Cu); set32(c.r[6], c.r[6].w[0] + 17708u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0028560Cu) [[unlikely]] return; }
L_0028560C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00285610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00285630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028564Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 460u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x0028564Cu) [[unlikely]] return; }
L_0028564C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285658u); set32(c.r[4], ld32((c.r[2].w[0] + 17600u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00285658u) [[unlikely]] return; }
L_00285658:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028566Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0028566Cu) [[unlikely]] return; }
L_0028566C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 256u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 17731u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285680u); c.r[5].d[0] = c.r[2].d[0] & 7ull;  if (depth < kMaxDepth) unit_0061(c, 161u, depth + 1u); else { c.pc = 0x00285510u; return; } if (c.pc != 0x00285680u) [[unlikely]] return; }
L_00285680:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285694u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00285694u) [[unlikely]] return; }
L_00285694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002856B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 470u, depth + 1u); else { c.pc = 0x002B7730u; return; } if (c.pc != 0x002856CCu) [[unlikely]] return; }
L_002856CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 256u));  goto L_002856DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002856F0; } }
L_002856DC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_002856F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028572Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 476u, depth + 1u); else { c.pc = 0x002B78D0u; return; } if (c.pc != 0x0028572Cu) [[unlikely]] return; }
L_0028572C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285738u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00285738u) [[unlikely]] return; }
L_00285738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285750:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006D(c, 484u, depth); }
L_00285760:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006D(c, 490u, depth); }
L_00285770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028578Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 525u, depth + 1u); else { c.pc = 0x002B7E70u; return; } if (c.pc != 0x0028578Cu) [[unlikely]] return; }
L_0028578C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285798u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00285798u) [[unlikely]] return; }
L_00285798:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 256u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 256u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002857C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 272u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002857D8u) [[unlikely]] return; }
L_002857D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285820; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002857ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x002857ECu) [[unlikely]] return; }
L_002857EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], c.r[3].w[0] + 7424u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_00285820:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285868u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00285868u) [[unlikely]] return; }
L_00285868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002858B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028587Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0028587Cu) [[unlikely]] return; }
L_0028587C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], c.r[3].w[0] + 7424u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_002858B0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002858C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 24u, depth + 1u); else { c.pc = 0x002B83D0u; return; } if (c.pc != 0x002858C0u) [[unlikely]] return; }
L_002858C0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 256u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002858F0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00285950; } }
    c.f[4] = ld32((c.r[4].w[0] + 160u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    c.f[3] = fp::sub(c.f[2], c.f[4]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[4]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    c.budget -= 21;
L_00285950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00285960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285978u); st32((c.r[4].w[0] + 260u), c.f[12]);  if (depth < kMaxDepth) unit_006E(c, 229u, depth + 1u); else { c.pc = 0x002B9C20u; return; } if (c.pc != 0x00285978u) [[unlikely]] return; }
L_00285978:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285988u) [[unlikely]] return; }
L_00285988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002859A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859B8u); st32((c.r[4].w[0] + 260u), c.f[12]);  if (depth < kMaxDepth) unit_006E(c, 238u, depth + 1u); else { c.pc = 0x002B9D40u; return; } if (c.pc != 0x002859B8u) [[unlikely]] return; }
L_002859B8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002859C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002859C8u) [[unlikely]] return; }
L_002859C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002859E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 260u), c.f[12]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A04u); st16((c.r[4].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006E(c, 248u, depth + 1u); else { c.pc = 0x002B9ED0u; return; } if (c.pc != 0x00285A04u) [[unlikely]] return; }
L_00285A04:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285A14u) [[unlikely]] return; }
L_00285A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A50u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 205u, depth + 1u); else { c.pc = 0x00285A70u; return; } if (c.pc != 0x00285A50u) [[unlikely]] return; }
L_00285A50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 72u, depth + 1u); else { c.pc = 0x002B8AD0u; return; } if (c.pc != 0x00285A5Cu) [[unlikely]] return; }
L_00285A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285A70:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 10;
L_00285A98:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285A98u | kUnwind; return; } goto L_00285A98; } }
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 316u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 332u), 0u);  if (t) { goto L_00285B14; } }
    set32(c.r[6], c.r[4].w[0] + 112u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_00285AD4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285AD4u | kUnwind; return; } goto L_00285AD4; } }
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 348u), c.f[0]);  if (t) { goto L_00285B1C; } }
L_00285B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B1Cu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x00285B1Cu) [[unlikely]] return; }
L_00285B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B24u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00285B24u) [[unlikely]] return; }
L_00285B24:
    set32(c.r[2], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[17].w[0] + 96u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 80u) & ~15u, c.vu0.vf[6]);
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
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285BA0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00285BA0u) [[unlikely]] return; }
L_00285BA0:
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00285BAC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285BACu | kUnwind; return; } goto L_00285BAC; } }
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[5], c.r[5].w[0] + 15184u);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[17].w[0] + 172u), c.f[0]);
    c.budget -= 12;
L_00285BF8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285BF8u | kUnwind; return; } goto L_00285BF8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 256u));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00285F68; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00285F64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[2] = ld32((c.r[16].w[0] + 168u));  goto L_00285E94; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00285C60; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00285C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[17].w[0] + 256u));  if (t) { goto L_002860B0; } }
L_00285C5C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00285C60:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 112u));  goto L_00285C94; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 560u);
    set32(c.r[8], c.r[29].w[0] + 544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C84u); set32(c.r[9], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286160u; return; } if (c.pc != 0x00285C84u) [[unlikely]] return; }
L_00285C84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_00285CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002860C0; } }
L_00285C94:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 564u), c.f[1]);
    st32((c.r[29].w[0] + 568u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[29].w[0] + 544u), c.f[0]);
    st32((c.r[29].w[0] + 548u), c.f[2]);
    st32((c.r[29].w[0] + 552u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    st32((c.r[29].w[0] + 532u), c.f[2]);
    st32((c.r[29].w[0] + 536u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 21;
L_00285CE8:
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CF4u); set32(c.r[6], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00285CF4u) [[unlikely]] return; }
L_00285CF4:
    c.f[2] = ld32((c.r[29].w[0] + 464u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    set32(c.r[6], c.r[17].w[0] + 112u);
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D1Cu); st32((c.r[29].w[0] + 568u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00285D1Cu) [[unlikely]] return; }
L_00285D1C:
    c.f[2] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[6], c.r[17].w[0] + 112u);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D44u); st32((c.r[29].w[0] + 552u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00285D44u) [[unlikely]] return; }
L_00285D44:
    c.f[8] = ld32((c.r[29].w[0] + 548u));
    c.f[10] = ld32((c.r[29].w[0] + 436u));
    c.f[11] = ld32((c.r[29].w[0] + 432u));
    c.f[9] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[10]));
    c.f[7] = 0u;
    st32((c.r[29].w[0] + 528u), c.f[11]);
    st32((c.r[29].w[0] + 532u), c.f[10]);
    st32((c.r[29].w[0] + 536u), c.f[9]);
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[11] ^ fp::kSign;  goto L_00285E34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 568u));
    c.f[6] = fp::mul(c.f[8], c.f[5]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = c.f[10] ^ fp::kSign;
    c.f[5] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    c.f[2] = ld32((c.r[29].w[0] + 560u));
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = fp::mul(c.f[5], c.f[3]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[11]));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[8]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[10]));
    c.f[4] = ld32((c.r[29].w[0] + 552u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[4]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[4]);
    c.f[2] = fp::mul(c.f[6], c.f[3]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[9]));
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.f[1] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = c.f[5] ^ fp::kSign;
    c.facc = fp::add(c.f[7], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[11]));
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[10]));
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    st32((c.r[29].w[0] + 252u), c.f[7]);
    st32((c.r[29].w[0] + 268u), c.f[7]);
    st32((c.r[29].w[0] + 284u), c.f[7]);
    st32((c.r[29].w[0] + 248u), c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_002860BC; } }
L_00285E34:
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = c.f[10] ^ fp::kSign;
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = c.f[9] ^ fp::kSign;
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.f[1] = ld32((c.r[29].w[0] + 552u));
    c.f[2] = ld32((c.r[29].w[0] + 548u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 568u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 252u), c.f[7]);
    st32((c.r[29].w[0] + 268u), c.f[7]);
    st32((c.r[29].w[0] + 284u), c.f[7]);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.f[0]);  if (t) { goto L_002860BC; } }
L_00285E94:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[3] = ld32((c.r[16].w[0] + 164u));
    set32(c.r[6], c.r[17].w[0] + 112u);
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    c.f[20] = ld32((c.r[17].w[0] + 172u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 408u), c.f[4]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285ED4u); st32((c.r[29].w[0] + 400u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00285ED4u) [[unlikely]] return; }
L_00285ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[5], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[4] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = 0u;
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32568u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002860BC; } }
    fpu_div(c, 1u, c.f[5], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 260u), c.f[5]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 252u), c.f[2]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[2]);
    st32((c.r[29].w[0] + 268u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 284u), c.f[2]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.f[1]);  if (t) { goto L_002860BC; } }
L_00285F64:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00285F68:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 112u));  goto L_00285F9C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 512u);
    set32(c.r[8], c.r[29].w[0] + 496u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F8Cu); set32(c.r[9], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286160u; return; } if (c.pc != 0x00285F8Cu) [[unlikely]] return; }
L_00285F8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 384u);  goto L_00285FF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002860BC; } }
L_00285F9C:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 512u), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 516u), c.f[1]);
    st32((c.r[29].w[0] + 520u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[29].w[0] + 496u), c.f[0]);
    st32((c.r[29].w[0] + 500u), c.f[2]);
    st32((c.r[29].w[0] + 504u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    st32((c.r[29].w[0] + 484u), c.f[2]);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 21;
L_00285FF0:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FFCu); set32(c.r[6], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00285FFCu) [[unlikely]] return; }
L_00285FFC:
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[5], c.r[29].w[0] + 496u);
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    set32(c.r[6], c.r[17].w[0] + 112u);
    st32((c.r[29].w[0] + 512u), c.f[2]);
    st32((c.r[29].w[0] + 516u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286024u); st32((c.r[29].w[0] + 520u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x00286024u) [[unlikely]] return; }
L_00286024:
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[6], c.r[17].w[0] + 112u);
    st32((c.r[29].w[0] + 496u), c.f[2]);
    st32((c.r[29].w[0] + 500u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028604Cu); st32((c.r[29].w[0] + 504u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x0028604Cu) [[unlikely]] return; }
L_0028604C:
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 252u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 268u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 284u), 0u);
    st32((c.r[29].w[0] + 480u), c.f[2]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[29].w[0] + 488u), c.f[0]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.f[0]);  if (t) { goto L_002860BC; } }
L_002860B0:
    set32(c.r[2], 0u - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002860BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002860C0:
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860CCu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x002860CCu) [[unlikely]] return; }
L_002860CC:
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 112u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_002860D8:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002860D8u | kUnwind; return; } goto L_002860D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00286130; } }
L_002860FC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00286130; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 260u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 256u));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028612Cu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028612Cu) [[unlikely]] return; }
L_0028612C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00286130:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002860FCu | kUnwind; return; } goto L_002860FC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_00286160:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.f[3] = ld32((c.r[5].w[0] + 168u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 164u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 160u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 28;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002861D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286364; } }
L_002861D8:
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    c.f[0] = ld32((c.r[5].w[0] + 116u));
    c.f[2] = ld32((c.r[5].w[0] + 120u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 132u));
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.f[0] = ld32((c.r[5].w[0] + 128u));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 148u));
    c.f[1] = ld32((c.r[5].w[0] + 152u));
    c.f[0] = ld32((c.r[5].w[0] + 144u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 208u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32572u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 46;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_00286364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286298u);  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x00286298u) [[unlikely]] return; }
L_00286298:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862A4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x002862A4u) [[unlikely]] return; }
L_002862A4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x002862B4u) [[unlikely]] return; }
L_002862B4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862C0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x002862C0u) [[unlikely]] return; }
L_002862C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862C8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x002862C8u) [[unlikely]] return; }
L_002862C8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862D4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x002862D4u) [[unlikely]] return; }
L_002862D4:
    c.f[13] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[29].w[0] + 92u), 0u);
    c.f[15] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 108u), 0u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862F8u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_005F(c, 80u, depth + 1u); else { c.pc = 0x0027D8C0u; return; } if (c.pc != 0x002862F8u) [[unlikely]] return; }
L_002862F8:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286320u); st32((c.r[18].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00286320u) [[unlikely]] return; }
L_00286320:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286348u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00286348u) [[unlikely]] return; }
L_00286348:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_00286364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00286380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17760u);  c.pc = t; return; }
L_00286390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002863F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7600u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002863C4u) [[unlikely]] return; }
L_002863C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863D4u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0067(c, 85u, depth + 1u); else { c.pc = 0x0029CB20u; return; } if (c.pc != 0x002863D4u) [[unlikely]] return; }
L_002863D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002863F4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863F0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002863F0u) [[unlikely]] return; }
L_002863F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002863F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028642Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 48u, depth + 1u); else { c.pc = 0x0029C720u; return; } if (c.pc != 0x0028642Cu) [[unlikely]] return; }
L_0028642C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286438u); set32(c.r[4], ld32((c.r[2].w[0] + 17760u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00286438u) [[unlikely]] return; }
L_00286438:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028644Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0028644Cu) [[unlikely]] return; }
L_0028644C:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028645Cu); set32(c.r[4], c.r[4].w[0] + 17776u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0028645Cu) [[unlikely]] return; }
L_0028645C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286470u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00286470u) [[unlikely]] return; }
L_00286470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00286490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002864B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286514; } }
L_002864B4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002864C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002864E0; } }
L_002864C4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002864D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002864D0u) [[unlikely]] return; }
L_002864D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 17760u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002864E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  goto L_002864F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286514; } }
L_002864F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00286504; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286514; } }
L_00286504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028650Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0028650Cu) [[unlikely]] return; }
L_0028650C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00286514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028654Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 55u, depth + 1u); else { c.pc = 0x0029C7E0u; return; } if (c.pc != 0x0028654Cu) [[unlikely]] return; }
L_0028654C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286558u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00286558u) [[unlikely]] return; }
L_00286558:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00286574; }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 78u, depth + 1u); else { c.pc = 0x00274BE0u; return; } if (c.pc != 0x00286570u) [[unlikely]] return; }
    goto L_00286570;
L_0028656C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00286570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00286574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286590:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0067(c, 58u, depth); }
L_002865A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0067(c, 61u, depth); }
L_002865B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 62u, depth + 1u); else { c.pc = 0x0029C880u; return; } if (c.pc != 0x002865CCu) [[unlikely]] return; }
L_002865CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865D8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002865D8u) [[unlikely]] return; }
L_002865D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00286604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002865ECu) [[unlikely]] return; }
L_002865EC:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286600u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 314u, depth + 1u); else { c.pc = 0x00223270u; return; } if (c.pc != 0x00286600u) [[unlikely]] return; }
L_00286600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00286604:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286638u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00286638u) [[unlikely]] return; }
L_00286638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028665C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x00286648u) [[unlikely]] return; }
L_00286648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7600u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0028665C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00286670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286698u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00286698u) [[unlikely]] return; }
L_00286698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002866BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002866A8u) [[unlikely]] return; }
L_002866A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7600u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002866BC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 69u, depth + 1u); else { c.pc = 0x0029C950u; return; } if (c.pc != 0x002866CCu) [[unlikely]] return; }
L_002866CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_00286700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002866E0u) [[unlikely]] return; }
L_002866E0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002866F4u) [[unlikely]] return; }
L_002866F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00286704; } }
L_00286700:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_00286704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00286720:
    set32(c.r[29], c.r[29].w[0] - 1280u);
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
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286760u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x00286760u) [[unlikely]] return; }
L_00286760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286768u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x00286768u) [[unlikely]] return; }
L_00286768:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 1272u);
    set32(c.r[7], c.r[29].w[0] + 1268u);
    set32(c.r[8], c.r[29].w[0] + 1184u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    set32(c.r[9], c.r[29].w[0] + 1279u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286790u); set32(c.r[10], c.r[29].w[0] + 1264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286790u) [[unlikely]] return; }
L_00286790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002867A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002867A0u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002867A0u) [[unlikely]] return; }
L_002867A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028700C; } }
L_002867A8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_002868D8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002868D4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002868D4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[19].w[0] + 8u);  if (t) { goto L_00286818; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002868C4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00286818; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 29u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_00286824; }
L_00286818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002868C4; } }
L_00286824:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002868B4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0028684C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0028684C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002868C4; } }
L_0028684C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002868B4; } }
L_00286858:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002868C4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002868A8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 60u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002868A8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 61u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002868B4; }
L_002868A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002868C4; } }
L_002868B4:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286858u | kUnwind; return; } goto L_00286858; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002868C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002868D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286908; } }
L_002868D4:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_002868D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002868E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002868E0u) [[unlikely]] return; }
L_002868E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_00286908; }
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[21].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 28u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286904u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x00286904u) [[unlikely]] return; }
L_00286904:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00286908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24868u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286A0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24864u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00286958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00286958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24865u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00286964; }
L_00286958:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286A0C; } }
L_00286964:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24876u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00286990; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00286990; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00286990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286A0C; } }
L_00286990:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 24864u);  if (t) { goto L_002869FC; } }
L_002869A0:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286A0C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002869F0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 60u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002869F0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 61u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002869FC; }
L_002869F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286A0C; } }
L_002869FC:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002869A0u | kUnwind; return; } goto L_002869A0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00286A0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00286B04; }
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A2Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x00286A2Cu) [[unlikely]] return; }
L_00286A2C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_00286A50; } }
L_00286A38:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
L_00286A50:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286A38u | kUnwind; return; } goto L_00286A38; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00286A6Cu) [[unlikely]] return; }
L_00286A6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 80u)));  goto L_00286A94; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A8Cu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x00286A8Cu) [[unlikely]] return; }
L_00286A8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 2;
L_00286A94:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 108u)));  goto L_00286B24; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 80u), c.r[17].w[0]);  goto L_00286ADC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00286AACu) [[unlikely]] return; }
L_00286AAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286ABCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00286ABCu) [[unlikely]] return; }
L_00286ABC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00286AD8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286AD8u) [[unlikely]] return; }
L_00286AD8:
    st32((c.r[19].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_00286ADC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00286B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00286AECu) [[unlikely]] return; }
L_00286AEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AFCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00286AFCu) [[unlikely]] return; }
L_00286AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286B20; } }
L_00286B04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 7456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B20u); set32(c.r[5], c.r[3].w[0] << 2);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286B20u) [[unlikely]] return; }
L_00286B20:
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 1;
L_00286B24:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 54u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[5].sd[0] <= 0) { c.r[10].d[0] = ld16((c.r[21].w[0] + 100u));  goto L_00286B58; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 7456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B54u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286B54u) [[unlikely]] return; }
L_00286B54:
    c.r[10].d[0] = ld16((c.r[21].w[0] + 100u));
    c.budget -= 1;
L_00286B58:
    set32(c.r[4], 0u - 32u);
    set32(c.r[8], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[9], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 7;
L_00286B74:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 31u);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[4].w[0] >> 3);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != c.r[7].d[0]; mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]); c.r[6].d[0] = c.lo.d[0];  if (t) { goto L_00286C80; } }
    set32(c.r[3], c.r[8].w[0] >> 1);
    c.r[2].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[23].d[0] & 3ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286BAC; }
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_00286BAC:
    set32(c.r[30], c.r[23].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286BBCu); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00286BBCu) [[unlikely]] return; }
L_00286BBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 112u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  goto L_00286BF8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - c.r[18].w[0]);  if (t) { goto L_00286C04; } }
L_00286BF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00286C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00286C5C; } }
L_00286C0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C18u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286C18u) [[unlikely]] return; }
L_00286C18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00286C48; } }
L_00286C28:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 8;
L_00286C48:
    c.r[2].d[0] = c.r[3].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286C28u | kUnwind; return; } goto L_00286C28; }
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_00286C5C:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286C0Cu | kUnwind; return; } goto L_00286C0C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00286C78u) [[unlikely]] return; }
L_00286C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286DA0; } }
L_00286C80:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 112u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 3ull;  goto L_00286D2C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[9].w[0] - 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[18].d[0] & 3ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00286CF8; } }
    set32(c.r[22], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00286CE0; } }
L_00286CBC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286CC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286CC8u) [[unlikely]] return; }
L_00286CC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1260u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286CD8u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286CD8u) [[unlikely]] return; }
L_00286CD8:
    set32(c.r[17], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00286CE0:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286CBCu | kUnwind; return; } goto L_00286CBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286DA0; } }
L_00286CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00286D14; } }
L_00286D00:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D0Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286D0Cu) [[unlikely]] return; }
L_00286D0C:
    set32(c.r[17], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00286D14:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286D00u | kUnwind; return; } goto L_00286D00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286DA0; } }
L_00286D2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  goto L_00286D8C; }
    set32(c.r[22], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00286D74; } }
L_00286D50:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286D5Cu) [[unlikely]] return; }
L_00286D5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286D6Cu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286D6Cu) [[unlikely]] return; }
L_00286D6C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_00286D74:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286D50u | kUnwind; return; } goto L_00286D50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286DA0; } }
L_00286D8C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DA0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x00286DA0u) [[unlikely]] return; }
L_00286DA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 25108u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00286EA4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 25104u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00286DF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 25112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00286DF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 29u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 25105u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00286DFC; }
L_00286DF0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286EA4; } }
L_00286DFC:
    set32(c.r[5], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 25116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00286E28; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00286E28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00286E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00286EA4; } }
L_00286E28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 25104u);  if (t) { goto L_00286E94; } }
L_00286E38:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_00286EA4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00286E88; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 60u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00286E88; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 61u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00286E94; }
L_00286E88:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286EA4; } }
L_00286E94:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286E38u | kUnwind; return; } goto L_00286E38; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00286EA4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 20u)));  goto L_00286FB8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 25028u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286FAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00286EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25032u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00286EF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25025u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00286F04; }
L_00286EF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286FAC; } }
L_00286F04:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25036u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00286F30; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00286F30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00286F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286FAC; } }
L_00286F30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 25024u);  if (t) { goto L_00286F9C; } }
L_00286F40:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286FAC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00286F90; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 60u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00286F90; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 61u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00286F9C; }
L_00286F90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00286FAC; } }
L_00286F9C:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286F40u | kUnwind; return; } goto L_00286F40; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00286FAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 4u);  goto L_00287000; }
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 1;
L_00286FB8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00286FF0; } }
L_00286FDC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 5;
L_00286FF0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286FDCu | kUnwind; return; } goto L_00286FDC; }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_00287000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287008u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x00287008u) [[unlikely]] return; }
L_00287008:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0028700C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1280u);  c.pc = t; return; }
L_00287040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287058u); set32(c.r[5], c.r[5].w[0] + 17808u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x00287058u) [[unlikely]] return; }
L_00287058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287070:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
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
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002870C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002870C4u) [[unlikely]] return; }
L_002870C4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870D8u); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002870D8u) [[unlikely]] return; }
L_002870D8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 158u));
    set32(c.r[2], 0u + 19778u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] + 4u);  goto L_002870F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002874DC; } }
L_002870F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870F8u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002870F8u) [[unlikely]] return; }
L_002870F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287104u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00287104u) [[unlikely]] return; }
L_00287104:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287110u); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x00287110u) [[unlikely]] return; }
L_00287110:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028711Cu); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0028711Cu) [[unlikely]] return; }
L_0028711C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287128u); set32(c.r[5], c.r[21].w[0] + 108u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00287128u) [[unlikely]] return; }
L_00287128:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287134u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00287134u) [[unlikely]] return; }
L_00287134:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287140u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x002623D0u; return; } if (c.pc != 0x00287140u) [[unlikely]] return; }
L_00287140:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028714Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x002623D0u; return; } if (c.pc != 0x0028714Cu) [[unlikely]] return; }
L_0028714C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287158u); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x00287158u) [[unlikely]] return; }
L_00287158:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287164u); set32(c.r[5], c.r[21].w[0] + 100u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x00287164u) [[unlikely]] return; }
L_00287164:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287170u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00287170u) [[unlikely]] return; }
L_00287170:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028717Cu); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028717Cu) [[unlikely]] return; }
L_0028717C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287188u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x002623D0u; return; } if (c.pc != 0x00287188u) [[unlikely]] return; }
L_00287188:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287194u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x002623D0u; return; } if (c.pc != 0x00287194u) [[unlikely]] return; }
L_00287194:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871A0u); set32(c.r[5], c.r[21].w[0] + 104u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002871A0u) [[unlikely]] return; }
L_002871A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871ACu); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002871ACu) [[unlikely]] return; }
L_002871AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[3].d[0] = ld16((c.r[21].w[0] + 100u));  goto L_002871CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871C4u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002871C4u) [[unlikely]] return; }
L_002871C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002874DC; } }
L_002871CC:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028732C; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00287298; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00287200; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00287200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 4u);  if (t) { goto L_002873C0; } }
L_00287200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24864u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 24865u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 24888u);
    set32(c.r[9], c.r[21].w[0] + 52u);
    st8((c.r[21].w[0] + 29u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 24866u));
    st8((c.r[21].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 24868u)));
    st32((c.r[21].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24872u)));
    st32((c.r[21].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24876u)));
    st32((c.r[21].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24880u)));
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24884u)));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 28;
L_00287270:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287270u | kUnwind; return; } goto L_00287270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  if (t) { goto L_002873D4; } }
L_00287298:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25105u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25128u);
    set32(c.r[9], c.r[21].w[0] + 52u);
    st8((c.r[21].w[0] + 29u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25106u));
    st8((c.r[21].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25108u)));
    st32((c.r[21].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25112u)));
    st32((c.r[21].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25116u)));
    st32((c.r[21].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25120u)));
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25124u)));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 27;
L_00287304:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287304u | kUnwind; return; } goto L_00287304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002873D0; } }
L_0028732C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25025u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25048u);
    set32(c.r[9], c.r[21].w[0] + 52u);
    st8((c.r[21].w[0] + 29u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25026u));
    st8((c.r[21].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25028u)));
    st32((c.r[21].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25032u)));
    st32((c.r[21].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25036u)));
    st32((c.r[21].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25040u)));
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25044u)));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 27;
L_00287398:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287398u | kUnwind; return; } goto L_00287398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002873D0; } }
L_002873C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873C8u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002873C8u) [[unlikely]] return; }
L_002873C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002874DC; } }
L_002873D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002873D4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  goto L_002873F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002873ECu); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002873ECu) [[unlikely]] return; }
L_002873EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002874DC; } }
L_002873F4:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[21].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 8;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_00287414; }
L_00287414:
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 20u)));  goto L_00287450; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 100u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028744C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028744C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    st32((c.r[21].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
L_0028744C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 1;
L_00287450:
    set32(c.r[6], c.r[21].w[0] + 52u);
    set32(c.r[5], c.r[17].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 28u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 29u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 30u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 22;
L_002874A8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002874A8u | kUnwind; return; } goto L_002874A8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002874D8u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002874D8u) [[unlikely]] return; }
L_002874D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002874DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00287510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287574; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00287558; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00287558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287558u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x00287558u) [[unlikely]] return; }
L_00287558:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00287578; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287574u); set32(c.r[5], 0u + 116u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00287574u) [[unlikely]] return; }
L_00287574:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00287578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875B4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002875B4u) [[unlikely]] return; }
L_002875B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 7696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002875C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x002875C8u) [[unlikely]] return; }
L_002875C8:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25105u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25128u);
    set32(c.r[9], c.r[16].w[0] + 52u);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25106u));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25108u)));
    st32((c.r[16].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25112u)));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25116u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25120u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25124u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 30;
L_00287640:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287640u | kUnwind; return; } goto L_00287640; } }
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00287690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002876E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002876C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002876C8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002876C8u) [[unlikely]] return; }
L_002876C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002876E8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002876E4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002876E4u) [[unlikely]] return; }
L_002876E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002876E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17816u);  c.pc = t; return; }
L_00287710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028775C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287740u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 85u, depth + 1u); else { c.pc = 0x0029CB20u; return; } if (c.pc != 0x00287740u) [[unlikely]] return; }
L_00287740:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00287760; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028775Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0028775Cu) [[unlikely]] return; }
L_0028775C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00287760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028779Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 48u, depth + 1u); else { c.pc = 0x0029C720u; return; } if (c.pc != 0x0028779Cu) [[unlikely]] return; }
L_0028779C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877A8u); set32(c.r[4], ld32((c.r[2].w[0] + 17816u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002877A8u) [[unlikely]] return; }
L_002877A8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877BCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002877BCu) [[unlikely]] return; }
L_002877BC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877CCu); set32(c.r[4], c.r[4].w[0] + 17824u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002877CCu) [[unlikely]] return; }
L_002877CC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877E0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002877E0u) [[unlikely]] return; }
L_002877E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00287824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028786C; } }
L_00287824:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00287834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00287850; } }
L_00287834:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287840u) [[unlikely]] return; }
L_00287840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 17816u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00287850:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));  goto L_00287860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028786C; } }
L_00287860:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0028786C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028789Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 55u, depth + 1u); else { c.pc = 0x0029C7E0u; return; } if (c.pc != 0x0028789Cu) [[unlikely]] return; }
L_0028789C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878B0u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002878B0u) [[unlikely]] return; }
L_002878B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002878D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0067(c, 58u, depth); }
L_002878E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0067(c, 61u, depth); }
L_002878F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028790Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 62u, depth + 1u); else { c.pc = 0x0029C880u; return; } if (c.pc != 0x0028790Cu) [[unlikely]] return; }
L_0028790C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287918u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00287918u) [[unlikely]] return; }
L_00287918:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287958u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00287958u) [[unlikely]] return; }
L_00287958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00287978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x00287968u) [[unlikely]] return; }
L_00287968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00287978:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00287990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002879B8u) [[unlikely]] return; }
L_002879B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002879D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002879C8u) [[unlikely]] return; }
L_002879C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002879D8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 69u, depth + 1u); else { c.pc = 0x0029C950u; return; } if (c.pc != 0x002879E8u) [[unlikely]] return; }
L_002879E8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287A10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A40u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00287A40u) [[unlikely]] return; }
L_00287A40:
    set32(c.r[20], c.r[2].w[0] + 65u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00287A50u) [[unlikely]] return; }
L_00287A50:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A5Cu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00287A5Cu) [[unlikely]] return; }
L_00287A5C:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A68u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00287A68u) [[unlikely]] return; }
L_00287A68:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A74u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00287A74u) [[unlikely]] return; }
L_00287A74:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A80u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00287A80u) [[unlikely]] return; }
L_00287A80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287AA8u); set32(c.r[6], c.r[6].w[0] + 17856u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00287AA8u) [[unlikely]] return; }
L_00287AA8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00287AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287AECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00287AECu) [[unlikely]] return; }
L_00287AEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287AF8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00287AF8u) [[unlikely]] return; }
L_00287AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x00287B2Cu) [[unlikely]] return; }
L_00287B2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B38u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00287B38u) [[unlikely]] return; }
L_00287B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B80u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x00287B80u) [[unlikely]] return; }
L_00287B80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00287BA0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287B9Cu); set32(c.r[5], 0u + 288u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00287B9Cu) [[unlikely]] return; }
L_00287B9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00287BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17880u);  c.pc = t; return; }
L_00287BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 460u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x00287BECu) [[unlikely]] return; }
L_00287BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287BF8u); set32(c.r[4], ld32((c.r[2].w[0] + 17880u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00287BF8u) [[unlikely]] return; }
L_00287BF8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C0Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00287C0Cu) [[unlikely]] return; }
L_00287C0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C1Cu); set32(c.r[5], c.r[5].w[0] + 17888u);  if (depth < kMaxDepth) unit_0072(c, 10u, depth + 1u); else { c.pc = 0x002C81A0u; return; } if (c.pc != 0x00287C1Cu) [[unlikely]] return; }
L_00287C1C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C30u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00287C30u) [[unlikely]] return; }
L_00287C30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C40u); set32(c.r[5], c.r[5].w[0] + 17902u);  if (depth < kMaxDepth) unit_0072(c, 10u, depth + 1u); else { c.pc = 0x002C81A0u; return; } if (c.pc != 0x00287C40u) [[unlikely]] return; }
L_00287C40:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C54u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00287C54u) [[unlikely]] return; }
L_00287C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287C8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 470u, depth + 1u); else { c.pc = 0x002B7730u; return; } if (c.pc != 0x00287C8Cu) [[unlikely]] return; }
L_00287C8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 256u));  goto L_00287C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00287D10; } }
L_00287C9C:
    c.f[0] = ld32((c.r[16].w[0] + 256u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00287CB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00287CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287CD0; } }
    c.f[1] = ld32((c.r[17].w[0] + 260u));
    c.f[0] = ld32((c.r[16].w[0] + 260u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00287CD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00287CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287CF0; } }
    c.f[1] = ld32((c.r[17].w[0] + 264u));
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00287CF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00287CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00287D10; } }
    c.f[1] = ld32((c.r[17].w[0] + 268u));
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00287D10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00287D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 476u, depth + 1u); else { c.pc = 0x002B78D0u; return; } if (c.pc != 0x00287D4Cu) [[unlikely]] return; }
L_00287D4C:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 18u, depth + 1u); else { c.pc = 0x002C8250u; return; } if (c.pc != 0x00287D58u) [[unlikely]] return; }
L_00287D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287D70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006D(c, 484u, depth); }
L_00287D80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006D(c, 490u, depth); }
L_00287D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 525u, depth + 1u); else { c.pc = 0x002B7E70u; return; } if (c.pc != 0x00287DACu) [[unlikely]] return; }
L_00287DAC:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 21u, depth + 1u); else { c.pc = 0x002C8290u; return; } if (c.pc != 0x00287DB8u) [[unlikely]] return; }
L_00287DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00287DE8u) [[unlikely]] return; }
L_00287DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00287E30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00287DFCu) [[unlikely]] return; }
L_00287DFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + 7856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E10u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x00287E10u) [[unlikely]] return; }
L_00287E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E18u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x00287E18u) [[unlikely]] return; }
L_00287E18:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E24u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 39u, depth + 1u); else { c.pc = 0x002102F0u; return; } if (c.pc != 0x00287E24u) [[unlikely]] return; }
L_00287E24:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 419u, depth + 1u); else { c.pc = 0x00287E50u; return; } if (c.pc != 0x00287E30u) [[unlikely]] return; }
L_00287E30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00287E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00287E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00287E88u) [[unlikely]] return; }
L_00287E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00287ED0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00287E9Cu) [[unlikely]] return; }
L_00287E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + 7856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x00287EB0u) [[unlikely]] return; }
L_00287EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EB8u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x00287EB8u) [[unlikely]] return; }
L_00287EB8:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 39u, depth + 1u); else { c.pc = 0x002102F0u; return; } if (c.pc != 0x00287EC4u) [[unlikely]] return; }
L_00287EC4:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287ED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 419u, depth + 1u); else { c.pc = 0x00287E50u; return; } if (c.pc != 0x00287ED0u) [[unlikely]] return; }
L_00287ED0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 24u, depth + 1u); else { c.pc = 0x002B83D0u; return; } if (c.pc != 0x00287EE0u) [[unlikely]] return; }
L_00287EE0:
    c.f[2] = ld32((c.r[18].w[0] + 256u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = ld32((c.r[18].w[0] + 264u));
    st32((c.r[16].w[0] + 256u), c.f[2]);
    st32((c.r[16].w[0] + 260u), c.f[1]);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 268u));
    st32((c.r[16].w[0] + 268u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00287F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.f[7] = ld32((c.r[4].w[0] + 276u));
    c.f[6] = ld32((c.r[4].w[0] + 272u));
    c.f[5] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = ld32((c.r[3].w[0] + 164u));
    c.f[2] = ld32((c.r[3].w[0] + 160u));
    c.f[3] = ld32((c.r[3].w[0] + 168u));
    c.facc = fp::mul(c.f[7], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[4] = ld32((c.r[4].w[0] + 284u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00287F7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00287F8C; } }
L_00287F7C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_00287F8C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00287F8C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 212u)));  goto L_00287FE4; }
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.f[2] = ld32((c.r[3].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 120u));
    c.facc = fp::mul(c.f[7], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00287FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00287FE0; } }
L_00287FCC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_00287FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00287FE0; } }
L_00287FE0:
    set32(c.r[4], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 1;
L_00287FE4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[18], ld32((c.r[4].w[0])));  if (t) { [[clang::musttail]] return unit_0062(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0062(c, 2u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0062(c, 1u, depth);
}

}
