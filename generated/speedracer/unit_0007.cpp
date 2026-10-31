#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0007[4096] = {
    1, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0,
    0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0,
};

void unit_0007(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0011C000;
    case 2u: goto L_0011C008;
    case 3u: goto L_0011C00C;
    case 4u: goto L_0011C01C;
    case 5u: goto L_0011C034;
    case 6u: goto L_0011C048;
    case 7u: goto L_0011C05C;
    case 8u: goto L_0011C088;
    case 9u: goto L_0011C0C0;
    case 10u: goto L_0011C0D8;
    case 11u: goto L_0011C0E0;
    case 12u: goto L_0011C0F8;
    case 13u: goto L_0011C124;
    case 14u: goto L_0011C12C;
    case 15u: goto L_0011C144;
    case 16u: goto L_0011C154;
    case 17u: goto L_0011C15C;
    case 18u: goto L_0011C174;
    case 19u: goto L_0011C184;
    case 20u: goto L_0011C190;
    case 21u: goto L_0011C1A4;
    case 22u: goto L_0011C1B8;
    case 23u: goto L_0011C1D0;
    case 24u: goto L_0011C1E4;
    case 25u: goto L_0011C1F8;
    case 26u: goto L_0011C218;
    case 27u: goto L_0011C220;
    case 28u: goto L_0011C248;
    case 29u: goto L_0011C268;
    case 30u: goto L_0011C2F0;
    case 31u: goto L_0011C2F8;
    case 32u: goto L_0011C310;
    case 33u: goto L_0011C334;
    case 34u: goto L_0011C33C;
    case 35u: goto L_0011C354;
    case 36u: goto L_0011C364;
    case 37u: goto L_0011C36C;
    case 38u: goto L_0011C384;
    case 39u: goto L_0011C390;
    case 40u: goto L_0011C39C;
    case 41u: goto L_0011C3F0;
    case 42u: goto L_0011C40C;
    case 43u: goto L_0011C418;
    case 44u: goto L_0011C458;
    case 45u: goto L_0011C460;
    case 46u: goto L_0011C478;
    case 47u: goto L_0011C484;
    case 48u: goto L_0011C490;
    case 49u: goto L_0011C4D0;
    case 50u: goto L_0011C4D8;
    case 51u: goto L_0011C4F0;
    case 52u: goto L_0011C520;
    case 53u: goto L_0011C54C;
    case 54u: goto L_0011C554;
    case 55u: goto L_0011C56C;
    case 56u: goto L_0011C574;
    case 57u: goto L_0011C58C;
    case 58u: goto L_0011C5B4;
    case 59u: goto L_0011C5BC;
    case 60u: goto L_0011C5D4;
    case 61u: goto L_0011C5F0;
    case 62u: goto L_0011C5F8;
    case 63u: goto L_0011C610;
    case 64u: goto L_0011C670;
    case 65u: goto L_0011C690;
    case 66u: goto L_0011C6BC;
    case 67u: goto L_0011C6D0;
    case 68u: goto L_0011C6F4;
    case 69u: goto L_0011C72C;
    case 70u: goto L_0011C740;
    case 71u: goto L_0011C760;
    case 72u: goto L_0011C790;
    case 73u: goto L_0011C7F0;
    case 74u: goto L_0011C824;
    case 75u: goto L_0011C844;
    case 76u: goto L_0011C85C;
    case 77u: goto L_0011C8C0;
    case 78u: goto L_0011C8F0;
    case 79u: goto L_0011C900;
    case 80u: goto L_0011C920;
    case 81u: goto L_0011C934;
    case 82u: goto L_0011C970;
    case 83u: goto L_0011C9A0;
    case 84u: goto L_0011C9B4;
    case 85u: goto L_0011C9FC;
    case 86u: goto L_0011CA14;
    case 87u: goto L_0011CA20;
    case 88u: goto L_0011CA30;
    case 89u: goto L_0011CA38;
    case 90u: goto L_0011CA50;
    case 91u: goto L_0011CA60;
    case 92u: goto L_0011CA6C;
    case 93u: goto L_0011CA80;
    case 94u: goto L_0011CA94;
    case 95u: goto L_0011CAA4;
    case 96u: goto L_0011CB00;
    case 97u: goto L_0011CB20;
    case 98u: goto L_0011CB30;
    case 99u: goto L_0011CB3C;
    case 100u: goto L_0011CB70;
    case 101u: goto L_0011CBC4;
    case 102u: goto L_0011CBF0;
    case 103u: goto L_0011CC00;
    case 104u: goto L_0011CC10;
    case 105u: goto L_0011CC20;
    case 106u: goto L_0011CC44;
    case 107u: goto L_0011CC50;
    case 108u: goto L_0011CC70;
    case 109u: goto L_0011CC90;
    case 110u: goto L_0011CD08;
    case 111u: goto L_0011CD20;
    case 112u: goto L_0011CD3C;
    case 113u: goto L_0011CD58;
    case 114u: goto L_0011CD8C;
    case 115u: goto L_0011CDA0;
    case 116u: goto L_0011CDA8;
    case 117u: goto L_0011CDC0;
    case 118u: goto L_0011CDE4;
    case 119u: goto L_0011CDF8;
    case 120u: goto L_0011CE08;
    case 121u: goto L_0011CE98;
    case 122u: goto L_0011CEA4;
    case 123u: goto L_0011CEC0;
    case 124u: goto L_0011CF88;
    case 125u: goto L_0011CFB0;
    case 126u: goto L_0011CFEC;
    case 127u: goto L_0011D00C;
    case 128u: goto L_0011D018;
    case 129u: goto L_0011D038;
    case 130u: goto L_0011D058;
    case 131u: goto L_0011D068;
    case 132u: goto L_0011D084;
    case 133u: goto L_0011D09C;
    case 134u: goto L_0011D0B4;
    case 135u: goto L_0011D100;
    case 136u: goto L_0011D130;
    case 137u: goto L_0011D15C;
    case 138u: goto L_0011D16C;
    case 139u: goto L_0011D1AC;
    case 140u: goto L_0011D1C0;
    case 141u: goto L_0011D1DC;
    case 142u: goto L_0011D1F0;
    case 143u: goto L_0011D20C;
    case 144u: goto L_0011D220;
    case 145u: goto L_0011D234;
    case 146u: goto L_0011D24C;
    case 147u: goto L_0011D264;
    case 148u: goto L_0011D27C;
    case 149u: goto L_0011D2D0;
    case 150u: goto L_0011D2E4;
    case 151u: goto L_0011D2FC;
    case 152u: goto L_0011D314;
    case 153u: goto L_0011D3A4;
    case 154u: goto L_0011D3B4;
    case 155u: goto L_0011D3D8;
    case 156u: goto L_0011D424;
    case 157u: goto L_0011D434;
    case 158u: goto L_0011D458;
    case 159u: goto L_0011D49C;
    case 160u: goto L_0011D4B0;
    case 161u: goto L_0011D4DC;
    case 162u: goto L_0011D4F8;
    case 163u: goto L_0011D520;
    case 164u: goto L_0011D548;
    case 165u: goto L_0011D558;
    case 166u: goto L_0011D598;
    case 167u: goto L_0011D5C8;
    case 168u: goto L_0011D608;
    case 169u: goto L_0011D62C;
    case 170u: goto L_0011D650;
    case 171u: goto L_0011D668;
    case 172u: goto L_0011D680;
    case 173u: goto L_0011D6CC;
    case 174u: goto L_0011D6E0;
    case 175u: goto L_0011D6F4;
    case 176u: goto L_0011D71C;
    case 177u: goto L_0011D730;
    case 178u: goto L_0011D744;
    case 179u: goto L_0011D76C;
    case 180u: goto L_0011D780;
    case 181u: goto L_0011D794;
    case 182u: goto L_0011D7C0;
    case 183u: goto L_0011D7D4;
    case 184u: goto L_0011D7E8;
    case 185u: goto L_0011D808;
    case 186u: goto L_0011D820;
    case 187u: goto L_0011D834;
    case 188u: goto L_0011D848;
    case 189u: goto L_0011D874;
    case 190u: goto L_0011D88C;
    case 191u: goto L_0011D8A0;
    case 192u: goto L_0011D8D0;
    case 193u: goto L_0011D930;
    case 194u: goto L_0011D938;
    case 195u: goto L_0011D98C;
    case 196u: goto L_0011D9A0;
    case 197u: goto L_0011DA4C;
    case 198u: goto L_0011DA60;
    case 199u: goto L_0011DB20;
    case 200u: goto L_0011DB34;
    case 201u: goto L_0011DC10;
    case 202u: goto L_0011DC20;
    case 203u: goto L_0011DCB8;
    case 204u: goto L_0011DCC0;
    case 205u: goto L_0011DD7C;
    case 206u: goto L_0011DDB0;
    case 207u: goto L_0011DDD8;
    case 208u: goto L_0011DDEC;
    case 209u: goto L_0011DE94;
    case 210u: goto L_0011DEA8;
    case 211u: goto L_0011DF4C;
    case 212u: goto L_0011DF60;
    case 213u: goto L_0011E058;
    case 214u: goto L_0011E074;
    case 215u: goto L_0011E0A0;
    case 216u: goto L_0011E110;
    case 217u: goto L_0011E118;
    case 218u: goto L_0011E164;
    case 219u: goto L_0011E178;
    case 220u: goto L_0011E1A0;
    case 221u: goto L_0011E1B4;
    case 222u: goto L_0011E1E8;
    case 223u: goto L_0011E1FC;
    case 224u: goto L_0011E250;
    case 225u: goto L_0011E25C;
    case 226u: goto L_0011E268;
    case 227u: goto L_0011E278;
    case 228u: goto L_0011E288;
    case 229u: goto L_0011E294;
    case 230u: goto L_0011E2B0;
    case 231u: goto L_0011E2C4;
    case 232u: goto L_0011E2CC;
    case 233u: goto L_0011E2D8;
    case 234u: goto L_0011E2E8;
    case 235u: goto L_0011E2F8;
    case 236u: goto L_0011E304;
    case 237u: goto L_0011E320;
    case 238u: goto L_0011E35C;
    case 239u: goto L_0011E388;
    case 240u: goto L_0011E3A8;
    case 241u: goto L_0011E3BC;
    case 242u: goto L_0011E3E4;
    case 243u: goto L_0011E3F8;
    case 244u: goto L_0011E41C;
    case 245u: goto L_0011E430;
    case 246u: goto L_0011E4A8;
    case 247u: goto L_0011E4C4;
    case 248u: goto L_0011E500;
    case 249u: goto L_0011E510;
    case 250u: goto L_0011E520;
    case 251u: goto L_0011E530;
    case 252u: goto L_0011E550;
    case 253u: goto L_0011E560;
    case 254u: goto L_0011E5C0;
    case 255u: goto L_0011E5C8;
    case 256u: goto L_0011E618;
    case 257u: goto L_0011E660;
    case 258u: goto L_0011E6BC;
    case 259u: goto L_0011E738;
    case 260u: goto L_0011E768;
    case 261u: goto L_0011E7B8;
    case 262u: goto L_0011E7EC;
    case 263u: goto L_0011E810;
    case 264u: goto L_0011E858;
    case 265u: goto L_0011E89C;
    case 266u: goto L_0011E934;
    case 267u: goto L_0011E950;
    case 268u: goto L_0011E970;
    case 269u: goto L_0011E9D0;
    case 270u: goto L_0011E9D8;
    case 271u: goto L_0011EA24;
    case 272u: goto L_0011EA64;
    case 273u: goto L_0011EAB0;
    case 274u: goto L_0011EB1C;
    case 275u: goto L_0011EB44;
    case 276u: goto L_0011EB8C;
    case 277u: goto L_0011EBB8;
    case 278u: goto L_0011EBD4;
    case 279u: goto L_0011EC14;
    case 280u: goto L_0011EC50;
    case 281u: goto L_0011ECB4;
    case 282u: goto L_0011ECE0;
    case 283u: goto L_0011ECFC;
    case 284u: goto L_0011ED20;
    case 285u: goto L_0011ED60;
    case 286u: goto L_0011ED7C;
    case 287u: goto L_0011EE0C;
    case 288u: goto L_0011EE28;
    case 289u: goto L_0011EE40;
    case 290u: goto L_0011EE70;
    case 291u: goto L_0011EEA0;
    case 292u: goto L_0011EEB0;
    case 293u: goto L_0011EED4;
    case 294u: goto L_0011EEF0;
    case 295u: goto L_0011EF08;
    case 296u: goto L_0011EF20;
    case 297u: goto L_0011EF44;
    case 298u: goto L_0011EF60;
    case 299u: goto L_0011EF78;
    case 300u: goto L_0011EF90;
    case 301u: goto L_0011EFB4;
    case 302u: goto L_0011EFD0;
    case 303u: goto L_0011EFE8;
    case 304u: goto L_0011F000;
    case 305u: goto L_0011F024;
    case 306u: goto L_0011F03C;
    case 307u: goto L_0011F040;
    case 308u: goto L_0011F058;
    case 309u: goto L_0011F070;
    case 310u: goto L_0011F0B4;
    case 311u: goto L_0011F0DC;
    case 312u: goto L_0011F110;
    case 313u: goto L_0011F140;
    case 314u: goto L_0011F170;
    case 315u: goto L_0011F178;
    case 316u: goto L_0011F1C4;
    case 317u: goto L_0011F204;
    case 318u: goto L_0011F250;
    case 319u: goto L_0011F2BC;
    case 320u: goto L_0011F2EC;
    case 321u: goto L_0011F348;
    case 322u: goto L_0011F374;
    case 323u: goto L_0011F394;
    case 324u: goto L_0011F3D4;
    case 325u: goto L_0011F410;
    case 326u: goto L_0011F4B0;
    case 327u: goto L_0011F4D0;
    case 328u: goto L_0011F4E0;
    case 329u: goto L_0011F50C;
    case 330u: goto L_0011F540;
    case 331u: goto L_0011F570;
    case 332u: goto L_0011F580;
    case 333u: goto L_0011F590;
    case 334u: goto L_0011F5A0;
    case 335u: goto L_0011F5EC;
    case 336u: goto L_0011F600;
    case 337u: goto L_0011F610;
    case 338u: goto L_0011F63C;
    case 339u: goto L_0011F654;
    case 340u: goto L_0011F670;
    case 341u: goto L_0011F698;
    case 342u: goto L_0011F6B4;
    case 343u: goto L_0011F6CC;
    case 344u: goto L_0011F6F4;
    case 345u: goto L_0011F710;
    case 346u: goto L_0011F744;
    case 347u: goto L_0011F75C;
    case 348u: goto L_0011F780;
    case 349u: goto L_0011F7A0;
    case 350u: goto L_0011F7EC;
    case 351u: goto L_0011F800;
    case 352u: goto L_0011F810;
    case 353u: goto L_0011F83C;
    case 354u: goto L_0011F854;
    case 355u: goto L_0011F870;
    case 356u: goto L_0011F8AC;
    case 357u: goto L_0011F8C8;
    case 358u: goto L_0011F8E0;
    case 359u: goto L_0011F908;
    case 360u: goto L_0011F920;
    case 361u: goto L_0011F954;
    case 362u: goto L_0011F970;
    case 363u: goto L_0011F98C;
    case 364u: goto L_0011F9B0;
    case 365u: goto L_0011F9D0;
    case 366u: goto L_0011FA1C;
    case 367u: goto L_0011FA30;
    case 368u: goto L_0011FA40;
    case 369u: goto L_0011FA60;
    case 370u: goto L_0011FA84;
    case 371u: goto L_0011FA9C;
    case 372u: goto L_0011FAA8;
    case 373u: goto L_0011FAD0;
    case 374u: goto L_0011FAF8;
    case 375u: goto L_0011FB10;
    case 376u: goto L_0011FB30;
    case 377u: goto L_0011FB60;
    case 378u: goto L_0011FBB4;
    case 379u: goto L_0011FBD0;
    case 380u: goto L_0011FBD8;
    case 381u: goto L_0011FC08;
    case 382u: goto L_0011FC28;
    case 383u: goto L_0011FC54;
    case 384u: goto L_0011FC5C;
    case 385u: goto L_0011FC8C;
    case 386u: goto L_0011FCAC;
    case 387u: goto L_0011FCD8;
    case 388u: goto L_0011FD18;
    case 389u: goto L_0011FD70;
    case 390u: goto L_0011FDB4;
    case 391u: goto L_0011FDE0;
    case 392u: goto L_0011FDFC;
    case 393u: goto L_0011FE3C;
    case 394u: goto L_0011FE90;
    case 395u: goto L_0011FECC;
    case 396u: goto L_0011FED4;
    case 397u: goto L_0011FEF0;
    case 398u: goto L_0011FF0C;
    case 399u: goto L_0011FF30;
    case 400u: goto L_0011FF50;
    case 401u: goto L_0011FF80;
    case 402u: goto L_0011FF94;
    case 403u: goto L_0011FFB0;
    case 404u: goto L_0011FFD0;
    case 405u: goto L_0011FFD8;
    case 406u: goto L_0011FFF4;
    default: bad_entry(c, 0x0011C000u); return;
    }
L_0011C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C008u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011C008u) [[unlikely]] return; }
L_0011C008:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011C00C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  goto L_0011C020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C01Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011C01Cu) [[unlikely]] return; }
L_0011C01C:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_0011C020:
    set32(c.r[4], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 292u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C034u); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011C034u) [[unlikely]] return; }
L_0011C034:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011C04C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C048u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011C048u) [[unlikely]] return; }
L_0011C048:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011C04C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  goto L_0011C060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C05Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011C05Cu) [[unlikely]] return; }
L_0011C05C:
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 1;
L_0011C060:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 276u), 0u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 280u), 0u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 284u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C088u); set32(c.r[7], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C088u) [[unlikely]] return; }
L_0011C088:
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_0011C3E8; }
    set32(c.r[23], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[29].w[0] + 240u);  if (t) { goto L_0011C3B8; } }
L_0011C0C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0D8u); set32(c.r[5], c.r[5].w[0] - 10275u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C0D8u) [[unlikely]] return; }
L_0011C0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0E0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C0E0u) [[unlikely]] return; }
L_0011C0E0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0F8u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C0F8u) [[unlikely]] return; }
L_0011C0F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0011C114; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0011C114:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C124u); set32(c.r[5], c.r[5].w[0] - 10254u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C124u) [[unlikely]] return; }
L_0011C124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C12Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C12Cu) [[unlikely]] return; }
L_0011C12C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C144u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C144u) [[unlikely]] return; }
L_0011C144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C154u); set32(c.r[5], c.r[5].w[0] - 10225u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C154u) [[unlikely]] return; }
L_0011C154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C15Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C15Cu) [[unlikely]] return; }
L_0011C15C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C174u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C174u) [[unlikely]] return; }
L_0011C174:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C184u) [[unlikely]] return; }
L_0011C184:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C190u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011C190u) [[unlikely]] return; }
L_0011C190:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011C1A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1A4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011C1A4u) [[unlikely]] return; }
L_0011C1A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011C1A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[23].w[0]), c.r[2].w[0]);  goto L_0011C1BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1B8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011C1B8u) [[unlikely]] return; }
L_0011C1B8:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011C1BC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[23].w[0] + 4u), 0u);
    st32((c.r[23].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1D0u); st32((c.r[23].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011C1D0u) [[unlikely]] return; }
L_0011C1D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011C1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1E4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011C1E4u) [[unlikely]] return; }
L_0011C1E4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011C1E8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[30].w[0]), c.r[2].w[0]);  goto L_0011C1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1F8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011C1F8u) [[unlikely]] return; }
L_0011C1F8:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011C1FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[30].w[0] + 4u), 0u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[30].w[0] + 8u), 0u);
    set32(c.r[6], 0u + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C218u); st32((c.r[30].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0011C218u) [[unlikely]] return; }
L_0011C218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0011C314; } }
L_0011C220:
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0011C23C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0011C23C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C248u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0011C248u) [[unlikely]] return; }
L_0011C248:
    set32(c.r[17], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], c.r[29].w[0] + 1375u);
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C268u); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 259u, depth + 1u); else { c.pc = 0x0012E3B0u; return; } if (c.pc != 0x0011C268u) [[unlikely]] return; }
L_0011C268:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_0011C288; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0011C28C; } }
L_0011C288:
    set32(c.r[9], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0011C28C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 1375u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0011C2A4; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 10199u);  if (t) { goto L_0011C2A8; } }
L_0011C2A4:
    set32(c.r[8], c.r[8].w[0] - 10194u);
    c.budget -= 1;
L_0011C2A8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  goto L_0011C2C8; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0011C2CC; } }
L_0011C2C8:
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0011C2CC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] + 1u);  goto L_0011C2E0; }
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0011C2E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C2F0u); set32(c.r[5], c.r[5].w[0] - 10188u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C2F0u) [[unlikely]] return; }
L_0011C2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C2F8u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C2F8u) [[unlikely]] return; }
L_0011C2F8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C310u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C310u) [[unlikely]] return; }
L_0011C310:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0011C314:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C220u | kUnwind; return; } goto L_0011C220; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C334u); set32(c.r[5], c.r[5].w[0] - 9960u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C334u) [[unlikely]] return; }
L_0011C334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C33Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C33Cu) [[unlikely]] return; }
L_0011C33C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C354u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C354u) [[unlikely]] return; }
L_0011C354:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C364u); set32(c.r[5], c.r[5].w[0] - 9933u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C364u) [[unlikely]] return; }
L_0011C364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C36Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C36Cu) [[unlikely]] return; }
L_0011C36C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C384u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C384u) [[unlikely]] return; }
L_0011C384:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0011C390u) [[unlikely]] return; }
L_0011C390:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C39Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0011C39Cu) [[unlikely]] return; }
L_0011C39C:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 7;
L_0011C3B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 296u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C0C0u | kUnwind; return; } goto L_0011C0C0; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_0011C3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C3F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0011C3F0u) [[unlikely]] return; }
L_0011C3F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] << 32;  goto L_0011C410; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011C40C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C40Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011C40Cu) [[unlikely]] return; }
L_0011C40C:
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.budget -= 1;
L_0011C410:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_0011C418:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BFE4u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 552u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C458u); set32(c.r[5], c.r[5].w[0] - 9911u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C458u) [[unlikely]] return; }
L_0011C458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C460u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C460u) [[unlikely]] return; }
L_0011C460:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C478u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C478u) [[unlikely]] return; }
L_0011C478:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0011C484u) [[unlikely]] return; }
L_0011C484:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_0011C490:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BCACu | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 514u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4D0u); set32(c.r[5], c.r[5].w[0] - 9882u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C4D0u) [[unlikely]] return; }
L_0011C4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4D8u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C4D8u) [[unlikely]] return; }
L_0011C4D8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C4F0u) [[unlikely]] return; }
L_0011C4F0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1376u);  c.pc = t; return; }
L_0011C520:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011C54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C54Cu);  if (depth < kMaxDepth) unit_0007(c, 52u, depth + 1u); else { c.pc = 0x0011C520u; return; } if (c.pc != 0x0011C54Cu) [[unlikely]] return; }
L_0011C54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_0011C61C; } }
L_0011C554:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[7], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C56Cu); set32(c.r[5], c.r[5].w[0] - 9862u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C56Cu) [[unlikely]] return; }
L_0011C56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C574u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C574u) [[unlikely]] return; }
L_0011C574:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C58Cu); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C58Cu) [[unlikely]] return; }
L_0011C58C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0011C5D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5B4u); set32(c.r[5], c.r[5].w[0] - 9795u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C5B4u) [[unlikely]] return; }
L_0011C5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C5BCu) [[unlikely]] return; }
L_0011C5BC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5D4u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C5D4u) [[unlikely]] return; }
L_0011C5D4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0011C5D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5F0u); set32(c.r[5], c.r[5].w[0] - 9768u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011C5F0u) [[unlikely]] return; }
L_0011C5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5F8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011C5F8u) [[unlikely]] return; }
L_0011C5F8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C610u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C610u) [[unlikely]] return; }
L_0011C610:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.budget -= 3;
L_0011C61C:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C554u | kUnwind; return; } goto L_0011C554; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_0011C670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C690u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011C690u) [[unlikely]] return; }
L_0011C690:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[7], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C6BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 268u, depth + 1u); else { c.pc = 0x0011E970u; return; } if (c.pc != 0x0011C6BCu) [[unlikely]] return; }
L_0011C6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011C6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C6F4u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011C6F4u) [[unlikely]] return; }
L_0011C6F4:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C72Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 253u, depth + 1u); else { c.pc = 0x0011E560u; return; } if (c.pc != 0x0011C72Cu) [[unlikely]] return; }
L_0011C72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011C740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011C7A8; } }
L_0011C760:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_0011C778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_0011C77C; } }
L_0011C778:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0011C77C:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C790u) [[unlikely]] return; }
L_0011C790:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_0011C7A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011C7E0; } }
L_0011C7A0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_0011C7A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C760u | kUnwind; return; } goto L_0011C760; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0011C7E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011C7F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011C86C; } }
L_0011C824:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C844u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C844u) [[unlikely]] return; }
L_0011C844:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  goto L_0011C864; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C85Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 138u, depth + 1u); else { c.pc = 0x001354D0u; return; } if (c.pc != 0x0011C85Cu) [[unlikely]] return; }
L_0011C85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0011C8A0; } }
L_0011C864:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_0011C86C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C824u | kUnwind; return; } goto L_0011C824; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011C8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0011C8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 28u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[2].w[0] + 84u);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8F0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0011C8F0u) [[unlikely]] return; }
L_0011C8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C900:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0011C920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0011C95C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C934u);  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011C970u; return; } if (c.pc != 0x0011C934u) [[unlikely]] return; }
L_0011C934:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011C960; }
    set32(c.r[4], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0011C960; } }
L_0011C95C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011C960:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011C970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011C9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0011C9D4; } }
L_0011C9A0:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011C9B4u) [[unlikely]] return; }
L_0011C9B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0011C9D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 32u));  if (t) { goto L_0011CAE0; } }
L_0011C9D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C9A0u | kUnwind; return; } goto L_0011C9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011CAE0; } }
L_0011C9F0:
    set32(c.r[19], c.r[3].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C9FCu); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 498u, depth + 1u); else { c.pc = 0x0011BAF0u; return; } if (c.pc != 0x0011C9FCu) [[unlikely]] return; }
L_0011C9FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0011CA0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011CAB8; } }
L_0011CA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 98u, depth + 1u); else { c.pc = 0x0011CB30u; return; } if (c.pc != 0x0011CA14u) [[unlikely]] return; }
L_0011CA14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA20u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 498u, depth + 1u); else { c.pc = 0x0011BAF0u; return; } if (c.pc != 0x0011CA20u) [[unlikely]] return; }
L_0011CA20:
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_0011CA9C; } }
L_0011CA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 97u, depth + 1u); else { c.pc = 0x0011CB20u; return; } if (c.pc != 0x0011CA38u) [[unlikely]] return; }
L_0011CA38:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0011CA8C; }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 97u, depth + 1u); else { c.pc = 0x0011CB20u; return; } if (c.pc != 0x0011CA50u) [[unlikely]] return; }
L_0011CA50:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA60u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_0006(c, 497u, depth + 1u); else { c.pc = 0x0011BAE0u; return; } if (c.pc != 0x0011CA60u) [[unlikely]] return; }
L_0011CA60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011CA6Cu) [[unlikely]] return; }
L_0011CA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CA88; } }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 97u, depth + 1u); else { c.pc = 0x0011CB20u; return; } if (c.pc != 0x0011CA80u) [[unlikely]] return; }
L_0011CA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_0011CAB8; } }
L_0011CA88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0011CA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA94u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 96u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x0011CA94u) [[unlikely]] return; }
L_0011CA94:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_0011CA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CAA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 97u, depth + 1u); else { c.pc = 0x0011CB20u; return; } if (c.pc != 0x0011CAA4u) [[unlikely]] return; }
L_0011CAA4:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CA30u | kUnwind; return; } goto L_0011CA30; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0011CAB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011CADC; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 32u));  if (t) { goto L_0011CAE0; } }
L_0011CADC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011CAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011CB00:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011CB14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011CB14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CB20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0011CB30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0011CB5C; } }
L_0011CB3C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0011CB5C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0011CB5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CB3Cu | kUnwind; return; } goto L_0011CB3C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CB70:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
L_0011CBC4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 196u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CBC4u | kUnwind; return; } goto L_0011CBC4; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBF0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0011CBF0u) [[unlikely]] return; }
L_0011CBF0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC00u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0011CC00u) [[unlikely]] return; }
L_0011CC00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC10u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0011CC10u) [[unlikely]] return; }
L_0011CC10:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC20u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0011CC20u) [[unlikely]] return; }
L_0011CC20:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 100u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC44u); st32((c.r[29].w[0] + 232u), 0u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011CC44u) [[unlikely]] return; }
L_0011CC44:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC50u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011CC50u) [[unlikely]] return; }
L_0011CC50:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 127u)));
    set32(c.r[2], 0u + 42u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(0u));  goto L_0011CD18; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_0011CCB4; } }
L_0011CC70:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0011CCAC; }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC90u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011CC90u) [[unlikely]] return; }
L_0011CC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CCA8; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0011CCF0; } }
L_0011CCA8:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0011CCAC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 2;
L_0011CCB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CC70u | kUnwind; return; } goto L_0011CC70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011CCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CD14; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD08u); st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011CD08u) [[unlikely]] return; }
L_0011CD08:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0011CD18; } }
L_0011CD14:
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0011CD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD20u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011CD20u) [[unlikely]] return; }
L_0011CD20:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 127u)));
    set32(c.r[2], 0u + 93u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));  goto L_0011CDB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD3Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011CD3Cu) [[unlikely]] return; }
L_0011CD3C:
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 91u);
    set32(c.r[16], c.r[3].w[0] + 128u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - 1u);  if (t) { goto L_0011CD58; } }
L_0011CD58:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  goto L_0011CD70; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CD58u | kUnwind; return; } goto L_0011CD58; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_0011CD70:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011CDB0; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD8Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0011CD8Cu) [[unlikely]] return; }
L_0011CD8C:
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CDA0u); set32(c.r[5], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0011CDA0u) [[unlikely]] return; }
L_0011CDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CDA8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x0011CDA8u) [[unlikely]] return; }
L_0011CDA8:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0011CDB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 1;
L_0011CDB4:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CDC0u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011CDC0u) [[unlikely]] return; }
L_0011CDC0:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 192u)));  goto L_0011CDDC; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
L_0011CDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CDE4u);  if (depth < kMaxDepth) unit_0007(c, 80u, depth + 1u); else { c.pc = 0x0011C920u; return; } if (c.pc != 0x0011CDE4u) [[unlikely]] return; }
L_0011CDE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_0011CE28; } }
L_0011CDF8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CE08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011CE08u) [[unlikely]] return; }
L_0011CE08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0011CE20; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0011CE5C; } }
L_0011CE20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_0011CE28:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CDF8u | kUnwind; return; } goto L_0011CDF8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011CE5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011CE74; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 228u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0011CF44; } }
L_0011CE74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0011CE94; }
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_0011CF44; } }
L_0011CE94:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 1;
L_0011CE98:
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_0011CEE4; } }
L_0011CEA4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0011CEDC; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CEC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011CEC0u) [[unlikely]] return; }
L_0011CEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CED8; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0011CF20; } }
L_0011CED8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0011CEDC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.budget -= 2;
L_0011CEE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CEA4u | kUnwind; return; } goto L_0011CEA4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011CF20:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 196u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CE98u | kUnwind; return; } goto L_0011CE98; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 2;
L_0011CF44:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + 52u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF88u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 192u, depth + 1u); else { c.pc = 0x0011D8D0u; return; } if (c.pc != 0x0011CF88u) [[unlikely]] return; }
L_0011CF88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0011CFB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFECu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011CFECu) [[unlikely]] return; }
L_0011CFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0011D020; } }
    st32((c.r[20].w[0] + 36u), 0u);
    set32(c.r[4], c.r[20].w[0] + 52u);
    st32((c.r[20].w[0] + 40u), 0u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D00Cu); st32((c.r[20].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0006(c, 506u, depth + 1u); else { c.pc = 0x0011BBC0u; return; } if (c.pc != 0x0011D00Cu) [[unlikely]] return; }
L_0011D00C:
    set32(c.r[4], c.r[20].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D018u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0006(c, 502u, depth + 1u); else { c.pc = 0x0011BB40u; return; } if (c.pc != 0x0011D018u) [[unlikely]] return; }
L_0011D018:
    st32((c.r[20].w[0] + 84u), 0u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0011D020:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 108u), c.r[20].w[0]);  if (t) { goto L_0011D048; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D038u); set32(c.r[5], c.r[5].w[0] - 9703u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011D038u) [[unlikely]] return; }
L_0011D038:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0011D04C; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[17].w[0] - 9703u);
    c.budget -= 2;
L_0011D048:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0011D04C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D058u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0011D058u) [[unlikely]] return; }
L_0011D058:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D068u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0011D068u) [[unlikely]] return; }
L_0011D068:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D084u); st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0007(c, 80u, depth + 1u); else { c.pc = 0x0011C920u; return; } if (c.pc != 0x0011D084u) [[unlikely]] return; }
L_0011D084:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D09Cu); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011D09Cu) [[unlikely]] return; }
L_0011D09C:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0B4u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0011D0B4u) [[unlikely]] return; }
L_0011D0B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 44u), 0u);  goto L_0011D0DC; }
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
L_0011D0DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], c.r[2].w[0] + 40u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D100u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0011D100u) [[unlikely]] return; }
L_0011D100:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 32u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0011D130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1440u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0011D1B0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 29216u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011D18C; } }
L_0011D15C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_0011D178; } }
L_0011D16C:
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0011D178:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D16Cu | kUnwind; return; } goto L_0011D16C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0011D18C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D15Cu | kUnwind; return; } goto L_0011D15C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 1440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1ACu); set32(c.r[5], c.r[5].w[0] - 9693u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011D1ACu) [[unlikely]] return; }
L_0011D1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011D1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 1440u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D1C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 52u)));  if (t) { goto L_0011D36C; } }
L_0011D1DC:
    set32(c.r[4], c.r[5].w[0] + 100u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1F0u); set32(c.r[5], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D1F0u) [[unlikely]] return; }
L_0011D1F0:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D20Cu); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D20Cu) [[unlikely]] return; }
L_0011D20C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 64u)));  if (t) { goto L_0011D288; } }
L_0011D220:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D234u); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D234u) [[unlikely]] return; }
L_0011D234:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D24Cu); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D24Cu) [[unlikely]] return; }
L_0011D24C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D264u); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D264u) [[unlikely]] return; }
L_0011D264:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D27Cu); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D27Cu) [[unlikely]] return; }
L_0011D27C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 80u);
    c.budget -= 3;
L_0011D288:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 16;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D220u | kUnwind; return; } goto L_0011D220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[6].w[0] + 80u)));  if (t) { goto L_0011D320; } }
L_0011D2D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2E4u); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D2E4u) [[unlikely]] return; }
L_0011D2E4:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2FCu); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D2FCu) [[unlikely]] return; }
L_0011D2FC:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D314u); set32(c.r[4], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D314u) [[unlikely]] return; }
L_0011D314:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 44u);
    c.budget -= 3;
L_0011D320:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 18;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D2D0u | kUnwind; return; } goto L_0011D2D0; }
    set32(c.r[16], c.r[6].w[0] + 4u);
    c.budget -= 1;
L_0011D36C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D1DCu | kUnwind; return; } goto L_0011D1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_0011D3E4; } }
L_0011D3A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3B4u); set32(c.r[4], c.r[6].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D3B4u) [[unlikely]] return; }
L_0011D3B4:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0011D3DC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D3D8u) [[unlikely]] return; }
L_0011D3D8:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0011D3DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 2;
L_0011D3E4:
    set32(c.r[6], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D3A4u | kUnwind; return; } goto L_0011D3A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[6].w[0] + 36u)));  if (t) { goto L_0011D464; } }
L_0011D424:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D434u); set32(c.r[4], c.r[4].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0011D434u) [[unlikely]] return; }
L_0011D434:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0011D45C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D458u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D458u) [[unlikely]] return; }
L_0011D458:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0011D45C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_0011D464:
    set32(c.r[4], ld32((c.r[28].w[0] - 29216u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D424u | kUnwind; return; } goto L_0011D424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D49Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 163u, depth + 1u); else { c.pc = 0x0011D520u; return; } if (c.pc != 0x0011D49Cu) [[unlikely]] return; }
L_0011D49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011D4B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 164u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D4DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011D4DCu) [[unlikely]] return; }
L_0011D4DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0011D4FC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D4F8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 172u, depth + 1u); else { c.pc = 0x0011D680u; return; } if (c.pc != 0x0011D4F8u) [[unlikely]] return; }
L_0011D4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0011D4FC:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011D668; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D548u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 375u, depth + 1u); else { c.pc = 0x0015A700u; return; } if (c.pc != 0x0011D548u) [[unlikely]] return; }
L_0011D548:
    set32(c.r[4], c.r[16].w[0] + 100u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D558u); st32((c.r[28].w[0] - 29216u), 0u);  if (depth < kMaxDepth) unit_0010(c, 201u, depth + 1u); else { c.pc = 0x001415E0u; return; } if (c.pc != 0x0011D558u) [[unlikely]] return; }
L_0011D558:
    set32(c.r[2], c.r[16].w[0] + 84u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 60u);  goto L_0011D59C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D598; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D598; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D598; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D598; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D598u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011D598u) [[unlikely]] return; }
L_0011D598:
    set32(c.r[2], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_0011D59C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 40u);  goto L_0011D5CC; }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D5C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D5C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0011F000u; return; } if (c.pc != 0x0011D5C8u) [[unlikely]] return; }
L_0011D5C8:
    set32(c.r[2], c.r[16].w[0] + 40u);
    c.budget -= 1;
L_0011D5CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 24u);  goto L_0011D60C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D608; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D608u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011D608u) [[unlikely]] return; }
L_0011D608:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_0011D60C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_0011D630; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D62C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D62Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 300u, depth + 1u); else { c.pc = 0x0011EF90u; return; } if (c.pc != 0x0011D62Cu) [[unlikely]] return; }
L_0011D62C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_0011D630:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0011D654; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D650; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D650u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 296u, depth + 1u); else { c.pc = 0x0011EF20u; return; } if (c.pc != 0x0011D650u) [[unlikely]] return; }
L_0011D650:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0011D654:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011D66C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011D668u) [[unlikely]] return; }
L_0011D668:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011D66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011D680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[20].w[0] + 8u);  if (t) { goto L_0011D6F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011D6CCu) [[unlikely]] return; }
L_0011D6CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011D6E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6E0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011D6E0u) [[unlikely]] return; }
L_0011D6E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011D6E4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0011D6F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6F4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011D6F4u) [[unlikely]] return; }
L_0011D6F4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011D6F8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[16], c.r[20].w[0] + 24u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_0011D744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D71Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011D71Cu) [[unlikely]] return; }
L_0011D71C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011D734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D730u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011D730u) [[unlikely]] return; }
L_0011D730:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011D734:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0011D748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D744u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011D744u) [[unlikely]] return; }
L_0011D744:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011D748:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[18], c.r[20].w[0] + 40u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0011D794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D76Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011D76Cu) [[unlikely]] return; }
L_0011D76C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011D784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D780u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011D780u) [[unlikely]] return; }
L_0011D780:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011D784:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0011D798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D794u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011D794u) [[unlikely]] return; }
L_0011D794:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011D798:
    set32(c.r[17], c.r[20].w[0] + 60u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 12u), 0u);  if (t) { goto L_0011D7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011D7C0u) [[unlikely]] return; }
L_0011D7C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011D7D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7D4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011D7D4u) [[unlikely]] return; }
L_0011D7D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011D7D8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0011D7EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7E8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011D7E8u) [[unlikely]] return; }
L_0011D7E8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011D7EC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D808u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0007(c, 284u, depth + 1u); else { c.pc = 0x0011ED20u; return; } if (c.pc != 0x0011D808u) [[unlikely]] return; }
L_0011D808:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[20].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011D848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011D820u) [[unlikely]] return; }
L_0011D820:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0011D838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D834u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011D834u) [[unlikely]] return; }
L_0011D834:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011D838:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0011D84C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D848u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011D848u) [[unlikely]] return; }
L_0011D848:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011D84C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 100u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 9687u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D874u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 209u, depth + 1u); else { c.pc = 0x001416F0u; return; } if (c.pc != 0x0011D874u) [[unlikely]] return; }
L_0011D874:
    st32((c.r[28].w[0] - 29216u), c.r[20].w[0]);
    set32(c.r[4], 0u + 1032u);
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D88Cu); st8((c.r[20].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011D88Cu) [[unlikely]] return; }
L_0011D88C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  goto L_0011D8A4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D8A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 380u, depth + 1u); else { c.pc = 0x0015A7B0u; return; } if (c.pc != 0x0011D8A0u) [[unlikely]] return; }
L_0011D8A0:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0011D8A4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011D8D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011E074; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0011D93C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D930u); set32(c.r[5], c.r[5].w[0] - 9610u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0011D930u) [[unlikely]] return; }
L_0011D930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D938u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0011D938u) [[unlikely]] return; }
L_0011D938:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0011D93C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0011DD58; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], 0u + 80u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0011DB08; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_0011DA34; } }
L_0011D98C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0011DA24; }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0011D9A0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] + 2u);
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D9A0u | kUnwind; return; } goto L_0011D9A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 25;
L_0011DA24:
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011DA34:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D98Cu | kUnwind; return; } goto L_0011D98C; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 16u);  if (t) { goto L_0011DAF4; } }
L_0011DA4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0011DAE4; }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0011DA60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] + 2u);
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DA60u | kUnwind; return; } goto L_0011DA60; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 60u));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 25;
L_0011DAE4:
    set32(c.r[3], c.r[3].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 4;
L_0011DAF4:
    c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DA4Cu | kUnwind; return; } goto L_0011DA4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0011DCB0; } }
L_0011DB08:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], 0u + 16u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_0011DBC8; } }
L_0011DB20:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[9], ld32((c.r[19].w[0] + 8u)));  goto L_0011DBB8; }
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.r[13].d[0] = c.r[8].d[0] + 0ull;
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_0011DB34:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 1u)));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[13], c.r[13].w[0] + 2u);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[12], c.r[12].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DB34u | kUnwind; return; } goto L_0011DB34; } }
    set32(c.r[9], ld32((c.r[8].w[0] + 32u)));
    st32((c.r[7].w[0] + 32u), c.r[9].w[0]);
    c.f[1] = ld32((c.r[8].w[0] + 36u));
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    st32((c.r[7].w[0] + 36u), c.f[1]);
    st32((c.r[7].w[0] + 40u), c.f[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 44u)));
    st32((c.r[7].w[0] + 44u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 48u)));
    st32((c.r[7].w[0] + 48u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 52u)));
    st32((c.r[7].w[0] + 52u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 56u)));
    st32((c.r[7].w[0] + 56u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[8].w[0] + 60u));
    st8((c.r[7].w[0] + 60u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[8].w[0] + 64u)));
    st32((c.r[7].w[0] + 64u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 68u)));
    st32((c.r[7].w[0] + 68u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 72u)));
    st32((c.r[7].w[0] + 72u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 76u)));
    st32((c.r[7].w[0] + 76u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 25;
L_0011DBB8:
    set32(c.r[8], c.r[8].w[0] + 80u);
    set32(c.r[7], c.r[7].w[0] + 80u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 4;
L_0011DBC8:
    c.r[9].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DB20u | kUnwind; return; } goto L_0011DB20; } }
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[10], c.r[18].w[0] + c.r[5].w[0]);  goto L_0011DC08; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011DC04; } }
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0011DC04:
    set32(c.r[10], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0011DC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0011DCA0; } }
L_0011DC10:
    set32(c.r[6], c.r[6].w[0] - 80u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0011DC20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC20u | kUnwind; return; } goto L_0011DC20; } }
    set32(c.r[3], ld32((c.r[10].w[0] + 32u)));
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[10].w[0] + 36u));
    c.f[0] = ld32((c.r[10].w[0] + 40u));
    st32((c.r[6].w[0] + 36u), c.f[1]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 44u)));
    st32((c.r[6].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 48u)));
    st32((c.r[6].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 52u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 56u)));
    st32((c.r[6].w[0] + 56u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 60u));
    st8((c.r[6].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[10].w[0] + 64u)));
    st32((c.r[6].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 68u)));
    st32((c.r[6].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 72u)));
    st32((c.r[6].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 76u)));
    st32((c.r[6].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 24;
L_0011DCA0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[10], c.r[10].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC10u | kUnwind; return; } goto L_0011DC10; }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0011DCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011DD48; } }
L_0011DCB8:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0011DCC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DCC0u | kUnwind; return; } goto L_0011DCC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[18].w[0] + 36u), c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 80u);
    c.budget -= 26;
L_0011DD48:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DCB8u | kUnwind; return; } goto L_0011DCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011E078; } }
L_0011DD58:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_0011DD74; }
L_0011DD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011DD90; } }
L_0011DD7C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_0011DD90; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0011DD90:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD7Cu | kUnwind; return; } goto L_0011DD7C; }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DDB0u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011DDB0u) [[unlikely]] return; }
L_0011DDB0:
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0011DE80; } }
L_0011DDD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0011DE70; }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0011DDEC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DDECu | kUnwind; return; } goto L_0011DDEC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[2].w[0] + 36u), c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[2].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[2].w[0] + 56u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 60u));
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 25;
L_0011DE70:
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_0011DE80:
    c.r[5].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DDD8u | kUnwind; return; } goto L_0011DDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0011DF3C; } }
L_0011DE94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0011DF2C; }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0011DEA8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DEA8u | kUnwind; return; } goto L_0011DEA8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[2].w[0] + 36u), c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[2].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[2].w[0] + 56u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 60u));
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 25;
L_0011DF2C:
    set32(c.r[2], c.r[2].w[0] + 80u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_0011DF3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DE94u | kUnwind; return; } goto L_0011DE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0011DFF4; } }
L_0011DF4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0011DFE4; }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0011DF60:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF60u | kUnwind; return; } goto L_0011DF60; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[2].w[0] + 36u), c.f[1]);
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[2].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[2].w[0] + 56u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 60u));
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 25;
L_0011DFE4:
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_0011DFF4:
    c.r[5].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF4Cu | kUnwind; return; } goto L_0011DF4C; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0011E050; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_0011E050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E058u);  if (depth < kMaxDepth) unit_0007(c, 327u, depth + 1u); else { c.pc = 0x0011F4D0u; return; } if (c.pc != 0x0011E058u) [[unlikely]] return; }
L_0011E058:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E074; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E074u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011E074u) [[unlikely]] return; }
L_0011E074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011E078:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011E0A0:
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
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0011E4C4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_0011E11C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E110u); set32(c.r[5], c.r[5].w[0] - 9610u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0011E110u) [[unlikely]] return; }
L_0011E110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E118u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0011E118u) [[unlikely]] return; }
L_0011E118:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0011E11C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0011E338; }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_0011E150; } }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0011E150:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[30], c.r[19].w[0] << 4);  goto L_0011E1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011E18C; } }
L_0011E164:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_0011E17C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E178u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E178u) [[unlikely]] return; }
L_0011E178:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0011E17C:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011E18C:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E164u | kUnwind; return; } goto L_0011E164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0011E1C8; } }
L_0011E1A0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_0011E1B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1B4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E1B4u) [[unlikely]] return; }
L_0011E1B4:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0011E1B8:
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011E1C8:
    c.r[3].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E1A0u | kUnwind; return; } goto L_0011E1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E2BC; } }
L_0011E1DC:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_0011E210; } }
L_0011E1E8:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_0011E200; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E1FCu) [[unlikely]] return; }
L_0011E1FC:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0011E200:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011E210:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E1E8u | kUnwind; return; } goto L_0011E1E8; } }
    set32(c.r[3], c.r[23].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[20].w[0] + c.r[4].w[0]);  goto L_0011E2B0; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011E244; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_0011E244:
    set32(c.r[21], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E2B0; } }
L_0011E250:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E25Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 251u, depth + 1u); else { c.pc = 0x0011E530u; return; } if (c.pc != 0x0011E25Cu) [[unlikely]] return; }
L_0011E25C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x0011E268u) [[unlikely]] return; }
L_0011E268:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0011E280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 248u, depth + 1u); else { c.pc = 0x0011E500u; return; } if (c.pc != 0x0011E278u) [[unlikely]] return; }
L_0011E278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[2].w[0])));  if (t) { goto L_0011E28C; } }
L_0011E280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E288u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E510u; return; } if (c.pc != 0x0011E288u) [[unlikely]] return; }
L_0011E288:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0011E28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E294u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011E294u) [[unlikely]] return; }
L_0011E294:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 188u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0011E2B0u) [[unlikely]] return; }
L_0011E2B0:
    c.r[1].d[0] = c.r[20].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E250u | kUnwind; return; } goto L_0011E250; }
L_0011E2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E328; } }
L_0011E2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 251u, depth + 1u); else { c.pc = 0x0011E530u; return; } if (c.pc != 0x0011E2CCu) [[unlikely]] return; }
L_0011E2CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x0011E2D8u) [[unlikely]] return; }
L_0011E2D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0011E2F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 248u, depth + 1u); else { c.pc = 0x0011E500u; return; } if (c.pc != 0x0011E2E8u) [[unlikely]] return; }
L_0011E2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_0011E2FC; } }
L_0011E2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2F8u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E510u; return; } if (c.pc != 0x0011E2F8u) [[unlikely]] return; }
L_0011E2F8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0011E2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011E304u) [[unlikely]] return; }
L_0011E304:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 184u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0011E320u) [[unlikely]] return; }
L_0011E320:
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 2;
L_0011E328:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E2C4u | kUnwind; return; } goto L_0011E2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0011E4C8; } }
L_0011E338:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0011E354; }
L_0011E354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011E370; } }
L_0011E35C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0011E370; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0011E370:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E35Cu | kUnwind; return; } goto L_0011E35C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E388u); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011E388u) [[unlikely]] return; }
L_0011E388:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0011E3D0; } }
L_0011E3A8:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0011E3C0; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E3BCu) [[unlikely]] return; }
L_0011E3BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0011E3C0:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0011E3D0:
    c.r[2].d[0] = c.r[17].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E3A8u | kUnwind; return; } goto L_0011E3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E40C; } }
L_0011E3E4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0011E3FC; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E3F8u) [[unlikely]] return; }
L_0011E3F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0011E3FC:
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0011E40C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E3E4u | kUnwind; return; } goto L_0011E3E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0011E448; } }
L_0011E41C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0011E434; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E430u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0011E430u) [[unlikely]] return; }
L_0011E430:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0011E434:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[22], c.r[22].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011E448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E41Cu | kUnwind; return; } goto L_0011E41C; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0011E4A0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_0011E4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4A8u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x0011E4A8u) [[unlikely]] return; }
L_0011E4A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E4C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E4C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4C4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011E4C4u) [[unlikely]] return; }
L_0011E4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0011E4C8:
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
L_0011E500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_0011E510:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] >> 57;  c.pc = t; return; }
L_0011E520:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0011E530:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0011E544; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_0011E544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0011E560:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011E950; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0011E5CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5C0u); set32(c.r[5], c.r[5].w[0] - 9610u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0011E5C0u) [[unlikely]] return; }
L_0011E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5C8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0011E5C8u) [[unlikely]] return; }
L_0011E5C8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0011E5CC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0011E794; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[19].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] << 1);  goto L_0011E6A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011E64C; } }
L_0011E618:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0011E63C; }
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[6].w[0]), c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_0011E63C:
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0011E64C:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E618u | kUnwind; return; } goto L_0011E618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011E694; } }
L_0011E660:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0011E684; }
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0]), c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_0011E684:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0011E694:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E660u | kUnwind; return; } goto L_0011E660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E760; } }
L_0011E6A8:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0011E6F0; } }
L_0011E6BC:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_0011E6E0; }
    c.f[2] = ld32((c.r[8].w[0]));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0]), c.f[2]);
    st32((c.r[7].w[0] + 4u), c.f[1]);
    st32((c.r[7].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 7;
L_0011E6E0:
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0011E6F0:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E6BCu | kUnwind; return; } goto L_0011E6BC; } }
    set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  goto L_0011E754; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011E72C; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0011E72C:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E754; } }
L_0011E738:
    set32(c.r[3], c.r[3].w[0] - 12u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
L_0011E754:
    c.r[1].d[0] = c.r[19].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E738u | kUnwind; return; } goto L_0011E738; }
L_0011E760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E784; } }
L_0011E768:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 7;
L_0011E784:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E768u | kUnwind; return; } goto L_0011E768; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011E954; } }
L_0011E794:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0011E7B0; }
L_0011E7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011E7CC; } }
L_0011E7B8:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0011E7CC; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0011E7CC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E7B8u | kUnwind; return; } goto L_0011E7B8; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E7ECu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011E7ECu) [[unlikely]] return; }
L_0011E7EC:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0011E844; } }
L_0011E810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011E834; }
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_0011E834:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011E844:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E810u | kUnwind; return; } goto L_0011E810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E88C; } }
L_0011E858:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011E87C; }
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_0011E87C:
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011E88C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E858u | kUnwind; return; } goto L_0011E858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0011E8D4; } }
L_0011E89C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011E8C0; }
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_0011E8C0:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011E8D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E89Cu | kUnwind; return; } goto L_0011E89C; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0011E92C; }
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
L_0011E92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E934u);  if (depth < kMaxDepth) unit_0007(c, 331u, depth + 1u); else { c.pc = 0x0011F570u; return; } if (c.pc != 0x0011E934u) [[unlikely]] return; }
L_0011E934:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E950; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E950u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011E950u) [[unlikely]] return; }
L_0011E950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011E954:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011E970:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011ECFC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0011E9DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9D0u); set32(c.r[5], c.r[5].w[0] - 9610u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0011E9D0u) [[unlikely]] return; }
L_0011E9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9D8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0011E9D8u) [[unlikely]] return; }
L_0011E9D8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0011E9DC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0011EB68; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0011EA10; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0011EA10:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_0011EAA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011EA50; } }
L_0011EA24:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011EA40; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011EA40:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EA50:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EA24u | kUnwind; return; } goto L_0011EA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011EA90; } }
L_0011EA64:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011EA80; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011EA80:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EA90:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EA64u | kUnwind; return; } goto L_0011EA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EB3C; } }
L_0011EAA4:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0011EADC; } }
L_0011EAB0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011EACC; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011EACC:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EADC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EAB0u | kUnwind; return; } goto L_0011EAB0; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_0011EB30; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011EB10; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0011EB10:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EB30; } }
L_0011EB1C:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0011EB30:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EB1Cu | kUnwind; return; } goto L_0011EB1C; }
L_0011EB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EB58; } }
L_0011EB44:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
L_0011EB58:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EB44u | kUnwind; return; } goto L_0011EB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011ED00; } }
L_0011EB68:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0011EB84; }
L_0011EB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011EBA0; } }
L_0011EB8C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0011EBA0; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0011EBA0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EB8Cu | kUnwind; return; } goto L_0011EB8C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBB8u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011EBB8u) [[unlikely]] return; }
L_0011EBB8:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0011EC00; } }
L_0011EBD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011EBF0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011EBF0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EC00:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EBD4u | kUnwind; return; } goto L_0011EBD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011EC40; } }
L_0011EC14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011EC30; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011EC30:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EC40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EC14u | kUnwind; return; } goto L_0011EC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0011EC80; } }
L_0011EC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011EC6C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011EC6C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011EC80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EC50u | kUnwind; return; } goto L_0011EC50; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0011ECD8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
L_0011ECB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 9;
L_0011ECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECE0u);  if (depth < kMaxDepth) unit_0007(c, 332u, depth + 1u); else { c.pc = 0x0011F580u; return; } if (c.pc != 0x0011ECE0u) [[unlikely]] return; }
L_0011ECE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011ECFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011ECFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECFCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011ECFCu) [[unlikely]] return; }
L_0011ECFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011ED00:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011ED20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011EE28; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED60u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011ED60u) [[unlikely]] return; }
L_0011ED60:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0011EDA8; } }
L_0011ED7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0011ED98; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_0011ED98:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0011EDA8:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ED7Cu | kUnwind; return; } goto L_0011ED7C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0011EE04; }
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
L_0011EE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE0Cu);  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F590u; return; } if (c.pc != 0x0011EE0Cu) [[unlikely]] return; }
L_0011EE0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0011EE2C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011EE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE28u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011EE28u) [[unlikely]] return; }
L_0011EE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011EE2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011EE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011EE78; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE70u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 312u, depth + 1u); else { c.pc = 0x0011F110u; return; } if (c.pc != 0x0011EE70u) [[unlikely]] return; }
L_0011EE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011EEA4; } }
L_0011EE78:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011EEA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EEA0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 309u, depth + 1u); else { c.pc = 0x0011F070u; return; } if (c.pc != 0x0011EEA0u) [[unlikely]] return; }
L_0011EEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011EEA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011EEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011EF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EED4u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x0011EED4u) [[unlikely]] return; }
L_0011EED4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0011EEF4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011EEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EEF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011EEF0u) [[unlikely]] return; }
L_0011EEF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0011EEF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0011EF0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011EF08u) [[unlikely]] return; }
L_0011EF08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011EF0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011EF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011EF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF44u);  if (depth < kMaxDepth) unit_0007(c, 331u, depth + 1u); else { c.pc = 0x0011F570u; return; } if (c.pc != 0x0011EF44u) [[unlikely]] return; }
L_0011EF44:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0011EF64; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011EF60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF60u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011EF60u) [[unlikely]] return; }
L_0011EF60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0011EF64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0011EF7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011EF78u) [[unlikely]] return; }
L_0011EF78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011EF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011EF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011EFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFB4u);  if (depth < kMaxDepth) unit_0007(c, 332u, depth + 1u); else { c.pc = 0x0011F580u; return; } if (c.pc != 0x0011EFB4u) [[unlikely]] return; }
L_0011EFB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0011EFD4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011EFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFD0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011EFD0u) [[unlikely]] return; }
L_0011EFD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0011EFD4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0011EFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011EFE8u) [[unlikely]] return; }
L_0011EFE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011EFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F024u);  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F590u; return; } if (c.pc != 0x0011F024u) [[unlikely]] return; }
L_0011F024:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0011F044; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011F040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F040u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011F040u) [[unlikely]] return; }
    goto L_0011F040;
L_0011F03C:
    c.budget -= 1;
L_0011F040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0011F044:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0011F05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011F058u) [[unlikely]] return; }
L_0011F058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011F05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F070:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_0011F080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011F100; } }
L_0011F080:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0011F0A0; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0011F0A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_0011F0E0; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011F0D0; } }
L_0011F0B4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_0011F0D0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F0B4u | kUnwind; return; } goto L_0011F0B4; }
L_0011F0DC:
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011F0E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0011F0F0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0011F0F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F110:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011F4B0; } }
L_0011F140:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0011F17C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F170u); set32(c.r[5], c.r[5].w[0] - 9610u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0011F170u) [[unlikely]] return; }
L_0011F170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F178u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0011F178u) [[unlikely]] return; }
L_0011F178:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0011F17C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0011F318; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0011F1B0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0011F1B0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_0011F244; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011F1F0; } }
L_0011F1C4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011F1E0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011F1E0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F1F0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F1C4u | kUnwind; return; } goto L_0011F1C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011F230; } }
L_0011F204:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011F220; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011F220:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F230:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F204u | kUnwind; return; } goto L_0011F204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F2E4; } }
L_0011F244:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0011F27C; } }
L_0011F250:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0011F26C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0011F26C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F27C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F250u | kUnwind; return; } goto L_0011F250; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_0011F2D8; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0011F2B0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0011F2B0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F2D8; } }
L_0011F2BC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0011F2D8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F2BCu | kUnwind; return; } goto L_0011F2BC; }
L_0011F2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F308; } }
L_0011F2EC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_0011F308:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F2ECu | kUnwind; return; } goto L_0011F2EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011F4B4; } }
L_0011F318:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0011F338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011F340; } }
L_0011F338:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0011F340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0011F360; } }
L_0011F348:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0011F35C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0011F35C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011F360:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F348u | kUnwind; return; } goto L_0011F348; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F374u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011F374u) [[unlikely]] return; }
L_0011F374:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0011F3C0; } }
L_0011F394:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011F3B0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011F3B0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F3C0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F394u | kUnwind; return; } goto L_0011F394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F400; } }
L_0011F3D4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011F3F0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011F3F0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0011F400:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F3D4u | kUnwind; return; } goto L_0011F3D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0011F440; } }
L_0011F410:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0011F42C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0011F42C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011F440:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F410u | kUnwind; return; } goto L_0011F410; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0011F498; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_0011F498:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_0011F4B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011F4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F4B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011F4B0u) [[unlikely]] return; }
L_0011F4B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011F4B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011F4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0011F4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0011F540; } }
L_0011F50C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_0011F544; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0011F540; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011F540; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011F540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F540u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0011F540u) [[unlikely]] return; }
L_0011F540:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011F544:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F50Cu | kUnwind; return; } goto L_0011F50C; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0011F580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0011F590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0011F5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011F5F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26960u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011F5D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011F5D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011F5EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F5ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011F5ECu) [[unlikely]] return; }
L_0011F5EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011F5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011F600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011F610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F63Cu); set32(c.r[5], c.r[29].w[0] + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F63Cu) [[unlikely]] return; }
L_0011F63C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F654u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F654u) [[unlikely]] return; }
L_0011F654:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 46u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0011F6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011F698u) [[unlikely]] return; }
L_0011F698:
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6B4u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F6B4u) [[unlikely]] return; }
L_0011F6B4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[29].w[0] + 62u));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F6CCu) [[unlikely]] return; }
L_0011F6CC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0011F6F8; } }
L_0011F6DC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6F4u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F6F4u) [[unlikely]] return; }
L_0011F6F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F744u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F744u) [[unlikely]] return; }
L_0011F744:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[29].w[0] + 62u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F75Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F75Cu) [[unlikely]] return; }
L_0011F75C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 62u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26960u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0011F7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011F7F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26928u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011F7D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011F7D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011F7EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011F7ECu) [[unlikely]] return; }
L_0011F7EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011F7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011F800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0011F810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F83Cu); set32(c.r[5], c.r[29].w[0] + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F83Cu) [[unlikely]] return; }
L_0011F83C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F854u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F854u) [[unlikely]] return; }
L_0011F854:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 46u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011F898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0011F89C; } }
L_0011F898:
    set32(c.r[16], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0011F89C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0011F8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F8ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011F8ACu) [[unlikely]] return; }
L_0011F8AC:
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F8C8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F8C8u) [[unlikely]] return; }
L_0011F8C8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[29].w[0] + 62u));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F8E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F8E0u) [[unlikely]] return; }
L_0011F8E0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0011F90C; } }
L_0011F8F0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F908u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F908u) [[unlikely]] return; }
L_0011F908:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F954u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F954u) [[unlikely]] return; }
L_0011F954:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F970u); set32(c.r[5], c.r[5].w[0] + 1472u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011F970u) [[unlikely]] return; }
L_0011F970:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 1472u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F98Cu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0011F98Cu) [[unlikely]] return; }
L_0011F98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26928u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0011F9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011FA20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26896u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011FA04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011FA04:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011FA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011FA1Cu) [[unlikely]] return; }
L_0011FA1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011FA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011FA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_0011FA40:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0011C000u < 16384u) { entry = entries_0007[(t - 0x0011C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011FA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011FAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011FA84u) [[unlikely]] return; }
L_0011FA84:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FA9Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FA9Cu) [[unlikely]] return; }
L_0011FA9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FAA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011FAA8u) [[unlikely]] return; }
L_0011FAA8:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0011FAB8; } }
L_0011FAB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011FAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FAF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FAF8u) [[unlikely]] return; }
L_0011FAF8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FB10u) [[unlikely]] return; }
L_0011FB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011FB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26896u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_0011FB60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011FCCC; } }
    set32(c.r[21], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0011FCA0; }
    set32(c.r[5], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0011FC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FBB4u);  if (depth < kMaxDepth) unit_0007(c, 377u, depth + 1u); else { c.pc = 0x0011FB60u; return; } if (c.pc != 0x0011FBB4u) [[unlikely]] return; }
L_0011FBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FC38; } }
L_0011FBC4:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FC1C; } }
L_0011FBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FBD8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x00119540u; return; } if (c.pc != 0x0011FBD8u) [[unlikely]] return; }
L_0011FBD8:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0011FC1C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC08u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FC08u) [[unlikely]] return; }
L_0011FC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FC38; } }
L_0011FC18:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0011FC1C:
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC28u);  if (depth < kMaxDepth) unit_0006(c, 157u, depth + 1u); else { c.pc = 0x00119530u; return; } if (c.pc != 0x0011FC28u) [[unlikely]] return; }
L_0011FC28:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FBD0u | kUnwind; return; } goto L_0011FBD0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0011FC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FCBC; } }
L_0011FC48:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FCA0; } }
L_0011FC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC5Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 155u, depth + 1u); else { c.pc = 0x00119500u; return; } if (c.pc != 0x0011FC5Cu) [[unlikely]] return; }
L_0011FC5C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0011FCA0; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC8Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FC8Cu) [[unlikely]] return; }
L_0011FC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FCBC; } }
L_0011FC9C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0011FCA0:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FCACu);  if (depth < kMaxDepth) unit_0006(c, 154u, depth + 1u); else { c.pc = 0x001194F0u; return; } if (c.pc != 0x0011FCACu) [[unlikely]] return; }
L_0011FCAC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FC54u | kUnwind; return; } goto L_0011FC54; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0011FCBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0011FD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FD40; } }
L_0011FCCC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FD2C; } }
L_0011FCD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0011FD2C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD18u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FD18u) [[unlikely]] return; }
L_0011FD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FD40; } }
L_0011FD28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0011FD2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FCD8u | kUnwind; return; } goto L_0011FCD8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011FD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0011FD70:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011FDC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FDB4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FDB4u) [[unlikely]] return; }
L_0011FDB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 48u)));  goto L_0011FDC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE64; } }
L_0011FDC4:
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_0011FDC8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0011FE50; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FDE0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 389u, depth + 1u); else { c.pc = 0x0011FD70u; return; } if (c.pc != 0x0011FDE0u) [[unlikely]] return; }
L_0011FDE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE64; } }
L_0011FDF0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FE50; } }
L_0011FDFC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 3);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0011FE50; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE3Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FE3Cu) [[unlikely]] return; }
L_0011FE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE64; } }
L_0011FE4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0011FE50:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FDFCu | kUnwind; return; } goto L_0011FDFC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011FE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0011FE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011FEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011FF30; } }
L_0011FEB8:
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FECCu) [[unlikely]] return; }
L_0011FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 80u, depth + 1u); else { c.pc = 0x0011C920u; return; } if (c.pc != 0x0011FED4u) [[unlikely]] return; }
L_0011FED4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEF0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FEF0u) [[unlikely]] return; }
L_0011FEF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0011FF00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FF30; } }
L_0011FF00:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 377u, depth + 1u); else { c.pc = 0x0011FB60u; return; } if (c.pc != 0x0011FF0Cu) [[unlikely]] return; }
L_0011FF0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0011FF1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FF30; } }
L_0011FF1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FF30u) [[unlikely]] return; }
L_0011FF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011FF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF80u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FF80u) [[unlikely]] return; }
L_0011FF80:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 16u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x0011FF94u) [[unlikely]] return; }
L_0011FF94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011FFB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFD0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0011FFD0u) [[unlikely]] return; }
L_0011FFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFD8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0011FFD8u) [[unlikely]] return; }
L_0011FFD8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFF4u); set32(c.r[7], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011FFF4u) [[unlikely]] return; }
L_0011FFF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0008(c, 5u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0008(c, 1u, depth);
}

}
