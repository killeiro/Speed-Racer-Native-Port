#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0010[4096] = {
    1, 0, 0, 2, 0, 3, 0, 4, 5, 0, 6, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0,
    64, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0,
    0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0,
    197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324,
    325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0,
    0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492,
    0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0,
    501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516,
    0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0,
    0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0010(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00140000;
    case 2u: goto L_0014000C;
    case 3u: goto L_00140014;
    case 4u: goto L_0014001C;
    case 5u: goto L_00140020;
    case 6u: goto L_00140028;
    case 7u: goto L_0014002C;
    case 8u: goto L_00140030;
    case 9u: goto L_0014006C;
    case 10u: goto L_0014008C;
    case 11u: goto L_00140098;
    case 12u: goto L_001400BC;
    case 13u: goto L_001400C0;
    case 14u: goto L_001400E4;
    case 15u: goto L_001400F4;
    case 16u: goto L_00140100;
    case 17u: goto L_0014010C;
    case 18u: goto L_00140118;
    case 19u: goto L_00140140;
    case 20u: goto L_001401AC;
    case 21u: goto L_001401B8;
    case 22u: goto L_001401C4;
    case 23u: goto L_00140208;
    case 24u: goto L_00140214;
    case 25u: goto L_00140230;
    case 26u: goto L_0014023C;
    case 27u: goto L_00140248;
    case 28u: goto L_00140280;
    case 29u: goto L_00140294;
    case 30u: goto L_001402CC;
    case 31u: goto L_001402E0;
    case 32u: goto L_00140324;
    case 33u: goto L_00140350;
    case 34u: goto L_00140380;
    case 35u: goto L_00140394;
    case 36u: goto L_001403A0;
    case 37u: goto L_001403C0;
    case 38u: goto L_001403FC;
    case 39u: goto L_00140414;
    case 40u: goto L_00140420;
    case 41u: goto L_0014042C;
    case 42u: goto L_00140438;
    case 43u: goto L_00140484;
    case 44u: goto L_001404A0;
    case 45u: goto L_001404AC;
    case 46u: goto L_00140568;
    case 47u: goto L_00140584;
    case 48u: goto L_00140590;
    case 49u: goto L_0014059C;
    case 50u: goto L_001405A8;
    case 51u: goto L_001405E0;
    case 52u: goto L_00140608;
    case 53u: goto L_00140618;
    case 54u: goto L_00140670;
    case 55u: goto L_001406B0;
    case 56u: goto L_001406DC;
    case 57u: goto L_001406E8;
    case 58u: goto L_0014072C;
    case 59u: goto L_00140748;
    case 60u: goto L_00140754;
    case 61u: goto L_001407D0;
    case 62u: goto L_001407EC;
    case 63u: goto L_001407F8;
    case 64u: goto L_00140800;
    case 65u: goto L_00140804;
    case 66u: goto L_0014080C;
    case 67u: goto L_00140818;
    case 68u: goto L_0014082C;
    case 69u: goto L_00140838;
    case 70u: goto L_00140844;
    case 71u: goto L_0014085C;
    case 72u: goto L_00140874;
    case 73u: goto L_00140880;
    case 74u: goto L_001408B0;
    case 75u: goto L_001408E0;
    case 76u: goto L_00140904;
    case 77u: goto L_00140918;
    case 78u: goto L_00140924;
    case 79u: goto L_00140950;
    case 80u: goto L_001409D0;
    case 81u: goto L_001409D8;
    case 82u: goto L_001409F8;
    case 83u: goto L_00140A08;
    case 84u: goto L_00140A2C;
    case 85u: goto L_00140A38;
    case 86u: goto L_00140A44;
    case 87u: goto L_00140A64;
    case 88u: goto L_00140A70;
    case 89u: goto L_00140A9C;
    case 90u: goto L_00140AC8;
    case 91u: goto L_00140AF8;
    case 92u: goto L_00140B04;
    case 93u: goto L_00140B20;
    case 94u: goto L_00140B44;
    case 95u: goto L_00140B60;
    case 96u: goto L_00140BC0;
    case 97u: goto L_00140BEC;
    case 98u: goto L_00140C1C;
    case 99u: goto L_00140C28;
    case 100u: goto L_00140C40;
    case 101u: goto L_00140C60;
    case 102u: goto L_00140C84;
    case 103u: goto L_00140C98;
    case 104u: goto L_00140CAC;
    case 105u: goto L_00140CC0;
    case 106u: goto L_00140CF0;
    case 107u: goto L_00140D00;
    case 108u: goto L_00140D08;
    case 109u: goto L_00140D18;
    case 110u: goto L_00140D24;
    case 111u: goto L_00140D30;
    case 112u: goto L_00140D50;
    case 113u: goto L_00140D70;
    case 114u: goto L_00140D80;
    case 115u: goto L_00140DA8;
    case 116u: goto L_00140DCC;
    case 117u: goto L_00140DF0;
    case 118u: goto L_00140E14;
    case 119u: goto L_00140E30;
    case 120u: goto L_00140E38;
    case 121u: goto L_00140ED0;
    case 122u: goto L_00140ED8;
    case 123u: goto L_00140EE0;
    case 124u: goto L_00140EEC;
    case 125u: goto L_00140EF8;
    case 126u: goto L_00140F0C;
    case 127u: goto L_00140F18;
    case 128u: goto L_00140F2C;
    case 129u: goto L_00140F60;
    case 130u: goto L_00140F7C;
    case 131u: goto L_00140FC4;
    case 132u: goto L_00141010;
    case 133u: goto L_00141020;
    case 134u: goto L_00141030;
    case 135u: goto L_0014103C;
    case 136u: goto L_00141040;
    case 137u: goto L_00141050;
    case 138u: goto L_00141060;
    case 139u: goto L_00141070;
    case 140u: goto L_00141080;
    case 141u: goto L_0014109C;
    case 142u: goto L_001410B4;
    case 143u: goto L_001410C0;
    case 144u: goto L_001410D0;
    case 145u: goto L_001410D8;
    case 146u: goto L_001410F0;
    case 147u: goto L_00141100;
    case 148u: goto L_0014110C;
    case 149u: goto L_00141120;
    case 150u: goto L_00141134;
    case 151u: goto L_00141140;
    case 152u: goto L_00141144;
    case 153u: goto L_00141180;
    case 154u: goto L_001411A0;
    case 155u: goto L_001411C0;
    case 156u: goto L_001411D0;
    case 157u: goto L_001411DC;
    case 158u: goto L_00141210;
    case 159u: goto L_0014124C;
    case 160u: goto L_00141264;
    case 161u: goto L_00141270;
    case 162u: goto L_00141280;
    case 163u: goto L_00141288;
    case 164u: goto L_001412A0;
    case 165u: goto L_001412B0;
    case 166u: goto L_001412BC;
    case 167u: goto L_001412D0;
    case 168u: goto L_001412E4;
    case 169u: goto L_001412F4;
    case 170u: goto L_00141338;
    case 171u: goto L_00141368;
    case 172u: goto L_00141370;
    case 173u: goto L_00141378;
    case 174u: goto L_00141384;
    case 175u: goto L_00141390;
    case 176u: goto L_001413A4;
    case 177u: goto L_001413B0;
    case 178u: goto L_001413C4;
    case 179u: goto L_00141400;
    case 180u: goto L_00141424;
    case 181u: goto L_00141438;
    case 182u: goto L_0014143C;
    case 183u: goto L_00141444;
    case 184u: goto L_00141450;
    case 185u: goto L_00141460;
    case 186u: goto L_00141468;
    case 187u: goto L_00141478;
    case 188u: goto L_00141498;
    case 189u: goto L_001414A8;
    case 190u: goto L_001414BC;
    case 191u: goto L_00141510;
    case 192u: goto L_00141538;
    case 193u: goto L_00141558;
    case 194u: goto L_00141560;
    case 195u: goto L_00141568;
    case 196u: goto L_00141574;
    case 197u: goto L_00141580;
    case 198u: goto L_00141594;
    case 199u: goto L_001415A0;
    case 200u: goto L_001415B4;
    case 201u: goto L_001415E0;
    case 202u: goto L_00141608;
    case 203u: goto L_00141614;
    case 204u: goto L_0014163C;
    case 205u: goto L_0014167C;
    case 206u: goto L_001416A0;
    case 207u: goto L_001416B4;
    case 208u: goto L_001416CC;
    case 209u: goto L_001416F0;
    case 210u: goto L_00141734;
    case 211u: goto L_0014174C;
    case 212u: goto L_00141760;
    case 213u: goto L_00141774;
    case 214u: goto L_001417A0;
    case 215u: goto L_001417B4;
    case 216u: goto L_001417C8;
    case 217u: goto L_001417E8;
    case 218u: goto L_00141808;
    case 219u: goto L_00141814;
    case 220u: goto L_0014183C;
    case 221u: goto L_00141840;
    case 222u: goto L_00141850;
    case 223u: goto L_00141880;
    case 224u: goto L_0014188C;
    case 225u: goto L_001418B8;
    case 226u: goto L_001418C0;
    case 227u: goto L_001418D0;
    case 228u: goto L_00141900;
    case 229u: goto L_00141914;
    case 230u: goto L_00141940;
    case 231u: goto L_00141960;
    case 232u: goto L_001419C0;
    case 233u: goto L_001419C8;
    case 234u: goto L_00141A14;
    case 235u: goto L_00141A54;
    case 236u: goto L_00141AA0;
    case 237u: goto L_00141B0C;
    case 238u: goto L_00141B34;
    case 239u: goto L_00141B7C;
    case 240u: goto L_00141BA8;
    case 241u: goto L_00141BC4;
    case 242u: goto L_00141C00;
    case 243u: goto L_00141C04;
    case 244u: goto L_00141C3C;
    case 245u: goto L_00141C40;
    case 246u: goto L_00141CD0;
    case 247u: goto L_00141CEC;
    case 248u: goto L_00141D10;
    case 249u: goto L_00141D50;
    case 250u: goto L_00141D6C;
    case 251u: goto L_00141DFC;
    case 252u: goto L_00141E18;
    case 253u: goto L_00141E30;
    case 254u: goto L_00141E3C;
    case 255u: goto L_00141E60;
    case 256u: goto L_00141E90;
    case 257u: goto L_00141EA0;
    case 258u: goto L_00141EC4;
    case 259u: goto L_00141EE0;
    case 260u: goto L_00141EF8;
    case 261u: goto L_00141F10;
    case 262u: goto L_00141F34;
    case 263u: goto L_00141F50;
    case 264u: goto L_00141F68;
    case 265u: goto L_00141F80;
    case 266u: goto L_00141F90;
    case 267u: goto L_00141FD4;
    case 268u: goto L_00142030;
    case 269u: goto L_0014203C;
    case 270u: goto L_00142040;
    case 271u: goto L_00142080;
    case 272u: goto L_00142090;
    case 273u: goto L_00142098;
    case 274u: goto L_001420C0;
    case 275u: goto L_001420E4;
    case 276u: goto L_00142100;
    case 277u: goto L_00142124;
    case 278u: goto L_00142140;
    case 279u: goto L_00142170;
    case 280u: goto L_001421DC;
    case 281u: goto L_0014220C;
    case 282u: goto L_00142268;
    case 283u: goto L_00142294;
    case 284u: goto L_001422B4;
    case 285u: goto L_001422F4;
    case 286u: goto L_00142330;
    case 287u: goto L_001423D0;
    case 288u: goto L_001423F0;
    case 289u: goto L_00142400;
    case 290u: goto L_00142420;
    case 291u: goto L_00142440;
    case 292u: goto L_00142460;
    case 293u: goto L_001424D8;
    case 294u: goto L_00142518;
    case 295u: goto L_0014255C;
    case 296u: goto L_001425D0;
    case 297u: goto L_001425E0;
    case 298u: goto L_00142600;
    case 299u: goto L_00142610;
    case 300u: goto L_00142624;
    case 301u: goto L_00142634;
    case 302u: goto L_00142680;
    case 303u: goto L_00142690;
    case 304u: goto L_001426A0;
    case 305u: goto L_001426D4;
    case 306u: goto L_001426F0;
    case 307u: goto L_00142704;
    case 308u: goto L_00142714;
    case 309u: goto L_00142760;
    case 310u: goto L_00142770;
    case 311u: goto L_00142780;
    case 312u: goto L_001427C0;
    case 313u: goto L_001427D0;
    case 314u: goto L_001427F8;
    case 315u: goto L_00142810;
    case 316u: goto L_00142820;
    case 317u: goto L_0014283C;
    case 318u: goto L_00142840;
    case 319u: goto L_00142854;
    case 320u: goto L_00142868;
    case 321u: goto L_00142880;
    case 322u: goto L_001428A4;
    case 323u: goto L_001428C0;
    case 324u: goto L_001428FC;
    case 325u: goto L_00142900;
    case 326u: goto L_00142908;
    case 327u: goto L_00142920;
    case 328u: goto L_00142928;
    case 329u: goto L_0014295C;
    case 330u: goto L_00142968;
    case 331u: goto L_00142990;
    case 332u: goto L_001429C8;
    case 333u: goto L_001429E0;
    case 334u: goto L_00142A14;
    case 335u: goto L_00142A40;
    case 336u: goto L_00142A64;
    case 337u: goto L_00142A78;
    case 338u: goto L_00142AA0;
    case 339u: goto L_00142AB0;
    case 340u: goto L_00142AC0;
    case 341u: goto L_00142AC8;
    case 342u: goto L_00142AE8;
    case 343u: goto L_00142AF8;
    case 344u: goto L_00142B38;
    case 345u: goto L_00142B44;
    case 346u: goto L_00142B4C;
    case 347u: goto L_00142B90;
    case 348u: goto L_00142BA0;
    case 349u: goto L_00142BB0;
    case 350u: goto L_00142BC0;
    case 351u: goto L_00142BDC;
    case 352u: goto L_00142BF0;
    case 353u: goto L_00142C0C;
    case 354u: goto L_00142C14;
    case 355u: goto L_00142C20;
    case 356u: goto L_00142C50;
    case 357u: goto L_00142C6C;
    case 358u: goto L_00142C74;
    case 359u: goto L_00142C80;
    case 360u: goto L_00142CB0;
    case 361u: goto L_00142CCC;
    case 362u: goto L_00142CE0;
    case 363u: goto L_00142D00;
    case 364u: goto L_00142D10;
    case 365u: goto L_00142D38;
    case 366u: goto L_00142D50;
    case 367u: goto L_00142D70;
    case 368u: goto L_00142D84;
    case 369u: goto L_00142D98;
    case 370u: goto L_00142DAC;
    case 371u: goto L_00142DCC;
    case 372u: goto L_00142DF0;
    case 373u: goto L_00142E34;
    case 374u: goto L_00142E40;
    case 375u: goto L_00142E48;
    case 376u: goto L_00142E50;
    case 377u: goto L_00142E58;
    case 378u: goto L_00142E68;
    case 379u: goto L_00142E70;
    case 380u: goto L_00142EB4;
    case 381u: goto L_00142ED0;
    case 382u: goto L_00142EDC;
    case 383u: goto L_00142EF4;
    case 384u: goto L_00142F00;
    case 385u: goto L_00142F0C;
    case 386u: goto L_00142F18;
    case 387u: goto L_00142F24;
    case 388u: goto L_00142F38;
    case 389u: goto L_00142F50;
    case 390u: goto L_00142F5C;
    case 391u: goto L_00142F68;
    case 392u: goto L_00142F74;
    case 393u: goto L_00142F80;
    case 394u: goto L_00142FD4;
    case 395u: goto L_00142FE4;
    case 396u: goto L_00143000;
    case 397u: goto L_0014300C;
    case 398u: goto L_00143018;
    case 399u: goto L_00143024;
    case 400u: goto L_00143030;
    case 401u: goto L_0014303C;
    case 402u: goto L_00143040;
    case 403u: goto L_001430C4;
    case 404u: goto L_001430D8;
    case 405u: goto L_00143100;
    case 406u: goto L_00143108;
    case 407u: goto L_00143134;
    case 408u: goto L_00143150;
    case 409u: goto L_0014315C;
    case 410u: goto L_001431B4;
    case 411u: goto L_001431C8;
    case 412u: goto L_001431D8;
    case 413u: goto L_001431EC;
    case 414u: goto L_00143208;
    case 415u: goto L_00143214;
    case 416u: goto L_00143220;
    case 417u: goto L_0014322C;
    case 418u: goto L_00143238;
    case 419u: goto L_0014328C;
    case 420u: goto L_001432A8;
    case 421u: goto L_001432B8;
    case 422u: goto L_001432D0;
    case 423u: goto L_001432E0;
    case 424u: goto L_001432F8;
    case 425u: goto L_00143310;
    case 426u: goto L_00143324;
    case 427u: goto L_00143330;
    case 428u: goto L_00143354;
    case 429u: goto L_00143360;
    case 430u: goto L_0014336C;
    case 431u: goto L_00143378;
    case 432u: goto L_00143384;
    case 433u: goto L_00143390;
    case 434u: goto L_001433D0;
    case 435u: goto L_001433F4;
    case 436u: goto L_00143404;
    case 437u: goto L_00143420;
    case 438u: goto L_0014342C;
    case 439u: goto L_00143438;
    case 440u: goto L_00143460;
    case 441u: goto L_00143490;
    case 442u: goto L_00143498;
    case 443u: goto L_001434B0;
    case 444u: goto L_001434E8;
    case 445u: goto L_00143520;
    case 446u: goto L_00143530;
    case 447u: goto L_00143550;
    case 448u: goto L_00143560;
    case 449u: goto L_0014358C;
    case 450u: goto L_00143594;
    case 451u: goto L_001435B4;
    case 452u: goto L_001435F8;
    case 453u: goto L_00143634;
    case 454u: goto L_0014364C;
    case 455u: goto L_00143670;
    case 456u: goto L_001436A8;
    case 457u: goto L_001436C0;
    case 458u: goto L_00143704;
    case 459u: goto L_00143710;
    case 460u: goto L_0014374C;
    case 461u: goto L_00143760;
    case 462u: goto L_00143774;
    case 463u: goto L_00143788;
    case 464u: goto L_001437A4;
    case 465u: goto L_001437B0;
    case 466u: goto L_001437C8;
    case 467u: goto L_001437D8;
    case 468u: goto L_001437E4;
    case 469u: goto L_00143800;
    case 470u: goto L_00143830;
    case 471u: goto L_0014383C;
    case 472u: goto L_00143840;
    case 473u: goto L_0014388C;
    case 474u: goto L_001438C0;
    case 475u: goto L_001438D8;
    case 476u: goto L_001438F0;
    case 477u: goto L_00143940;
    case 478u: goto L_00143958;
    case 479u: goto L_00143970;
    case 480u: goto L_0014398C;
    case 481u: goto L_001439A0;
    case 482u: goto L_001439B4;
    case 483u: goto L_00143A10;
    case 484u: goto L_00143A30;
    case 485u: goto L_00143A64;
    case 486u: goto L_00143A6C;
    case 487u: goto L_00143A9C;
    case 488u: goto L_00143AD0;
    case 489u: goto L_00143B0C;
    case 490u: goto L_00143B20;
    case 491u: goto L_00143B68;
    case 492u: goto L_00143B7C;
    case 493u: goto L_00143B88;
    case 494u: goto L_00143B94;
    case 495u: goto L_00143B9C;
    case 496u: goto L_00143BAC;
    case 497u: goto L_00143BCC;
    case 498u: goto L_00143BE0;
    case 499u: goto L_00143BEC;
    case 500u: goto L_00143BF8;
    case 501u: goto L_00143C00;
    case 502u: goto L_00143C10;
    case 503u: goto L_00143C1C;
    case 504u: goto L_00143C28;
    case 505u: goto L_00143C30;
    case 506u: goto L_00143C40;
    case 507u: goto L_00143C6C;
    case 508u: goto L_00143C80;
    case 509u: goto L_00143C8C;
    case 510u: goto L_00143C98;
    case 511u: goto L_00143CA0;
    case 512u: goto L_00143CB0;
    case 513u: goto L_00143CD0;
    case 514u: goto L_00143CE4;
    case 515u: goto L_00143CF0;
    case 516u: goto L_00143CFC;
    case 517u: goto L_00143D04;
    case 518u: goto L_00143D14;
    case 519u: goto L_00143D20;
    case 520u: goto L_00143D2C;
    case 521u: goto L_00143D34;
    case 522u: goto L_00143D44;
    case 523u: goto L_00143D7C;
    case 524u: goto L_00143D90;
    case 525u: goto L_00143D9C;
    case 526u: goto L_00143DA8;
    case 527u: goto L_00143DB8;
    case 528u: goto L_00143DE4;
    case 529u: goto L_00143DEC;
    case 530u: goto L_00143DF8;
    case 531u: goto L_00143E08;
    case 532u: goto L_00143E18;
    case 533u: goto L_00143E40;
    case 534u: goto L_00143E50;
    case 535u: goto L_00143E60;
    case 536u: goto L_00143E70;
    case 537u: goto L_00143E84;
    case 538u: goto L_00143E90;
    case 539u: goto L_00143EA0;
    case 540u: goto L_00143EB0;
    case 541u: goto L_00143EC0;
    case 542u: goto L_00143ED4;
    case 543u: goto L_00143EE0;
    case 544u: goto L_00143EF0;
    case 545u: goto L_00143F14;
    case 546u: goto L_00143F20;
    case 547u: goto L_00143F30;
    case 548u: goto L_00143F40;
    case 549u: goto L_00143F70;
    case 550u: goto L_00143FC0;
    case 551u: goto L_00143FD4;
    default: bad_entry(c, 0x00140000u); return;
    }
L_00140000:
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00140014; } }
L_0014000C:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 2;
L_00140014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0014002C; } }
L_0014001C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00140020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140028u);  if (depth < kMaxDepth) unit_000F(c, 12u, depth + 1u); else { c.pc = 0x0013C120u; return; } if (c.pc != 0x00140028u) [[unlikely]] return; }
L_00140028:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014002C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00140030:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FF3Cu | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 411u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));  goto L_00140054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_0014005C; } }
L_00140054:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0014005C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00140090; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014006Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 368u, depth + 1u); else { c.pc = 0x0013F7E0u; return; } if (c.pc != 0x0014006Cu) [[unlikely]] return; }
L_0014006C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014008Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0014008Cu) [[unlikely]] return; }
L_0014008C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00140090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140098u) [[unlikely]] return; }
L_00140098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001400BC:
    c.budget -= 1;
L_001400C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400E4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001400E4u) [[unlikely]] return; }
L_001400E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400F4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x001400F4u) [[unlikely]] return; }
L_001400F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140100u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 12u, depth + 1u); else { c.pc = 0x0013C120u; return; } if (c.pc != 0x00140100u) [[unlikely]] return; }
L_00140100:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014010Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014010Cu) [[unlikely]] return; }
L_0014010C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140118u) [[unlikely]] return; }
L_00140118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00140140:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00140188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_00140194; } }
L_00140188:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00140194:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001401A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00140328; } }
L_001401A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401ACu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001401ACu) [[unlikely]] return; }
L_001401AC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_001401B8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401C4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x001401C4u) [[unlikely]] return; }
L_001401C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[18].w[0] - c.r[17].w[0]);  goto L_001401F8; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0]));  goto L_001401EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_001401F4; } }
L_001401EC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001401F4:
    set32(c.r[7], c.r[18].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_001401F8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140208u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00140208u) [[unlikely]] return; }
L_00140208:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140214u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 380u, depth + 1u); else { c.pc = 0x0013FA80u; return; } if (c.pc != 0x00140214u) [[unlikely]] return; }
L_00140214:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00140228; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00140228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140230u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00140230u) [[unlikely]] return; }
L_00140230:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014023Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014023Cu) [[unlikely]] return; }
L_0014023C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140248u) [[unlikely]] return; }
L_00140248:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_001402A0; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[20].w[0] + 1u);  goto L_00140264; }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00140264:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_00140278; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00140278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140280u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x00140280u) [[unlikely]] return; }
L_00140280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014029C; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140294u) [[unlikely]] return; }
L_00140294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00140328; } }
L_0014029C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001402A0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[20].w[0] + 1u);  goto L_001402B0; }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001402B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_001402C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_001402C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001402CCu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001402CCu) [[unlikely]] return; }
L_001402CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_001402E8; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001402E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001402E0u) [[unlikely]] return; }
L_001402E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00140328; } }
L_001402E8:
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00140300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0014030C; } }
L_00140300:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0014030C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001401B8u | kUnwind; return; } goto L_001401B8; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140324u) [[unlikely]] return; }
L_00140324:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00140328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00140350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140380u); set32(c.r[5], c.r[5].w[0] - 3584u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00140380u) [[unlikely]] return; }
L_00140380:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140394u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x00140394u) [[unlikely]] return; }
L_00140394:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001403A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001403A0u) [[unlikely]] return; }
L_001403A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001403C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001403FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001403FCu) [[unlikely]] return; }
L_001403FC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00140428; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140414u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00140414u) [[unlikely]] return; }
L_00140414:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140420u) [[unlikely]] return; }
L_00140420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001405AC; } }
L_00140428:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0014042C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140438u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x00140438u) [[unlikely]] return; }
L_00140438:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00140468; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0]));  goto L_00140460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_00140468; } }
L_00140460:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00140468:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_001404B0; }
    set32(c.r[7], c.r[18].w[0] - c.r[17].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140484u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00140484u) [[unlikely]] return; }
L_00140484:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_00140498; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00140498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001404A0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001404A0u) [[unlikely]] return; }
L_001404A0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001404ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001404ACu) [[unlikely]] return; }
L_001404AC:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001404B0:
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001404C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_001404D4; } }
L_001404C8:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001404D4:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001404EC; } }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014042Cu | kUnwind; return; } goto L_0014042C; }
L_001404EC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_00140594; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0014051C; }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0014051C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));  goto L_00140534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_0014053C; } }
L_00140534:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0014053C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_00140550; }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00140550:
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140568u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00140568u) [[unlikely]] return; }
L_00140568:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0014057C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0014057C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140584u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00140584u) [[unlikely]] return; }
L_00140584:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140590u) [[unlikely]] return; }
L_00140590:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00140594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014059Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014059Cu) [[unlikely]] return; }
L_0014059C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001405A8u) [[unlikely]] return; }
L_001405A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001405AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001405E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0014060C; } }
L_00140608:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0014060C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140618u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x00140618u) [[unlikely]] return; }
L_00140618:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[2].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140608u | kUnwind; return; } goto L_00140608; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0014063C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_00140644; } }
L_0014063C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00140644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00140654; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00140654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00140670:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001406B0u) [[unlikely]] return; }
L_001406B0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001406CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_001406D8; } }
L_001406CC:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[22].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001406D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001406DC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x001406E8u) [[unlikely]] return; }
L_001406E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[18].w[0] - c.r[17].w[0]);  goto L_0014071C; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0]));  goto L_00140710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_00140718; } }
L_00140710:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00140718:
    set32(c.r[7], c.r[18].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0014071C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014072Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014072Cu) [[unlikely]] return; }
L_0014072C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_00140740; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00140740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140748u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00140748u) [[unlikely]] return; }
L_00140748:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140754u) [[unlikely]] return; }
L_00140754:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_001407FC; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_00140784; }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00140784:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));  goto L_0014079C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 212u)));  if (t) { goto L_001407A4; } }
L_0014079C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001407A4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001407B8; }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001407B8:
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001407D0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x001407D0u) [[unlikely]] return; }
L_001407D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_001407E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_001407E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001407ECu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001407ECu) [[unlikely]] return; }
L_001407EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001407F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001407F8u) [[unlikely]] return; }
L_001407F8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001407FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140804u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0010(c, 74u, depth + 1u); else { c.pc = 0x001408B0u; return; } if (c.pc != 0x00140804u) [[unlikely]] return; }
    goto L_00140804;
L_00140800:
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_00140804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014080Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 233u, depth + 1u); else { c.pc = 0x00132A10u; return; } if (c.pc != 0x0014080Cu) [[unlikely]] return; }
L_0014080C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140818u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00140818u) [[unlikely]] return; }
L_00140818:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_0014084C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014082Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 244u, depth + 1u); else { c.pc = 0x00132B50u; return; } if (c.pc != 0x0014082Cu) [[unlikely]] return; }
L_0014082C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140838u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00140838u) [[unlikely]] return; }
L_00140838:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140844u) [[unlikely]] return; }
L_00140844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140884; } }
L_0014084C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014085Cu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0014085Cu) [[unlikely]] return; }
L_0014085C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001406DCu | kUnwind; return; } goto L_001406DC; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140874u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x00140874u) [[unlikely]] return; }
L_00140874:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140880u) [[unlikely]] return; }
L_00140880:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00140884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001408B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001408E0u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_000F(c, 406u, depth + 1u); else { c.pc = 0x0013FE80u; return; } if (c.pc != 0x001408E0u) [[unlikely]] return; }
L_001408E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00140A4C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140904u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00140904u) [[unlikely]] return; }
L_00140904:
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140918u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00140918u) [[unlikely]] return; }
L_00140918:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 434u, depth + 1u); else { c.pc = 0x00137920u; return; } if (c.pc != 0x00140924u) [[unlikely]] return; }
L_00140924:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  goto L_00140954; }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140950u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00140950u) [[unlikely]] return; }
L_00140950:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_00140954:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_00140978; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00140978:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00140988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 81u);  if (t) { goto L_0014098C; } }
L_00140988:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0014098C:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 34u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001409D0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_001409B4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001409B4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 120u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001409D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x001409D0u) [[unlikely]] return; }
L_001409D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001409D8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001409D8u) [[unlikely]] return; }
L_001409D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 97u);  goto L_001409EC; }
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_001409EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001409F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x001409F8u) [[unlikely]] return; }
L_001409F8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A08u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 95u, depth + 1u); else { c.pc = 0x00140B60u; return; } if (c.pc != 0x00140A08u) [[unlikely]] return; }
L_00140A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00140A2Cu) [[unlikely]] return; }
L_00140A2C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140A38u) [[unlikely]] return; }
L_00140A38:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00140A44u) [[unlikely]] return; }
L_00140A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140B44; } }
L_00140A4C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00140A5C; }
    set32(c.r[17], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00140A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A64u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00140A64u) [[unlikely]] return; }
L_00140A64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00140A70u) [[unlikely]] return; }
L_00140A70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 3424u);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 512u);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A9Cu); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00140A9Cu) [[unlikely]] return; }
L_00140A9C:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_00140AD0; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00140AD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00140AC8u) [[unlikely]] return; }
L_00140AC8:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00140AD0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_00140B14; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_00140AFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00140AF8u) [[unlikely]] return; }
L_00140AF8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00140AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B04u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00140B04u) [[unlikely]] return; }
L_00140B04:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_00140B14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B20u); set32(c.r[5], c.r[5].w[0] - 3424u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00140B20u) [[unlikely]] return; }
L_00140B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00140B44u) [[unlikely]] return; }
L_00140B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00140B60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[5].w[0] + 1u);  goto L_00140BB0; }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00140BB0:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BC0u); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00140BC0u) [[unlikely]] return; }
L_00140BC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_00140BF4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00140BF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00140BECu) [[unlikely]] return; }
L_00140BEC:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00140BF4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_00140C38; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_00140C20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00140C1Cu) [[unlikely]] return; }
L_00140C1C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00140C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C28u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00140C28u) [[unlikely]] return; }
L_00140C28:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_00140C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00140C40u) [[unlikely]] return; }
L_00140C40:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00140C60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C84u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00140C84u) [[unlikely]] return; }
L_00140C84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_00140CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C98u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00140C98u) [[unlikely]] return; }
L_00140C98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00140CB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00140CACu) [[unlikely]] return; }
L_00140CAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00140CB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  goto L_00140CC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CC0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00140CC0u) [[unlikely]] return; }
L_00140CC0:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00140CC4:
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00140CE4; }
    set32(c.r[17], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00140CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 9u, depth + 1u); else { c.pc = 0x0013C090u; return; } if (c.pc != 0x00140CF0u) [[unlikely]] return; }
L_00140CF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D00u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x00140D00u) [[unlikely]] return; }
L_00140D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00140D34; } }
L_00140D08:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D18u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 74u, depth + 1u); else { c.pc = 0x001408B0u; return; } if (c.pc != 0x00140D18u) [[unlikely]] return; }
L_00140D18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D24u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00140D24u) [[unlikely]] return; }
L_00140D24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00140D30u) [[unlikely]] return; }
L_00140D30:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00140D34:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140D08u | kUnwind; return; } goto L_00140D08; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x00140D50u) [[unlikely]] return; }
L_00140D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00140D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29068u)));  c.pc = t; return; }
L_00140D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140DA8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00140DA8u) [[unlikely]] return; }
L_00140DA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 29068u), c.r[4].w[0]);  goto L_00140DD4; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140DCCu); set32(c.r[8], c.r[8].w[0] - 3264u);  if (depth < kMaxDepth) unit_0010(c, 209u, depth + 1u); else { c.pc = 0x001416F0u; return; } if (c.pc != 0x00140DCCu) [[unlikely]] return; }
L_00140DCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 29068u), c.r[4].w[0]);
    c.budget -= 2;
L_00140DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00140DF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00140E9C; } }
L_00140E14:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00140E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140E30u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00140E30u) [[unlikely]] return; }
L_00140E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00140E60; } }
L_00140E38:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
L_00140E60:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140E38u | kUnwind; return; } goto L_00140E38; }
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 10;
L_00140E9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140E14u | kUnwind; return; } goto L_00140E14; }
    set32(c.r[16], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[5], c.r[16].w[0] << 1);
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    c.r[2].d[0] = ld64((c.r[28].w[0] - 31160u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140ED0u); st64((c.r[29].w[0] + 88u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 138u, depth + 1u); else { c.pc = 0x00141060u; return; } if (c.pc != 0x00140ED0u) [[unlikely]] return; }
L_00140ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00140EF0; } }
L_00140ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140EE0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x00140EE0u) [[unlikely]] return; }
L_00140EE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140EECu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0010(c, 134u, depth + 1u); else { c.pc = 0x00141030u; return; } if (c.pc != 0x00140EECu) [[unlikely]] return; }
L_00140EEC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00140EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140EF8u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x00140EF8u) [[unlikely]] return; }
L_00140EF8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140ED8u | kUnwind; return; } goto L_00140ED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00140F30; } }
L_00140F0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140F18u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x00140F18u) [[unlikely]] return; }
L_00140F18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00140F30; }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140F2Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 129u, depth + 1u); else { c.pc = 0x00140F60u; return; } if (c.pc != 0x00140F2Cu) [[unlikely]] return; }
L_00140F2C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00140F30:
    c.r[3].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140F0Cu | kUnwind; return; } goto L_00140F0C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00140F60:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[5].w[0] << 3);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_00140F9C; } }
L_00140F7C:
    set32(c.r[7], c.r[11].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[11], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_00140F9C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[11].d[0] = c.r[11].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_00140F9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140F7Cu | kUnwind; return; } goto L_00140F7C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00140FD8; } }
L_00140FC4:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_00140FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_00140FD8; } }
L_00140FD8:
    set32(c.r[8], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140FC4u | kUnwind; return; } goto L_00140FC4; }
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_00141010:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00141020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00141030:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0014103C:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 1;
L_00141040:
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00141050:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00141060:
    c.budget -= 2;
    {  goto L_00141E30; }
L_00141070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_00141080:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00141178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014109Cu); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x0014109Cu) [[unlikely]] return; }
L_0014109C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 32u);  goto L_001410AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00141158; } }
L_001410AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x001411D0u; return; } if (c.pc != 0x001410B4u) [[unlikely]] return; }
L_001410B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410C0u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x001410C0u) [[unlikely]] return; }
L_001410C0:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 36u);  if (t) { goto L_0014113C; } }
L_001410D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x001410D8u) [[unlikely]] return; }
L_001410D8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0014112C; }
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x001410F0u) [[unlikely]] return; }
L_001410F0:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141100u); set32(c.r[4], c.r[19].w[0] + 52u);  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x00141100u) [[unlikely]] return; }
L_00141100:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014110Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0014110Cu) [[unlikely]] return; }
L_0014110C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00141128; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141120u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x00141120u) [[unlikely]] return; }
L_00141120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00141158; } }
L_00141128:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014112C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141134u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x001411A0u; return; } if (c.pc != 0x00141134u) [[unlikely]] return; }
L_00141134:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 2;
L_0014113C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141144u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x00141144u) [[unlikely]] return; }
    goto L_00141144;
L_00141140:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00141144:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[19].w[0] + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001410D0u | kUnwind; return; } goto L_001410D0; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00141158:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0014117C; }
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00141178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0014117C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_00141180:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001411A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001411B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001411B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001411C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001411D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_001411FC; } }
L_001411DC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001411FC; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_001411FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001411DCu | kUnwind; return; } goto L_001411DC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00141210:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00141244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001414E4; } }
L_00141244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014124Cu); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x0014124Cu) [[unlikely]] return; }
L_0014124C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 32u);  goto L_0014125C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00141308; } }
L_0014125C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141264u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x001411D0u; return; } if (c.pc != 0x00141264u) [[unlikely]] return; }
L_00141264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141270u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x00141270u) [[unlikely]] return; }
L_00141270:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 36u);  if (t) { goto L_001412EC; } }
L_00141280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141288u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x00141288u) [[unlikely]] return; }
L_00141288:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001412DC; }
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x001412A0u) [[unlikely]] return; }
L_001412A0:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412B0u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x001412B0u) [[unlikely]] return; }
L_001412B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001412BCu) [[unlikely]] return; }
L_001412BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001412D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412D0u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x001412D0u) [[unlikely]] return; }
L_001412D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00141308; } }
L_001412D8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001412DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412E4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x001411A0u; return; } if (c.pc != 0x001412E4u) [[unlikely]] return; }
L_001412E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 2;
L_001412EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 155u, depth + 1u); else { c.pc = 0x001411C0u; return; } if (c.pc != 0x001412F4u) [[unlikely]] return; }
L_001412F4:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141280u | kUnwind; return; } goto L_00141280; }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00141308:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_001414C4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 56u)));  goto L_00141404; }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + 512u);
    mmi::pminw(c.r[19], c.r[3], c.r[2]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141338u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 222u, depth + 1u); else { c.pc = 0x00141850u; return; } if (c.pc != 0x00141338u) [[unlikely]] return; }
L_00141338:
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], c.r[19].w[0] << 1);
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 31160u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31156u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 31154u));
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141368u); st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 138u, depth + 1u); else { c.pc = 0x00141060u; return; } if (c.pc != 0x00141368u) [[unlikely]] return; }
L_00141368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00141388; } }
L_00141370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141378u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x00141378u) [[unlikely]] return; }
L_00141378:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141384u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0010(c, 134u, depth + 1u); else { c.pc = 0x00141030u; return; } if (c.pc != 0x00141384u) [[unlikely]] return; }
L_00141384:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00141388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141390u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x00141390u) [[unlikely]] return; }
L_00141390:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141370u | kUnwind; return; } goto L_00141370; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001413C8; } }
L_001413A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413B0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x001413B0u) [[unlikely]] return; }
L_001413B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001413C8; }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 129u, depth + 1u); else { c.pc = 0x00140F60u; return; } if (c.pc != 0x001413C4u) [[unlikely]] return; }
L_001413C4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001413C8:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001413A4u | kUnwind; return; } goto L_001413A4; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[18].w[0] + 1u);  goto L_001413E8; }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001413E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141400u); set32(c.r[6], c.r[6].w[0] - 3257u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00141400u) [[unlikely]] return; }
L_00141400:
    set32(c.r[16], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_00141404:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141424u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x00141424u) [[unlikely]] return; }
L_00141424:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141438u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x00141438u) [[unlikely]] return; }
L_00141438:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0014143C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141444u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x001411D0u; return; } if (c.pc != 0x00141444u) [[unlikely]] return; }
L_00141444:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141450u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x00141450u) [[unlikely]] return; }
L_00141450:
    mmi::divu(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014146C; } }
L_00141460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141468u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 154u, depth + 1u); else { c.pc = 0x001411A0u; return; } if (c.pc != 0x00141468u) [[unlikely]] return; }
L_00141468:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014146C:
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141478u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x00141478u) [[unlikely]] return; }
L_00141478:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141460u | kUnwind; return; } goto L_00141460; }
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141498u); c.r[21].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x00141498u) [[unlikely]] return; }
L_00141498:
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001414A8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x001414A8u) [[unlikely]] return; }
L_001414A8:
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001414BCu); c.r[17].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x001414BCu) [[unlikely]] return; }
L_001414BC:
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_001414C4:
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_001414E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00141510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141538u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 222u, depth + 1u); else { c.pc = 0x00141850u; return; } if (c.pc != 0x00141538u) [[unlikely]] return; }
L_00141538:
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[18].w[0] + 36u);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    c.r[2].d[0] = ld64((c.r[28].w[0] - 31160u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141558u); st64((c.r[29].w[0] + 88u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 138u, depth + 1u); else { c.pc = 0x00141060u; return; } if (c.pc != 0x00141558u) [[unlikely]] return; }
L_00141558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00141578; } }
L_00141560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141568u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x00141050u; return; } if (c.pc != 0x00141568u) [[unlikely]] return; }
L_00141568:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141574u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0010(c, 134u, depth + 1u); else { c.pc = 0x00141030u; return; } if (c.pc != 0x00141574u) [[unlikely]] return; }
L_00141574:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00141578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141580u); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0010(c, 133u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x00141580u) [[unlikely]] return; }
L_00141580:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141560u | kUnwind; return; } goto L_00141560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001415B8; } }
L_00141594:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001415A0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 132u, depth + 1u); else { c.pc = 0x00141010u; return; } if (c.pc != 0x001415A0u) [[unlikely]] return; }
L_001415A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001415B8; }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001415B4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 129u, depth + 1u); else { c.pc = 0x00140F60u; return; } if (c.pc != 0x001415B4u) [[unlikely]] return; }
L_001415B4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001415B8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141594u | kUnwind; return; } goto L_00141594; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001415E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001416CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_00141620; } }
L_00141608:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141614u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00141614u) [[unlikely]] return; }
L_00141614:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 8u);
    c.budget -= 3;
L_00141620:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 7;
L_0014163C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141608u | kUnwind; return; } goto L_00141608; }
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_00141680; }
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014167C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014167C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014167C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014167Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 261u, depth + 1u); else { c.pc = 0x00141F10u; return; } if (c.pc != 0x0014167Cu) [[unlikely]] return; }
L_0014167C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_00141680:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001416A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001416A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001416A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 257u, depth + 1u); else { c.pc = 0x00141EA0u; return; } if (c.pc != 0x001416A0u) [[unlikely]] return; }
L_001416A0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001416B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001416B4u) [[unlikely]] return; }
L_001416B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001416B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001416D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001416CCu) [[unlikely]] return; }
L_001416CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001416D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001416F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141734u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00141734u) [[unlikely]] return; }
L_00141734:
    set32(c.r[3], 0u - 1u);
    set32(c.r[18], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00141774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014174Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0014174Cu) [[unlikely]] return; }
L_0014174C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00141764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141760u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00141760u) [[unlikely]] return; }
L_00141760:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00141764:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_00141778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141774u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00141774u) [[unlikely]] return; }
L_00141774:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00141778:
    set32(c.r[17], c.r[21].w[0] + 32u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 12u), 0u);  if (t) { goto L_001417C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001417A0u) [[unlikely]] return; }
L_001417A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001417B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417B4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001417B4u) [[unlikely]] return; }
L_001417B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001417B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_001417CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417C8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x001417C8u) [[unlikely]] return; }
L_001417C8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001417CC:
    set32(c.r[5], c.r[22].w[0] << 1);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417E8u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0010(c, 248u, depth + 1u); else { c.pc = 0x00141D10u; return; } if (c.pc != 0x001417E8u) [[unlikely]] return; }
L_001417E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[19].d[0] = c.r[20].d[0] + 0ull;  goto L_001417F4; }
L_001417F4:
    st32((c.r[21].w[0] + 60u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141808u); st32((c.r[21].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00141808u) [[unlikely]] return; }
L_00141808:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141814u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 191u, depth + 1u); else { c.pc = 0x00141510u; return; } if (c.pc != 0x00141814u) [[unlikely]] return; }
L_00141814:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
L_0014183C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00141840:
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 1;
    c.pc = 0x00141844u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00141850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_00141894; }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
L_00141880:
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014188Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 231u, depth + 1u); else { c.pc = 0x00141960u; return; } if (c.pc != 0x0014188Cu) [[unlikely]] return; }
L_0014188C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001418BC; } }
L_00141894:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001418B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001418B8u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 227u, depth + 1u); else { c.pc = 0x001418D0u; return; } if (c.pc != 0x001418B8u) [[unlikely]] return; }
L_001418B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001418BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001418C0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x001418C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001418D0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001418E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00141958; } }
L_001418E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00141900; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00141900:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00141938; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00141928; } }
L_00141914:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 5;
L_00141928:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141914u | kUnwind; return; } goto L_00141914; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00141938:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00141948; } }
L_00141940:
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00141948:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00141958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00141960:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00141CEC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_001419CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001419C0u); set32(c.r[5], c.r[5].w[0] - 3224u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001419C0u) [[unlikely]] return; }
L_001419C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001419C8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001419C8u) [[unlikely]] return; }
L_001419C8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001419CC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00141B58; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_00141A00; } }
    set32(c.r[4], c.r[4].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_00141A00:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] << 3);  goto L_00141A94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00141A40; } }
L_00141A14:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_00141A30; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00141A30:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00141A40:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141A14u | kUnwind; return; } goto L_00141A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00141A80; } }
L_00141A54:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_00141A70; }
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00141A70:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00141A80:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141A54u | kUnwind; return; } goto L_00141A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141B2C; } }
L_00141A94:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_00141ACC; } }
L_00141AA0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_00141ABC; }
    set32(c.r[4], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00141ABC:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00141ACC:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141AA0u | kUnwind; return; } goto L_00141AA0; } }
    set32(c.r[4], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  goto L_00141B20; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00141B00; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00141B00:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141B20; } }
L_00141B0C:
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 5;
L_00141B20:
    c.r[1].d[0] = c.r[19].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141B0Cu | kUnwind; return; } goto L_00141B0C; }
L_00141B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141B48; } }
L_00141B34:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
L_00141B48:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141B34u | kUnwind; return; } goto L_00141B34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00141CF0; } }
L_00141B58:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00141B74; }
L_00141B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00141B90; } }
L_00141B7C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00141B90; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00141B90:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141B7Cu | kUnwind; return; } goto L_00141B7C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141BA8u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00141BA8u) [[unlikely]] return; }
L_00141BA8:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00141BF0; } }
L_00141BC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00141BE0; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00141BE0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00141BF0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141BC4u | kUnwind; return; } goto L_00141BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141C30; } }
    goto L_00141C04;
L_00141C00:
    c.budget -= 1;
L_00141C04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00141C20; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00141C20:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00141C30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141C04u | kUnwind; return; } goto L_00141C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00141C70; } }
    goto L_00141C40;
L_00141C3C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00141C40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00141C5C; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00141C5C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00141C70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141C40u | kUnwind; return; } goto L_00141C40; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00141CC8; }
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
L_00141CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141CD0u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00141F80u; return; } if (c.pc != 0x00141CD0u) [[unlikely]] return; }
L_00141CD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00141CEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00141CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141CECu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00141CECu) [[unlikely]] return; }
L_00141CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00141CF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00141D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00141E18; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D50u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00141D50u) [[unlikely]] return; }
L_00141D50:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00141D98; } }
L_00141D6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00141D88; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_00141D88:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00141D98:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141D6Cu | kUnwind; return; } goto L_00141D6C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00141DF4; }
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
L_00141DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141DFCu);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001423F0u; return; } if (c.pc != 0x00141DFCu) [[unlikely]] return; }
L_00141DFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00141E1C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00141E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E18u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00141E18u) [[unlikely]] return; }
L_00141E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00141E1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00141E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
L_00141E3C:
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00141E68; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E60u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 268u, depth + 1u); else { c.pc = 0x00142030u; return; } if (c.pc != 0x00141E60u) [[unlikely]] return; }
L_00141E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00141E94; } }
L_00141E68:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00141E90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E90u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 266u, depth + 1u); else { c.pc = 0x00141F90u; return; } if (c.pc != 0x00141E90u) [[unlikely]] return; }
L_00141E90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00141E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00141EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00141EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141EC4u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00141F80u; return; } if (c.pc != 0x00141EC4u) [[unlikely]] return; }
L_00141EC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00141EE4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00141EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141EE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00141EE0u) [[unlikely]] return; }
L_00141EE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00141EE4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00141EFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00141EF8u) [[unlikely]] return; }
L_00141EF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00141EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00141F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00141F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F34u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001423F0u; return; } if (c.pc != 0x00141F34u) [[unlikely]] return; }
L_00141F34:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00141F54; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00141F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F50u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00141F50u) [[unlikely]] return; }
L_00141F50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00141F54:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00141F6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00141F68u) [[unlikely]] return; }
L_00141F68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00141F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00141F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00141F90:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00141FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00142020; } }
L_00141FA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00141FC0; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00141FC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00142000; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00141FF0; } }
L_00141FD4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_00141FF0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141FD4u | kUnwind; return; } goto L_00141FD4; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00142000:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00142010; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00142010:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00142020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00142030:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 3;
L_0014203C:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_00142040:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001423D0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0014209C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_00142080:
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142090u); set32(c.r[5], c.r[5].w[0] - 3224u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00142090u) [[unlikely]] return; }
L_00142090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142098u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00142098u) [[unlikely]] return; }
L_00142098:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0014209C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00142238; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 4;
L_001420C0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001420D0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_001420D0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_00142164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00142110; } }
L_001420E4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00142100; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00142100:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00142110:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001420E4u | kUnwind; return; } goto L_001420E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00142150; } }
L_00142124:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00142140; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00142140:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00142150:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00142124u | kUnwind; return; } goto L_00142124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142204; } }
L_00142164:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0014219C; } }
L_00142170:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0014218C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0014218C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0014219C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00142170u | kUnwind; return; } goto L_00142170; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_001421F8; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001421D0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001421D0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001421F8; } }
L_001421DC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001421F8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001421DCu | kUnwind; return; } goto L_001421DC; }
L_00142204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142228; } }
L_0014220C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_00142228:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014220Cu | kUnwind; return; } goto L_0014220C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001423D4; } }
L_00142238:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00142258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00142260; } }
L_00142258:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00142260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00142280; } }
L_00142268:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0014227C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0014227C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00142280:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142268u | kUnwind; return; } goto L_00142268; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142294u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00142294u) [[unlikely]] return; }
L_00142294:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001422E0; } }
L_001422B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001422D0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_001422D0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_001422E0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001422B4u | kUnwind; return; } goto L_001422B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142320; } }
L_001422F4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00142310; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00142310:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00142320:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001422F4u | kUnwind; return; } goto L_001422F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00142360; } }
L_00142330:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0014234C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0014234C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00142360:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00142330u | kUnwind; return; } goto L_00142330; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_001423B8; }
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
L_001423B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_001423D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001423D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001423D0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001423D0u) [[unlikely]] return; }
L_001423D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001423D4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001423F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00142400:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00142420:
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_00142440:
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_00142460:
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
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = 0u;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    c.f[22] = c.f[23];
    c.budget -= 19;
    { const bool t = c.r[19].d[0] == 0ull; c.f[21] = c.f[23];  if (t) { goto L_001424DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[20], c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001424D8u);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x001424D8u) [[unlikely]] return; }
L_001424D8:
    c.f[23] = c.f[0];
    c.budget -= 1;
L_001424DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0014251C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[23]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142518u);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x00142518u) [[unlikely]] return; }
L_00142518:
    c.f[22] = c.f[0];
    c.budget -= 1;
L_0014251C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00142560; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[23]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[20]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; c.f[21] = fp::sub(c.facc, fp::mul(c.f[2], c.f[22]));  if (t) { goto L_00142554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142560; } }
L_00142554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014255Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x0014255Cu) [[unlikely]] return; }
L_0014255C:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00142560:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0014256C; } }
    st32((c.r[19].w[0]), c.f[23]);
    c.budget -= 1;
L_0014256C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00142578; } }
    st32((c.r[18].w[0]), c.f[22]);
    c.budget -= 1;
L_00142578:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00142584; } }
    st32((c.r[17].w[0]), c.f[21]);
    c.budget -= 1;
L_00142584:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001425A0; }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_001425A0:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001425D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001425E0u); c.r[4].d[0] = ld64((c.r[4].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001425E0u) [[unlikely]] return; }
L_001425E0:
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00142600:
    c.r[4].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 3;
    { set32(c.r[5], 0u + 1000u);  [[clang::musttail]] return unit_00AB(c, 486u, depth); }
L_00142610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 3u, depth + 1u); else { c.pc = 0x003A4088u; return; } if (c.pc != 0x00142624u) [[unlikely]] return; }
L_00142624:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142634u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00A9(c, 63u, depth + 1u); else { c.pc = 0x003A4918u; return; } if (c.pc != 0x00142634u) [[unlikely]] return; }
L_00142634:
    c.r[6].d[0] = ld32((c.r[29].w[0] + 44u));
    c.r[7].d[0] = ld32((c.r[29].w[0] + 40u));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 29064u));
    c.r[4].d[0] = c.r[6].d[0] << 6;
    c.r[5].d[0] = c.r[4].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 5;
    c.r[4].d[0] = c.r[4].d[0] - c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 3;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[7].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142690u);  if (depth < kMaxDepth) unit_00A9(c, 3u, depth + 1u); else { c.pc = 0x003A4088u; return; } if (c.pc != 0x00142690u) [[unlikely]] return; }
L_00142690:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001426A0u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00A9(c, 63u, depth + 1u); else { c.pc = 0x003A4918u; return; } if (c.pc != 0x001426A0u) [[unlikely]] return; }
L_001426A0:
    c.r[6].d[0] = ld32((c.r[29].w[0] + 28u));
    c.r[7].d[0] = ld32((c.r[29].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[28].w[0] - 29064u));
    c.r[3].d[0] = c.r[6].d[0] << 6;
    c.r[4].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[4].d[0] << 5;
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 3;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 6;
    c.r[3].d[0] = c.r[7].d[0] + c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001426D4u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001426D4u) [[unlikely]] return; }
L_001426D4:
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001426F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 3u, depth + 1u); else { c.pc = 0x003A4088u; return; } if (c.pc != 0x00142704u) [[unlikely]] return; }
L_00142704:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142714u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00A9(c, 63u, depth + 1u); else { c.pc = 0x003A4918u; return; } if (c.pc != 0x00142714u) [[unlikely]] return; }
L_00142714:
    c.r[5].d[0] = ld32((c.r[29].w[0] + 44u));
    c.r[6].d[0] = ld32((c.r[29].w[0] + 40u));
    c.r[3].d[0] = c.r[5].d[0] << 6;
    c.r[4].d[0] = c.r[3].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] << 5;
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 3;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 6;
    c.r[3].d[0] = c.r[6].d[0] + c.r[3].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 29064u));
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142770u); st64((c.r[28].w[0] - 29064u), 0ull);  if (depth < kMaxDepth) unit_00A9(c, 3u, depth + 1u); else { c.pc = 0x003A4088u; return; } if (c.pc != 0x00142770u) [[unlikely]] return; }
L_00142770:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142780u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00A9(c, 63u, depth + 1u); else { c.pc = 0x003A4918u; return; } if (c.pc != 0x00142780u) [[unlikely]] return; }
L_00142780:
    c.r[6].d[0] = ld32((c.r[29].w[0] + 28u));
    c.r[7].d[0] = ld32((c.r[29].w[0] + 24u));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 29064u));
    c.r[4].d[0] = c.r[6].d[0] << 6;
    c.r[5].d[0] = c.r[4].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 5;
    c.r[4].d[0] = c.r[4].d[0] - c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 3;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[4].d[0] = c.r[7].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    st64((c.r[28].w[0] - 29064u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001427C0:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_001427D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001427F8u); c.f[12] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001427F8u) [[unlikely]] return; }
L_001427F8:
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00142810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00142820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00142844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014283Cu); set32(c.r[5], c.r[28].w[0] - 29016u);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x0014283Cu) [[unlikely]] return; }
L_0014283C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0014286C; } }
    goto L_00142844;
L_00142840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00142844:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0014285C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142854u); set32(c.r[5], c.r[28].w[0] - 29040u);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x00142854u) [[unlikely]] return; }
L_00142854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142868; } }
L_0014285C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142868u);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142868u) [[unlikely]] return; }
L_00142868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0014286C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00142880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001428A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001428A4u) [[unlikely]] return; }
L_001428A4:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 40u));
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001428C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001428E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00142978; } }
L_001428E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001428FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001428FCu) [[unlikely]] return; }
L_001428FC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_00142900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142908u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0010(c, 289u, depth + 1u); else { c.pc = 0x00142400u; return; } if (c.pc != 0x00142908u) [[unlikely]] return; }
L_00142908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[29].w[0] + 56u));  goto L_00142970; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142920u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00142440u; return; } if (c.pc != 0x00142920u) [[unlikely]] return; }
L_00142920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142928u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x001425D0u; return; } if (c.pc != 0x00142928u) [[unlikely]] return; }
L_00142928:
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014295Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x0014295Cu) [[unlikely]] return; }
L_0014295C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142968u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 290u, depth + 1u); else { c.pc = 0x00142420u; return; } if (c.pc != 0x00142968u) [[unlikely]] return; }
L_00142968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00142978; } }
L_00142970:
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_00142978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00142990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001429CC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 24656u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001429C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001429C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001429C8u) [[unlikely]] return; }
L_001429C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001429CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001429E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.f[12]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00142A14u) [[unlikely]] return; }
L_00142A14:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    st64((c.r[17].w[0] + 16u), c.r[4].d[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00142A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24656u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A64u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 315u, depth + 1u); else { c.pc = 0x00142810u; return; } if (c.pc != 0x00142A64u) [[unlikely]] return; }
L_00142A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A78u); set32(c.r[5], c.r[28].w[0] - 29040u);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x00142A78u) [[unlikely]] return; }
L_00142A78:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 16u), c.r[4].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AB0u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x00142610u; return; } if (c.pc != 0x00142AB0u) [[unlikely]] return; }
L_00142AB0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AC0u); set32(c.r[6], c.r[28].w[0] - 29032u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00142440u; return; } if (c.pc != 0x00142AC0u) [[unlikely]] return; }
L_00142AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AC8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x001425D0u; return; } if (c.pc != 0x00142AC8u) [[unlikely]] return; }
L_00142AC8:
    c.f[1] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    st32((c.r[28].w[0] - 29048u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AE8u); set32(c.r[6], c.r[28].w[0] - 29024u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00142440u; return; } if (c.pc != 0x00142AE8u) [[unlikely]] return; }
L_00142AE8:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[28].w[0] - 29040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AF8u); st64((c.r[28].w[0] - 29040u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x001425D0u; return; } if (c.pc != 0x00142AF8u) [[unlikely]] return; }
L_00142AF8:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[28].w[0] - 29044u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[28].w[0] - 29032u), c.r[4].d[0]);  if (t) { goto L_00142B54; } }
    c.f[2] = ld32((c.r[28].w[0] - 29048u));
    c.f[1] = ld32((c.r[28].w[0] - 31148u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31152u));
    c.f[12] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B38u); st32((c.r[28].w[0] - 29056u), c.f[12]);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142B38u) [[unlikely]] return; }
L_00142B38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B44u); set32(c.r[4], c.r[28].w[0] - 29016u);  if (depth < kMaxDepth) unit_0010(c, 290u, depth + 1u); else { c.pc = 0x00142420u; return; } if (c.pc != 0x00142B44u) [[unlikely]] return; }
L_00142B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B4Cu); set32(c.r[4], c.r[28].w[0] - 29016u);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x001425D0u; return; } if (c.pc != 0x00142B4Cu) [[unlikely]] return; }
L_00142B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29052u), c.f[0]);  if (t) { goto L_00142B58; } }
L_00142B54:
    st32((c.r[28].w[0] - 29056u), 0u);
    c.budget -= 1;
L_00142B58:
    c.f[0] = ld32((c.r[28].w[0] - 31140u));
    c.f[1] = ld32((c.r[28].w[0] - 31144u));
    c.f[2] = ld32((c.r[28].w[0] - 31148u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[28].w[0] - 31148u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31152u), c.f[12]);  c.pc = t; return; }
L_00142BA0:
    c.budget -= 2;
    { st8((c.r[28].w[0] - 29008u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142AA0u | kUnwind; return; } goto L_00142AA0; }
L_00142BB0:
    st32((c.r[28].w[0] - 31148u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31144u), c.f[12]);  c.pc = t; return; }
L_00142BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142BDCu); set32(c.r[6], c.r[6].w[0] - 3136u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00142BDCu) [[unlikely]] return; }
L_00142BDC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 24u);
    st32((c.r[28].w[0] - 29056u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142BF0u); st32((c.r[28].w[0] - 29052u), 0u);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142BF0u) [[unlikely]] return; }
L_00142BF0:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 3105u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C0Cu); st64((c.r[28].w[0] - 29016u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00142C0Cu) [[unlikely]] return; }
L_00142C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C14u); set32(c.r[4], c.r[28].w[0] - 29032u);  if (depth < kMaxDepth) unit_0010(c, 306u, depth + 1u); else { c.pc = 0x001426F0u; return; } if (c.pc != 0x00142C14u) [[unlikely]] return; }
L_00142C14:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C20u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142C20u) [[unlikely]] return; }
L_00142C20:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 29032u));
    st32((c.r[28].w[0] - 29044u), 0u);
    st32((c.r[28].w[0] - 29048u), 0u);
    st64((c.r[28].w[0] - 29040u), c.r[4].d[0]);
    st64((c.r[28].w[0] - 29024u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00142C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C6Cu); set32(c.r[6], c.r[6].w[0] - 3105u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00142C6Cu) [[unlikely]] return; }
L_00142C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C74u); set32(c.r[4], c.r[28].w[0] - 29032u);  if (depth < kMaxDepth) unit_0010(c, 306u, depth + 1u); else { c.pc = 0x001426F0u; return; } if (c.pc != 0x00142C74u) [[unlikely]] return; }
L_00142C74:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C80u); set32(c.r[4], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142C80u) [[unlikely]] return; }
L_00142C80:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[3].d[0] = ld64((c.r[28].w[0] - 29032u));
    st32((c.r[28].w[0] - 29044u), 0u);
    st32((c.r[28].w[0] - 29048u), 0u);
    st64((c.r[28].w[0] - 29040u), c.r[4].d[0]);
    st64((c.r[28].w[0] - 29024u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00142CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142CCCu); set32(c.r[6], c.r[6].w[0] - 3136u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00142CCCu) [[unlikely]] return; }
L_00142CCC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 24u);
    st32((c.r[28].w[0] - 29056u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142CE0u); st32((c.r[28].w[0] - 29052u), 0u);  if (depth < kMaxDepth) unit_0010(c, 313u, depth + 1u); else { c.pc = 0x001427D0u; return; } if (c.pc != 0x00142CE0u) [[unlikely]] return; }
L_00142CE0:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 24u));
    st64((c.r[28].w[0] - 29016u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00142D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31144u), c.f[12]);  c.pc = t; return; }
L_00142D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00142D50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D38u); st32((c.r[28].w[0] - 29004u), 0u);  if (depth < kMaxDepth) unit_0010(c, 448u, depth + 1u); else { c.pc = 0x00143560u; return; } if (c.pc != 0x00142D38u) [[unlikely]] return; }
L_00142D38:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00142D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00142D50u) [[unlikely]] return; }
L_00142D50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00142D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00142D84u) [[unlikely]] return; }
L_00142D84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00142D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D98u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00142D98u) [[unlikely]] return; }
L_00142D98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00142D9C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  goto L_00142DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DACu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00142DACu) [[unlikely]] return; }
L_00142DAC:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_00142DB0:
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DCCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 548u, depth + 1u); else { c.pc = 0x00143F40u; return; } if (c.pc != 0x00142DCCu) [[unlikely]] return; }
L_00142DCC:
    st32((c.r[28].w[0] - 29004u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00142DF0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 172u), c.r[7].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00142E34u) [[unlikely]] return; }
L_00142E34:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E40u); c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00142E40u) [[unlikely]] return; }
L_00142E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E48u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00142E48u) [[unlikely]] return; }
L_00142E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E50u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00142E50u) [[unlikely]] return; }
L_00142E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00142E58u) [[unlikely]] return; }
L_00142E58:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E68u); set32(c.r[5], c.r[30].w[0] << 1);  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x00142E68u) [[unlikely]] return; }
L_00142E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0014333C; } }
L_00142E70:
    set32(c.r[4], 0u + 92u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  goto L_00143244; }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  goto L_00142E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0014333C; } }
L_00142E94:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  goto L_00142EC4; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142EB4u); set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x00142EB4u) [[unlikely]] return; }
L_00142EB4:
    set32(c.r[2], c.r[18].w[0] + 2u);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00143338; } }
L_00142EC4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142ED0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x00142ED0u) [[unlikely]] return; }
L_00142ED0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142EDCu); set32(c.r[5], 0u + 93u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00142EDCu) [[unlikely]] return; }
L_00142EDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00142F2C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142EF4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00142EF4u) [[unlikely]] return; }
L_00142EF4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F00u) [[unlikely]] return; }
L_00142F00:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F0Cu) [[unlikely]] return; }
L_00142F0C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F18u) [[unlikely]] return; }
L_00142F18:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F24u) [[unlikely]] return; }
L_00142F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143394; } }
L_00142F2C:
    set32(c.r[5], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F38u); set32(c.r[18], c.r[17].w[0] - c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00142F38u) [[unlikely]] return; }
L_00142F38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 272u)));  goto L_00142F88; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F50u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00142F50u) [[unlikely]] return; }
L_00142F50:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F5Cu) [[unlikely]] return; }
L_00142F5C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F68u) [[unlikely]] return; }
L_00142F68:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F74u) [[unlikely]] return; }
L_00142F74:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00142F80u) [[unlikely]] return; }
L_00142F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143394; } }
L_00142F88:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 280u)));  goto L_00142FB8; }
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[2].w[0] << 1);
    st8((c.r[29].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00142FC0; } }
L_00142FB8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 276u), 0u);
    c.budget -= 2;
L_00142FC0:
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    set32(c.r[5], c.r[19].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FD4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x00142FD4u) [[unlikely]] return; }
L_00142FD4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FE4u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0010(c, 484u, depth + 1u); else { c.pc = 0x00143A30u; return; } if (c.pc != 0x00142FE4u) [[unlikely]] return; }
L_00142FE4:
    set32(c.r[19], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[22].w[0] + 12u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  goto L_00143038; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143000u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00143000u) [[unlikely]] return; }
L_00143000:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014300Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014300Cu) [[unlikely]] return; }
L_0014300C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143018u) [[unlikely]] return; }
L_00143018:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143024u) [[unlikely]] return; }
L_00143024:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143030u) [[unlikely]] return; }
L_00143030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143394; } }
L_00143038:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 1;
L_0014303C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00143068; } }
    goto L_00143044;
L_00143040:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00143044:
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 256u));
    set32(c.r[3], c.r[2].w[0] << 1);
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00143074; } }
L_00143068:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 3;
L_00143074:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 296u)));  goto L_001430A8; }
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 288u));
    set32(c.r[3], c.r[2].w[0] << 1);
    st8((c.r[29].w[0] + 289u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001430B0; } }
L_001430A8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 292u), 0u);
    c.budget -= 2;
L_001430B0:
    set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001430C4u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x001430C4u) [[unlikely]] return; }
L_001430C4:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 28u);  if (t) { goto L_0014316C; } }
L_001430D8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_001430F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 296u)));  if (t) { goto L_001430F4; } }
L_001430F0:
    set32(c.r[5], c.r[29].w[0] + 289u);
    c.budget -= 1;
L_001430F4:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
L_00143100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00143108u); set32(c.r[6], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00143108u) [[unlikely]] return; }
L_00143108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_00143164; }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 257u);  goto L_00143124; }
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_00143124:
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143134u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 372u, depth + 1u); else { c.pc = 0x00142DF0u; return; } if (c.pc != 0x00143134u) [[unlikely]] return; }
L_00143134:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 241u);  goto L_00143148; }
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_00143148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143150u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00143150u) [[unlikely]] return; }
L_00143150:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014315Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014315Cu) [[unlikely]] return; }
L_0014315C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00143198; } }
L_00143164:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_0014316C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001430D8u | kUnwind; return; } goto L_001430D8; }
L_00143198:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] + 1u);  goto L_00143338; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 2992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431B4u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x001431B4u) [[unlikely]] return; }
L_001431B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431C8u); set32(c.r[6], c.r[6].w[0] - 2990u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x001431C8u) [[unlikely]] return; }
L_001431C8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431D8u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x001431D8u) [[unlikely]] return; }
L_001431D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431ECu); set32(c.r[6], c.r[6].w[0] - 2988u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x001431ECu) [[unlikely]] return; }
L_001431EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00143200; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00143200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143208u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00143208u) [[unlikely]] return; }
L_00143208:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143214u) [[unlikely]] return; }
L_00143214:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143220u) [[unlikely]] return; }
L_00143220:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014322Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014322Cu) [[unlikely]] return; }
L_0014322C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143238u) [[unlikely]] return; }
L_00143238:
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143338; } }
L_00143244:
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  goto L_001432EC; }
    set32(c.r[2], 0u + 116u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  goto L_001432C4; }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  goto L_0014329C; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_00143278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143338; } }
L_00143278:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014328Cu); set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x0014328Cu) [[unlikely]] return; }
L_0014328C:
    set32(c.r[2], c.r[18].w[0] + 2u);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00143338; } }
L_0014329C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432A8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x001432A8u) [[unlikely]] return; }
L_001432A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432B8u); set32(c.r[5], c.r[5].w[0] - 2986u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001432B8u) [[unlikely]] return; }
L_001432B8:
    set32(c.r[2], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_00143338; } }
L_001432C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432D0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x001432D0u) [[unlikely]] return; }
L_001432D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432E0u); set32(c.r[5], c.r[5].w[0] - 2984u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001432E0u) [[unlikely]] return; }
L_001432E0:
    set32(c.r[2], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_00143338; } }
L_001432EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432F8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0010(c, 488u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x001432F8u) [[unlikely]] return; }
L_001432F8:
    set32(c.r[2], c.r[18].w[0] + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 2982u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143310u); set32(c.r[6], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00143310u) [[unlikely]] return; }
L_00143310:
    set32(c.r[6], ld32((c.r[29].w[0] + 340u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143324u); set32(c.r[5], c.r[5].w[0] - 2978u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x00143324u) [[unlikely]] return; }
L_00143324:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143330u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00143330u) [[unlikely]] return; }
L_00143330:
    set32(c.r[2], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00143338:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0014333C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[20].w[0] + c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142E70u | kUnwind; return; } goto L_00142E70; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143354u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00143354u) [[unlikely]] return; }
L_00143354:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143360u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00143360u) [[unlikely]] return; }
L_00143360:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014336Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014336Cu) [[unlikely]] return; }
L_0014336C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143378u) [[unlikely]] return; }
L_00143378:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143384u) [[unlikely]] return; }
L_00143384:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143390u) [[unlikely]] return; }
L_00143390:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00143394:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001433D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001433F4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001433F4u) [[unlikely]] return; }
L_001433F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143404u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00143404u) [[unlikely]] return; }
L_00143404:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_00143418; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00143418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143420u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00143420u) [[unlikely]] return; }
L_00143420:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014342Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014342Cu) [[unlikely]] return; }
L_0014342C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00143438u) [[unlikely]] return; }
L_00143438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00143460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_001434E8; } }
L_00143490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 28u);  if (t) { goto L_001434B4; } }
L_00143498:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[2], c.r[5].w[0] + 4u);  goto L_001434B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x001434B0u) [[unlikely]] return; }
L_001434B0:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001434B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143498u | kUnwind; return; } goto L_00143498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434E8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x001434E8u) [[unlikely]] return; }
L_001434E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143490u | kUnwind; return; } goto L_00143490; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00143520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143530u); st32((c.r[29].w[0] + 28u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0010(c, 457u, depth + 1u); else { c.pc = 0x001436C0u; return; } if (c.pc != 0x00143530u) [[unlikely]] return; }
L_00143530:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143550u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00143550u) [[unlikely]] return; }
L_00143550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00143560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014364C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_001435F8; } }
L_0014358C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 40u)));  if (t) { goto L_001435C0; } }
L_00143594:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_001435B8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001435B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001435B4u) [[unlikely]] return; }
L_001435B4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_001435B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_001435C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143594u | kUnwind; return; } goto L_00143594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001435F8u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x001435F8u) [[unlikely]] return; }
L_001435F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014358Cu | kUnwind; return; } goto L_0014358C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00143638; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143634; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143634; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00143634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143634u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143634u) [[unlikely]] return; }
L_00143634:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00143638:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00143650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014364Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014364Cu) [[unlikely]] return; }
L_0014364C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00143670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001436AC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 24624u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001436A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001436A8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001436A8u) [[unlikely]] return; }
L_001436A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001436AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001436C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00143730; } }
L_00143704:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143710u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00143710u) [[unlikely]] return; }
L_00143710:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_00143724; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00143730; } }
L_00143724:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00143730:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143704u | kUnwind; return; } goto L_00143704; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00143758; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014374Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0014374Cu) [[unlikely]] return; }
L_0014374C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_00143804; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_00143758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143760u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00143760u) [[unlikely]] return; }
L_00143760:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00143778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143774u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00143774u) [[unlikely]] return; }
L_00143774:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00143778:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  goto L_0014378C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143788u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00143788u) [[unlikely]] return; }
L_00143788:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0014378C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), 0u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437A4u); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001437A4u) [[unlikely]] return; }
L_001437A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437B0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 479u, depth + 1u); else { c.pc = 0x00143970u; return; } if (c.pc != 0x001437B0u) [[unlikely]] return; }
L_001437B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437C8u); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 2u, depth + 1u); else { c.pc = 0x00144010u; return; } if (c.pc != 0x001437C8u) [[unlikely]] return; }
L_001437C8:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 476u, depth + 1u); else { c.pc = 0x001438F0u; return; } if (c.pc != 0x001437D8u) [[unlikely]] return; }
L_001437D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x001437E4u) [[unlikely]] return; }
L_001437E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00143804; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143800u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143800u) [[unlikely]] return; }
L_00143800:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00143804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00143830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0014383C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00143840:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001438D8; } }
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014388C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014388Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0014388Cu) [[unlikely]] return; }
L_0014388C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001438C4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001438C0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001438C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001438C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001438C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001438C0u) [[unlikely]] return; }
L_001438C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001438C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001438DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001438D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001438D8u) [[unlikely]] return; }
L_001438D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001438DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001438F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00143958; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00143944; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143940; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143940; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143940u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143940u) [[unlikely]] return; }
L_00143940:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00143944:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0014395C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00143958u) [[unlikely]] return; }
L_00143958:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014395C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00143970:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014398Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0014398Cu) [[unlikely]] return; }
L_0014398C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001439A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001439A0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001439A0u) [[unlikely]] return; }
L_001439A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001439A4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  goto L_001439B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001439B4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x001439B4u) [[unlikely]] return; }
L_001439B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001439B8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A10u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 549u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x00143A10u) [[unlikely]] return; }
L_00143A10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00143A30:
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
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_00143A7C; } }
L_00143A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00143A6Cu) [[unlikely]] return; }
L_00143A6C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_00143A7C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_00143A7C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143A64u | kUnwind; return; } goto L_00143A64; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_00143AA8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A9Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00143A9Cu) [[unlikely]] return; }
L_00143A9C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_00143AAC; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_00143AA8:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00143AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00143AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00143AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00143AFC; } }
L_00143AF0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00143AFC:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 28u)));
    set32(c.r[8], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00143B0Cu) [[unlikely]] return; }
L_00143B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00143B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00143C40; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00143BB0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00143B6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B68u);  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143B68u) [[unlikely]] return; }
L_00143B68:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00143B6C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143B80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143B7Cu) [[unlikely]] return; }
L_00143B7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B88u);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143B88u) [[unlikely]] return; }
L_00143B88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B94u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 544u, depth + 1u); else { c.pc = 0x00143EF0u; return; } if (c.pc != 0x00143B94u) [[unlikely]] return; }
L_00143B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143B9Cu) [[unlikely]] return; }
L_00143B9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 541u, depth + 1u); else { c.pc = 0x00143EC0u; return; } if (c.pc != 0x00143BACu) [[unlikely]] return; }
L_00143BAC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00143BB0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143C14; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00143BD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143BCCu) [[unlikely]] return; }
L_00143BCC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00143BD0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143BE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143BE0u) [[unlikely]] return; }
L_00143BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BECu);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143BECu) [[unlikely]] return; }
L_00143BEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BF8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 544u, depth + 1u); else { c.pc = 0x00143EF0u; return; } if (c.pc != 0x00143BF8u) [[unlikely]] return; }
L_00143BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143C00u) [[unlikely]] return; }
L_00143C00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 541u, depth + 1u); else { c.pc = 0x00143EC0u; return; } if (c.pc != 0x00143C10u) [[unlikely]] return; }
L_00143C10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C1Cu);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143C1Cu) [[unlikely]] return; }
L_00143C1C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 470u, depth + 1u); else { c.pc = 0x00143830u; return; } if (c.pc != 0x00143C28u) [[unlikely]] return; }
L_00143C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143C30u) [[unlikely]] return; }
L_00143C30:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00143C44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143C40u) [[unlikely]] return; }
L_00143C40:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00143C44:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_00143D48; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00143CB4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00143C70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143C6Cu) [[unlikely]] return; }
L_00143C6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00143C70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143C80u) [[unlikely]] return; }
L_00143C80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C8Cu);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143C8Cu) [[unlikely]] return; }
L_00143C8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C98u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 544u, depth + 1u); else { c.pc = 0x00143EF0u; return; } if (c.pc != 0x00143C98u) [[unlikely]] return; }
L_00143C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143CA0u) [[unlikely]] return; }
L_00143CA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 541u, depth + 1u); else { c.pc = 0x00143EC0u; return; } if (c.pc != 0x00143CB0u) [[unlikely]] return; }
L_00143CB0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00143CB4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143D18; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00143CD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143CD0u) [[unlikely]] return; }
L_00143CD0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00143CD4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00143CE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143B20u; return; } if (c.pc != 0x00143CE4u) [[unlikely]] return; }
L_00143CE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CF0u);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143CF0u) [[unlikely]] return; }
L_00143CF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CFCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 544u, depth + 1u); else { c.pc = 0x00143EF0u; return; } if (c.pc != 0x00143CFCu) [[unlikely]] return; }
L_00143CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143D04u) [[unlikely]] return; }
L_00143D04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 541u, depth + 1u); else { c.pc = 0x00143EC0u; return; } if (c.pc != 0x00143D14u) [[unlikely]] return; }
L_00143D14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00143D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D20u);  if (depth < kMaxDepth) unit_0010(c, 547u, depth + 1u); else { c.pc = 0x00143F30u; return; } if (c.pc != 0x00143D20u) [[unlikely]] return; }
L_00143D20:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 470u, depth + 1u); else { c.pc = 0x00143830u; return; } if (c.pc != 0x00143D2Cu) [[unlikely]] return; }
L_00143D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 543u, depth + 1u); else { c.pc = 0x00143EE0u; return; } if (c.pc != 0x00143D34u) [[unlikely]] return; }
L_00143D34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00143D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143D44u) [[unlikely]] return; }
L_00143D44:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_00143D48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143E08; } }
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 12u);  goto L_00143DBC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143DB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143DB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D7Cu);  if (depth < kMaxDepth) unit_0010(c, 540u, depth + 1u); else { c.pc = 0x00143EB0u; return; } if (c.pc != 0x00143D7Cu) [[unlikely]] return; }
L_00143D7C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D90u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 539u, depth + 1u); else { c.pc = 0x00143EA0u; return; } if (c.pc != 0x00143D90u) [[unlikely]] return; }
L_00143D90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D9Cu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 540u, depth + 1u); else { c.pc = 0x00143EB0u; return; } if (c.pc != 0x00143D9Cu) [[unlikely]] return; }
L_00143D9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DA8u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 538u, depth + 1u); else { c.pc = 0x00143E90u; return; } if (c.pc != 0x00143DA8u) [[unlikely]] return; }
L_00143DA8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 536u, depth + 1u); else { c.pc = 0x00143E70u; return; } if (c.pc != 0x00143DB8u) [[unlikely]] return; }
L_00143DB8:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_00143DBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143E08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00143E08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DE4u);  if (depth < kMaxDepth) unit_0010(c, 535u, depth + 1u); else { c.pc = 0x00143E60u; return; } if (c.pc != 0x00143DE4u) [[unlikely]] return; }
L_00143DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DECu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 534u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00143DECu) [[unlikely]] return; }
L_00143DEC:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DF8u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 533u, depth + 1u); else { c.pc = 0x00143E40u; return; } if (c.pc != 0x00143DF8u) [[unlikely]] return; }
L_00143DF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143E08u) [[unlikely]] return; }
L_00143E08:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00143E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143E18u) [[unlikely]] return; }
L_00143E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00143E1C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00143E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_00143E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00143E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00143E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00143E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E84u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143E84u) [[unlikely]] return; }
L_00143E84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00143E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_00143EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00143EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_00143EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00143ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143ED4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00143ED4u) [[unlikely]] return; }
L_00143ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00143EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00143EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00143F24; }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 476u, depth + 1u); else { c.pc = 0x001438F0u; return; } if (c.pc != 0x00143F14u) [[unlikely]] return; }
L_00143F14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x00143F20u) [[unlikely]] return; }
L_00143F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00143F24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00143F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00143F40:
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
L_00143F70:
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
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_00143FA8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00143FA8:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00143FF4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FC0u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00143FC0u) [[unlikely]] return; }
L_00143FC0:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00143FE0; } }
L_00143FD4:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
L_00143FE0:
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143FD4u | kUnwind; return; } goto L_00143FD4; }
L_00143FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
}

}
