#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0047[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0,
    0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381,
    0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0047(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C010;
    case 3u: goto L_0021C038;
    case 4u: goto L_0021C04C;
    case 5u: goto L_0021C080;
    case 6u: goto L_0021C094;
    case 7u: goto L_0021C0AC;
    case 8u: goto L_0021C0D0;
    case 9u: goto L_0021C130;
    case 10u: goto L_0021C168;
    case 11u: goto L_0021C180;
    case 12u: goto L_0021C190;
    case 13u: goto L_0021C1C0;
    case 14u: goto L_0021C1E0;
    case 15u: goto L_0021C220;
    case 16u: goto L_0021C260;
    case 17u: goto L_0021C290;
    case 18u: goto L_0021C2A8;
    case 19u: goto L_0021C2D0;
    case 20u: goto L_0021C33C;
    case 21u: goto L_0021C350;
    case 22u: goto L_0021C370;
    case 23u: goto L_0021C380;
    case 24u: goto L_0021C3C4;
    case 25u: goto L_0021C3DC;
    case 26u: goto L_0021C400;
    case 27u: goto L_0021C410;
    case 28u: goto L_0021C428;
    case 29u: goto L_0021C43C;
    case 30u: goto L_0021C460;
    case 31u: goto L_0021C4C0;
    case 32u: goto L_0021C4CC;
    case 33u: goto L_0021C4F4;
    case 34u: goto L_0021C520;
    case 35u: goto L_0021C56C;
    case 36u: goto L_0021C580;
    case 37u: goto L_0021C590;
    case 38u: goto L_0021C5A4;
    case 39u: goto L_0021C5B0;
    case 40u: goto L_0021C5C0;
    case 41u: goto L_0021C5D0;
    case 42u: goto L_0021C5E0;
    case 43u: goto L_0021C5F0;
    case 44u: goto L_0021C600;
    case 45u: goto L_0021C610;
    case 46u: goto L_0021C650;
    case 47u: goto L_0021C6A4;
    case 48u: goto L_0021C6C0;
    case 49u: goto L_0021C764;
    case 50u: goto L_0021C780;
    case 51u: goto L_0021C7A4;
    case 52u: goto L_0021C7D0;
    case 53u: goto L_0021C800;
    case 54u: goto L_0021C85C;
    case 55u: goto L_0021C87C;
    case 56u: goto L_0021C89C;
    case 57u: goto L_0021C8C0;
    case 58u: goto L_0021C8F0;
    case 59u: goto L_0021C974;
    case 60u: goto L_0021CA58;
    case 61u: goto L_0021CA84;
    case 62u: goto L_0021CAA4;
    case 63u: goto L_0021CAE8;
    case 64u: goto L_0021CB0C;
    case 65u: goto L_0021CB50;
    case 66u: goto L_0021CB70;
    case 67u: goto L_0021CB90;
    case 68u: goto L_0021CBB0;
    case 69u: goto L_0021CBD0;
    case 70u: goto L_0021CBF0;
    case 71u: goto L_0021CC20;
    case 72u: goto L_0021CC60;
    case 73u: goto L_0021CCD4;
    case 74u: goto L_0021CD20;
    case 75u: goto L_0021CD40;
    case 76u: goto L_0021CD64;
    case 77u: goto L_0021CD7C;
    case 78u: goto L_0021CDA0;
    case 79u: goto L_0021CDC0;
    case 80u: goto L_0021CDC8;
    case 81u: goto L_0021CDE0;
    case 82u: goto L_0021CDF0;
    case 83u: goto L_0021CDFC;
    case 84u: goto L_0021CE1C;
    case 85u: goto L_0021CE30;
    case 86u: goto L_0021CE60;
    case 87u: goto L_0021CE70;
    case 88u: goto L_0021CEA0;
    case 89u: goto L_0021CEB0;
    case 90u: goto L_0021CEFC;
    case 91u: goto L_0021CF10;
    case 92u: goto L_0021CF38;
    case 93u: goto L_0021CF74;
    case 94u: goto L_0021CF90;
    case 95u: goto L_0021CFC0;
    case 96u: goto L_0021CFD0;
    case 97u: goto L_0021D000;
    case 98u: goto L_0021D010;
    case 99u: goto L_0021D030;
    case 100u: goto L_0021D04C;
    case 101u: goto L_0021D090;
    case 102u: goto L_0021D0A0;
    case 103u: goto L_0021D0E8;
    case 104u: goto L_0021D100;
    case 105u: goto L_0021D14C;
    case 106u: goto L_0021D160;
    case 107u: goto L_0021D180;
    case 108u: goto L_0021D1D0;
    case 109u: goto L_0021D200;
    case 110u: goto L_0021D210;
    case 111u: goto L_0021D268;
    case 112u: goto L_0021D278;
    case 113u: goto L_0021D28C;
    case 114u: goto L_0021D298;
    case 115u: goto L_0021D2B4;
    case 116u: goto L_0021D300;
    case 117u: goto L_0021D344;
    case 118u: goto L_0021D370;
    case 119u: goto L_0021D380;
    case 120u: goto L_0021D3CC;
    case 121u: goto L_0021D3D8;
    case 122u: goto L_0021D3F4;
    case 123u: goto L_0021D410;
    case 124u: goto L_0021D424;
    case 125u: goto L_0021D440;
    case 126u: goto L_0021D468;
    case 127u: goto L_0021D480;
    case 128u: goto L_0021D4A4;
    case 129u: goto L_0021D4E0;
    case 130u: goto L_0021D500;
    case 131u: goto L_0021D540;
    case 132u: goto L_0021D58C;
    case 133u: goto L_0021D5A0;
    case 134u: goto L_0021D5B4;
    case 135u: goto L_0021D5C4;
    case 136u: goto L_0021D5D4;
    case 137u: goto L_0021D600;
    case 138u: goto L_0021D640;
    case 139u: goto L_0021D658;
    case 140u: goto L_0021D680;
    case 141u: goto L_0021D690;
    case 142u: goto L_0021D6A0;
    case 143u: goto L_0021D6D0;
    case 144u: goto L_0021D700;
    case 145u: goto L_0021D74C;
    case 146u: goto L_0021D76C;
    case 147u: goto L_0021D77C;
    case 148u: goto L_0021D79C;
    case 149u: goto L_0021D7AC;
    case 150u: goto L_0021D7CC;
    case 151u: goto L_0021D7D8;
    case 152u: goto L_0021D7F4;
    case 153u: goto L_0021D804;
    case 154u: goto L_0021D810;
    case 155u: goto L_0021D82C;
    case 156u: goto L_0021D83C;
    case 157u: goto L_0021D85C;
    case 158u: goto L_0021D868;
    case 159u: goto L_0021D884;
    case 160u: goto L_0021D894;
    case 161u: goto L_0021D8B4;
    case 162u: goto L_0021D8D4;
    case 163u: goto L_0021D8F4;
    case 164u: goto L_0021D904;
    case 165u: goto L_0021D924;
    case 166u: goto L_0021D948;
    case 167u: goto L_0021D950;
    case 168u: goto L_0021D980;
    case 169u: goto L_0021D990;
    case 170u: goto L_0021D9B8;
    case 171u: goto L_0021D9C4;
    case 172u: goto L_0021D9E4;
    case 173u: goto L_0021D9F4;
    case 174u: goto L_0021DA14;
    case 175u: goto L_0021DA28;
    case 176u: goto L_0021DA30;
    case 177u: goto L_0021DA50;
    case 178u: goto L_0021DA7C;
    case 179u: goto L_0021DA88;
    case 180u: goto L_0021DAB0;
    case 181u: goto L_0021DAE8;
    case 182u: goto L_0021DB00;
    case 183u: goto L_0021DB20;
    case 184u: goto L_0021DB40;
    case 185u: goto L_0021DB58;
    case 186u: goto L_0021DB80;
    case 187u: goto L_0021DBC0;
    case 188u: goto L_0021DBD0;
    case 189u: goto L_0021DBE8;
    case 190u: goto L_0021DC00;
    case 191u: goto L_0021DC20;
    case 192u: goto L_0021DC28;
    case 193u: goto L_0021DC40;
    case 194u: goto L_0021DC60;
    case 195u: goto L_0021DC74;
    case 196u: goto L_0021DC84;
    case 197u: goto L_0021DCA0;
    case 198u: goto L_0021DCB4;
    case 199u: goto L_0021DCC0;
    case 200u: goto L_0021DCD0;
    case 201u: goto L_0021DCF0;
    case 202u: goto L_0021DCF8;
    case 203u: goto L_0021DD00;
    case 204u: goto L_0021DD10;
    case 205u: goto L_0021DD34;
    case 206u: goto L_0021DD3C;
    case 207u: goto L_0021DD44;
    case 208u: goto L_0021DD50;
    case 209u: goto L_0021DD60;
    case 210u: goto L_0021DD90;
    case 211u: goto L_0021DDB0;
    case 212u: goto L_0021DDDC;
    case 213u: goto L_0021DDF4;
    case 214u: goto L_0021DE04;
    case 215u: goto L_0021DE20;
    case 216u: goto L_0021DE3C;
    case 217u: goto L_0021DE54;
    case 218u: goto L_0021DE68;
    case 219u: goto L_0021DE78;
    case 220u: goto L_0021DEA0;
    case 221u: goto L_0021DEC0;
    case 222u: goto L_0021DEF0;
    case 223u: goto L_0021DF10;
    case 224u: goto L_0021DF20;
    case 225u: goto L_0021DF30;
    case 226u: goto L_0021DF40;
    case 227u: goto L_0021DF60;
    case 228u: goto L_0021DF9C;
    case 229u: goto L_0021DFD0;
    case 230u: goto L_0021DFFC;
    case 231u: goto L_0021E040;
    case 232u: goto L_0021E048;
    case 233u: goto L_0021E068;
    case 234u: goto L_0021E07C;
    case 235u: goto L_0021E0B0;
    case 236u: goto L_0021E0C0;
    case 237u: goto L_0021E120;
    case 238u: goto L_0021E140;
    case 239u: goto L_0021E16C;
    case 240u: goto L_0021E18C;
    case 241u: goto L_0021E1D0;
    case 242u: goto L_0021E224;
    case 243u: goto L_0021E24C;
    case 244u: goto L_0021E270;
    case 245u: goto L_0021E294;
    case 246u: goto L_0021E2C0;
    case 247u: goto L_0021E340;
    case 248u: goto L_0021E350;
    case 249u: goto L_0021E3FC;
    case 250u: goto L_0021E410;
    case 251u: goto L_0021E41C;
    case 252u: goto L_0021E44C;
    case 253u: goto L_0021E460;
    case 254u: goto L_0021E4A0;
    case 255u: goto L_0021E4E8;
    case 256u: goto L_0021E4F0;
    case 257u: goto L_0021E500;
    case 258u: goto L_0021E514;
    case 259u: goto L_0021E520;
    case 260u: goto L_0021E534;
    case 261u: goto L_0021E540;
    case 262u: goto L_0021E55C;
    case 263u: goto L_0021E580;
    case 264u: goto L_0021E624;
    case 265u: goto L_0021E640;
    case 266u: goto L_0021E648;
    case 267u: goto L_0021E65C;
    case 268u: goto L_0021E678;
    case 269u: goto L_0021E6A0;
    case 270u: goto L_0021E6D0;
    case 271u: goto L_0021E6EC;
    case 272u: goto L_0021E700;
    case 273u: goto L_0021E70C;
    case 274u: goto L_0021E718;
    case 275u: goto L_0021E758;
    case 276u: goto L_0021E780;
    case 277u: goto L_0021E7A0;
    case 278u: goto L_0021E7B8;
    case 279u: goto L_0021E7C0;
    case 280u: goto L_0021E7CC;
    case 281u: goto L_0021E7E0;
    case 282u: goto L_0021E800;
    case 283u: goto L_0021E810;
    case 284u: goto L_0021E85C;
    case 285u: goto L_0021E87C;
    case 286u: goto L_0021E8A0;
    case 287u: goto L_0021E8B4;
    case 288u: goto L_0021E8E0;
    case 289u: goto L_0021E8E8;
    case 290u: goto L_0021E920;
    case 291u: goto L_0021E974;
    case 292u: goto L_0021E9B0;
    case 293u: goto L_0021E9EC;
    case 294u: goto L_0021EA18;
    case 295u: goto L_0021EA64;
    case 296u: goto L_0021EA6C;
    case 297u: goto L_0021EAAC;
    case 298u: goto L_0021EAB4;
    case 299u: goto L_0021EAF4;
    case 300u: goto L_0021EB1C;
    case 301u: goto L_0021EB28;
    case 302u: goto L_0021EB50;
    case 303u: goto L_0021EB98;
    case 304u: goto L_0021EBE4;
    case 305u: goto L_0021EBF8;
    case 306u: goto L_0021EC14;
    case 307u: goto L_0021EC28;
    case 308u: goto L_0021EC3C;
    case 309u: goto L_0021EC64;
    case 310u: goto L_0021ECA8;
    case 311u: goto L_0021ECD4;
    case 312u: goto L_0021ED00;
    case 313u: goto L_0021ED28;
    case 314u: goto L_0021ED38;
    case 315u: goto L_0021ED80;
    case 316u: goto L_0021ED90;
    case 317u: goto L_0021EDA8;
    case 318u: goto L_0021EDC0;
    case 319u: goto L_0021EDD0;
    case 320u: goto L_0021EE00;
    case 321u: goto L_0021EE40;
    case 322u: goto L_0021EE50;
    case 323u: goto L_0021EE60;
    case 324u: goto L_0021EE70;
    case 325u: goto L_0021EEA0;
    case 326u: goto L_0021EEB0;
    case 327u: goto L_0021EEC4;
    case 328u: goto L_0021EED8;
    case 329u: goto L_0021EEF0;
    case 330u: goto L_0021EF10;
    case 331u: goto L_0021EF60;
    case 332u: goto L_0021EF70;
    case 333u: goto L_0021EF94;
    case 334u: goto L_0021EFC0;
    case 335u: goto L_0021EFE4;
    case 336u: goto L_0021F010;
    case 337u: goto L_0021F048;
    case 338u: goto L_0021F054;
    case 339u: goto L_0021F070;
    case 340u: goto L_0021F07C;
    case 341u: goto L_0021F0D8;
    case 342u: goto L_0021F0F8;
    case 343u: goto L_0021F108;
    case 344u: goto L_0021F124;
    case 345u: goto L_0021F130;
    case 346u: goto L_0021F14C;
    case 347u: goto L_0021F170;
    case 348u: goto L_0021F1A8;
    case 349u: goto L_0021F1C0;
    case 350u: goto L_0021F1D4;
    case 351u: goto L_0021F1E0;
    case 352u: goto L_0021F1F4;
    case 353u: goto L_0021F210;
    case 354u: goto L_0021F220;
    case 355u: goto L_0021F23C;
    case 356u: goto L_0021F254;
    case 357u: goto L_0021F260;
    case 358u: goto L_0021F27C;
    case 359u: goto L_0021F288;
    case 360u: goto L_0021F29C;
    case 361u: goto L_0021F2AC;
    case 362u: goto L_0021F2B8;
    case 363u: goto L_0021F2D0;
    case 364u: goto L_0021F2EC;
    case 365u: goto L_0021F320;
    case 366u: goto L_0021F340;
    case 367u: goto L_0021F360;
    case 368u: goto L_0021F368;
    case 369u: goto L_0021F388;
    case 370u: goto L_0021F398;
    case 371u: goto L_0021F3B4;
    case 372u: goto L_0021F3C8;
    case 373u: goto L_0021F3D8;
    case 374u: goto L_0021F3EC;
    case 375u: goto L_0021F410;
    case 376u: goto L_0021F42C;
    case 377u: goto L_0021F438;
    case 378u: goto L_0021F450;
    case 379u: goto L_0021F458;
    case 380u: goto L_0021F46C;
    case 381u: goto L_0021F47C;
    case 382u: goto L_0021F484;
    case 383u: goto L_0021F48C;
    case 384u: goto L_0021F4A0;
    case 385u: goto L_0021F4C0;
    case 386u: goto L_0021F4D8;
    case 387u: goto L_0021F4EC;
    case 388u: goto L_0021F500;
    case 389u: goto L_0021F524;
    case 390u: goto L_0021F534;
    case 391u: goto L_0021F554;
    case 392u: goto L_0021F564;
    case 393u: goto L_0021F584;
    case 394u: goto L_0021F5C0;
    case 395u: goto L_0021F5DC;
    case 396u: goto L_0021F5EC;
    case 397u: goto L_0021F608;
    case 398u: goto L_0021F61C;
    case 399u: goto L_0021F62C;
    case 400u: goto L_0021F640;
    case 401u: goto L_0021F678;
    case 402u: goto L_0021F698;
    case 403u: goto L_0021F6C0;
    case 404u: goto L_0021F6E8;
    case 405u: goto L_0021F714;
    case 406u: goto L_0021F750;
    case 407u: goto L_0021F788;
    case 408u: goto L_0021F7E4;
    case 409u: goto L_0021F820;
    case 410u: goto L_0021F870;
    case 411u: goto L_0021F8B8;
    case 412u: goto L_0021F928;
    case 413u: goto L_0021F960;
    case 414u: goto L_0021F9AC;
    case 415u: goto L_0021F9F0;
    case 416u: goto L_0021FA5C;
    case 417u: goto L_0021FAA4;
    case 418u: goto L_0021FB04;
    case 419u: goto L_0021FB6C;
    case 420u: goto L_0021FC00;
    case 421u: goto L_0021FC10;
    case 422u: goto L_0021FC20;
    case 423u: goto L_0021FC5C;
    case 424u: goto L_0021FD5C;
    case 425u: goto L_0021FDE0;
    case 426u: goto L_0021FE00;
    case 427u: goto L_0021FE20;
    case 428u: goto L_0021FE30;
    case 429u: goto L_0021FE4C;
    case 430u: goto L_0021FE60;
    case 431u: goto L_0021FE70;
    case 432u: goto L_0021FED4;
    case 433u: goto L_0021FEE8;
    case 434u: goto L_0021FF00;
    case 435u: goto L_0021FF20;
    case 436u: goto L_0021FF68;
    case 437u: goto L_0021FF78;
    case 438u: goto L_0021FF94;
    case 439u: goto L_0021FFA8;
    case 440u: goto L_0021FFD8;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021C010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021C0AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C050; } }
L_0021C038:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C04Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0047(c, 16u, depth + 1u); else { c.pc = 0x0021C260u; return; } if (c.pc != 0x0021C04Cu) [[unlikely]] return; }
L_0021C04C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021C050:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C038u | kUnwind; return; } goto L_0021C038; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C080u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C080u) [[unlikely]] return; }
L_0021C080:
    set32(c.r[2], c.r[18].w[0] + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0021C098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C094u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0021C094u) [[unlikely]] return; }
L_0021C094:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0021C098:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0021C0B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021C0ACu) [[unlikely]] return; }
L_0021C0AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021C0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021C0D0:
    set32(c.r[3], 0u + 25600u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0021C0F8; } }
    breakpoint(c, 0x0021C0F4u);
    c.budget -= 1;
L_0021C0F8:
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021C110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0021C11C; } }
L_0021C110:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_0021C120; }
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0021C11C:
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0021C120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C168u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x0021C168u) [[unlikely]] return; }
L_0021C168:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C180:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0021C190:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C1B4; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021C1B4; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0021C1B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C1C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0021C1E0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);  if (t) { goto L_0021C1FC; } }
    breakpoint(c, 0x0021C1F8u);
    c.budget -= 1;
L_0021C1FC:
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0021C220:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));  goto L_0021C234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021C254; } }
L_0021C234:
    set32(c.r[2], ld32((c.r[4].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0021C254:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C260:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021C290:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_0021C2B8; } }
L_0021C2A8:
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_0021C2B8:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C2A8u | kUnwind; return; } goto L_0021C2A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 7u);
    set32(c.r[9], c.r[9].w[0] - 9136u);
    set32(c.r[10], 0u + 62u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C33Cu); set32(c.r[11], c.r[11].w[0] - 9160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C33Cu) [[unlikely]] return; }
L_0021C33C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C350u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 17u, depth + 1u); else { c.pc = 0x0021C290u; return; } if (c.pc != 0x0021C350u) [[unlikely]] return; }
L_0021C350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021C370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0021C380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021C3DC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0021C3C8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021C3C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C3C4u) [[unlikely]] return; }
L_0021C3C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0021C3C8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021C3E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021C3DCu) [[unlikely]] return; }
L_0021C3DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C400:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0021C410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C428u); set32(c.r[4], 0u + 13324u);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x0021C428u) [[unlikely]] return; }
L_0021C428:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0021C440; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C43Cu); set32(c.r[5], 0u + 25600u);  if (depth < kMaxDepth) unit_0047(c, 30u, depth + 1u); else { c.pc = 0x0021C460u; return; } if (c.pc != 0x0021C43Cu) [[unlikely]] return; }
L_0021C43C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0021C440:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 15888u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 6400u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] - 6448u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16080u);
    set32(c.r[6], c.r[6].w[0] - 16368u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[7], 0u + 52u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4C0u); set32(c.r[8], 0u + 256u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0021C4C0u) [[unlikely]] return; }
L_0021C4C0:
    st32((c.r[17].w[0] + 13320u), c.r[16].w[0]);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 3;
L_0021C4CC:
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4F4u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0047(c, 8u, depth + 1u); else { c.pc = 0x0021C0D0u; return; } if (c.pc != 0x0021C4F4u) [[unlikely]] return; }
L_0021C4F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C4CCu | kUnwind; return; } goto L_0021C4CC; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021C570; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6448u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0021C554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15888u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0021C554:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021C56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C56Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021C56Cu) [[unlikely]] return; }
L_0021C56C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021C570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C580:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001002D0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 25u, depth); }
L_0021C590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021C5A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5A4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0021C5A4u) [[unlikely]] return; }
L_0021C5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C5B0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[5], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001002C0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 24u, depth); }
L_0021C5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021C5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021C5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0021C610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021C6A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] - 6400u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16368u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C650u); set32(c.r[7], 0u + 256u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0021C650u) [[unlikely]] return; }
L_0021C650:
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021C678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6448u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0021C678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15888u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0021C678:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0021C690; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15888u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0021C690:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021C6A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021C6A4u) [[unlikely]] return; }
L_0021C6A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C724; } }
    c.r[2].d[0] = c.r[7].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 7u);  goto L_0021C728; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0021C724; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0021C724; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0021C724:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0021C728:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[18].w[0] + 4u)));  goto L_0021C770; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0021C76C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021C76C; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021C76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C764u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 52u, depth + 1u); else { c.pc = 0x0021C7D0u; return; } if (c.pc != 0x0021C764u) [[unlikely]] return; }
L_0021C764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021C784; } }
L_0021C76C:
    set32(c.r[25], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0021C770:
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C780u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C780u) [[unlikely]] return; }
L_0021C780:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021C784:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0021C7AC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C7A8; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 71u, depth + 1u); else { c.pc = 0x0021CC20u; return; } if (c.pc != 0x0021C7A4u) [[unlikely]] return; }
L_0021C7A4:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_0021C7A8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0021C7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021C7D0:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BD90u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 367u, depth); }
L_0021C800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021C89C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;  goto L_0021C864; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021C860; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_0021C860; } }
    set32(c.r[18], c.r[18].w[0] - 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C85Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 70u, depth + 1u); else { c.pc = 0x0021CBF0u; return; } if (c.pc != 0x0021C85Cu) [[unlikely]] return; }
L_0021C85C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021C860:
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0021C864:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 4u)));  goto L_0021C884; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C87Cu); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 57u, depth + 1u); else { c.pc = 0x0021C8C0u; return; } if (c.pc != 0x0021C87Cu) [[unlikely]] return; }
L_0021C87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0021C8A0; } }
L_0021C884:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C89Cu); set32(c.r[4], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C89Cu) [[unlikely]] return; }
L_0021C89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021C8A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021C8C0:
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BD30u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 362u, depth); }
L_0021C8F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 21;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021C978; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0021C97C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0021C978; } }
    c.r[2].d[0] = c.r[22].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C978; } }
    set32(c.r[20], c.r[20].w[0] - 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C974u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 70u, depth + 1u); else { c.pc = 0x0021CBF0u; return; } if (c.pc != 0x0021C974u) [[unlikely]] return; }
L_0021C974:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021C978:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0021C97C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0021C9BC; } }
    c.r[2].d[0] = c.r[22].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0021C9C0; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0021C9BC; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0021C9BC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0021C9BC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021C9C0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 7u);  goto L_0021C9F0; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021C9EC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0021C9EC; } }
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] + 16u);  if (t) { goto L_0021CB14; } }
L_0021C9EC:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0021C9F0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  goto L_0021CAB0; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0021CAAC; } }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0021CA24; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021CAAC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0021CA24:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 176u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA58u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA58u) [[unlikely]] return; }
L_0021CA58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0021CAEC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[17].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[20].w[0] + 16u);  if (t) { goto L_0021CA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021CA84u) [[unlikely]] return; }
L_0021CA84:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAA4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CAA4u) [[unlikely]] return; }
L_0021CAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CAEC; } }
L_0021CAAC:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_0021CAB0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAE8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CAE8u) [[unlikely]] return; }
L_0021CAE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021CAEC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021CB14; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0021CB10; } }
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 71u, depth + 1u); else { c.pc = 0x0021CC20u; return; } if (c.pc != 0x0021CB0Cu) [[unlikely]] return; }
L_0021CB0C:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_0021CB10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021CB14:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0021CB50:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CB70:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CB90:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CBB0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CBD0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021CBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    st8((c.r[29].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] << 48;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 13u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 14u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 15u)));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CC60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (t) { goto L_0021CC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021CD04; } }
L_0021CC98:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_0021CCB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021CCB8; } }
L_0021CCB0:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_0021CCB8:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCD4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 201u, depth + 1u); else { c.pc = 0x003BDAD0u; return; } if (c.pc != 0x0021CCD4u) [[unlikely]] return; }
L_0021CCD4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);  goto L_0021CD00; }
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021CCFC; } }
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021CCFC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021CCFC:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0021CD00:
    st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021CD04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0021CD20:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0021CD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021CD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD64u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0021CD64u) [[unlikely]] return; }
L_0021CD64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021CD80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021CD7Cu) [[unlikely]] return; }
L_0021CD7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021CD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021CDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CDC0u) [[unlikely]] return; }
L_0021CDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDC8u); set32(c.r[4], ld32((c.r[28].w[0] - 28664u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021CDC8u) [[unlikely]] return; }
L_0021CDC8:
    st32((c.r[28].w[0] - 28664u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDF0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x0021CDF0u) [[unlikely]] return; }
L_0021CDF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDFCu); st32((c.r[28].w[0] - 28664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 22u, depth + 1u); else { c.pc = 0x0021C370u; return; } if (c.pc != 0x0021CDFCu) [[unlikely]] return; }
L_0021CDFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28664u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CE1Cu) [[unlikely]] return; }
L_0021CE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021CE60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE60u); set32(c.r[8], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CE60u) [[unlikely]] return; }
L_0021CE60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CE70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021CEA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEA0u); set32(c.r[7], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CEA0u) [[unlikely]] return; }
L_0021CEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021CEC4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0021CEC4:
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[8], 0u + 2u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEFCu); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CEFCu) [[unlikely]] return; }
L_0021CEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 36u), c.r[5].w[0]);  if (t) { goto L_0021CF2C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0021CF2C:
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF38u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 106u, depth + 1u); else { c.pc = 0x0021D160u; return; } if (c.pc != 0x0021CF38u) [[unlikely]] return; }
L_0021CF38:
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF74u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CF74u) [[unlikely]] return; }
L_0021CF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021CF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021CFC0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 10u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CFC0u); set32(c.r[8], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CFC0u) [[unlikely]] return; }
L_0021CFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021D000; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 9u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D000u); set32(c.r[8], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D000u) [[unlikely]] return; }
L_0021D000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021D010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0021D038; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021D038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021D030u) [[unlikely]] return; }
L_0021D030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D090; } }
L_0021D038:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 16u);  goto L_0021D054; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D04Cu); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0021D04Cu) [[unlikely]] return; }
L_0021D04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021D094; } }
L_0021D054:
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[10], 0u - 1u);
    st64((c.r[29].w[0]), c.r[10].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), 0ull);
    set32(c.r[6], c.r[29].w[0] + 44u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[7], c.r[29].w[0] + 40u);
    set32(c.r[9], 0u + 6u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D090u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D090u) [[unlikely]] return; }
L_0021D090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021D094:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021D0B4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0021D0B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[6], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[8], 0u + 7u);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0E8u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D0E8u) [[unlikely]] return; }
L_0021D0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021D100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021D114; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0021D114:
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[8], 0u + 5u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D14Cu); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D14Cu) [[unlikely]] return; }
L_0021D14C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021D160:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0021D180:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);  goto L_0021D198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_0021D19C; } }
L_0021D198:
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0021D19C:
    set32(c.r[7], ld32((c.r[28].w[0] - 30764u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D1C4; } }
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D1C4; } }
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0021D1C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021D1D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0021D1F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021D1F8; } }
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 2;
L_0021D1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021D200:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_0021D210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021D244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D2D8; } }
L_0021D244:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_0021D2A0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30768u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D268u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D268u) [[unlikely]] return; }
L_0021D268:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0021D278u) [[unlikely]] return; }
L_0021D278:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D28Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021D28Cu) [[unlikely]] return; }
L_0021D28C:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021D298u) [[unlikely]] return; }
L_0021D298:
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 2;
L_0021D2A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2B4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021D2B4u) [[unlikely]] return; }
L_0021D2B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021D2D8; }
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0021D2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021D300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021D330; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021D330:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D344u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021D344u) [[unlikely]] return; }
L_0021D344:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0021D380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D3F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0021D3D0; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021D3CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D3CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021D3CCu) [[unlikely]] return; }
L_0021D3CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D3D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 323u, depth + 1u); else { c.pc = 0x0021B790u; return; } if (c.pc != 0x0021D3D8u) [[unlikely]] return; }
L_0021D3D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021D3F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D3F4u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021D3F4u) [[unlikely]] return; }
L_0021D3F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 325u, depth + 1u); else { c.pc = 0x0021B7E0u; return; } if (c.pc != 0x0021D424u) [[unlikely]] return; }
L_0021D424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1024u);
    set32(c.r[2], c.r[2].w[0] - 6352u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D440u); st32((c.r[16].w[0] + 28u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0021D440u) [[unlikely]] return; }
L_0021D440:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D468u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D468u) [[unlikely]] return; }
L_0021D468:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021D480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4A4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 325u, depth + 1u); else { c.pc = 0x0021B7E0u; return; } if (c.pc != 0x0021D4A4u) [[unlikely]] return; }
L_0021D4A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 6352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4E0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D4E0u) [[unlikely]] return; }
L_0021D4E0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021D500:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);  goto L_0021D524; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 10752u);
    set32(c.r[3], c.r[3].w[0] - 10944u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0021D538; } }
L_0021D524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 10608u);
    set32(c.r[3], c.r[3].w[0] - 10624u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
L_0021D538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021D540:
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
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0021D580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D5D8; } }
L_0021D580:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D58Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0021D58Cu) [[unlikely]] return; }
L_0021D58C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5A0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021D5A0u) [[unlikely]] return; }
L_0021D5A0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5B4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 313u, depth + 1u); else { c.pc = 0x0021B520u; return; } if (c.pc != 0x0021D5B4u) [[unlikely]] return; }
L_0021D5B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 110u, depth + 1u); else { c.pc = 0x0021D210u; return; } if (c.pc != 0x0021D5C4u) [[unlikely]] return; }
L_0021D5C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021D5D4u) [[unlikely]] return; }
L_0021D5D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021D5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021D600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0021D638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D65C; } }
L_0021D638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D640u);  if (depth < kMaxDepth) unit_0047(c, 116u, depth + 1u); else { c.pc = 0x0021D300u; return; } if (c.pc != 0x0021D640u) [[unlikely]] return; }
L_0021D640:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D658u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 313u, depth + 1u); else { c.pc = 0x0021B520u; return; } if (c.pc != 0x0021D658u) [[unlikely]] return; }
L_0021D658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021D65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021D680:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D210u | kUnwind; return; } goto L_0021D210; }
L_0021D690:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D300u | kUnwind; return; } goto L_0021D300; }
L_0021D6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021D6D0:
    set32(c.r[29], c.r[29].w[0] - 2160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D700u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x0021D700u) [[unlikely]] return; }
L_0021D700:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0021D8BC; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0021D834; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0021D7A4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0021D744; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_0021D93C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D930; } }
L_0021D744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D74Cu); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D74Cu) [[unlikely]] return; }
L_0021D74C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D75C; }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0021D75C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D76Cu); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D76Cu) [[unlikely]] return; }
L_0021D76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D77Cu); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D77Cu) [[unlikely]] return; }
L_0021D77C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D78C; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D78C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D79Cu); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D79Cu) [[unlikely]] return; }
L_0021D79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0021D938; } }
L_0021D7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7ACu); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D7ACu) [[unlikely]] return; }
L_0021D7AC:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D7BC; }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0021D7BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7CCu); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D7CCu) [[unlikely]] return; }
L_0021D7CC:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7D8u); set32(c.r[4], c.r[18].w[0] + 268u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D7D8u) [[unlikely]] return; }
L_0021D7D8:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D7E8; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D7E8:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7F4u); set32(c.r[5], c.r[18].w[0] + 268u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D7F4u) [[unlikely]] return; }
L_0021D7F4:
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D804u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x0021D804u) [[unlikely]] return; }
L_0021D804:
    set32(c.r[19], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D810u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D810u) [[unlikely]] return; }
L_0021D810:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D820; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D820:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D82Cu); set32(c.r[4], c.r[29].w[0] + 1891u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D82Cu) [[unlikely]] return; }
L_0021D82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0021D938; } }
L_0021D834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D83Cu); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D83Cu) [[unlikely]] return; }
L_0021D83C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D84C; }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0021D84C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D85Cu); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D85Cu) [[unlikely]] return; }
L_0021D85C:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D868u); set32(c.r[4], c.r[18].w[0] + 268u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D868u) [[unlikely]] return; }
L_0021D868:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D878; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D878:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D884u); set32(c.r[5], c.r[18].w[0] + 268u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D884u) [[unlikely]] return; }
L_0021D884:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D894u); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D894u) [[unlikely]] return; }
L_0021D894:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D8A4; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D8A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1891u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D8B4u); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D8B4u) [[unlikely]] return; }
L_0021D8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0021D938; } }
L_0021D8BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 11936u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D92C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D8D4u); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D8D4u) [[unlikely]] return; }
L_0021D8D4:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D8E4; }
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0021D8E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D8F4u); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D8F4u) [[unlikely]] return; }
L_0021D8F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D904u); set32(c.r[4], c.r[4].w[0] + 11936u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D904u) [[unlikely]] return; }
L_0021D904:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D914; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D914:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D924u); set32(c.r[5], c.r[5].w[0] + 11936u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D924u) [[unlikely]] return; }
L_0021D924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0021D938; } }
L_0021D92C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021D930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0021D964; } }
L_0021D938:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021D93C:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D948u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 315u, depth + 1u); else { c.pc = 0x0021ED80u; return; } if (c.pc != 0x0021D948u) [[unlikely]] return; }
L_0021D948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D950u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x0021D950u) [[unlikely]] return; }
L_0021D950:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_0021D964:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2160u);  c.pc = t; return; }
L_0021D980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0021D990:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021DA38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(0u));  goto L_0021DA3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9B8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x0021D9B8u) [[unlikely]] return; }
L_0021D9B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9C4u); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D9C4u) [[unlikely]] return; }
L_0021D9C4:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021D9D4; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021D9D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 547u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9E4u); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021D9E4u) [[unlikely]] return; }
L_0021D9E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D9F4u); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021D9F4u) [[unlikely]] return; }
L_0021D9F4:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0021DA04; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_0021DA04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 291u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA14u); set32(c.r[5], c.r[5].w[0] + 7448u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021DA14u) [[unlikely]] return; }
L_0021DA14:
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 268u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA28u); set32(c.r[6], 0u + 260u);  if (depth < kMaxDepth) unit_0047(c, 315u, depth + 1u); else { c.pc = 0x0021ED80u; return; } if (c.pc != 0x0021DA28u) [[unlikely]] return; }
L_0021DA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA30u); set32(c.r[4], c.r[16].w[0] + 268u);  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x0021DA30u) [[unlikely]] return; }
L_0021DA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021DA40; } }
L_0021DA38:
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021DA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021DA40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_0021DA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021DA90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));  goto L_0021DA94; }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA7Cu); set32(c.r[6], 0u + 259u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021DA7Cu) [[unlikely]] return; }
L_0021DA7C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA88u); st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x0021DA88u) [[unlikely]] return; }
L_0021DA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021DA98; } }
L_0021DA90:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021DA94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021DA98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021DAEC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 6320u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0021DAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DAE8u); set32(c.r[5], 0u + 528u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021DAE8u) [[unlikely]] return; }
L_0021DAE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021DAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DB00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6320u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0021DB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28648u));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0021DB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 28652u)));  if (t) { goto L_0021DB5C; } }
L_0021DB40:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DB58u) [[unlikely]] return; }
L_0021DB58:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021DB5C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28656u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DB40u | kUnwind; return; } goto L_0021DB40; }
    st32((c.r[28].w[0] - 28652u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0021DB74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DB80:
    set32(c.r[3], ld32((c.r[28].w[0] - 28656u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], c.r[7].w[0] + 12208u);
    set32(c.r[6], c.r[6].w[0] + 12272u);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 28656u), c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0021DBC0:
    st32((c.r[28].w[0] - 28644u), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28640u), c.r[5].w[0]);  c.pc = t; return; }
L_0021DBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28656u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_0021DC04; } }
L_0021DBE8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DC00u) [[unlikely]] return; }
L_0021DC00:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0021DC04:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DBE8u | kUnwind; return; } goto L_0021DBE8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 28652u), 0u);  if (t) { goto L_0021DC20; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DC20u) [[unlikely]] return; }
L_0021DC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC28u);  if (depth < kMaxDepth) unit_0047(c, 200u, depth + 1u); else { c.pc = 0x0021DCD0u; return; } if (c.pc != 0x0021DC28u) [[unlikely]] return; }
L_0021DC28:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28632u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[28].w[0] - 28648u), static_cast<std::uint8_t>(0u));  goto L_0021DC44; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28636u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 23u, depth + 1u); else { c.pc = 0x0021C380u; return; } if (c.pc != 0x0021DC40u) [[unlikely]] return; }
L_0021DC40:
    st8((c.r[28].w[0] - 28648u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021DC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021DC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC74u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x0021DC74u) [[unlikely]] return; }
L_0021DC74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0021DC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 27u, depth + 1u); else { c.pc = 0x0021C410u; return; } if (c.pc != 0x0021DC84u) [[unlikely]] return; }
L_0021DC84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021DC88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28632u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0021DC98; } }
L_0021DC94:
    st8((c.r[28].w[0] - 28632u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021DC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCA0u); st32((c.r[28].w[0] - 28636u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0047(c, 204u, depth + 1u); else { c.pc = 0x0021DD10u; return; } if (c.pc != 0x0021DCA0u) [[unlikely]] return; }
L_0021DCA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28644u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021DCB8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DCB4u) [[unlikely]] return; }
L_0021DCB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021DCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCC0u); st8((c.r[28].w[0] - 28648u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 183u, depth + 1u); else { c.pc = 0x0021DB20u; return; } if (c.pc != 0x0021DCC0u) [[unlikely]] return; }
L_0021DCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021DCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28628u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0021DD04; }
    st8((c.r[28].w[0] - 28628u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCF0u);  if (depth < kMaxDepth) unit_0047(c, 222u, depth + 1u); else { c.pc = 0x0021DEF0u; return; } if (c.pc != 0x0021DCF0u) [[unlikely]] return; }
L_0021DCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCF8u);  if (depth < kMaxDepth) unit_0047(c, 325u, depth + 1u); else { c.pc = 0x0021EEA0u; return; } if (c.pc != 0x0021DCF8u) [[unlikely]] return; }
L_0021DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD00u);  if (depth < kMaxDepth) unit_0047(c, 78u, depth + 1u); else { c.pc = 0x0021CDA0u; return; } if (c.pc != 0x0021DD00u) [[unlikely]] return; }
L_0021DD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021DD04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021DD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28628u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0021DD48; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28628u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD34u);  if (depth < kMaxDepth) unit_0047(c, 81u, depth + 1u); else { c.pc = 0x0021CDE0u; return; } if (c.pc != 0x0021DD34u) [[unlikely]] return; }
L_0021DD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD3Cu);  if (depth < kMaxDepth) unit_0047(c, 326u, depth + 1u); else { c.pc = 0x0021EEB0u; return; } if (c.pc != 0x0021DD3Cu) [[unlikely]] return; }
L_0021DD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD44u);  if (depth < kMaxDepth) unit_0047(c, 223u, depth + 1u); else { c.pc = 0x0021DF10u; return; } if (c.pc != 0x0021DD44u) [[unlikely]] return; }
L_0021DD44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021DD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021DD50:
    c.budget -= 2;
    {  goto L_0021EEF0; }
L_0021DD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021DD94; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021DD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD90u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0021DD90u) [[unlikely]] return; }
L_0021DD90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021DD94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0021DE04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DDDCu); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021DDDCu) [[unlikely]] return; }
L_0021DDDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DDF4u); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021DDF4u) [[unlikely]] return; }
L_0021DDF4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0021DE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE04u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0021DE04u) [[unlikely]] return; }
L_0021DE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021DE08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 134u, depth + 1u); else { c.pc = 0x00398D10u; return; } if (c.pc != 0x0021DE3Cu) [[unlikely]] return; }
L_0021DE3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_0021DE80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021DE54u) [[unlikely]] return; }
L_0021DE54:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE68u); c.r[17].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021DE68u) [[unlikely]] return; }
L_0021DE68:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[18].w[0]);  goto L_0021DE7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE78u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0021DE78u) [[unlikely]] return; }
L_0021DE78:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0021DE7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0021DE80:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021DEA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DEC0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0021DEC0u) [[unlikely]] return; }
L_0021DEC0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021DEF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28612u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0021DF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28612u), 0u);  c.pc = t; return; }
L_0021DF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021DF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021DF40:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0021DF58; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021DF58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021DF84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0021DFB0; } }
L_0021DF84:
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_0021DFB4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DF9Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 235u, depth + 1u); else { c.pc = 0x0021E0B0u; return; } if (c.pc != 0x0021DF9Cu) [[unlikely]] return; }
L_0021DF9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021DFB0; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021DFB8; } }
L_0021DFB0:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_0021DFB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021DFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 8;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_0021E010; }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DFFCu); set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0021DFFCu) [[unlikely]] return; }
L_0021DFFC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[17].w[0] + 24u), 0u);  goto L_0021E09C; }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E09C; } }
L_0021E010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + 12368u);
    set32(c.r[16], c.r[3].w[0] >> 11);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E040u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021E040u) [[unlikely]] return; }
L_0021E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E048u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x0021E048u) [[unlikely]] return; }
L_0021E048:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E068u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00A9(c, 261u, depth + 1u); else { c.pc = 0x003A6660u; return; } if (c.pc != 0x0021E068u) [[unlikely]] return; }
L_0021E068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E07Cu); st32((c.r[28].w[0] - 28620u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021E07Cu) [[unlikely]] return; }
L_0021E07C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0021E098; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E09C; } }
L_0021E098:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_0021E09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E0B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  [[clang::musttail]] return unit_00A7(c, 281u, depth); }
L_0021E0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021E1A0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E174; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0021E138; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E120u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021E120u) [[unlikely]] return; }
L_0021E120:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[17].w[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
L_0021E138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E140u);  if (depth < kMaxDepth) unit_0047(c, 227u, depth + 1u); else { c.pc = 0x0021DF60u; return; } if (c.pc != 0x0021E140u) [[unlikely]] return; }
L_0021E140:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_0021E150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E1A4; } }
L_0021E150:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 28u)));  goto L_0021E178; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E16Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 235u, depth + 1u); else { c.pc = 0x0021E0B0u; return; } if (c.pc != 0x0021E16Cu) [[unlikely]] return; }
L_0021E16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0021E1A4; } }
L_0021E174:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_0021E178:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E18Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021E18Cu) [[unlikely]] return; }
L_0021E18C:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0021E1A4; } }
L_0021E1A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E1A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021E1D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021E208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E294; } }
L_0021E208:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 40u)));  goto L_0021E28C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_0021E224:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    mmi::pminw(c.r[16], c.r[18], c.r[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E24Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0021E24Cu) [[unlikely]] return; }
L_0021E24C:
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0021E268; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0021E278; } }
L_0021E268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E270u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 229u, depth + 1u); else { c.pc = 0x0021DFD0u; return; } if (c.pc != 0x0021E270u) [[unlikely]] return; }
L_0021E270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E224u | kUnwind; return; } goto L_0021E224; } }
L_0021E278:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0021E294; } }
L_0021E28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E294u);  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0021E294u) [[unlikely]] return; }
L_0021E294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021E2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021E488; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], 0u + 1u);  goto L_0021E360; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021E338; }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_0021E32C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021E328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_0021E488; } }
L_0021E328:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0021E32C:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0021E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E340u);  if (depth < kMaxDepth) unit_0047(c, 227u, depth + 1u); else { c.pc = 0x0021DF60u; return; } if (c.pc != 0x0021E340u) [[unlikely]] return; }
L_0021E340:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E350u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0021E350u) [[unlikely]] return; }
L_0021E350:
    c.r[3].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021E488; } }
L_0021E360:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0] + 60u), c.r[17].w[0]);  goto L_0021E374; }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
L_0021E374:
    set32(c.r[8], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[8].w[0] >> 11);
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] >> 11);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 24u), 0u);  goto L_0021E3C4; }
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021E3C0; } }
    set32(c.r[3], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[8].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0021E488; } }
L_0021E3C0:
    st32((c.r[18].w[0] + 24u), 0u);
    c.budget -= 1;
L_0021E3C4:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[16], c.r[3].w[0] >> 11);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021E3F0; } }
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 56u)));  goto L_0021E470; }
L_0021E3F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E3FCu); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021E3FCu) [[unlikely]] return; }
L_0021E3FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28620u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0021E414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E410u);  if (depth < kMaxDepth) unit_00A9(c, 284u, depth + 1u); else { c.pc = 0x003A6998u; return; } if (c.pc != 0x0021E410u) [[unlikely]] return; }
L_0021E410:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E41Cu);  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x0021E41Cu) [[unlikely]] return; }
L_0021E41C:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] >> 11);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E44Cu); set32(c.r[7], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_00A9(c, 261u, depth + 1u); else { c.pc = 0x003A6660u; return; } if (c.pc != 0x0021E44Cu) [[unlikely]] return; }
L_0021E44C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E460u); st32((c.r[28].w[0] - 28620u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021E460u) [[unlikely]] return; }
L_0021E460:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0021E46C; } }
    st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021E46C:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_0021E470:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 6;
L_0021E488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021E4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021E55C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6288u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0021E4F8; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30760u)));  goto L_0021E524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4E8u);  if (depth < kMaxDepth) unit_0047(c, 227u, depth + 1u); else { c.pc = 0x0021DF60u; return; } if (c.pc != 0x0021E4E8u) [[unlikely]] return; }
L_0021E4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4F0u); set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x0039E438u; return; } if (c.pc != 0x0021E4F0u) [[unlikely]] return; }
L_0021E4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E520; } }
L_0021E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E500u); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021E500u) [[unlikely]] return; }
L_0021E500:
    set32(c.r[2], ld32((c.r[28].w[0] - 28620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0021E514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E514u);  if (depth < kMaxDepth) unit_00A9(c, 284u, depth + 1u); else { c.pc = 0x003A6998u; return; } if (c.pc != 0x0021E514u) [[unlikely]] return; }
L_0021E514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E520u); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021E520u) [[unlikely]] return; }
L_0021E520:
    set32(c.r[4], ld32((c.r[28].w[0] - 30760u)));
    c.budget -= 1;
L_0021E524:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E534u); set32(c.r[5], ld32((c.r[17].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E534u) [[unlikely]] return; }
L_0021E534:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 323u, depth + 1u); else { c.pc = 0x0021B790u; return; } if (c.pc != 0x0021E540u) [[unlikely]] return; }
L_0021E540:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021E560; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E55Cu); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021E55Cu) [[unlikely]] return; }
L_0021E55C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021E560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[4].w[0] + 36u), c.r[6].w[0]);  if (t) { goto L_0021E5E8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021E5F4; } }
L_0021E5E8:
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0021E5F4:
    set32(c.r[3], c.r[16].w[0] << 11);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0021E680; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30760u)));
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E624u); set32(c.r[6], c.r[2].w[0] << 1);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E624u) [[unlikely]] return; }
L_0021E624:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 12368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E640u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021E640u) [[unlikely]] return; }
L_0021E640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E648u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x0021E648u) [[unlikely]] return; }
L_0021E648:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E65Cu); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00A9(c, 261u, depth + 1u); else { c.pc = 0x003A6660u; return; } if (c.pc != 0x0021E65Cu) [[unlikely]] return; }
L_0021E65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E668; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0021E668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28620u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E678u); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021E678u) [[unlikely]] return; }
L_0021E678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021E68C; } }
L_0021E680:
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_0021E68C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E6A0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0046(c, 325u, depth + 1u); else { c.pc = 0x0021B7E0u; return; } if (c.pc != 0x0021E6D0u) [[unlikely]] return; }
L_0021E6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6288u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6ECu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E6ECu) [[unlikely]] return; }
L_0021E6EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 4928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E700u); st32((c.r[20].w[0] + 68u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0021E700u) [[unlikely]] return; }
L_0021E700:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E70Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021E70Cu) [[unlikely]] return; }
L_0021E70C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E718u); set32(c.r[5], c.r[28].w[0] - 28616u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021E718u) [[unlikely]] return; }
L_0021E718:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 514u);  goto L_0021E738; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 1538u);  goto L_0021E738; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0021E738; }
L_0021E738:
    c.r[2].d[0] = c.r[16].d[0] ^ 1ull;
    st32((c.r[20].w[0] + 44u), 0u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 28u), 0u);  if (t) { goto L_0021E760; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E758u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0021E758u) [[unlikely]] return; }
L_0021E758:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0021E760:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0021E808; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28612u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0021E7B0; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 288u, depth + 1u); else { c.pc = 0x0021E8E0u; return; } if (c.pc != 0x0021E780u) [[unlikely]] return; }
L_0021E780:
    set32(c.r[5], ld32((c.r[28].w[0] - 28612u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 28608u)));
    set32(c.r[4], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7A0u); set32(c.r[8], c.r[8].w[0] - 8384u);  if (depth < kMaxDepth) unit_00AD(c, 223u, depth + 1u); else { c.pc = 0x003B68D8u; return; } if (c.pc != 0x0021E7A0u) [[unlikely]] return; }
L_0021E7A0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0021E7E4; } }
L_0021E7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7B8u); set32(c.r[4], c.r[4].w[0] + 12368u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021E7B8u) [[unlikely]] return; }
L_0021E7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x0021E7C0u) [[unlikely]] return; }
L_0021E7C0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7CCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A9(c, 163u, depth + 1u); else { c.pc = 0x003A5A18u; return; } if (c.pc != 0x0021E7CCu) [[unlikely]] return; }
L_0021E7CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7E0u); st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021E7E0u) [[unlikely]] return; }
L_0021E7E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_0021E7E4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 72u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0021E880; }
    set32(c.r[6], c.r[17].w[0] >> 11);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E800u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 263u, depth + 1u); else { c.pc = 0x0021E580u; return; } if (c.pc != 0x0021E800u) [[unlikely]] return; }
L_0021E800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E87C; } }
L_0021E808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E810u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00A7(c, 215u, depth + 1u); else { c.pc = 0x0039E1A8u; return; } if (c.pc != 0x0021E810u) [[unlikely]] return; }
L_0021E810:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 24u), 0u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 72u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E87C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0021E87C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30760u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E85Cu); set32(c.r[5], 0u + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E85Cu) [[unlikely]] return; }
L_0021E85C:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0021E87C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E87Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0021E87Cu) [[unlikely]] return; }
L_0021E87C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021E880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0021E8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 325u, depth + 1u); else { c.pc = 0x0021B7E0u; return; } if (c.pc != 0x0021E8B4u) [[unlikely]] return; }
L_0021E8B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 6288u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021E8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 59u);  if (t) { goto L_0021E8FC; } }
L_0021E8E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_0021E8FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0021E914; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[5].w[0] << 10);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E8E8u | kUnwind; return; } goto L_0021E8E8; }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0021E914:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021E950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021EB2C; } }
L_0021E950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0021E960; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0021E960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));  goto L_0021E9A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E974u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021E974u) [[unlikely]] return; }
L_0021E974:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E99C; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E99C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021E99C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 1;
L_0021E9A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 515u)));  goto L_0021E9DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9B0u); set32(c.r[4], c.r[19].w[0] + 771u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021E9B0u) [[unlikely]] return; }
L_0021E9B0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 770u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E9D8; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E9D8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021E9D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 515u)));
    c.budget -= 1;
L_0021E9DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 259u)));  goto L_0021E9F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9ECu); set32(c.r[4], c.r[19].w[0] + 515u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021E9ECu) [[unlikely]] return; }
L_0021E9EC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 259u)));
    c.budget -= 2;
L_0021E9F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_0021EA20; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 259u);  goto L_0021EA10; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] + 259u);
    c.budget -= 2;
L_0021EA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA18u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021EA18u) [[unlikely]] return; }
L_0021EA18:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021EA20:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  goto L_0021EA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021EB2C; } }
L_0021EA30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 256u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_0021EA50; }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 58u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 5;
L_0021EA50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));  goto L_0021EA98; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021EA64u) [[unlikely]] return; }
L_0021EA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021EA6Cu) [[unlikely]] return; }
L_0021EA6C:
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021EA94; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021EA94; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0021EA94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 771u)));
    c.budget -= 1;
L_0021EA98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 515u)));  goto L_0021EAE0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAACu); set32(c.r[5], c.r[19].w[0] + 771u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021EAACu) [[unlikely]] return; }
L_0021EAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021EAB4u) [[unlikely]] return; }
L_0021EAB4:
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021EADC; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021EADC; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0021EADC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 515u)));
    c.budget -= 1;
L_0021EAE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 259u)));  goto L_0021EAF8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAF4u); set32(c.r[5], c.r[19].w[0] + 515u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021EAF4u) [[unlikely]] return; }
L_0021EAF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 259u)));
    c.budget -= 1;
L_0021EAF8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021EB2C; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0021EB20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB1Cu); set32(c.r[5], c.r[5].w[0] + 7464u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021EB1Cu) [[unlikely]] return; }
L_0021EB1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0021EB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB28u); set32(c.r[5], c.r[19].w[0] + 259u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x0021EB28u) [[unlikely]] return; }
L_0021EB28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021EB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021EB50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 259u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0021ECDC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB98u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021EB98u) [[unlikely]] return; }
L_0021EB98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0021ECE0; }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 92u);  goto L_0021EBD8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[3], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021EBD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[19], 0u + 2u);
    st8((c.r[21].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 257u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 258u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0021EBD4:
    set32(c.r[4], 0u + 92u);
    c.budget -= 1;
L_0021EBD8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBE4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 312u, depth + 1u); else { c.pc = 0x0021ED00u; return; } if (c.pc != 0x0021EBE4u) [[unlikely]] return; }
L_0021EBE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 47u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBF8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 312u, depth + 1u); else { c.pc = 0x0021ED00u; return; } if (c.pc != 0x0021EBF8u) [[unlikely]] return; }
L_0021EBF8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 47u);  goto L_0021EC1C; }
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC14u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 312u, depth + 1u); else { c.pc = 0x0021ED00u; return; } if (c.pc != 0x0021EC14u) [[unlikely]] return; }
L_0021EC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EC2C; } }
L_0021EC1C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC28u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 312u, depth + 1u); else { c.pc = 0x0021ED00u; return; } if (c.pc != 0x0021EC28u) [[unlikely]] return; }
L_0021EC28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021EC2C:
    set32(c.r[4], 0u + 46u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC3Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 312u, depth + 1u); else { c.pc = 0x0021ED00u; return; } if (c.pc != 0x0021EC3Cu) [[unlikely]] return; }
L_0021EC3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0021EC7C; }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021EC78; } }
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC64u); set32(c.r[4], c.r[21].w[0] + 259u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0021EC64u) [[unlikely]] return; }
L_0021EC64:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_0021EC78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EC78; } }
L_0021EC78:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0021EC7C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[18].w[0] - c.r[19].w[0]);  goto L_0021ECB8; }
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[5], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0021EC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0021ECA0; } }
L_0021EC9C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021ECA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021ECA8u) [[unlikely]] return; }
L_0021ECA8:
    set32(c.r[2], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[19], c.r[16].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 4;
L_0021ECB8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[5], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0021ECC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0021ECCC; } }
L_0021ECC8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021ECCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECD4u); set32(c.r[4], c.r[21].w[0] + 515u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0021ECD4u) [[unlikely]] return; }
L_0021ECD4:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 515u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0021ECDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0021ECE0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021ED00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0021ED28u) [[unlikely]] return; }
L_0021ED28:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_0021ED4C; } }
L_0021ED38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0021ED4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021ED60; } }
L_0021ED4C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021ED38u | kUnwind; return; } goto L_0021ED38; }
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0021ED60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021ED80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E920u | kUnwind; return; } goto L_0021E920; }
L_0021ED90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDA8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 302u, depth + 1u); else { c.pc = 0x0021EB50u; return; } if (c.pc != 0x0021EDA8u) [[unlikely]] return; }
L_0021EDA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021EDD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 10u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0047[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021EE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], 0u + 7u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28664u)));
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[10], 0u - 1u);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE40u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EE40u) [[unlikely]] return; }
L_0021EE40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EE50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AE(c, 259u, depth); }
L_0021EE60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AE(c, 141u, depth); }
L_0021EE70:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11940000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_0021EEA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28600u)));
    c.budget -= 3;
    { set32(c.r[5], 0u + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CE70u | kUnwind; return; } goto L_0021CE70; }
L_0021EEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0021EEC4u) [[unlikely]] return; }
L_0021EEC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 28600u), c.r[4].w[0]);  goto L_0021EEE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EED8u);  if (depth < kMaxDepth) unit_0047(c, 324u, depth + 1u); else { c.pc = 0x0021EE70u; return; } if (c.pc != 0x0021EED8u) [[unlikely]] return; }
L_0021EED8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 28600u), c.r[4].w[0]);
    c.budget -= 2;
L_0021EEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021EEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021EF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF10u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A6(c, 144u, depth + 1u); else { c.pc = 0x00398D90u; return; } if (c.pc != 0x0021EF10u) [[unlikely]] return; }
L_0021EF10:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], 0u + 1u);  goto L_0021EF20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021EF44; } }
L_0021EF20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0021EF44; } }
L_0021EF2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0021EF44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EF44; } }
L_0021EF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7472u);  c.pc = t; return; }
L_0021EF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_0021EF9C; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EF94u) [[unlikely]] return; }
L_0021EF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0021EFB4; } }
L_0021EF9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021EFB0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0021EFB0; } }
L_0021EFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021EFB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021EFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_0021EFEC; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EFE4u) [[unlikely]] return; }
L_0021EFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0021F004; } }
L_0021EFEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021F000; }
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0021F000; } }
L_0021F000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021F004:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021F14C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6240u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021F048u) [[unlikely]] return; }
L_0021F048:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0021F054u) [[unlikely]] return; }
L_0021F054:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021F070; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F070u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F070u) [[unlikely]] return; }
L_0021F070:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F07Cu); set32(c.r[4], c.r[4].w[0] + 12400u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021F07Cu) [[unlikely]] return; }
L_0021F07C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28592u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));  goto L_0021F094; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[28].w[0] - 28592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));
    c.budget -= 3;
L_0021F094:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_0021F0A8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[28].w[0] - 28588u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
L_0021F0A8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_0021F0BC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
L_0021F0BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021F0CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F0CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0D8u); set32(c.r[4], c.r[4].w[0] + 12400u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021F0D8u) [[unlikely]] return; }
L_0021F0D8:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0021F128; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0021F124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F0F8u) [[unlikely]] return; }
L_0021F0F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F108u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F108u) [[unlikely]] return; }
L_0021F108:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F124; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F124u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F124u) [[unlikely]] return; }
L_0021F124:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021F128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0021F130u) [[unlikely]] return; }
L_0021F130:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021F150; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F14Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021F14Cu) [[unlikely]] return; }
L_0021F14C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021F150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0021F1AC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 6144u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0021F1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1A8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021F1A8u) [[unlikely]] return; }
L_0021F1A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021F1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021F1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0021F1D4u) [[unlikely]] return; }
L_0021F1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1E0u); set32(c.r[4], ld32((c.r[2].w[0] + 7472u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0021F1E0u) [[unlikely]] return; }
L_0021F1E0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1F4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0021F1F4u) [[unlikely]] return; }
L_0021F1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F210:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 418u, depth); }
L_0021F220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F23Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0021F23Cu) [[unlikely]] return; }
L_0021F23C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0021F268; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F254u); set32(c.r[5], c.r[28].w[0] - 30756u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021F254u) [[unlikely]] return; }
L_0021F254:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 31u, depth + 1u); else { c.pc = 0x003083A0u; return; } if (c.pc != 0x0021F260u) [[unlikely]] return; }
L_0021F260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021F2BC; } }
L_0021F268:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0021F2A4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F27Cu); set32(c.r[5], c.r[28].w[0] - 30752u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021F27Cu) [[unlikely]] return; }
L_0021F27C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F288u); set32(c.r[5], c.r[28].w[0] - 30748u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021F288u) [[unlikely]] return; }
L_0021F288:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F29Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F29Cu) [[unlikely]] return; }
L_0021F29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2B8; } }
L_0021F2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2ACu); set32(c.r[5], c.r[28].w[0] - 30744u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021F2ACu) [[unlikely]] return; }
L_0021F2AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2B8u); set32(c.r[5], c.r[28].w[0] - 30740u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0021F2B8u) [[unlikely]] return; }
L_0021F2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021F2BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x0021F2ECu) [[unlikely]] return; }
L_0021F2EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0021F2FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F32C; } }
L_0021F2FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0021F32C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021F328; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F320u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F320u) [[unlikely]] return; }
L_0021F320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021F330; } }
L_0021F328:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0021F32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021F330:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F360u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x0021F360u) [[unlikely]] return; }
L_0021F360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0021F368u) [[unlikely]] return; }
L_0021F368:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));  goto L_0021F3DC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_0021F3B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F388u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F388u) [[unlikely]] return; }
L_0021F388:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F398u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F398u) [[unlikely]] return; }
L_0021F398:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021F3B4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F3B4u) [[unlikely]] return; }
L_0021F3B4:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_0021F3B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021F3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F3C8u) [[unlikely]] return; }
L_0021F3C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F3D8u) [[unlikely]] return; }
L_0021F3D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 1;
L_0021F3DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0021F3F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 35u, depth + 1u); else { c.pc = 0x00228660u; return; } if (c.pc != 0x0021F3ECu) [[unlikely]] return; }
L_0021F3EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021F3F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F410:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F42Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0021F42Cu) [[unlikely]] return; }
L_0021F42C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F438u); set32(c.r[5], c.r[29].w[0] + 319u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x0021F438u) [[unlikely]] return; }
L_0021F438:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 319u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0021F4D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F450u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0082(c, 35u, depth + 1u); else { c.pc = 0x00308430u; return; } if (c.pc != 0x0021F450u) [[unlikely]] return; }
L_0021F450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F458u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_006A(c, 106u, depth + 1u); else { c.pc = 0x002A8F30u; return; } if (c.pc != 0x0021F458u) [[unlikely]] return; }
L_0021F458:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F46Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 177u, depth + 1u); else { c.pc = 0x0021DA50u; return; } if (c.pc != 0x0021F46Cu) [[unlikely]] return; }
L_0021F46C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F47Cu) [[unlikely]] return; }
L_0021F47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0])));  if (t) { goto L_0021F4AC; } }
L_0021F484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F48Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 334u, depth + 1u); else { c.pc = 0x0021B8E0u; return; } if (c.pc != 0x0021F48Cu) [[unlikely]] return; }
L_0021F48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F4A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4A0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0021F4A0u) [[unlikely]] return; }
L_0021F4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021F4F0; } }
L_0021F4A8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0021F4AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4C0u); set32(c.r[6], 0u + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F4C0u) [[unlikely]] return; }
L_0021F4C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F484u | kUnwind; return; } goto L_0021F484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F4EC; } }
L_0021F4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4D8u); set32(c.r[5], c.r[29].w[0] + 318u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x0021F4D8u) [[unlikely]] return; }
L_0021F4D8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 318u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021F4EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0021F4ECu) [[unlikely]] return; }
L_0021F4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021F4F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0021F500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F524u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0021F524u) [[unlikely]] return; }
L_0021F524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0021F534u) [[unlikely]] return; }
L_0021F534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6240u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_0021F564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F554u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F554u) [[unlikely]] return; }
L_0021F554:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F564u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F564u) [[unlikely]] return; }
L_0021F564:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12400u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F584u); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0021F584u) [[unlikely]] return; }
L_0021F584:
    set32(c.r[2], ld32((c.r[28].w[0] - 28592u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));  goto L_0021F598; }
    st32((c.r[28].w[0] - 28592u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));
    c.budget -= 2;
L_0021F598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_0021F5AC; }
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28588u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_0021F5AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 28588u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 12400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5C0u); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0021F5C0u) [[unlikely]] return; }
L_0021F5C0:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));  goto L_0021F630; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[18].w[0]);  goto L_0021F60C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F5DCu) [[unlikely]] return; }
L_0021F5DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5ECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F5ECu) [[unlikely]] return; }
L_0021F5EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F608; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F608u) [[unlikely]] return; }
L_0021F608:
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_0021F60C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0021F62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F61Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021F61Cu) [[unlikely]] return; }
L_0021F61C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F62Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021F62Cu) [[unlikely]] return; }
L_0021F62C:
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 1;
L_0021F630:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0021F654; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F640u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 35u, depth + 1u); else { c.pc = 0x00228660u; return; } if (c.pc != 0x0021F640u) [[unlikely]] return; }
L_0021F640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F654; } }
L_0021F650:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0021F654:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021F67C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021F67C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F678u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F678u) [[unlikely]] return; }
L_0021F678:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F67C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F698:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[24], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[24].w[0]);
    set32(c.r[14], c.r[3].w[0] << 3);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[15], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.budget -= 10;
L_0021F6C0:
    set32(c.r[1], c.r[1].w[0] + 2u);
    set32(c.r[14], c.r[3].w[0] << 3);
    c.r[7].d[0] = ld64((c.r[25].w[0]));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    st64((c.r[24].w[0]), c.r[7].d[0]);
    set32(c.r[24], c.r[24].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[24].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F6C0u | kUnwind; return; } goto L_0021F6C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F6E8:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 11;
L_0021F714:
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[7].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    mmi::pcpyld(c.r[6], c.r[7], c.r[6]);
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F714u | kUnwind; return; } goto L_0021F714; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F750:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[13], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 14;
L_0021F788:
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.f[4] = ld32((c.r[13].w[0]));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[13], c.r[9].w[0] + c.r[3].w[0]);
    mmi::pcpyld(c.r[6], c.r[4], c.r[6]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.f[4]);
    st32((c.r[11].w[0] + 4u), c.f[5]);
    st32((c.r[11].w[0] + 8u), c.f[6]);
    set32(c.r[11], c.r[11].w[0] + 12u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F788u | kUnwind; return; } goto L_0021F788; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F7E4:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[24], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 15;
L_0021F820:
    ld128((c.r[25].w[0]) & ~15u, c.r[7]);
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[9].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    st128((c.r[24].w[0]) & ~15u, c.r[7]);
    set32(c.r[24], c.r[24].w[0] + 16u);
    mmi::pcpyld(c.r[6], c.r[9], c.r[6]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F820u | kUnwind; return; } goto L_0021F820; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F870:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[24], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[13], c.r[9].w[0] + c.r[2].w[0]);
    c.budget -= 18;
L_0021F8B8:
    ld128((c.r[25].w[0]) & ~15u, c.r[7]);
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.f[4] = ld32((c.r[13].w[0]));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[24], c.r[24].w[0] + 16u);
    st128((c.r[24].w[0] - 16u) & ~15u, c.r[7]);
    mmi::pcpyld(c.r[6], c.r[4], c.r[6]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.f[4]);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    st32((c.r[11].w[0] + 4u), c.f[5]);
    set32(c.r[13], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[11].w[0] + 8u), c.f[6]);
    set32(c.r[11], c.r[11].w[0] + 12u);
    c.budget -= 26;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F8B8u | kUnwind; return; } goto L_0021F8B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F928:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[24], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.budget -= 14;
L_0021F960:
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[9].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.r[7].d[0] = ld64((c.r[25].w[0]));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    mmi::pcpyld(c.r[6], c.r[9], c.r[6]);
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st64((c.r[24].w[0]), c.r[7].d[0]);
    set32(c.r[24], c.r[24].w[0] + 8u);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F960u | kUnwind; return; } goto L_0021F960; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F9AC:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[14], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[24], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[13], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.budget -= 17;
L_0021F9F0:
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.f[4] = ld32((c.r[13].w[0]));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[13], c.r[9].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld64((c.r[25].w[0]));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    mmi::pcpyld(c.r[6], c.r[4], c.r[6]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.f[4]);
    st32((c.r[11].w[0] + 4u), c.f[5]);
    st32((c.r[11].w[0] + 8u), c.f[6]);
    set32(c.r[11], c.r[11].w[0] + 12u);
    st64((c.r[24].w[0]), c.r[7].d[0]);
    set32(c.r[24], c.r[24].w[0] + 8u);
    c.budget -= 25;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F9F0u | kUnwind; return; } goto L_0021F9F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FA5C:
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[14], c.r[2].w[0] << 1);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[9], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[24], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[13], c.r[11].w[0] + c.r[14].w[0]);
    c.budget -= 18;
L_0021FAA4:
    ld128((c.r[13].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    ldr(c.r[6], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[6], (c.r[12].w[0] + 7u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.r[4].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.r[7].d[0] = ld64((c.r[25].w[0]));
    st128((c.r[9].w[0] - 16u) & ~15u, c.r[2]);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    mmi::pcpyld(c.r[6], c.r[4], c.r[6]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[11].w[0] + c.r[14].w[0]);
    st64((c.r[24].w[0]), c.r[7].d[0]);
    set32(c.r[24], c.r[24].w[0] + 8u);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FAA4u | kUnwind; return; } goto L_0021FAA4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FB04:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[19].d[0]);
    set32(c.r[1], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld16((c.r[1].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[11], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[14], c.r[2].w[0] << 1);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[24], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[18], c.r[17].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[9].w[0] + c.r[2].w[0]);
    c.budget -= 26;
L_0021FB6C:
    ld128((c.r[18].w[0]) & ~15u, c.r[6]);
    ldr(c.r[4], (c.r[12].w[0]));
    set32(c.r[1], c.r[1].w[0] + 2u);
    ldl(c.r[4], (c.r[12].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[19].d[0] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[14], c.r[3].w[0] << 1);
    c.f[4] = ld32((c.r[13].w[0]));
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[13].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[7].d[0] = ld64((c.r[25].w[0]));
    st128((c.r[16].w[0] - 16u) & ~15u, c.r[6]);
    set32(c.r[25], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[9].w[0] + c.r[3].w[0]);
    mmi::pcpyld(c.r[4], c.r[19], c.r[4]);
    st128((c.r[10].w[0]) & ~15u, c.r[4]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[11].w[0]), c.f[4]);
    set32(c.r[14], c.r[14].w[0] << 1);
    st32((c.r[11].w[0] + 4u), c.f[5]);
    set32(c.r[18], c.r[17].w[0] + c.r[14].w[0]);
    st32((c.r[11].w[0] + 8u), c.f[6]);
    set32(c.r[11], c.r[11].w[0] + 12u);
    st64((c.r[24].w[0]), c.r[7].d[0]);
    set32(c.r[24], c.r[24].w[0] + 8u);
    c.budget -= 30;
    { const bool t = c.r[5].d[0] != c.r[10].d[0]; c.r[3].d[0] = ld16((c.r[1].w[0] + 2u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FB6Cu | kUnwind; return; } goto L_0021FB6C; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021FC00:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0021FC10:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0021FC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 8u);  if (t) { goto L_0021FC94; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0021FC7C; } }
L_0021FC5C:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0021FC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));  if (t) { goto L_0021FC8C; } }
L_0021FC7C:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FC5Cu | kUnwind; return; } goto L_0021FC5C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0021FCA0; } }
L_0021FC94:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0021FCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FCC4; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0021FCBC; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 25024u);  if (t) { goto L_0021FCDC; } }
L_0021FCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 8288u);  if (t) { goto L_0021FCDC; } }
L_0021FCC4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0021FCD8; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 25104u);  if (t) { goto L_0021FCDC; } }
L_0021FCD8:
    set32(c.r[16], c.r[16].w[0] + 8208u);
    c.budget -= 1;
L_0021FCDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[17].w[0] + 8u);  if (t) { goto L_0021FD1C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021FDC8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021FD1C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_0021FD28; }
L_0021FD1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FDC8; } }
L_0021FD28:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0021FDB8; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0021FD50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021FD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FDC8; } }
L_0021FD50:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FDB8; } }
L_0021FD5C:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0021FDC8; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021FDAC; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021FDAC; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0021FDB8; }
L_0021FDAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FDC8; } }
L_0021FDB8:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FD5Cu | kUnwind; return; } goto L_0021FD5C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0021FDC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 48u)));  if (t) { goto L_0021FE08; } }
L_0021FDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDE0u);  if (depth < kMaxDepth) unit_006A(c, 165u, depth + 1u); else { c.pc = 0x002A9920u; return; } if (c.pc != 0x0021FDE0u) [[unlikely]] return; }
L_0021FDE0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE00u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FE00u) [[unlikely]] return; }
L_0021FE00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 2;
L_0021FE08:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 48u)));  goto L_0021FE74; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 48u), c.r[17].w[0]);  goto L_0021FE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021FE20u) [[unlikely]] return; }
L_0021FE20:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE30u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021FE30u) [[unlikely]] return; }
L_0021FE30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021FE4C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FE4Cu) [[unlikely]] return; }
L_0021FE4C:
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_0021FE50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0021FE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021FE60u) [[unlikely]] return; }
L_0021FE60:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE70u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021FE70u) [[unlikely]] return; }
L_0021FE70:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_0021FE74:
    set32(c.r[2], 0u + 16u);
    c.r[16].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0021FEAC; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0021FEA4; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));  goto L_0021FEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 48u)));  if (t) { goto L_0021FEB4; } }
L_0021FEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0021FEB0; } }
L_0021FEAC:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0021FEB0:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_0021FEB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FED4u); set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FED4u) [[unlikely]] return; }
L_0021FED4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FEE8u) [[unlikely]] return; }
L_0021FEE8:
    c.r[8].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF00u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 67u, depth + 1u); else { c.pc = 0x002390A0u; return; } if (c.pc != 0x0021FF00u) [[unlikely]] return; }
L_0021FF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021FF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021FFD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] - 6112u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0021FF94; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_0021FF98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0021FF68u) [[unlikely]] return; }
L_0021FF68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF78u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0021FF78u) [[unlikely]] return; }
L_0021FF78:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021FF94; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FF94u) [[unlikely]] return; }
L_0021FF94:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0021FF98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021FFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x0021FFA8u) [[unlikely]] return; }
L_0021FFA8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0021FFC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 6144u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0021FFC0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0021FFDC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFD8u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0021FFD8u) [[unlikely]] return; }
L_0021FFD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021FFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
